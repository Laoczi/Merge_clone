using System;
using System.Collections.Generic;
using UnityEngine;

public class UnitDino : BotController
{
    [SerializeField] Collider _collider;
    [field: SerializeField] public GridUnit gridUnit { get; private set; }

    public override event Action<float> onGetDamage;
    public override event Action onDead;

    BotAttack _attackComponent;
    BotMovement _movementComponent;
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

        Debug.Log(gameObject.tag);

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
        GridUpdater.onStartGame += OnStartGame;

        isDead = false;

        _movementComponent = GetComponent<BotMovement>();
        _attackComponent = GetComponent<BotAttack>();

        _movementComponent.onLoseTarget += MoveToNewTarget;
        _movementComponent.onReachedTarget += OnReachedTarget;

        _attackComponent.onEndWithTarget += MoveToNewTarget;
    }
    private void OnDisable()//боты будут пересоздаваться, так что просто отписываемся от ивентов
    {
        GridUpdater.onStartGame -= OnStartGame;

        _movementComponent.onLoseTarget -= MoveToNewTarget;
        _movementComponent.onReachedTarget -= OnReachedTarget;

        _attackComponent.onEndWithTarget -= MoveToNewTarget;
    }
}
