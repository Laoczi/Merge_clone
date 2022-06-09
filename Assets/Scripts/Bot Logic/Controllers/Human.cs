using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class Human : BotController
{
    [SerializeField] Collider _collider;
    public static event Action<TeamType, float, int> onGetDamage;//передаем нашу команду, сколько нанесли урона, и наш уровень
    public override event Action onDead;

    BotAttack _attackComponent;
    Animator _animator;

    public override TeamType team { get; protected set; }
    [field: SerializeField] public override float Health { get; protected set; }
    public override bool isDead { get; protected set; }
    int _level;

    protected override void OnStartFight()
    {
        UnitSettings settings = GetComponentInChildren<UnitSettings>();

        _animator = settings.animator;
        team = GetComponent<IGrid>().team;
        _level = GetComponent<IGrid>().level;
        Health = settings.health;

        _attackComponent.Init();
        MoveToNewTarget();
    }
    protected override void OnWinGame()
    {
        _attackComponent.EndAttack();
        _animator.SetTrigger("Victory");
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
        if (damageCount < 0) throw new System.Exception("Урон не может быть меньше нуля");

        if (isDead) return;

        float returnDamage = damageCount > Health ? Health : damageCount;
        onGetDamage?.Invoke(team, returnDamage, _level);
        Health -= damageCount;

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
    private void OnDisable()//боты будут пересоздаваться, так что просто отписываемся от ивентов
    {
        GameManager.onStartFight -= OnStartFight;
        _attackComponent.onEndWithTarget -= MoveToNewTarget;
    }
}
