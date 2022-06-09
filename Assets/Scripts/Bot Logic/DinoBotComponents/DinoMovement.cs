using System.Collections;
using System;
using UnityEngine;

public class DinoMovement : BotMovement
{
    public override float speed { get; protected set; }
    public override float minDistance { get; protected set; }

    public override event Action<BotController> onReachedTarget;
    public override event Action onLoseTarget;

    Coroutine moveProcess;
    Animator _animator;

    public override void Init()
    {
        UnitSettings settings = GetComponentInChildren<UnitSettings>();

        speed = settings.moveSpeed;
        minDistance = settings.minDistanceToTarget;
        _animator = settings.animator;
    }
    public override void EndMove()
    {
        _animator.SetBool("Run", false);
        StopAllCoroutines();
    }

    public override void Move(BotController target)
    {
        if (speed <= 0 || minDistance <= 0) throw new Exception("Скорость передвижения или минимальная дистанция для достижения цели не могут быть меньше или равны нулю");

        if (moveProcess == null) moveProcess = StartCoroutine(MoveProcess(target));
    }
    IEnumerator MoveProcess(BotController target)
    {
        _animator.SetBool("Run", true);
        while (Vector3.Distance(transform.position, target.transform.position) > minDistance)
        {
            if (CheckTarget(target) == false) yield break;
            transform.position = Vector3.MoveTowards(transform.position, target.transform.position, speed * Time.deltaTime);

            Vector3 direction = target.transform.position - transform.position;
            transform.rotation = Quaternion.Lerp(transform.rotation, Quaternion.LookRotation(direction), 3 * Time.deltaTime);

            yield return new WaitForEndOfFrame();
        }

        if (Vector3.Distance(transform.position, target.transform.position) < minDistance)
        {
            onReachedTarget?.Invoke(target);
            moveProcess = null;
            _animator.SetBool("Run", false);
            yield break;
        }
    }
    private bool CheckTarget(BotController target)
    {
        if (target == null)
        {
            _animator.SetBool("Run", false);
            moveProcess = null;
            onLoseTarget?.Invoke();
            return false;
        }

        if (target.isDead)
        {
            _animator.SetBool("Run", false);
            moveProcess = null;
            onLoseTarget?.Invoke();
            return false;
        }

        return true;
    }
}
