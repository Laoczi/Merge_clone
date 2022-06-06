using System;
using System.Collections.Generic;
using UnityEngine;

public enum BotType
{
    Unit,
    Enemy,
}
public abstract class BotController : MonoBehaviour
{
    public abstract event Action<float> onGetDamage;//нужно для отображения общего здоровья на UI
    public abstract event Action onDead;

    protected bool _isMove;
    protected bool _isAttack;

    public abstract BotType type { get; protected set; }//нужно для поиска правильного типа противника
    public abstract float Health { get; protected set; }
    public abstract bool isDead { get; protected set; }

    //методы для глобальных ивентов
    protected abstract void OnStartFight();
    protected abstract void OnWinGame();

    //методы для локальных ивентов
    protected abstract void OnDie();

    //методы для ивентов компонента движения
    protected virtual void OnReachedTarget(BotController target) { }

    //методы для ивентов компонента атаки
    protected abstract void MoveToNewTarget();
    //приватные методы
    protected BotController FindClosestTarget()
    {
        Collider[] targetsAround = Physics.OverlapSphere(transform.position, 10f);

        if (targetsAround.Length == 0) return null;

        List<GameObject> enemyTargets = new List<GameObject>();

        string targetString;

        if (type == BotType.Unit) targetString = "Enemy";
        else targetString = "Unit";

        for (int i = 0; i < targetsAround.Length; i++)
        {

            if (targetsAround[i].CompareTag(targetString))
            {
                enemyTargets.Add(targetsAround[i].gameObject);
            }
        }

        if (enemyTargets.Count == 0) return null;


        GameObject closestTarget = enemyTargets[0];
        for (int i = 0; i < enemyTargets.Count; i++)
        {
            if (Vector3.Distance(transform.position, closestTarget.transform.position) > Vector3.Distance(transform.position, enemyTargets[i].transform.position)) closestTarget = enemyTargets[i];
        }

        return closestTarget.GetComponent<BotController>();
    }

    //публичные методы
    public abstract void DealDamage(float damageCount);//получили дамаг
}
