using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

namespace DualKaiser
{
    [CreateAssetMenu(fileName = "Viktor_PS", menuName = "DualKaiser/Skills/Passives/Noblesse Oblige")]
    public class Noblesse: SkillEffect
    {
        public string skillName;

        [TextArea(4, 6)]
        public string skillDescription;

        [Space]
        public SkillEffect trackedStatus;

        public List<BuffEffect> buffEffects;

        public override void Activate(Character user, Character target)
        {
            CheckStatus(user, target);
        }

        public void CheckStatus(Character user, Character target)
        {
            int count = user.activeBuffs.Count(buff => buff.GetType() == trackedStatus.GetType());

            if (count >= 5)
            {
                TriggerPassive(user, target);

                user.activeBuffs.RemoveAll(buff => buff.GetType() == trackedStatus.GetType());
            }
        }

        private void TriggerPassive(Character user, Character target)
        {
            foreach (BuffEffect buff in buffEffects)
            {
                user.ApplyBuff(buff);
            }

            user.ActivateS1(target);
        }
    }
}

