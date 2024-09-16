using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

namespace DualKaiser
{
    [CreateAssetMenu(fileName = "Aria_PS", menuName = "DualKaiser/Skills/Passives/Embrace Flames")]
    public class Embrace : SkillEffect
    {
        public string skillName;

        [TextArea(4, 6)]
        public string skillDescription;

        [Space]
        public DotEffect trackedStatus;

        public List<BuffEffect> buffEffects;

        private bool hasTriggered = false;

        public override void Activate(Character user, Character target)
        {
            CheckStatus(user, target);
        }

        public void CheckStatus(Character user, Character target)
        {           
            if (!hasTriggered)  
            {
                foreach (var dot in user.activeDots)
                {
                    if (dot.dotName == trackedStatus.dotName)  
                    {
                        TriggerPassive(user, target);

                        hasTriggered = true;  
                        return; 
                    }
                }
            }
            else
            {                
                bool statusFound = false;

                foreach (var dot in user.activeDots)
                {
                    if (dot.dotName == trackedStatus.dotName)
                    {
                        statusFound = true;
                        break;
                    }
                }

                if (!statusFound)
                {
                    RemoveBuffs(user);
                    hasTriggered = false;
                }
            }
        }

        private void TriggerPassive(Character user, Character target)
        {
            foreach (BuffEffect buff in buffEffects)
            {
                user.ApplyBuff(buff);
            }
        }

        private void RemoveBuffs(Character user)
        {
            foreach (BuffEffect buff in buffEffects)
            {
                if (user.activeBuffs.Contains(buff))
                {
                    buff.RemoveBuff(user);
                    user.activeBuffs.Remove(buff);
                }
            }
        }
    }
}
