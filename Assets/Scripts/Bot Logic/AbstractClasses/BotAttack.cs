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
    public abstract void Attack(BotController target);//начали атаку по цели
    protected abstract void OnSuccessfulAttack();//нанесли урон удачно (не умерли во время процесса и нанесли урон по окончанию анимации атаки)
}
