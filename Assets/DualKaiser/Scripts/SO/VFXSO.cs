using System.Collections;
using System.Collections.Generic;
using DualKaiser;
using UnityEngine;

[CreateAssetMenu(fileName = "VFX SO", menuName = "DualKaiser/VFX/Create New VFX")]
public class VFXSO : ScriptableObject
{
    public GameObject vfxPrefab;

    public float Duration;

    public enum VFXPosition
    {
        USER, ENEMY
    }

    public VFXPosition vfxPosition;

    public void PlayVFX(Character user, Character target)
    {
        Vector3 position = Vector3.zero;

        switch (vfxPosition)
        {
            case VFXPosition.USER:
                position = user.transform.position;
                break;
            case VFXPosition.ENEMY:
                position = target.transform.position;
                break;
        }

        if (vfxPrefab != null && target != null)
        {
            GameObject vfxInstance = Instantiate(vfxPrefab, position, Quaternion.identity);
            Destroy(vfxInstance, Duration); 
        }
    }
}
