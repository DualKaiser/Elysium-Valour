using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace DualKaiser
{
    [CreateAssetMenu(fileName = "New Buff Effect", menuName = "DualKaiser/Statuses/Create New Buff")]
    public class BuffEffect : SkillEffect
    {
        public string statusName;

        public enum StatusType
        {
            BUFF, DEBUFF, DOT
        }

        public StatusType statusType;

        public enum BuffStat
        {
            ATK, DEF, HP, AMR, ACC, RES, CRITR, CRITDMG
        }

        public BuffStat statToBuff;

        public enum ScaleStat
        {
            ATK, DEF, HP, AMR
        }

        public ScaleStat scaleStat;

        [Space]
        public bool isPermanent = false;

        [Header("Buff Duration")]
        public int Duration;

        [Header(" ")]
        public bool isFlat = true;

        [Header("Flat Buff")]
        public int BuffAmount;

        [Header("Buff (For Crit Stats)")]
        public float BuffAmountF;

        [Header("Buff Percentage")]
        public float Potency;

        public override void Activate(Character user, Character target)
        {
            user.ApplyBuff(this);
        }

        public void ApplyBuff(Character user)
        {
            if (isFlat)
            {
                ApplyFlatBuff(user);
            }
            else
            {
                ApplyPercentageBuff(user);
            }
        }

        public void RemoveBuff(Character user)
        {
            if (isFlat)
            {
                RemoveFlatBuff(user);
            }
            else
            {
                RemovePercentageBuff(user);
            }
        }

        private int GetScaleStatValue(Character user)
        {
            switch (scaleStat)
            {
                case ScaleStat.ATK:
                    return user.currentATK; 
                case ScaleStat.DEF:
                    return user.currentDEF;
                case ScaleStat.HP:
                    return user.currentHP;
                case ScaleStat.AMR:
                    return user.currentAMR;
                default:
                    return 0;
            }
        }

        private void ApplyFlatBuff(Character user)
        {
            switch (statToBuff)
            {
                case BuffStat.ATK:
                    user.BuffAtk(BuffAmount);
                    break;

                case BuffStat.DEF:
                    user.BuffDef(BuffAmount);
                    break;

                case BuffStat.HP:
                    user.BuffHP(BuffAmount);
                    break;

                case BuffStat.AMR:
                    user.BuffAMR(BuffAmount);
                    break;

                case BuffStat.ACC:
                    user.BuffACC(BuffAmountF);
                    break;

                case BuffStat.RES:
                    user.BuffRES(BuffAmountF);
                    break;

                case BuffStat.CRITR:
                    user.BuffCritR(BuffAmountF);
                    break;

                case BuffStat.CRITDMG:
                    user.BuffCritDmg(BuffAmountF);
                    break;
            }
        }

        private void ApplyPercentageBuff(Character user)
        {
            int scaledStatValue = GetScaleStatValue(user);

            int BuffAmount = (int)(scaledStatValue * Potency); 

            switch (statToBuff)
            {
                case BuffStat.ATK:
                    user.BuffAtk(BuffAmount);
                    break;

                case BuffStat.DEF:
                    user.BuffDef(BuffAmount);
                    break;

                case BuffStat.HP:
                    user.BuffHP(BuffAmount);
                    break;

                case BuffStat.AMR:
                    user.BuffAMR(BuffAmount);
                    break;
            }
        }

        private void RemoveFlatBuff(Character user)
        {
            switch (statToBuff)
            {
                case BuffStat.ATK:
                    user.BuffAtk(-BuffAmount);
                    break;

                case BuffStat.DEF:
                    user.BuffDef(-BuffAmount);
                    break;

                case BuffStat.HP:
                    user.BuffHP(-BuffAmount);
                    break;

                case BuffStat.AMR:
                    user.BuffAMR(-BuffAmount);
                    break;

                case BuffStat.CRITR:
                    user.BuffCritR(-BuffAmountF);
                    break;

                case BuffStat.CRITDMG:
                    user.BuffCritDmg(-BuffAmountF);
                    break;
            }
        }

        private void RemovePercentageBuff(Character user)
        {
            int scaledStatValue = GetScaleStatValue(user);

            int BuffAmount = (int)(scaledStatValue * Potency);

            switch (statToBuff)
            {
                case BuffStat.ATK:
                    user.BuffAtk(-BuffAmount);
                    break;

                case BuffStat.DEF:
                    user.BuffDef(-BuffAmount);
                    break;

                case BuffStat.HP:
                    user.BuffHP(-BuffAmount);
                    break;

                case BuffStat.AMR:
                    user.BuffAMR(-BuffAmount);
                    break;
            }
        }
    }
}