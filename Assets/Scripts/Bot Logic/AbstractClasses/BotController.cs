using System;
using UnityEngine;

public enum BotType
{
    unit,
    enemy,
}
public abstract class BotController : MonoBehaviour
{
    public static Action<float> onGetDamage;//����� ��� ����������� ������ �������� �� UI

    private BotAttack _attackComponent;
    private BotMovement _movementComponent;

    private bool _isMove;
    private bool _isAttack;

    public abstract BotType type { get; protected set; }//����� ��� ������ ����������� ���� ����������
    public abstract float Health { get; protected set; }
    public abstract float moveSpeed { get; protected set; }
    public abstract float rate { get; protected set; }
    public abstract float damage { get; protected set; }

    //������ ��� ���������� �������
    protected abstract void OnStartGame();
    protected abstract void OnWinGame();

    //������ ��� ��������� �������
    protected abstract void OnDie();

    //������ ��� ������� ���������� ��������
    protected abstract void OnLoseTarget();
    protected abstract void OnReachedTarget();

    //������ ��� ������� ���������� �����
    protected abstract void OnKillTarget();
    //��������� ������
    protected abstract void FindClosestTarget();

    //��������� ������
    public abstract void DealDamage();//�������� �����
    private void OnEnable()
    {
        _movementComponent = GetComponent<BotMovement>();
        _attackComponent = GetComponent<BotAttack>();

        _movementComponent.onLoseTarget += OnLoseTarget;
        _movementComponent.onReachedTarget += OnReachedTarget;

        _attackComponent.onLoseTarget += OnLoseTarget;
        _attackComponent.onKill += OnKillTarget;
    }
    private void OnDisable()//�� ������ �������� ��� ��������� ����
    {
        _movementComponent.onLoseTarget -= OnLoseTarget;
        _movementComponent.onReachedTarget -= OnReachedTarget;

        _attackComponent.onLoseTarget -= OnLoseTarget;
        _attackComponent.onKill -= OnKillTarget;
    }
}
