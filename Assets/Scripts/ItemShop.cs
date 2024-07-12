using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;


sealed class ItemShop : MonoBehaviour, IDataPersistance
{
    public UnityEvent onBought;

    public GameObject[] _buttons;

    //[HideInInspector]
    public int _itemStatusValue;

    [SerializeField]
    private string _id;

    [ContextMenu("Generate Guid for ID")]
    private void GenerateGuid()
    {
        _id = System.Guid.NewGuid().ToString();
    }

    public void LoadData(GameData data)
    {
        data.itemsBought.TryGetValue(_id, out _itemStatusValue);
        CheckButtons();
    }

    public void SaveData(GameData data)
    {
       if(data.itemsBought.ContainsKey(_id))
        {
            data.itemsBought.Remove(_id);
        }
        data.itemsBought.Add(_id, _itemStatusValue);
    }

    public void Bought()
    {
        onBought.Invoke();
    }

    public void CheckButtons()
    {
        if(_itemStatusValue == 0)
        {
            _buttons[0].SetActive(false);
            _buttons[1].SetActive(false);
            _buttons[2].SetActive(true);
        }
        else if(_itemStatusValue == 1)
        {
            _buttons[0].SetActive(false);
            _buttons[1].SetActive(true);
            _buttons[2].SetActive(false);
        }
        else if( _itemStatusValue == 2)
        {
            _buttons[0].SetActive(true);
            _buttons[1].SetActive(false);
            _buttons[2].SetActive(false);
        }
        //switch (_itemStatusValue)
        //{
        //    case 0:
        //        _buttons[0].SetActive(false);
        //        _buttons[1].SetActive(false);
        //        _buttons[2].SetActive(true);
        //        break;
        //    case 1:
        //        _buttons[0].SetActive(false);
        //        _buttons[1].SetActive(true);
        //        _buttons[2].SetActive(false);
        //        break;
        //    case 2:
        //        _buttons[0].SetActive(true);
        //        _buttons[1].SetActive(false);
        //        _buttons[2].SetActive(false);
        //        break;
        //}
    }

    public void BoughtValue()
    {
        _itemStatusValue = 1;
    }

    public void EquippedValue()
    {
        _itemStatusValue = 2;
    }

    public void SetValue(int value)
    {
        _itemStatusValue = value;
    }
}
