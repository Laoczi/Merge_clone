using System;
using UnityEngine;

public abstract class BotMovement : MonoBehaviour
{
    public abstract event Action<BotController> onReachedTarget;//����� �������� ����, ����� ��� ��������� �����
    public abstract event Action onLoseTarget;

    public abstract float speed { get; protected set; }
    public abstract float minDistance { get; protected set; }
    public abstract void Move(BotController target);
    public abstract void EndMove();
}
