using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace DualKaiser
{
    [CreateAssetMenu(fileName = "New Passive", menuName = "DualKaiser/Skills/Create New Passive")]
    public class PassiveSkill: SkillEffect
    {
        public string skillName;

        [TextArea(3, 6)]
        public string skillDescription;

        public SkillEffect trackedStatus;

        public List<SkillEffect> skillEffects;

        public override void Activate(Character user, Character target)
        {
            bool hasBurn = false;

            foreach (var activeDot in user.activeDots)
            {
                if (activeDot.dotEffect == trackedStatus)
                {
                    hasBurn = true;
                    break;
                }
            }

            if (hasBurn)
            {
                foreach (var effect in skillEffects)
                {
                    effect.Activate(user, target);
                }
            }
        }
    }
}

