using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.SceneManagement;

namespace DualKaiser
{
    public enum BattleState { START, C1ACTION, C1ATTACK, C2ACTION, C2ATTACK, C1WIN, C2WIN }

    public class GameManager : MonoBehaviour
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

        public TMP_Text char1HUD;
        public TMP_Text char2HUD;

        public GameObject char1Btns;
        public GameObject char2Btns;

        public TMP_Text char1HPValue;
        public TMP_Text char2HPValue;

        public TMP_Text damageText;

        public TMP_Text skilName;

        public Slider hpslider1;
        public Slider hpslider2;
        public Slider amrslider1;
        public Slider amrslider2;

    
        void Start()
        {
            state = BattleState.START;
            SpawnChars();
        }

        void SpawnChars()
        {
            // Spawn instances
            GameObject char1GO = Instantiate(char1, char1spawn);
            GameObject char2GO = Instantiate(char2, char2spawn);

            // Pull script references
            m_char1 = char1GO.GetComponent<Character>();
            m_char2 = char2GO.GetComponent<Character>();

            // Set UI
            char1HUD.text = m_char1.Name;
            char2HUD.text = m_char2.Name;

            char1HPValue.text = m_char1.currentHP.ToString();
            char2HPValue.text = m_char2.currentHP.ToString();

            // Hide Buttons
            char1Btns.SetActive(false);
            char2Btns.SetActive(false);

            //Get list of skills

            /*Debug.Log(char1Stats.charName + " " + "Loaded");
              Debug.Log(char2Stats.charName + " " + "Loaded");

              mainText.text = char1Stats.name + "'s Turn";*/

            state = BattleState.C1ACTION;

            SetMaxHealth();

            StartCoroutine(Char1Turn());
        }

        public IEnumerator Char1Turn()
        {
            C1ShowButtons();
            C2HideButtons();

            m_char1.CheckStatuses();

            yield return new WaitForSeconds(2.5f);

            UpdateHealthBar();
        }

        public IEnumerator Char2Turn()
        {
            C1HideButtons();
            C2ShowButtons();

            m_char2.CheckStatuses();

            yield return new WaitForSeconds(2.5f);

            UpdateHealthBar();
        }

        // Button Methods

        public void C1OSButton()
        {
            if (state != BattleState.C1ACTION)
                return;

            m_char1.ActivateS1(m_char2);
            damageText.text = m_char1.offensiveSkill.skillName;

            UpdateHealthBar();

            state = BattleState.C2ACTION;

            StartCoroutine(Char2Turn());
        }

        public void C1DSButton()
        {
            if (state != BattleState.C1ACTION)
                return;

            m_char1.ActivateS2(m_char2);
            damageText.text = m_char1.defensiveSkill.skillName;

            UpdateHealthBar();

            state = BattleState.C2ACTION;

            StartCoroutine(Char2Turn());
        }

        public void C1USButton()
        {
            if (state != BattleState.C1ACTION)
                return;

            m_char1.ActivateUS(m_char2);
            damageText.text = m_char1.ultimateSkill.skillName;

            UpdateHealthBar();

            state = BattleState.C2ACTION;

            StartCoroutine(Char2Turn());
        }

        public void C2OSButton()
        {
            if (state != BattleState.C2ACTION)
                return;

            m_char2.ActivateS1(m_char1);
            damageText.text = m_char2.offensiveSkill.skillName;

            UpdateHealthBar();

            state = BattleState.C1ACTION;

            StartCoroutine(Char1Turn());
        }

        public void C2DSButton()
        {
            if (state != BattleState.C2ACTION)
                return;

            m_char2.ActivateS2(m_char1);
            damageText.text = m_char2.defensiveSkill.skillName;

            UpdateHealthBar();

            state = BattleState.C1ACTION;

            StartCoroutine(Char1Turn());
        }

        public void C2USButton()
        {
            if (state != BattleState.C2ACTION)
                return;

            m_char2.ActivateUS(m_char1);
            damageText.text = m_char2.ultimateSkill.skillName;

            UpdateHealthBar();

            state = BattleState.C1ACTION;

            StartCoroutine(Char1Turn());
        }

        // UI Update Methods

        public void ResetScene()
        {
            SceneManager.LoadScene("Combat Env");
        }

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
