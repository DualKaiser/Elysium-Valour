using System.Collections;
using System.Collections.Generic;
using Unity.Collections;
using UnityEngine;

namespace DualKaiser
{
    [CreateAssetMenu(fileName = "New Character", menuName = "DualKaiser/Character/New Character Statline")]
    [System.Serializable]
    public class CharStats : ScriptableObject
    {
        [Header("Character Bio")]

        public string Name;

        public enum Type
        {
            FIRE, ICE, EARTH
        }

        public enum Class
        {
            REAPER, ZODIA
        }

        public Type CharType;
        public Class CharClass;

        [Header("Character Stats")]

        [Header("Health")]
        public int baseHP;

        [Header("Attack")]
        public int baseATK;

        [Header("Defence")]
        public int baseDEF;

        [Header("Armour")]
        public int baseAMR;

        // Determines chance to land Debuffs
        [Header("Accuracy")]
        public float baseACC;

        // Chance to resist Debuffs
        [Header("Resistance")]
        public float baseRES;

        [Header("Crit Rate")]
        public float critR;

        [Header("Crit Damage")]
        public float critDmg;
    }
}
