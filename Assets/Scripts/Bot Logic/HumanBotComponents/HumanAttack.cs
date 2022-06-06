using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HumanAttack : BotAttack
{
    Bullet _bulletPrefab;
    [SerializeField] float _bulletSpeed;
    public override float attackRate { get; protected set; }
    public override float damage { get; protected set; }
    public override float attackRange { get; protected set; }

    public override event Action onEndWithTarget;
    public override event Action onHit;

    Coroutine attackProcess;
    Animator _animator;
    BotController target;
    bool _isWizard;
    public override void Init()
    {
        UnitSettings settings = GetComponentInChildren<UnitSettings>();

        _animator = settings.animator;
        attackRate = settings.attackRate;
        damage = settings.damage;
        attackRange = settings.attackRange;
        _isWizard = settings.isWizard;

        if(_isWizard) _bulletPrefab = settings.magicSphere;
        else _bulletPrefab = settings.arrow;
    }
    public override void Attack(BotController target)
    {
        if (attackRate <= 0 || damage <= 0) throw new Exception("темп атаки или урон не могут быть меньше или равны нулю");

        if (attackProcess == null) attackProcess = StartCoroutine(AttackProcess(target));
    }
    private void Update()
    {
        if (target != null)
        {
            Vector3 direction = target.transform.position - transform.position;
            transform.rotation = Quaternion.Lerp(transform.rotation, Quaternion.LookRotation(direction), 3 * Time.deltaTime);
        }
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

        if(_isWizard) _animator.SetTrigger("WizardAttack");
        else _animator.SetTrigger("Attack");

        yield return new WaitForSeconds(0.38f); 
        SpawnBullet(target);

        if (CheckTarget(target) == false)
        {
            //тут по идее нужно сказать пуле, чтобы она запросила новую цель
            yield break;
        }

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
