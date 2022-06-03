using System;
using UnityEngine;

public abstract class BotAttack : MonoBehaviour
{
    public abstract event Action onEndWithTarget;
    public abstract event Action onHit;

    public abstract float attackRate { get; protected set; }
    public abstract float damage { get; protected set; }
    public abstract float attackRange { get; protected set; }
    public abstract void Attack(BotController target);//������ ����� �� ����
    public abstract void EndAttack();
}
