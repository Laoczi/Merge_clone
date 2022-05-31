using System;
using UnityEngine;

public class Cell : MonoBehaviour
{
    //�������� ����������� � ������
    public bool isAvailable { get; private set; }
    public GridUnit unit { get; private set; }

    bool _isDrag;
    float _yOffset = 0;

    private void Start()
    {
        isAvailable = true;
        unit = null;
    }

    private void OnMouseDown()
    {
        //���������� �������� � ����� ��� ������������
        _isDrag = true;
    }
    private void OnMouseDrag()
    {
        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
        RaycastHit hit;

        if(Physics.Raycast(ray, out hit))
        {
            Vector3 dragUnitPosition = hit.point;
            dragUnitPosition.y = _yOffset;

            unit.transform.position = dragUnitPosition;
        }
    }
    private void OnMouseUp()
    {
        if (_isDrag == false) return;

        _isDrag = false;

        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
        RaycastHit hit;

        if (Physics.Raycast(ray, out hit))
        {
            if (hit.collider.CompareTag("Cell"))
            {
                Cell cell = hit.collider.GetComponent<Cell>();
                if(cell.isAvailable || cell.unit.mergeLevel == unit.mergeLevel)
                {
                    cell.SetUnit(unit);
                    NullUnitLink();
                    return;
                }
            }
        }

        unit.transform.position = new Vector3(transform.position.x, _yOffset, transform.position.z);
    }

    public void SetUnit(GridUnit unit)//��������� ������ � ������
    {
        if (this.unit == null)
        {
            this.unit = unit;
            this.unit.transform.position = new Vector3(transform.position.x, _yOffset, transform.position.z);
        }
        else
        {
            //��� �������, ��� ������� ���������� ������
            if (this.unit.mergeLevel == unit.mergeLevel)
            {
                this.unit.UpdateMergeLevel();
                Destroy(unit.gameObject);
            }
            else throw new Exception("������� ����� ������ ������ �������");
        }

        isAvailable = false;
    }
    void NullUnitLink()//������� ������ �� ������
    {
        if (unit == null) throw new Exception("� ������ ��� ����� ����� ������ ���");

        unit = null;
        isAvailable = true;
    }
}
