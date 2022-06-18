using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;


public class Human : BotController
{
    [SerializeField] Collider _collider;
    public static event Action<TeamType, float, int> onGetDamage;//передаем нашу команду, сколько нанесли урона, и наш уровень
    public override event Action onDead;

    BotAttack _attackComponent;
    Animator _animator;
    Image _healthBar;
    SkinnedMeshRenderer mesh;

    public override TeamType team { get; protected set; }
    [field: SerializeField] public override float health { get; protected set; }
    float _baseHealth;
    public override bool isDead { get; protected set; }
    int _level;
    int[] _nLevelValues = new int[] { 2, 2, 16, 12, 36, 144, 31, 80, 74, 144 };

    protected override void OnStartFight()
    {
        UnitSettings settings = GetComponentInChildren<UnitSettings>();

        _level = GetComponent<IGrid>().level;
        _animator = settings.animator;
        team = GetComponent<IGrid>().team;
        health = _baseHealth = settings.health;

        if(team == TeamType.Unit)
        {
            _healthBar = settings.unitHealthBar;
        }
        else
        {
            _healthBar = settings.enemyHealthBar;
        }

        mesh = settings.meshRenderer;
        _attackComponent.Init();
        MoveToNewTarget();
    }
    protected override void OnWinGame()
    {
        _attackComponent.EndAttack();
        _animator.SetTrigger("Victory");
    }
    protected override void OnDie()
    {
        isDead = true;
        _collider.enabled = false;
        _attackComponent.EndAttack();
        _animator.SetTrigger("Die");

        UnitSettings settings = GetComponentInChildren<UnitSettings>();

        if (team == TeamType.Unit) settings.unitHealthBarCanvas.gameObject.SetActive(false);
        else settings.enemyHealthBarCanvas.gameObject.SetActive(false);
    }

    public override void DealDamage(float damageCount)
    {
        if (damageCount < 0) throw new System.Exception("Урон не может быть меньше нуля");

        if (isDead) return;

        if(team == TeamType.Enemy)
        {
            GameObject hitEffect = Instantiate(UnitsDataBase.singleton.hitEffect);
            hitEffect.transform.position = transform.position + Vector3.up * 0.5f;
            hitEffect.GetComponent<DamagePopup>().text.text = (Mathf.RoundToInt(_nLevelValues[_level] * Mathf.Pow(2, _level - 1))).ToString() + "$";
            Destroy(hitEffect, 1);
        }

        float returnDamage = damageCount > health ? health : damageCount;
        onGetDamage?.Invoke(team, returnDamage, _level);
        health -= damageCount;

        if (health <= 0)
        {
            health = 0;
            OnDie();
            onDead?.Invoke();
        }

        StartCoroutine(OnDealDamage());

        _healthBar.fillAmount = ((health * 100) / _baseHealth) / 100;


        //_attackComponent.EndAttack();
        //MoveToNewTarget();
    }

    IEnumerator OnDealDamage()
    {
        mesh.material.color = Color.red;
        yield return new WaitForSeconds(0.2f);
        mesh.material.color = Color.white;
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
        GameManager.onStartFight += OnStartFight;

        isDead = false;

        _attackComponent = GetComponent<BotAttack>();

        _attackComponent.onEndWithTarget += MoveToNewTarget;
    }
    private void OnDisable()//боты будут пересоздаваться, так что просто отписываемся от ивентов
    {
        GameManager.onStartFight -= OnStartFight;
        _attackComponent.onEndWithTarget -= MoveToNewTarget;
    }
}
