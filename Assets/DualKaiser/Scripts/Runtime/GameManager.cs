using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.SceneManagement;

#if UNITY_ONLINE
using Unity.Netcode;
using Unity.Netcode.Transports.UTP;
#endif

namespace DualKaiser
{
    public enum BattleState { START, C1ACTION, C1ATTACK, C2ACTION, C2ATTACK, C1WIN, C2WIN }

#if UNITY_ONLINE
    public class GameManager : NetworkBehaviour
#else
    public class GameManager : MonoBehaviour
#endif
    {
        public BattleState state;

        [Header("Game Objects")]

        [SerializeField]
        private GameObject char1;

        [SerializeField]
        private GameObject char2;

        [Header("Spawn Positions")]
        public Transform char1spawn;
        public Transform char2spawn;

        // Script managers 
        Character m_char1;
        Character m_char2;

        //CharStats char1Stats;
        //CharStats char2Stats;

        [Header("UI Elements")]

        public GameObject char1Btns;

        public GameObject char2Btns;

        [SerializeField] private TextMeshProUGUI mainUIText;

#if UNITY_ONLINE
        public NetworkVariable<BattleState> networkState = new NetworkVariable<BattleState>(BattleState.START);
#else
        [SerializeField] private TextMeshProUGUI char1HUD;
        [SerializeField] private TextMeshProUGUI char2HUD;

        [SerializeField] private TextMeshProUGUI char1HPValue;
        [SerializeField] private TextMeshProUGUI char2HPValue;

        public Slider hpslider1;
        public Slider hpslider2;
        public Slider amrslider1;
        public Slider amrslider2;
#endif

        public void Start()
        {
#if UNITY_ONLINE

            NetworkManager.Singleton.GetComponent<UnityTransport>().SetConnectionData(
                "127.0.0.1", (ushort)8888, "0.0.0.0"
            );

            NetworkManager.Singleton.OnClientConnectedCallback += OnClientConnected;
#else
            state = BattleState.START;
            SpawnChars();
#endif
        }

#if UNITY_ONLINE
        
        private void OnClientConnected(ulong clientId)
        {
            if (clientId == NetworkManager.Singleton.LocalClientId)
            {
                HostConnected(clientId);
            }
            else
            {
                ClientConnected(clientId);
            }
        }   

        private void HostConnected(ulong clientId)
        {
            if (!IsServer)
            {
                return;
            }
            else
            {
                GameObject char1GO = Instantiate(char1, char1spawn.position, Quaternion.Euler(0, 180, 0));

                char1GO.GetComponent<NetworkObject>().SpawnAsPlayerObject(clientId);

                m_char1 = char1GO.GetComponent<Character>();

                Debug.Log($"Char1 Ownership: OwnerClientId = {m_char1.GetComponent<NetworkObject>().OwnerClientId}");

                CheckToStart();
            }
        }

        private void ClientConnected(ulong clientId)
        {
            if (!IsServer)
            {
                return;
            }
            else
            {
                GameObject char2GO = Instantiate(char2, char2spawn.position, Quaternion.identity);

                char2GO.GetComponent<NetworkObject>().SpawnAsPlayerObject(clientId);

                m_char2 = char2GO.GetComponent<Character>();

                Debug.Log($"Char2 Ownership: OwnerClientId = {m_char2.GetComponent<NetworkObject>().OwnerClientId}");

                CheckToStart();
            }
        }

        void CheckToStart()
        {
            if (m_char1 != null && m_char2 != null)
            {
                networkState.Value = BattleState.C1ACTION;

                Char1Turn();
            }
            else
            {
                return;
            }
        }
#else
        void SpawnChars()
        {
            GameObject char1GO = Instantiate(char1, char1spawn.position, Quaternion.identity);
            GameObject char2GO = Instantiate(char2, char2spawn.position, Quaternion.identity);

            m_char1 = char1GO.GetComponent<Character>();
            m_char2 = char2GO.GetComponent<Character>();

            SetMaxHealth();

            state = BattleState.C1ACTION;
            StartCoroutine(Char1Turn());
        }
#endif
        public void Char1Turn()
        {
            if (m_char1 != null)
            {
                m_char1.CheckStatuses();
            }

            C1ShowButtons();
            C2HideButtons();
        }

        public void Char2Turn()
        {
            Debug.Log("Char 2 Turn");

            if (m_char2 != null)
            {
                m_char2.CheckStatuses();
            }

            C1HideButtons();
            C2ShowButtons();
        }

#if UNITY_ONLINE
        public void CheckC1Passive()
        {
            m_char1.ActivatePS(m_char2);
        }

        public void CheckC2Passive()
        {
            m_char2.ActivatePS(m_char1);
        }
#else
        public void CheckPassives()
        {
            m_char1.ActivatePS(m_char2);
            m_char2.ActivatePS(m_char1);
        }
#endif

        // Button Methods

#if UNITY_ONLINE        
        [ServerRpc]
        public void C1OSButtonServerRpc()
        {
            if (networkState.Value != BattleState.C1ACTION)
                return;

            if (!IsOwner)
            {
                return;
            }
            else
            {
                m_char1.ActivateS1(m_char1, m_char2);

                mainUIText.text = m_char1.offensiveSkill.skillName;

                CheckC1Passive();

                networkState.Value = BattleState.C2ACTION;

                Char2Turn();
            }
        }
#else
        public void C1OSButton()
        {
            if (state != BattleState.C1ACTION)
                return;

            m_char1.ActivateS1(m_char1, m_char2);

            mainUIText.text = m_char1.offensiveSkill.skillName;

            CheckPassives();

            UpdateHealthBar();

            state = BattleState.C2ACTION;

            StartCoroutine(Char2Turn());
        }
#endif

#if UNITY_ONLINE        
        [ServerRpc]
        public void C1DSButtonServerRpc()
        {
            if (networkState.Value != BattleState.C1ACTION)
                return;

            if (!IsOwner)
            {
                return;
            }
            else
            {

                m_char1.ActivateS2(m_char1, m_char2);

                mainUIText.text = m_char1.defensiveSkill.skillName;

                CheckC1Passive();

                networkState.Value = BattleState.C2ACTION;

                Char2Turn();
            }
        }
#else
        public void C1DSButton()
        {
            if (state != BattleState.C1ACTION)
                return;

            m_char1.ActivateS2(m_char1, m_char2);

            mainUIText.text = m_char1.defensiveSkill.skillName;

            CheckPassives();

            UpdateHealthBar();

            state = BattleState.C2ACTION;

            StartCoroutine(Char2Turn());
        }
#endif

#if UNITY_ONLINE        
        [ServerRpc]
        public void C1USButtonServerRpc()
        {
            if (networkState.Value != BattleState.C1ACTION)
                return;

            if (!IsOwner)
            {
                return;
            }
            else
            {
                m_char1.ActivateUS(m_char1, m_char2);

                mainUIText.text = m_char1.ultimateSkill.skillName;

                CheckC1Passive();

                networkState.Value = BattleState.C2ACTION;

                Char2Turn();
            }
        }
#else
        public void C1USButton()
        {
            if (state != BattleState.C1ACTION)
                return;

            m_char1.ActivateUS(m_char1, m_char2);

            mainUIText.text = m_char1.ultimateSkill.skillName;

            CheckPassives();

            UpdateHealthBar();

            state = BattleState.C2ACTION;

            StartCoroutine(Char2Turn());
        }
#endif

#if UNITY_ONLINE
        [ServerRpc(RequireOwnership = false)]
        public void C2OSButtonServerRpc()
        {
            if (networkState.Value != BattleState.C2ACTION)
                return;

            m_char2.ActivateS1(m_char2, m_char1);

            mainUIText.text = m_char2.offensiveSkill.skillName;

            CheckC2Passive();

            networkState.Value = BattleState.C1ACTION;

            Char1Turn();
        }
#else
        public void C2OSButton()
        {
            if (state != BattleState.C2ACTION)
                return;

            m_char2.ActivateS1(m_char2, m_char1);

            mainUIText.text = m_char2.offensiveSkill.skillName;

            CheckPassives();

            UpdateHealthBar();

            state = BattleState.C1ACTION;

            StartCoroutine(Char1Turn());
        }
#endif

#if UNITY_ONLINE

        [ServerRpc(RequireOwnership = false)]
        public void C2DSButtonServerRpc()
        {
            if (networkState.Value != BattleState.C2ACTION)
                return;

            m_char2.ActivateS2(m_char2, m_char1);

            mainUIText.text = m_char2.defensiveSkill.skillName;

            CheckC2Passive();

            networkState.Value = BattleState.C1ACTION;

            Char1Turn();
        }
#else
        public void C2DSButton()
        {
            if (state != BattleState.C2ACTION)
                return;

            m_char2.ActivateS2(m_char2, m_char1);

            mainUIText.text = m_char2.defensiveSkill.skillName;

            CheckPassives();

            UpdateHealthBar();

            state = BattleState.C1ACTION;

            StartCoroutine(Char1Turn());
        }
#endif

#if UNITY_ONLINE
        [ServerRpc(RequireOwnership = false)]
        public void C2USButtonServerRpc()
        {
            if (networkState.Value != BattleState.C2ACTION)
                return;

            m_char2.ActivateUS(m_char2, m_char1);

            mainUIText.text = m_char2.ultimateSkill.skillName;

            CheckC2Passive();

            networkState.Value = BattleState.C1ACTION;

            Char1Turn();
        }
#else
        public void C2USButton()
        {
            if (state != BattleState.C2ACTION)
                return;

            m_char2.ActivateUS(m_char2, m_char1);

            mainUIText.text = m_char2.ultimateSkill.skillName;

            CheckPassives();

            UpdateHealthBar();

            state = BattleState.C1ACTION;

            StartCoroutine(Char1Turn());
        }
#endif

        // UI Update Methods
        public void ResetScene()
        {
            SceneManager.LoadScene("Combat Env");
        }

#if UNITY_ONLINE

#else
        public void SetMaxHealth()
        {
            // Set max value for health bar sliders
            hpslider1.maxValue = m_char1.currentHP;
            hpslider2.maxValue = m_char2.currentHP;

            // Set health bar sliders to current value
            hpslider1.value = m_char1.currentHP;
            hpslider2.value = m_char2.currentHP;

            // Set armour bar sliders to current value
            amrslider1.value = m_char1.currentAMR;
            amrslider2.value = m_char2.currentAMR;

        }

        public void UpdateHealthBar()
        {
            // To be called whenever there is a change in HP/AMR values
            hpslider1.value = m_char1.currentHP;
            hpslider2.value = m_char2.currentHP;

            amrslider1.value = m_char1.currentAMR;
            amrslider2.value = m_char2.currentAMR;

            // Set health values to text component
            char1HPValue.text = m_char1.currentHP.ToString();
            char2HPValue.text = m_char2.currentHP.ToString();
        }
#endif

        public void C1ShowButtons()
        {
            char1Btns.SetActive(true);
        }

        public void C1HideButtons()
        {
            char1Btns.SetActive(false);
        }

        public void C2ShowButtons()
        {
            char2Btns.SetActive(true);
        }

        public void C2HideButtons()
        {
            char2Btns.SetActive(false);
        }
    }
}
