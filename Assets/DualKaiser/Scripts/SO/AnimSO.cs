using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DualKaiser;

[CreateAssetMenu(fileName = "Anim SO", menuName = "DualKaiser/VFX/Create New Anim SO")]
public class AnimSO : ScriptableObject
{
    [Header("Animation Trigger")]
    public string animationTrigger;

    public void PlayAnim(Character user)
    {
        Animator animator = user.GetComponent<Animator>();

        if (animator != null && !string.IsNullOrEmpty(animationTrigger))
        {
            animator.SetTrigger(animationTrigger);
        }
    }
}
