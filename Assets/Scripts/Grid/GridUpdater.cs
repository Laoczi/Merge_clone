using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GridUpdater : MonoBehaviour
{
    //���������� ����� ������ � �����, � ��� �� ���������� ���������� � ������� ��������� ����� ��� ���������� ����
    public static float yOffset;
    [SerializeField] Cell[] _grid;
    [SerializeField] GridUnit _humanUnitPrefab;
    [SerializeField] GridUnit _dinoUnitPrefab;

    public void AddHumanUnit()
    {
        int tryingCount = 0;
        while (tryingCount < _grid.Length)
        {
            tryingCount++;
            int randomCellIndex = Random.Range(0, _grid.Length);
            if (_grid[randomCellIndex].isAvailable)
            {
                _grid[randomCellIndex].SetUnit(Instantiate(_humanUnitPrefab));
                break;
            }
        }
    }
    public void AddDinoUnit()
    {
        int tryingCount = 0;
        while (tryingCount < _grid.Length)
        {
            tryingCount++;
            int randomCellIndex = Random.Range(0, _grid.Length);
            if (_grid[randomCellIndex].isAvailable)
            {
                _grid[randomCellIndex].SetUnit(Instantiate(_dinoUnitPrefab));
                break;
            }
        }
    }
    void OnApplicationQuit()
    {
        //��������� �����
    }
}