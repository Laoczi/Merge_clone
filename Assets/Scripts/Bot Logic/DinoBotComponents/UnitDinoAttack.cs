using System.Collections;
using System;
using UnityEngine;

public class UnitDinoAttack : BotAttack
{
    [field: SerializeField] public override float attackRate { get; protected set; }
    [field: SerializeField] public override float damage { get; protected set; }
    [field: SerializeField] public override float attackRange { get; protected set; }

    public override event Action onEndWithTarget;
    public override event Action onHit;

    Coroutine attackProcess;
    BotController _target;

    public override void Attack(BotController target)
    {
        if (attackRate <= 0 || damage <= 0) throw new Exception("���� ����� ��� ���� �� ����� ���� ������ ��� ����� ����");

        if (attackProcess == null)
        {
            _target = target;
            attackProcess = StartCoroutine(AttackProcess(target));
        }
    }
    public override void EndAttack()
    {
        StopAllCoroutines();
    }

    IEnumerator AttackProcess(BotController target)
    {
        if (CheckTarget(target) == false) yield break;

        if (Vector3.Distance(transform.position, target.transform.position) < attackRange)
        {
            OnAnimationHit();//��� ��������, � ���������� ��� ����� ���������� �� ��������
            //����� ��������� ��������, � �������� ����� �����, ������� ����� �������� ����� onAnimationHit, ���� �� ���������, ��� ������ ���� ���� ����
        }
        else
        {
            onEndWithTarget?.Invoke();
            attackProcess = null;
            yield break;
        }

        yield return new WaitForSeconds(attackRate);

        StartCoroutine(AttackProcess(target));
    }

    private void OnAnimationHit()
    {
        if (CheckTarget(_target) == false) return;//���� ���� �� ������, �� ����� �� �������, �� ��������� �������� ������ � �� ������ �� ������, ����� �������� �� isDead �� ������

        _target.DealDamage(damage);
        onHit?.Invoke();
    }

    private bool CheckTarget(BotController target)
    {
        if (target == null)//�� ����� �������� ����� || ������ ��� ���� ������������� null, �� ��� �������� �� isDead, �������� ������ nullReferenceException
        {
            onEndWithTarget?.Invoke();
            _target = null;
            attackProcess = null;
            return false;
        }

        if (target.isDead)
        {
            onEndWithTarget?.Invoke();
            _target = null;
            attackProcess = null;
            return false;
        }

        return true;
    }
}
