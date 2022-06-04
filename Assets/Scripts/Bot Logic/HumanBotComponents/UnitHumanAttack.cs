using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UnitHumanAttack : BotAttack
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

    private void OnEnable()
    {
        GridUpdater.onStartGame += Init;
    }
    private void OnDisable()
    {
        GridUpdater.onStartGame -= Init;
    }
    private void Init()
    {
        UnitSettings settings = transform.GetChild(0).GetComponent<UnitSettings>();

        _animator = settings.animator;
        attackRate = settings.attackRate;
        damage = settings.damage;
        attackRange = settings.attackRange;
        _bulletPrefab = settings.bullet;
    }
    public override void Attack(BotController target)
    {
        if (attackRate <= 0 || damage <= 0) throw new Exception("���� ����� ��� ���� �� ����� ���� ������ ��� ����� ����");

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

        //��� ������� �������� � ������� �������� �� �������
        SpawnBullet(target);

        yield return new WaitForSeconds(attackRate);

        StartCoroutine(AttackProcess(target));
    }

    private void SpawnBullet(BotController target)
    {
        Bullet bullet = Instantiate(_bulletPrefab, transform.position + transform.forward * 0.05f + Vector3.up * 0.3f, Quaternion.identity);//����� ����� ����� �������� ����� �����
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
