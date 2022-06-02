using System;
using UnityEngine;

public enum BotType
{
    unit,
    enemy,
}
public abstract class BotController : MonoBehaviour
{
    public static Action<float> onGetDamage;//нужно для отображения общего здоровья на UI

    private BotAttack _attackComponent;
    private BotMovement _movementComponent;

    private bool _isMove;
    private bool _isAttack;

    public abstract BotType type { get; protected set; }//нужно для поиска правильного типа противника
    public abstract float Health { get; protected set; }
    public abstract float moveSpeed { get; protected set; }
    public abstract float rate { get; protected set; }
    public abstract float damage { get; protected set; }

    //методы для глобальных ивентов
    protected abstract void OnStartGame();
    protected abstract void OnWinGame();

    //методы для локальных ивентов
    protected abstract void OnDie();

    //методы для ивентов компонента движения
    protected abstract void OnLoseTarget();
    protected abstract void OnReachedTarget();

    //методы для ивентов компонента атаки
    protected abstract void OnKillTarget();
    //приватные методы
    protected abstract void FindClosestTarget();

    //публичные методы
    public abstract void DealDamage();//получили дамаг
    private void OnEnable()
    {
        _movementComponent = GetComponent<BotMovement>();
        _attackComponent = GetComponent<BotAttack>();

        _movementComponent.onLoseTarget += OnLoseTarget;
        _movementComponent.onReachedTarget += OnReachedTarget;

        _attackComponent.onLoseTarget += OnLoseTarget;
        _attackComponent.onKill += OnKillTarget;
    }
    private void OnDisable()//не забыть сбросить все параметры бота
    {
        _movementComponent.onLoseTarget -= OnLoseTarget;
        _movementComponent.onReachedTarget -= OnReachedTarget;

        _attackComponent.onLoseTarget -= OnLoseTarget;
        _attackComponent.onKill -= OnKillTarget;
    }
}
