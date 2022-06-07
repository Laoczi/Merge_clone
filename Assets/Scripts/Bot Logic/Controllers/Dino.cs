using System;
using System.Collections.Generic;
using UnityEngine;

public class Dino : BotController
{
    [SerializeField] Collider _collider;
    public override event Action<float> onGetDamage;
    public override event Action onDead;

    BotAttack _attackComponent;
    BotMovement _movementComponent;
    Animator _animator;

    public override BotType team { get; protected set; }
    [field: SerializeField] public override float Health { get; protected set; }
    public override bool isDead { get; protected set; }

    protected override void OnStartFight()
    {
        UnitSettings settings = GetComponentInChildren<UnitSettings>();

        _animator = settings.animator;
        team = GetComponent<IGrid>().team;
        Health = settings.health;

        _movementComponent.Init();
        _attackComponent.Init();

        MoveToNewTarget();
    }
    protected override void OnWinGame()
    {
        _attackComponent.EndAttack();
        _movementComponent.EndMove();
        _animator.SetTrigger("Victory");
        Debug.Log("dino end");
    }
    protected override void OnDie()
    {
        isDead = true;
        _collider.enabled = false;
        _attackComponent.EndAttack();
        _movementComponent.EndMove();
        _animator.SetTrigger("Die");
    }

    public override void DealDamage(float damageCount)
    {
        if (damageCount < 0) throw new System.Exception("Урон не может быть меньше нуля");

        if (isDead) return;

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

        _movementComponent.Move(target);
    }

    protected override void OnReachedTarget(BotController target)
    {
        //мы дошли до цели, движение закончилось само
        _attackComponent.Attack(target);
    }

    

    private void OnEnable()
    {
        GameManager.onStartFight += OnStartFight;

        isDead = false;

        _movementComponent = GetComponent<BotMovement>();
        _attackComponent = GetComponent<BotAttack>();

        _movementComponent.onLoseTarget += MoveToNewTarget;
        _movementComponent.onReachedTarget += OnReachedTarget;

        _attackComponent.onEndWithTarget += MoveToNewTarget;
    }
    private void OnDisable()//боты будут пересоздаваться, так что просто отписываемся от ивентов
    {
        GameManager.onStartFight -= OnStartFight;

        _movementComponent.onLoseTarget -= MoveToNewTarget;
        _movementComponent.onReachedTarget -= OnReachedTarget;

        _attackComponent.onEndWithTarget -= MoveToNewTarget;
    }
}
