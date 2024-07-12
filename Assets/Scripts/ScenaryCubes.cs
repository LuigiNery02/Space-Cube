using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

sealed class ScenaryCubes : MonoBehaviour
{
    [Header("Attributes")]
    [SerializeField]
    private Vector3 _rotation; //rotation
    [SerializeField]
    private float _speed; //speed

    [Header("Color")]
    [SerializeField]
    private Color[] _color; //color
    private MeshRenderer _renderer; //mesh
    private int _index; //color index

    [Header("CenterCube")]
    [SerializeField]
    private bool _isCenterCube;
    [SerializeField]
    private int[] _cubeNumbers;
    public TextMeshPro[] textNumber;
    private int _randomNumber;
    private int _currentNumber;

    private void Start()
    {
        _renderer = GetComponent<MeshRenderer>();

        //random a color 
        for(int i = 0; i < _color.Length; i++)
        {
            _index = Random.Range(0, i);
        }

        _renderer.material.color = _color[_index];

        //random a rotation
        if (!_isCenterCube)
        {
            _rotation.x = Random.Range(1, 21);
            _rotation.y = Random.Range(1, 21);
            _rotation.z = Random.Range(1, 21);
        }
        else
        {
            RandomNumber();
            _rotation.x = 5;
            _rotation.y = 5;
            _rotation.z = 5;
        }
    }
    private void FixedUpdate()
    {
        transform.Rotate(_rotation * _speed * Time.deltaTime); //rotate 
    }

    public void RandomNumber() //random the cube number
    {
        _randomNumber = Random.Range(0, 5);

        switch (_randomNumber)
        {
            case 0:
                _currentNumber = _cubeNumbers[0];
                break;
            case 1:
                _currentNumber = _cubeNumbers[1];
                break;
            case 2:
                _currentNumber = _cubeNumbers[2];
                break;
            case 3:
                _currentNumber = _cubeNumbers[3];
                break;
            case 4:
                _currentNumber = _cubeNumbers[4];
                break;
        }

        for (int i = 0; i < 6; i++)
        {
            textNumber[i].text = _currentNumber.ToString();
        }

        switch (_currentNumber) //change the cube color according its number
        {
            case 2:
                _renderer.material.color = _color[0];
                break;
            case 4:
                _renderer.material.color = _color[1];
                break;
            case 8:
                _renderer.material.color = _color[2];
                break;
            case 16:
                _renderer.material.color = _color[3];
                break;
            case 32:
                _renderer.material.color = _color[4];
                break;
        }
    }
}
