using System;
using UnityEngine;

public abstract class BotMovement : MonoBehaviour
{
    public abstract event Action onReachedTarget;//когда достигли цель, нужно для включения атаки
    public abstract event Action onLoseTarget;

    public abstract float speed { get; protected set; }
    public abstract void Init(float moveSpeed);
    public abstract void Move(BotController target);
    public abstract void EndMove();
}
