using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Dino : BotController
{
    [SerializeField] Collider _collider;
    public static event Action<TeamType, float, int> onGetDamage;
    public override event Action onDead;

    BotAttack _attackComponent;
    BotMovement _movementComponent;
    Animator _animator;
    Image _healthBar;

    public override TeamType team { get; protected set; }
    [field: SerializeField] public override float health { get; protected set; }
    float _baseHealth;
    public override bool isDead { get; protected set; }
    int _level;

    protected override void OnStartFight()
    {
        UnitSettings settings = GetComponentInChildren<UnitSettings>();

        _animator = settings.animator;
        team = GetComponent<IGrid>().team;
        _level = GetComponent<IGrid>().level;
        health = _baseHealth = settings.health;

        if (team == TeamType.Unit)
        {
            _healthBar = settings.unitHealthBar;
        }
        else
        {
            _healthBar = settings.enemyHealthBar;
        }

        _movementComponent.Init();
        _attackComponent.Init();

        MoveToNewTarget();
    }
    protected override void OnWinGame()
    {
        _attackComponent.EndAttack();
        _movementComponent.EndMove();
        _animator.SetTrigger("Victory");
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

        float returnDamage = damageCount > health ? health : damageCount;
        onGetDamage?.Invoke(team, returnDamage, _level);
        health -= damageCount;

        if (health <= 0)
        {
            health = 0;
            OnDie();
            onDead?.Invoke();
        }

        _healthBar.fillAmount = ((health * 100) / _baseHealth) / 100;
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
