using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace DualKaiser
{
    [CreateAssetMenu(fileName = "New Damage Effect", menuName = "DualKaiser/Effects/Create New Damage Effect")]
    public class DamageEffect : SkillEffect
    {
        public string effectName;

        public enum EffectType
        {
            DAMAGE, HEAL
        }

        public EffectType effectType;

        // Stat to Scale Off
        public enum ScaleStat
        {
            ATK, DEF, HP, AMR
        }

        public ScaleStat scalingAttribute;

        [Header("Damage Potency")]
        public float Potency;

        [Header("Pierce Chance")]
        public float Chance;

        public override void Activate(Character user, Character target)
        {
            float statValue = 0f;

#if UNITY_ONLINE
            switch (scalingAttribute)
            {
                case ScaleStat.ATK:
                    statValue = user.currentATK.Value;
                    break;
                case ScaleStat.DEF:
                    statValue = user.currentDEF.Value;
                    break;
                case ScaleStat.HP:
                    statValue = user.currentHP.Value;
                    break;
                case ScaleStat.AMR:
                    statValue = user.currentAMR.Value;
                    break;
            }
#else
            switch (scalingAttribute)
            {
                case ScaleStat.ATK:
                    statValue = user.currentATK;
                    break;
                case ScaleStat.DEF:
                    statValue = user.currentDEF;
                    break;
                case ScaleStat.HP:
                    statValue = user.currentHP;
                    break;
                case ScaleStat.AMR:
                    statValue = user.currentAMR;
                    break;
            }
#endif

            float chanceToPierce = Random.Range(0f, 1.0f);

            if (chanceToPierce > Chance)
            {

#if UNITY_ONLINE
                if (Random.Range(0f, 1f) >= user.currentCritR.Value)
                {
                    int damage = Mathf.RoundToInt(statValue * Potency);
                    target.TakeDamage(damage);
                }
                else
                {
                    int damage = Mathf.RoundToInt(statValue * Potency * user.currentCritDmg.Value);
                    target.TakeDamage(damage);
                }
#else
                // No Crit
                if (Random.Range(0f, 1f) >= user.currentCritR)
                {
                    int damage = Mathf.RoundToInt(statValue * Potency);
                    target.TakeDamage(damage);
                }
                // With Crit
                else
                {
                    int damage = Mathf.RoundToInt(statValue * Potency * user.currentCritDmg);
                    target.TakeDamage(damage);
                }
#endif
            }
            else // Take PIERCE Damage 
            {
#if UNITY_ONLINE
                // No Crit
                if (Random.Range(0f, 1f) >= user.currentCritR.Value)
                {
                    int damage = Mathf.RoundToInt(statValue * Potency);
                    target.TakePierceDamage(damage);
                }
                // With Crit
                else
                {
                    int damage = Mathf.RoundToInt(statValue * Potency * user.currentCritDmg.Value);
                    target.TakePierceDamage(damage);
                }
#else
                // No Crit
                if (Random.Range(0f, 1f) >= user.currentCritR)
                {
                    int damage = Mathf.RoundToInt(statValue * Potency);
                    target.TakePierceDamage(damage);
                }
                // With Crit
                else
                {
                    int damage = Mathf.RoundToInt(statValue * Potency * user.currentCritDmg);
                    target.TakePierceDamage(damage);
                }
#endif
            }
        }
    }
}
