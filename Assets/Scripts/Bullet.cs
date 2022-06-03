using System.Collections;
using System;
using UnityEngine;

public class Bullet : MonoBehaviour
{
    //эта хрень не обязательно будет пулей, это может быть стрела или огненный шар, но логика будет одна
    public Action<BotController, Bullet> onReachedTarget;
    public void MoveToTarget(BotController target, float bulletSpeed)
    {
        StartCoroutine(MoveToProcess(target, bulletSpeed));
    }
    IEnumerator MoveToProcess(BotController target, float bulletSpeed)
    {
        while (Vector3.Distance(transform.position, target.transform.position) > 0.01f)
        {
            transform.position = Vector3.MoveTowards(transform.position, target.transform.position, bulletSpeed * Time.deltaTime);
            yield return new WaitForEndOfFrame();
        }

        if(Vector3.Distance(transform.position, target.transform.position) < 0.01f)
        {
            onReachedTarget?.Invoke(target, this);
            Destroy(this.gameObject);
        }
    }
}
