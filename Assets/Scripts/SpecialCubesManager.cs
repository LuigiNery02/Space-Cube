using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

sealed class SpecialCubesManager : MonoBehaviour, IDataPersistance
{
    [Header("Events")]
    [SerializeField]
    private UnityEvent _haveXCube;
    [SerializeField]
    private UnityEvent _haveExplosiveCube;

    [Header("Buttons")]
    [SerializeField]
    private Image _xButton;
    [SerializeField]
    private Image _explosiveButton;

    [Header("Error Sound")]
    [SerializeField]
    private AudioSource _errorSound;

    private bool _hasXCubes;
    private bool _hasExplosiveCubes;
    public void LoadData(GameData data)
    {
        _hasXCubes = data.hasXCubes;
        _hasExplosiveCubes = data.hasExplosiveCubes;
    }

    public void SaveData(GameData data)
    {
        data.hasXCubes = _hasXCubes;
        data.hasExplosiveCubes = _hasExplosiveCubes;
    }

    public void GainCube(string type)
    {
        if(type == "x")
        {
            _hasXCubes = true;
        }
        else if(type == "explosive")
        {
            _hasExplosiveCubes = true;
        }
    }

    public void CheckCubes(string type)
    {
        if (type == "x")
        {
            if(_hasXCubes == true)
            {
                _hasXCubes = false;
                _haveXCube.Invoke();
            }
            else
            {
                _errorSound.Play();
            }
        }
        else if (type == "explosive")
        {
            if (_hasExplosiveCubes == true)
            {
                _hasExplosiveCubes = false;
                _haveExplosiveCube.Invoke();
            }
            else
            {
                _errorSound.Play();
            }
        }
    }

    public void DisplayCubes()
    {
        if (_hasXCubes)
        {
            _xButton.GetComponent<Image>().color = new Color32(255, 255, 225, 255);
        }
        else
        {
            _xButton.GetComponent<Image>().color = new Color32(255, 255, 225, 70);
        }

        if (_hasExplosiveCubes)
        {
            _explosiveButton.GetComponent<Image>().color = new Color32(255, 255, 225, 255);
        }
        else
        {
            _explosiveButton.GetComponent<Image>().color = new Color32(255, 255, 225, 70);
        }
    }
}
