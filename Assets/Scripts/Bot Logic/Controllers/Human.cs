using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class Human : BotController
{
    [SerializeField] Collider _collider;
    public override event Action<float> onGetDamage;
    public override event Action onDead;

    BotAttack _attackComponent;
    Animator _animator;

    public override BotType type { get; protected set; }
    [field: SerializeField] public override float Health { get; protected set; }
    public override bool isDead { get; protected set; }

    protected override void OnStartFight()
    {
        UnitSettings settings = transform.GetChild(0).GetComponent<UnitSettings>();

        _animator = settings.animator;
        type = GetComponent<IGrid>().team;
        Health = settings.health;

        _attackComponent.Init();
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
        if (damageCount < 0) throw new System.Exception("”рон не может быть меньше нул€");

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
        GameManager.onStartFight += OnStartFight;

        isDead = false;

        _attackComponent = GetComponent<BotAttack>();

        _attackComponent.onEndWithTarget += MoveToNewTarget;
    }
    private void OnDisable()//боты будут пересоздаватьс€, так что просто отписываемс€ от ивентов
    {
        GameManager.onStartFight -= OnStartFight;
        _attackComponent.onEndWithTarget -= MoveToNewTarget;
    }
}
