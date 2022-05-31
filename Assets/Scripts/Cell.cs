using System;
using UnityEngine;

public class Cell : MonoBehaviour
{
    //контроль перемещени€ и мерджа
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
        //активируем анимацию у юнита дл€ передвижени€
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

    public void SetUnit(GridUnit unit)//добавл€ем обьект в €чейку
    {
        if (this.unit == null)
        {
            this.unit = unit;
            this.unit.transform.position = new Vector3(transform.position.x, _yOffset, transform.position.z);
        }
        else
        {
            //тут мерджим, при неудаче выкидываем ошибку
            if (this.unit.mergeLevel == unit.mergeLevel)
            {
                this.unit.UpdateMergeLevel();
                Destroy(unit.gameObject);
            }
            else throw new Exception("попытка слить юнитов разных уровней");
        }

        isAvailable = false;
    }
    void NullUnitLink()//убирает обьект из €чейки
    {
        if (unit == null) throw new Exception("¬ €чейке нет юнита чтобы убрать его");

        unit = null;
        isAvailable = true;
    }
}
