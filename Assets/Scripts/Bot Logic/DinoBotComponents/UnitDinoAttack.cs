using System.Collections;
using System;
using UnityEngine;

public class UnitDinoAttack : BotAttack
{
    public override float attackRate { get; protected set; }
    public override float damage { get; protected set; }
    public override float attackRange { get; protected set; }

    public override event Action onEndWithTarget;
    public override event Action onHit;

    Coroutine attackProcess;
    BotController _target;
    Animator _animator;

    private void OnDisable()
    {
        UnitSettings settings = transform.GetChild(0).GetComponent<UnitSettings>();
        settings.OnAnimationHit -= OnHit;
    }
    public override void Init()
    {
        UnitSettings settings = transform.GetChild(0).GetComponent<UnitSettings>();

        attackRate = settings.attackRate;
        damage = settings.damage;
        attackRange = settings.attackRange;
        _animator = settings.animator;

        settings.OnAnimationHit += OnHit;
    }

    public override void Attack(BotController target)
    {
        if (attackRate <= 0 || damage <= 0) throw new Exception("темп атаки или урон не могут быть меньше или равны нулю");

        if (attackProcess == null)
        {
            _target = target;
            attackProcess = StartCoroutine(AttackProcess(target));
        }
    }
    public override void EndAttack()
    {
        _target = null;
        StopAllCoroutines();
    }

    IEnumerator AttackProcess(BotController target)
    {
        if (CheckTarget(target) == false) yield break;

        if (Vector3.Distance(transform.position, target.transform.position) < attackRange)
        {
            _animator.SetTrigger("Attack");
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

    private void OnHit()
    {
        if (CheckTarget(_target) == false) return;

        _target.DealDamage(damage);
        onHit?.Invoke();
    }

    private bool CheckTarget(BotController target)
    {
        if (target == null)
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
