using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System;
using System.Linq;
using Unity.Collections;

#if UNITY_ONLINE
using Unity.Netcode;
#endif

namespace DualKaiser
{
#if UNITY_ONLINE
    public class Character : NetworkBehaviour
#else
    public class Character : MonoBehaviour
#endif
    {
        public NetworkVariable<FixedString128Bytes> Name = new NetworkVariable<FixedString128Bytes>("Character", NetworkVariableReadPermission.Everyone, NetworkVariableWritePermission.Server);

        public CharStats charstats;

#if UNITY_ONLINE
        public NetworkVariable<int> currentHP = new NetworkVariable<int>(0, NetworkVariableReadPermission.Everyone, NetworkVariableWritePermission.Server);
        public NetworkVariable<int> currentATK = new NetworkVariable<int>(0, NetworkVariableReadPermission.Everyone, NetworkVariableWritePermission.Server);
        public NetworkVariable<int> currentDEF = new NetworkVariable<int>(0, NetworkVariableReadPermission.Everyone, NetworkVariableWritePermission.Server);
        public NetworkVariable<int> currentAMR = new NetworkVariable<int>(0, NetworkVariableReadPermission.Everyone, NetworkVariableWritePermission.Server);

        public NetworkVariable<float> currentACC = new NetworkVariable<float>(0, NetworkVariableReadPermission.Everyone, NetworkVariableWritePermission.Server);
        public NetworkVariable<float> currentRES = new NetworkVariable<float>(0, NetworkVariableReadPermission.Everyone, NetworkVariableWritePermission.Server);
        public NetworkVariable<float> currentCritR = new NetworkVariable<float>(0, NetworkVariableReadPermission.Everyone, NetworkVariableWritePermission.Server);
        public NetworkVariable<float> currentCritDmg = new NetworkVariable<float>(0, NetworkVariableReadPermission.Everyone, NetworkVariableWritePermission.Server);
#else
        [SerializeField]
        [Header("Runtime Stats")]
        public int currentHP;
        public int currentATK;
        public int currentDEF;
        public float currentACC;
        public float currentRES;
        public float currentCritR;
        public float currentCritDmg;

        [Header("Shield")]
        public int currentAMR;

#endif

        [Header("Passive")]
        public SkillEffect passiveSkill;

        [Header("Skills")]
        [Space]
        public Skill offensiveSkill;
        public Skill defensiveSkill;
        public Skill ultimateSkill;

        [Header("Active Buffs")]
        public List<BuffEffect> activeBuffs = new List<BuffEffect>();
        private Dictionary<BuffEffect, int> buffDurations = new Dictionary<BuffEffect, int>();

        [Header("Active Debuffs")]
        public List<DebuffEffect> activeDebuffs = new List<DebuffEffect>();
        private Dictionary<DebuffEffect, int> debuffDurations = new Dictionary<DebuffEffect, int>();

        [Header("Active DOTs")]
        public List<ActiveDot> activeDots = new List<ActiveDot>();

        [Space]
        [Header("Animations")]

        [Space]
        public List<AnimSO> OSAnimList;
        public List<VFXSO> OSVFXList;
        public float OSDelay;

        [Space]
        public List<AnimSO> DSAnimList;
        public List<VFXSO> DSVFXList;
        public float DSDelay;

        [Space]
        public List<AnimSO> USAnimList;
        public List<VFXSO> USVFXList;
        public float USDelay;

        public List<AnimSO> DamageAnimList;

        [SerializeField] private TextMeshProUGUI charHUD;
        [SerializeField] private TextMeshProUGUI charHPValue;

        public Slider hpslider;
        public Slider amrslider;

        public Button osBtn;
        public Button dsBtn;
        public Button usBtn;

        public GameObject btnTints;

        // base Stats
        [HideInInspector]
        public int baseHP;
        [HideInInspector]
        public int baseATK;
        [HideInInspector]
        public int baseDEF;
        [HideInInspector]
        public int baseAMR;
        [HideInInspector]
        public float baseACC;
        [HideInInspector]
        public float baseRES;
        [HideInInspector]
        public float baseCritR;
        [HideInInspector]
        public float baseCritDmg;


        public override void OnNetworkSpawn()
        {
            base.OnNetworkSpawn();

            InitializeBaseStats();
            InitializeCurrentStats();
            InitializeUI();

            currentHP.OnValueChanged += (int previousValue, int newValue) =>
            {
                UpdateUI();
            };

            var gameManager = GameObject.FindWithTag("Game Manager").GetComponent<GameManager>();

            if (gameObject.tag == "Aria")
            {
                osBtn.onClick.AddListener(gameManager.C1OSButtonServerRpc);
                dsBtn.onClick.AddListener(gameManager.C1DSButtonServerRpc);
                usBtn.onClick.AddListener(gameManager.C1USButtonServerRpc);

                btnTints.SetActive(false);
            }
            else if (gameObject.tag == "Viktor")
            {
                osBtn.onClick.AddListener(gameManager.C2OSButtonServerRpc);
                dsBtn.onClick.AddListener(gameManager.C2DSButtonServerRpc);
                usBtn.onClick.AddListener(gameManager.C2USButtonServerRpc);

                btnTints.SetActive(false);
            }
            
        }

        private void Update()
        {
            var gameManager = GameObject.FindWithTag("Game Manager").GetComponent<GameManager>();

            if (gameManager.networkState.Value == BattleState.C1ACTION)
            {
                if (gameObject.tag == "Aria")
                {
                    btnTints.SetActive(true);
                }
                else if (gameObject.tag == "Viktor")
                {
                    btnTints.SetActive(false);
                }
            }
            else
            {
                return;
            }

            if (gameManager.networkState.Value == BattleState.C2ACTION)
            {
                if (gameObject.tag == "Aria")
                {
                    btnTints.SetActive(false);
                }
                else if (gameObject.tag == "Viktor")
                {
                    btnTints.SetActive(true);
                }
            }
            else
            {
                return;
            }
        }

        private void InitializeBaseStats()
        {
            baseHP = charstats.baseHP;
            baseATK = charstats.baseATK;
            baseDEF = charstats.baseDEF;
            baseAMR = charstats.baseAMR;
            baseACC = charstats.baseACC;
            baseRES = charstats.baseRES;
            baseCritR = charstats.critR;
            baseCritDmg = charstats.critDmg;
        }

        private void InitializeCurrentStats()
        {
#if UNITY_ONLINE
            if (IsServer)
            {
                Name.Value = charstats.Name;

                currentHP.Value = baseHP;
                currentATK.Value = baseATK;
                currentDEF.Value = baseDEF;
                currentAMR.Value = baseAMR;
                currentACC.Value = baseACC;
                currentRES.Value = baseRES;
                currentCritR.Value = baseCritR;
                currentCritDmg.Value = baseCritDmg;
            }
#else
            currentHP = baseHP;
            currentATK = baseATK;
            currentDEF = baseDEF;
            currentAMR = baseAMR;
            currentACC = baseACC;
            currentRES = baseRES;
            currentCritR = baseCritR;
            currentCritDmg = baseCritDmg;
#endif
        }

        private void InitializeUI()
        {
            charHUD.text = Name.Value.ToString();

            charHPValue.text = currentHP.Value.ToString();

            hpslider.maxValue = currentHP.Value;
            hpslider.value = currentHP.Value;

            amrslider.value = currentAMR.Value;
        }


        // Method to Apply Buff Statuses

        public void ApplyBuff(BuffEffect buffEffect)
        {
#if UNITY_ONLINE
            if (IsServer)
            {
#endif
            buffEffect.ApplyBuff(this);

            if (!buffEffect.isPermanent)
            {
                BuffEffect uniqueBuffInstance = Instantiate(buffEffect);

                if (buffDurations.ContainsKey(uniqueBuffInstance))
                {
                    buffDurations[uniqueBuffInstance] = uniqueBuffInstance.Duration;
                }
                else
                {
                    activeBuffs.Add(uniqueBuffInstance);
                    buffDurations[uniqueBuffInstance] = uniqueBuffInstance.Duration;
                }
            }
#if UNITY_ONLINE
            }
#endif
        }

        // Method to Apply Debuff Statuses

        public void ApplyDebuff(DebuffEffect debuffEffect, Character user, Character target)
        {
#if UNITY_ONLINE
            if (IsServer)
            {
#endif
            if (CanApplyStatus(user, target))
            {
                debuffEffect.ApplyDebuff(this);

                if (debuffDurations.ContainsKey(debuffEffect))
                {
                    debuffDurations[debuffEffect] = debuffEffect.Duration;
                }
                else
                {
                    activeDebuffs.Add(debuffEffect);
                    debuffDurations[debuffEffect] = debuffEffect.Duration;
                }
            }
            debuffEffect.ApplyDebuff(this);
#if UNITY_ONLINE
            }
#endif
        }

        // Method to Apply DOTs

        public void ApplyDot(ActiveDot dotEffect, Character user, Character target)
        {
#if UNITY_ONLINE
            if (IsServer)
            {
#endif
            if (CanApplyStatus(user, target))
            {
                activeDots.Add(dotEffect);
            }
#if UNITY_ONLINE
            }
#endif
        }

        public bool CanApplyStatus(Character user, Character target)
        {
            float randomChance = UnityEngine.Random.Range(0f, 1f);

#if UNITY_ONLINE
            float successChance = user.currentACC.Value - target.currentRES.Value;
#else

            float successChance = user.currentACC - target.currentRES;
#endif

            float applyChance = Mathf.Clamp(successChance, 0.05f, 0.85f);

            //Debug.Log(randomChance);
            Debug.Log(applyChance);

            return randomChance < applyChance;
        }

        public void CheckStatuses()
        {
            // Check through Active Buffs
            List<BuffEffect> buffsToRemove = new List<BuffEffect>();

            foreach (var buff in activeBuffs)
            {
                buffDurations[buff]--;

                if (buffDurations[buff] <= 0)
                {
                    buff.RemoveBuff(this);
                    buffsToRemove.Add(buff);
                }
            }

            foreach (var buff in buffsToRemove)
            {
                activeBuffs.Remove(buff);
                buffDurations.Remove(buff);
            }

            // Check through Active Debuffs
            List<DebuffEffect> debuffsToRemove = new List<DebuffEffect>();

            foreach (var debuff in activeDebuffs)
            {
                debuffDurations[debuff]--;

                if (debuffDurations[debuff] <= 0)
                {
                    debuff.RemoveDebuff(this);
                    debuffsToRemove.Add(debuff);
                }
            }

            foreach (var debuff in debuffsToRemove)
            {
                activeDebuffs.Remove(debuff);
                debuffDurations.Remove(debuff);
            }

            // Check through Active DOTs
            List<ActiveDot> dotsToRemove = new List<ActiveDot>();

            foreach (var dot in activeDots)
            {
                dot.ApplyDot(this);

                dot.remainingDuration--;

                if (dot.remainingDuration <= 0)
                {
                    dotsToRemove.Add(dot);
                }
            }

            foreach (var dot in dotsToRemove)
            {
                activeDots.Remove(dot);
            }
        }

        // Skill Activation Methods

        public void ActivateS1(Character user, Character target)
        {
            offensiveSkill.Activate(this, target);

            StartCoroutine(PlayOSVFX(user, target));
        }

        public void ActivateS2(Character user, Character target)
        {
            defensiveSkill.Activate(this, target);

            StartCoroutine(PlayDSVFX(user, target));
        }

        public void ActivateUS(Character user, Character target)
        {
            ultimateSkill.Activate(this, target);

            StartCoroutine(PlayUSVFX(user, target));
        }

        public void ActivatePS(Character target)
        {
            passiveSkill.Activate(this, target);
        }

        // Anim + VFX Methods

        public IEnumerator PlayOSVFX(Character user, Character target)
        {
            foreach (var anim in OSAnimList)
            {
                if (anim != null)
                {
                    anim.PlayAnim(user);
                }
            }

            yield return new WaitForSeconds(OSDelay);

            foreach (var vfx in OSVFXList)
            {
                if (vfx != null)
                {
                    vfx.PlayVFX(user, target);
                }
            }
        }

        public IEnumerator PlayDSVFX(Character user, Character target)
        {
            foreach (var anim in DSAnimList)
            {
                if (anim != null)
                {
                    anim.PlayAnim(user);
                }
            }

            yield return new WaitForSeconds(DSDelay);

            foreach (var vfx in DSVFXList)
            {
                if (vfx != null)
                {
                    vfx.PlayVFX(user, target);
                }
            }
        }

        public IEnumerator PlayUSVFX(Character user, Character target)
        {
            foreach (var anim in USAnimList)
            {
                if (anim != null)
                {
                    anim.PlayAnim(user);
                }
            }

            yield return new WaitForSeconds(USDelay);

            foreach (var vfx in USVFXList)
            {
                if (vfx != null)
                {
                    vfx.PlayVFX(user, target);
                }
            }
        }

        public void PlayDamageVFX(Character target)
        {
            foreach (var anim in DamageAnimList)
            {
                if (anim != null)
                {
                    anim.PlayAnim(target);
                    Debug.Log("Hit" + target.name);
                }
            }
        }

    // Public Methods

    public void UpdateUI()
        {
            charHPValue.text = currentHP.Value.ToString();

            hpslider.value = currentHP.Value;

            amrslider.value = currentAMR.Value;
        }

        public void OnTriggerEnter(Collider other)
        {
            if (other.gameObject.tag == "Projectile")
            {
                PlayDamageVFX(this);
            }
        }

        public void TakeDamage(int damage)
        {
#if UNITY_ONLINE
        if (IsServer)
        {
#endif

#if UNITY_ONLINE
            if (currentAMR.Value > 0)
            {
                int armourAbsorbed = Mathf.Min(damage, currentAMR.Value);
                currentAMR.Value -= armourAbsorbed;
                damage -= armourAbsorbed;

                if (currentAMR.Value < 0)
                {
                    currentAMR.Value = 0;
                }
            }
#else
            if (currentAMR > 0)
            {
                int armourAbsorbed = Mathf.Min(damage, currentAMR);
                currentAMR -= armourAbsorbed;
                damage -= armourAbsorbed;

                if (currentAMR < 0)
                {
                    currentAMR = 0;
                }
            }
#endif

#if UNITY_ONLINE
            if (damage > 0)
            {
                currentHP.Value -= damage - (int)(0.15f * currentDEF.Value);
            }
#else
            if (damage > 0)
            {
                currentHP -= damage - (int)(0.15f * currentDEF);
            }
#endif

#if UNITY_ONLINE
        }
#endif
        }

        public void TakePierceDamage(int damage)
        {
#if UNITY_ONLINE
        if (IsServer)
        {
#endif

#if UNITY_ONLINE
            if (damage > 0)
            {
                currentHP.Value -= damage;
            }
#else
            if (damage > 0)
            {
                currentHP -= damage;
            }
#endif

#if UNITY_ONLINE
        }
#endif
        }

        public void Heal(int amount)
        {
#if UNITY_ONLINE
        if (IsServer)
        {
#endif

#if UNITY_ONLINE
            currentHP.Value += amount;

            if (currentHP.Value >= baseHP)
            {
                currentHP.Value = baseHP;
            }
#else
            currentHP += amount;

            if (currentHP >= baseHP)
            {
                currentHP = baseHP;
            }
#endif

#if UNITY_ONLINE
        }
#endif
        }

        public void Cleanse()
        {
            foreach (var debuff in activeDebuffs.ToList())
            {
                debuff.RemoveDebuff(this);
                debuffDurations.Remove(debuff);
            }
            activeDebuffs.Clear();

            activeDots.Clear();
        }

        // Buff Methods

        public void BuffAtk(int BuffAmount)
        {
#if UNITY_ONLINE
            if (!IsServer) return;

            currentATK.Value += BuffAmount;
#else
            currentATK += BuffAmount;
#endif
        }

        public void BuffDef(int BuffAmount)
        {
#if UNITY_ONLINE
            if (!IsServer) return;

            currentDEF.Value += BuffAmount;
#else
            currentDEF += BuffAmount;
#endif
        }

        public void BuffHP(int BuffAmount)
        {
#if UNITY_ONLINE
            if (!IsServer) return;

            currentHP.Value += BuffAmount;
#else
            currentHP += BuffAmount;
#endif
        }

        public void BuffAMR(int BuffAmount)
        {
#if UNITY_ONLINE
            if (!IsServer) return;

            currentAMR.Value += BuffAmount;
#else
            currentAMR += BuffAmount;
#endif
        }

        public void BuffACC(float BuffAmountF)
        {
#if UNITY_ONLINE
            if (!IsServer) return;

            currentACC.Value += BuffAmountF;

            if (currentACC.Value >= 1.0f)
            {
                currentACC.Value = 1.0f;
            }
#else
            currentACC += BuffAmountF;

            if (currentACC >= 1.0f)
            {
                currentACC = 1.0f;
            }
#endif
        }

        public void BuffRES(float BuffAmountF)
        {
#if UNITY_ONLINE
            if (!IsServer) return;

            currentRES.Value += BuffAmountF;

            if (currentRES.Value >= 1.0f)
            {
                currentRES.Value = 1.0f;
            }
#else
            currentRES += BuffAmountF;

            if (currentRES >= 1.0f)
            {
                currentRES = 1.0f;
            }
#endif
        }

        public void BuffCritR(float BuffAmountF)
        {
#if UNITY_ONLINE
            if (!IsServer) return;

            currentCritR.Value += BuffAmountF;

            if (currentCritR.Value >= 1.0f)
            {
                currentCritR.Value = 1.0f;
            }
#else
            currentCritR += BuffAmountF;

            if (currentCritR >= 1.0f)
            {
                currentCritR = 1.0f;
            }
#endif
        }

        public void BuffCritDmg(float BuffAmountF)
        {
#if UNITY_ONLINE
            if (!IsServer) return;

            currentCritDmg.Value += BuffAmountF;
#else
            currentCritDmg += BuffAmountF;
#endif
        }
    }
}
