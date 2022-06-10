using System.Collections;
using System;
using UnityEngine;

public class Bullet : MonoBehaviour
{
    public Action<BotController, Bullet> onReachedTarget;
    public void MoveToTarget(BotController target, float bulletSpeed)
    {
        StartCoroutine(MoveToProcess(target, bulletSpeed));
    }
    IEnumerator MoveToProcess(BotController target, float bulletSpeed)
    {
        while (Vector3.Distance(transform.position, target.transform.position) > 0.3f)
        {
            transform.position = Vector3.MoveTowards(transform.position, target.transform.position, bulletSpeed * Time.deltaTime);
            if (target != null)
            {
                Vector3 direction = target.transform.position - transform.position;
                transform.rotation = Quaternion.Lerp(transform.rotation, Quaternion.LookRotation(direction), 3 * Time.deltaTime);
            }
            yield return new WaitForEndOfFrame();
        }

        if(Vector3.Distance(transform.position, target.transform.position) < 0.3f)
        {
            onReachedTarget?.Invoke(target, this);
            Destroy(this.gameObject);
        }
    }
}
