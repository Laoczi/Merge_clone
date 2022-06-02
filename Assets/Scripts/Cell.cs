using System;
using UnityEngine;

public class Cell : MonoBehaviour
{
    //контроль перемещени€ и мерджа

    public static Action<int, UnitType> OnMergeUnit;

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
        unit.animator.SetBool("Hold", true);
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
        unit.animator.SetBool("Hold", false);

        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
        RaycastHit hit;

        if (Physics.Raycast(ray, out hit))
        {
            if (hit.collider.CompareTag("Cell"))
            {
                Cell cell = hit.collider.GetComponent<Cell>();
                
                if(cell != this)//если мы не положили юнита обратно на место
                {               //и нова€ €чейка пуста€ или лвл юнита в ней тот же что и у нас при этом типы одинаковые, то мерджим
                    if (cell.isAvailable || 
                       (cell.unit.mergeLevel == unit.mergeLevel && cell.unit.type == unit.type))
                    {
                        cell.SetUnit(unit);
                        NullUnitLink();
                        return;
                    }
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
            if (this.unit.mergeLevel == unit.mergeLevel && this.unit.type == unit.type)
            {
                this.unit.UpdateMergeLevel();
                Destroy(unit.gameObject);
                OnMergeUnit?.Invoke(this.unit.mergeLevel, this.unit.type);
            }
            else throw new Exception("попытка слить юнитов разных уровней или разного типа");
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
