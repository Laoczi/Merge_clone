using System;
using UnityEngine;
using UnityEngine.UI;

public class UnitSettings : MonoBehaviour
{
    [field: SerializeField] public float health { get; private set; }
    [field: SerializeField] public float damage { get; private set; }
    [field: SerializeField] public float moveSpeed { get; private set; }
    [field: SerializeField] public float minDistanceToTarget { get; private set; }
    [field: SerializeField] public float attackRate { get; private set; }
    [field: SerializeField] public float attackRange { get; private set; }
    public Animator animator { get; private set; }
    [field: SerializeField] public Bullet arrow { get; private set; }
    [field: SerializeField] public Bullet magicSphere { get; private set; }
    [field: SerializeField] public bool isWizard { get; private set; }
    public GameObject unitHealthBarCanvas { get; set; }
    public GameObject enemyHealthBarCanvas { get; set; }
    public Image unitHealthBar { get; set; }
    public Image enemyHealthBar { get; set; }
    [field: SerializeField] public GameObject body { get; set; }
    public SkinnedMeshRenderer meshRenderer { get; private set; }

    private void OnEnable()
    {
        unitHealthBarCanvas = transform.GetChild(1).gameObject;
        enemyHealthBarCanvas = transform.GetChild(2).gameObject;

        meshRenderer = transform.GetChild(0).transform.GetChild(0).GetComponent<SkinnedMeshRenderer>();

        unitHealthBar = unitHealthBarCanvas.transform.GetChild(1).GetComponent<Image>();
        enemyHealthBar = enemyHealthBarCanvas.transform.GetChild(1).GetComponent<Image>();

        animator = GetComponent<Animator>();
    }
}
