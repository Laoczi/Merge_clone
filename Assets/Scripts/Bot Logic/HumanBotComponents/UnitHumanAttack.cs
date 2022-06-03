using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UnitHumanAttack : BotAttack
{
    [SerializeField] Bullet _bulletPrefab;
    [SerializeField] float _bulletSpeed;
    [field: SerializeField] public override float attackRate { get; protected set; }
    [field: SerializeField] public override float damage { get; protected set; }
    [field: SerializeField] public override float attackRange { get; protected set; }

    public override event Action onEndWithTarget;
    public override event Action onHit;

    Coroutine attackProcess;

    public override void Attack(BotController target)
    {
        if (attackRate <= 0 || damage <= 0) throw new Exception("темп атаки или урон не могут быть меньше или равны нулю");

        if (attackProcess == null) attackProcess = StartCoroutine(AttackProcess(target));
    }
    public override void EndAttack()
    {
        StopAllCoroutines();
        attackProcess = null;

        Bullet[] activeBullets = FindObjectsOfType<Bullet>();

        for (int i = 0; i < activeBullets.Length; i++)
        {
            Destroy(activeBullets[i].gameObject);
        }
    }

    IEnumerator AttackProcess(BotController target)
    {
        if (CheckTarget(target) == false) yield break;

        SpawnBullet(target);
        //это временно, потом будет запускаться анимация, в которой уже через ивент будет происходить спавн пули

        yield return new WaitForSeconds(attackRate);

        StartCoroutine(AttackProcess(target));
    }

    private void SpawnBullet(BotController target)
    {
        Bullet bullet = Instantiate(_bulletPrefab, transform.position + transform.forward * 0.05f + Vector3.up * 0.3f, Quaternion.identity);//потом нужно будет добавить спавн поинт
        bullet.MoveToTarget(target, _bulletSpeed);
        bullet.onReachedTarget += OnBulletReachedTarget;
    }

    private void OnBulletReachedTarget(BotController target, Bullet bullet)
    {
        bullet.onReachedTarget -= OnBulletReachedTarget;
        target.DealDamage(damage);
        onHit?.Invoke();
    }

    private bool CheckTarget(BotController target)
    {
        if (target == null)
        {
            onEndWithTarget?.Invoke();
            attackProcess = null;
            return false;
        }

        if (target.isDead)
        {
            onEndWithTarget?.Invoke();
            attackProcess = null;
            return false;
        }

        return true;
    }
}
