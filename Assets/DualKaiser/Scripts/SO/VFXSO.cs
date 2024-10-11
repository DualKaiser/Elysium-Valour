using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DualKaiser;

#if UNITY_ONLINE
using Unity.Netcode;
#endif

[CreateAssetMenu(fileName = "VFX SO", menuName = "DualKaiser/VFX/Create New VFX SO")]
public class VFXSO : ScriptableObject
{
    [Header("VFX")]
    public GameObject vfxPrefab;

    public bool isStatic = false;

    [Space]
    [Header("VFX Settings")]
    public float duration;

    public float speed;

    public float delay;

    public enum VFXPosition
    {
        USER, ENEMY, USERTOENEMY, LEFTHAND, BOW
    }

    public VFXPosition vfxPosition;

    public Vector3 initialRotation;

    public Vector3 offset;

    private Vector3 leftHandAttachPoint;

    public void PlayVFX(Character user, Character target)
    {
        Vector3 position = Vector3.zero;

        Vector3 endPosition = Vector3.zero;

        GameObject leftHandObject = GameObject.FindWithTag("Left Hand");

        GameObject bowAttachPoint = GameObject.FindWithTag("Bow");

        if (vfxPosition == VFXPosition.LEFTHAND && leftHandObject != null)
        {
            GameObject vfxInstance = Instantiate(vfxPrefab);

            vfxInstance.transform.SetParent(leftHandObject.transform, false);

            Destroy(vfxInstance, duration);
            return; 
        }

        if (vfxPosition == VFXPosition.BOW && bowAttachPoint != null)
        {
            position = bowAttachPoint.transform.position;

            GameObject vfxInstance = Instantiate(vfxPrefab, position, Quaternion.Euler(initialRotation));

            Destroy(vfxInstance, duration);
            return;
        }

        switch (vfxPosition)
        {
            case VFXPosition.USER:
                position = user.transform.position + offset;
                break;
            case VFXPosition.ENEMY:
                position = target.transform.position + offset;
                break;
            case VFXPosition.USERTOENEMY:

                if (target != null)
                {
                    position = user.transform.position + offset;
                    endPosition = target.transform.position + offset;
                }
                break;
        }

        if (vfxPrefab != null && isStatic)
        {
            GameObject vfxInstance = Instantiate(vfxPrefab, position, Quaternion.Euler(initialRotation));

            Destroy(vfxInstance, duration);
        }
        else if (vfxPrefab != null && target != null && !isStatic)
        {
            GameObject vfxInstance = Instantiate(vfxPrefab, position, Quaternion.Euler(initialRotation));

            if (vfxPosition == VFXPosition.LEFTHAND && leftHandObject != null)
            {
                vfxInstance.transform.SetParent(leftHandObject.transform);
            }

            VFXMover vfxMover = vfxInstance.AddComponent<VFXMover>();

            vfxMover.Initialize(endPosition, speed, duration, delay);

            Destroy(vfxInstance, duration); 
        }
    }
}
