using System.Collections;
using System.Collections.Generic;
using DualKaiser;
using UnityEngine;

[CreateAssetMenu(fileName = "Cleanse", menuName = "DualKaiser/Special/Cleanse")]
public class Cleanse : SkillEffect
{ 
    public override void Activate(Character user, Character target)
    {
        user.Cleanse();
    }
}
