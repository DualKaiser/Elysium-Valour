using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace DualKaiser
{
    [CreateAssetMenu(fileName = "New Skill", menuName = "DualKaiser/Skills/Create New Skill")]
    public class Skill : SkillEffect
    {
        public string skillName;

        //public int skillPoints;

        public enum skillType
        {
            OFFENSIVE, DEFENSIVE, ULTIMATE
        }

        public skillType SkillType;

        [Space]
        [TextArea(3, 6)]
        public string skillDescription;

        [Space]
        public List<SkillEffect> skillEffects;

        [Space]
        public bool isConditional = false;

        public enum conditionStat
        {
            ATK, HP, DEF, AMR
        }

        public conditionStat ConditionStat;

        public int threshold;

        public List<SkillEffect> conditionalEffects;

        public override void Activate(Character user, Character target)
        {
            if (!isConditional)
            {
                foreach (var effect in skillEffects)
                {
                    effect.Activate(user, target);
                }
            }

            if (isConditional)
            {
                int statValue = GetStatValue(user, ConditionStat);

                if (statValue > threshold)
                {
                    foreach (var effect in conditionalEffects)
                    {
                        effect.Activate(user, target);
                    }
                }
                else
                {
                    foreach (var effect in skillEffects)
                    {
                        effect.Activate(user, target);
                    }
                }
            }


        }

        private int GetStatValue(Character character, conditionStat statType)
        {
            switch (statType)
            {
                case conditionStat.ATK:
                    return character.currentATK; 
                case conditionStat.HP:
                    return character.currentHP; 
                case conditionStat.DEF:
                    return character.currentDEF; 
                case conditionStat.AMR:
                    return character.currentAMR; 
                default:
                    return 0; 
            }
        }
    }
}
