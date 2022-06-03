using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class UnitHuman : BotController
{
    [SerializeField] Collider _collider;

    public override event Action<float> onGetDamage;
    public override event Action onDead;

    BotAttack _attackComponent;
    Animator _animator;

    [field: SerializeField] public override BotType type { get; protected set; }
    [field: SerializeField] public override float Health { get; protected set; }
    public override bool isDead { get; protected set; }

    private void Update()
    {
        if(isDead == false)
        {
            BotController target = FindClosestTarget();

            if(target != null)
            {
                Vector3 direction = target.transform.position - transform.position;
                transform.rotation = Quaternion.Lerp(transform.rotation, Quaternion.LookRotation(direction), 3 * Time.deltaTime);
            }
        }
    }
    protected override void OnStartGame()
    {
        MoveToNewTarget();
    }
    protected override void OnWinGame()
    {
        _attackComponent.EndAttack();
        Debug.Log("нет врагов в зоне видимости");
    }
    protected override void OnDie()
    {
        isDead = true;
        _collider.enabled = false;
        _attackComponent.EndAttack();
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

        _attackComponent.Attack(target);
    }

    private void OnEnable()
    {
        GridUpdater.onStartGame += OnStartGame;

        if (type == BotType.Unit) gameObject.tag = "Unit";
        else gameObject.tag = "Enemy";

        isDead = false;

        _animator = GetComponent<GridUnit>().animator;

        _attackComponent = GetComponent<BotAttack>();

        _attackComponent.onEndWithTarget += MoveToNewTarget;
    }
    private void OnDisable()//боты будут пересоздаваться, так что просто отписываемся от ивентов
    {
        GridUpdater.onStartGame -= OnStartGame;
        _attackComponent.onEndWithTarget -= MoveToNewTarget;
    }
}
