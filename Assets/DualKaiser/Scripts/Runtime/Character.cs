using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using static UnityEngine.GraphicsBuffer;
using System.Linq;

namespace DualKaiser
{
    public class Character: MonoBehaviour
    {
        public CharStats charstats;

        public string Name;

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

        [Header("Passive")]
        public SkillEffect passiveSkill;

        [Header("Skills")]
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


        private void Awake()
        {
            baseHP = charstats.baseHP;
            baseATK = charstats.baseATK;
            baseDEF = charstats.baseDEF;
            baseAMR = charstats.baseAMR;
            baseACC = charstats.baseACC;
            baseRES = charstats.baseRES;
            baseCritR = charstats.critR;
            baseCritDmg = charstats.critDmg;
       
            //Initialise Stats
            currentHP = charstats.baseHP;
            currentATK = charstats.baseATK;
            currentDEF = charstats.baseDEF;
            currentAMR = charstats.baseAMR;
            currentACC = charstats.baseACC;
            currentRES = charstats.baseRES;
            currentCritR = charstats.critR;
            currentCritDmg = charstats.critDmg;
        }

        // Method to Apply Buff Statuses
        public void ApplyBuff(BuffEffect buffEffect)
        {
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
        }

        // Method to Apply Debuff Statuses
        public void ApplyDebuff(DebuffEffect debuffEffect, Character user, Character target)
        {
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
        }

        // Method to Apply DOTs
        public void ApplyDot(ActiveDot dotEffect, Character user, Character target)
        {
            if (CanApplyStatus(user, target))
            {
                activeDots.Add(dotEffect);
            }
        }

        public bool CanApplyStatus(Character user, Character target)
        {
            float randomChance = Random.Range(0f, 1f);

            float successChance = user.currentACC - target.currentRES;

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

        public void ActivateS1(Character target)
        {
            offensiveSkill.Activate(this, target);
        }

        public void ActivateS2(Character target)
        {
            defensiveSkill.Activate(this, target);
        }

        public void ActivateUS(Character target)
        {
            ultimateSkill.Activate(this, target);
        }

        public void ActivatePS(Character target)
        {
            passiveSkill.Activate(this, target);
        }

        // Public Methods

        public void TakeDamage(int damage)
        {
            // Check if there is Armour
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

            // Leftover Damage
            if (damage > 0)
            {
                currentHP -= damage - (int)(0.15f * currentDEF);
            }
        }

        public void TakePierceDamage(int damage)
        { 
            if (damage > 0)
            {
                currentHP -= damage;
            }
        }

        public void Heal(int amount)
        {
            currentHP += amount;

            if (currentHP >= baseHP)
            {
                currentHP = baseHP;
            }
        }

        public void Cleanse()
        {
            foreach (var debuff in activeDebuffs.ToList()) 
            {
                debuff.RemoveDebuff(this);
                debuffDurations.Remove(debuff);
            }
            activeDebuffs.Clear(); // Clear the list of active debuffs

            // Remove all DOTs
            activeDots.Clear(); // Clear the list of active DOTs 
        }

        // Buff Methods

        public void BuffAtk(int BuffAmount)
        {
            currentATK += BuffAmount;
        }

        public void BuffDef(int BuffAmount)
        {
            currentDEF += BuffAmount;
        }

        public void BuffHP(int BuffAmount)
        {
            currentHP += BuffAmount;
        }

        public void BuffAMR(int BuffAmount)
        {
            currentAMR += BuffAmount;
        }

        public void BuffACC(float BuffAmountF)
        {
            currentACC += BuffAmountF;

            if (currentACC >= 1.0f)
            {
                currentACC = 1.0f;
            }
        }

        public void BuffRES(float BuffAmountF)
        {
            currentRES += BuffAmountF;

            if (currentRES >= 1.0f)
            {
                currentRES = 1.0f;
            }
        }

        public void BuffCritR(float BuffAmountF)
        {
            currentCritR += BuffAmountF;

            if (currentCritR >= 1.0f)
            {
                currentCritR = 1.0f;
            }
        }

        public void BuffCritDmg(float BuffAmountF)
        {
            currentCritDmg += BuffAmountF;
        }

    }
}
