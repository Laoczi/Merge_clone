using System;
using UnityEngine;

public class UnitSettings : MonoBehaviour
{
    [field: SerializeField] public BotType team { get; private set; }
    [field: SerializeField] public float health { get; private set; }
    [field: SerializeField] public float damage { get; private set; }
    [field: SerializeField] public float moveSpeed { get; private set; }
    [field: SerializeField] public float minDistanceToTarget { get; private set; }
    [field: SerializeField] public float attackRate { get; private set; }
    [field: SerializeField] public float attackRange { get; private set; }
    [field: SerializeField] public Animator animator { get; private set; }
    [field: SerializeField] public Bullet arrow { get; private set; }
    [field: SerializeField] public Bullet magicSphere { get; private set; }
    [field: SerializeField] public bool isWizard { get; private set; }

    public event Action OnAnimationHit;

    private void OnHit()
    {
        OnAnimationHit?.Invoke();
    }
}
