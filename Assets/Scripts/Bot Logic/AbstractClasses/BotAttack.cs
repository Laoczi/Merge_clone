using System;
using UnityEngine;

public abstract class BotAttack : MonoBehaviour
{
    public abstract event Action onLoseTarget;
    public abstract event Action onAttack;
    public abstract event Action onKill;

    public abstract float rate { get; protected set; }
    public abstract float damage { get; protected set; }
    public abstract void Init(float attackRate, float attackDamage);
    public abstract void Attack(BotController target);//������ ����� �� ����
    protected abstract void OnSuccessfulAttack();//������� ���� ������ (�� ������ �� ����� �������� � ������� ���� �� ��������� �������� �����)
}
