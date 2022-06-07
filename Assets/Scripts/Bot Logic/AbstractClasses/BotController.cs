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
    public abstract event Action<float> onGetDamage;//����� ��� ����������� ������ �������� �� UI
    public abstract event Action onDead;

    protected bool _isMove;
    protected bool _isAttack;

    public abstract BotType team { get; protected set; }//����� ��� ������ ����������� ���� ����������
    public abstract float Health { get; protected set; }
    public abstract bool isDead { get; protected set; }

    //������ ��� ���������� �������
    protected abstract void OnStartFight();
    protected abstract void OnWinGame();

    //������ ��� ��������� �������
    protected abstract void OnDie();

    //������ ��� ������� ���������� ��������
    protected virtual void OnReachedTarget(BotController target) { }

    //������ ��� ������� ���������� �����
    protected abstract void MoveToNewTarget();
    //��������� ������
    protected BotController FindClosestTarget()
    {
        Collider[] targetsAround = Physics.OverlapSphere(transform.position, 20f);

        if (targetsAround.Length == 0) return null;

        List<GameObject> enemyTargets = new List<GameObject>();

        string targetString;

        if (team == BotType.Unit) targetString = "Enemy";
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

    //��������� ������
    public abstract void DealDamage(float damageCount);//�������� �����
}
