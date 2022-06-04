using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class UnitHuman : BotController
{
    [SerializeField] Collider _collider;
    [field: SerializeField] public GridUnit gridUnit { get; private set; }

    public override event Action<float> onGetDamage;
    public override event Action onDead;

    BotAttack _attackComponent;
    Animator _animator;

    public override BotType type { get; protected set; }
    public override float Health { get; protected set; }
    public override bool isDead { get; protected set; }

    protected override void OnStartGame()
    {
        UnitSettings settings = transform.GetChild(0).GetComponent<UnitSettings>();

        _animator = settings.animator;
        type = settings.team;
        Health = settings.health;

        if (type == BotType.Unit) gameObject.tag = "Unit";
        else gameObject.tag = "Enemy";

        MoveToNewTarget();
    }
    protected override void OnWinGame()
    {
        _attackComponent.EndAttack();
        _animator.SetTrigger("Victory");
        Debug.Log("human end");
    }
    protected override void OnDie()
    {
        isDead = true;
        _collider.enabled = false;
        _attackComponent.EndAttack();
        _animator.SetTrigger("Die");
    }

    public override void DealDamage(float damageCount)
    {
        if (damageCount < 0) throw new System.Exception("���� �� ����� ���� ������ ����");

        Health -= damageCount;
        onGetDamage?.Invoke(damageCount);

        if (Health <= 0)
        {
            OnDie();
            onDead?.Invoke();
        }
    }

    protected override void MoveToNewTarget()
    {
        BotController target = FindClosestTarget();

        if (target == null)
        {
            OnWinGame();
            return;
        }

        _attackComponent.Attack(target);
    }

    private void OnEnable()
    {
        GridUpdater.onStartGame += OnStartGame;

        isDead = false;

        _attackComponent = GetComponent<BotAttack>();

        _attackComponent.onEndWithTarget += MoveToNewTarget;
    }
    private void OnDisable()//���� ����� ���������������, ��� ��� ������ ������������ �� �������
    {
        GridUpdater.onStartGame -= OnStartGame;
        _attackComponent.onEndWithTarget -= MoveToNewTarget;
    }
}
