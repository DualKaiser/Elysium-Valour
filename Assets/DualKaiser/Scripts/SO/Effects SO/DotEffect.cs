using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static UnityEngine.GraphicsBuffer;

namespace DualKaiser
{
    [CreateAssetMenu(fileName = "New DOT Effect", menuName = "DualKaiser/Statuses/Create New DOT")]
    public class DotEffect : SkillEffect
    {
        public string statusName;

        public enum StatusType
        {
            BUFF, DEBUFF, DOT
        }

        public StatusType statusType;

        public enum DotTarget
        {
            ENEMY, SELF
        }

        public DotTarget dotTarget;

        [Header("DOT Duration")]
        public int Duration;

        [Header("DOT Percentage")]
        public float Potency;

        // Activate the DOT on the target
        public override void Activate(Character user, Character target)
        {
            switch (dotTarget)
            {
                case DotTarget.ENEMY:
                    target.ApplyDot(new ActiveDot(this, Duration, Potency), user, target);
                    break;

                case DotTarget.SELF:
                    user.ApplyDot(new ActiveDot(this, Duration, Potency), user, target);
                    break;
            }
        }

        // Function to apply DOT damage
        public void DotDamage(Character target)
        {
            int dotDamage = (int)(target.currentHP * Potency); // DOT damage based on target's HP

            target.TakeDamage(dotDamage);

            Debug.Log(target.baseHP);

            //Debug.Log($"{target.Name} takes {dotDamage} DOT damage from {statusName}.");
        }
    }

    [System.Serializable]
    public class ActiveDot
    {
        public DotEffect dotEffect;
        public int remainingDuration;
        public float potency;

        public ActiveDot(DotEffect dotEffect, int duration, float potency)
        {
            this.dotEffect = dotEffect;
            this.remainingDuration = duration;
            this.potency = potency;
        }

        public void ApplyDot(Character target)
        {
            dotEffect.DotDamage(target);
            // VFX here 
        }
    }
}
