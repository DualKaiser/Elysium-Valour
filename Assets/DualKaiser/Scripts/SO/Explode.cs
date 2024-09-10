using System.Collections;
using System.Collections.Generic;
using DualKaiser;
using UnityEngine;

[CreateAssetMenu(fileName = "Explode", menuName = "DualKaiser/Special/Explode")]
public class Explode : SkillEffect
{ 
    public DotEffect targetDot; 

    public float explosionMultiplier; 

    public override void Activate(Character user, Character target)
    {
        // Collect all active DOTs of the specified type (Burn, in this case)
        List<ActiveDot> dotsToExplode = new List<ActiveDot>();
        int totalDotDamage = 0;

        foreach (var dot in target.activeDots)
        {
            if (dot.dotEffect == targetDot)
            {
                // Calculate the damage this DOT would deal and add it to the total
                int dotDamage = (int)(target.baseHP * dot.potency);
                totalDotDamage += dotDamage;
                dotsToExplode.Add(dot); // Mark this DOT to be exploded
            }
        }

        // Remove all the exploded DOTs from the target
        foreach (var dot in dotsToExplode)
        {
            target.activeDots.Remove(dot);
        }

        // Apply the explosion damage to the target
        int explosionDamage = (int)(totalDotDamage * explosionMultiplier);
        target.TakeDamage(explosionDamage);
    }
}


