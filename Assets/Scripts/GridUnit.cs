using System;
using UnityEngine;

public class GridUnit : MonoBehaviour
{
    //�������� ���������� � ����� � ������ ��
    [SerializeField] int _mergeLevel;
    public int mergeLevel { get { return _mergeLevel; } }
    Animator[] childAnimators;
    public Animator animator { get; private set; }

    void OnEnable()
    {
        childAnimators = new Animator[transform.childCount];
        for (int i = 0; i < childAnimators.Length; i++)
        {
            childAnimators[i] = transform.GetChild(i).GetComponent<Animator>();
            childAnimators[i].gameObject.SetActive(false);
        }
        childAnimators[0].gameObject.SetActive(true);
        animator = childAnimators[0];

        _mergeLevel = 0;
    }
    public void UpdateMergeLevel()
    {
        if (mergeLevel + 1 >= childAnimators.Length) throw new Exception("���������� �������� ����� ���� ������������� ������");

        childAnimators[mergeLevel].gameObject.SetActive(false);
        _mergeLevel++;
        childAnimators[mergeLevel].gameObject.SetActive(true);
        animator = childAnimators[mergeLevel];
    }
    void OnStartGame()
    {
        enabled = false;
    }
}
