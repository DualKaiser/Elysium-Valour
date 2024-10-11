using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DualKaiser;

public class VFXMover : MonoBehaviour
{
    private Vector3 endPosition;

    private float speed;
    private float duration;
    private float delay;

    public void Initialize(Vector3 endPosition, float speed, float duration, float delay)
    {
        this.endPosition = endPosition;
        this.speed = speed;
        this.duration = duration;
        this.delay = delay;

        StartCoroutine(MoveAfterDelay());
    }

    private IEnumerator MoveAfterDelay()
    {
        yield return new WaitForSeconds(delay);

        Vector3 direction = (endPosition - transform.position).normalized;
        Vector3 passThroughPosition = endPosition + direction * 1.0f;

        while (Vector3.Distance(transform.position, passThroughPosition) > 0.1f)
        {
            transform.position += direction * speed * Time.deltaTime;
            yield return null;
        }

        Destroy(gameObject);
    }
}