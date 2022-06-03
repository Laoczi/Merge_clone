using System;
using System.Collections.Generic;
using UnityEngine;

public class UnitDino : BotController
{
    [SerializeField] Collider _collider;

    public override event Action<float> onGetDamage;
    public override event Action onDead;

    BotAttack _attackComponent;
    BotMovement _movementComponent;
    Animator _animator;

    [field: SerializeField] public override BotType type { get; protected set; }
    [field: SerializeField] public override float Health { get; protected set; }
    public override bool isDead { get; protected set; }

    protected override void OnStartGame()
    {
        MoveToNewTarget();
    }
    protected override void OnWinGame()
    {
        Debug.Log("нет врагов в зоне видимости");
    }
    protected override void OnDie()
    {
        isDead = true;
        _collider.enabled = false;
        _attackComponent.EndAttack();
        _movementComponent.EndMove();
        //врубаем анимацию смерти
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

        if (type == BotType.Unit) gameObject.tag = "Unit";
        else gameObject.tag = "Enemy";

        isDead = false;

        _animator = GetComponent<GridUnit>().animator;
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
