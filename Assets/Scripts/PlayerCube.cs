using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerCube : Cube
{
    [Header("Attributes")]
    [SerializeField]
    private float _speed; //cube speed
    [SerializeField] 
    private float _cubeMaxPosition; //limit position horizontally

    [Header("Rigidbody")]
    public Rigidbody rb; //rigidbody

    [Header("Target")]
    [SerializeField]
    private GameObject _target; //aim

    private Touch _touchSlider; //slider
    private bool _isTouchDown; //check if is touchdown
    [HideInInspector]
    public bool canMove; //check if can throw the cube
    private Vector3 _position; //cube position

    // Start is called before the first frame update
    void Start()
    {
        EssentialFunctions();
        Delegates();
        StartFunciotns();
    }

    public void EssentialFunctions() //functions to throw the cube
    {
        rb.GetComponent<Rigidbody>();
        _touchSlider = GameObject.Find("TouchSlider").GetComponent<Touch>();
        isPlayerCube = true;
        canMove = true;
    }

    public void Delegates() //combines the functions with the slider
    {
        _touchSlider.OnPointerDownEvent += OnPointerDown;
        _touchSlider.OnPointerDragEvent += OnPointerDrag;
        _touchSlider.OnPointerUpEvent += OnPointerUp;
    }

    private void FixedUpdate()
    {
        if (_isTouchDown)
        {
            transform.position = Vector3.Lerp(transform.position, _position , _speed * Time.deltaTime); //drag the cube according to the touch
        }
    }

    private void OnPointerDown() //touched the cube
    {
        if (isPlayerCube)
        {
            _isTouchDown = true;
            _target.SetActive(true);
        }
    }

    private void OnPointerDrag(float xMovement) //dragged the cube
    {
        if (isPlayerCube)
        {
            if (_isTouchDown)
            {
                _position = transform.position;
                _position.x = xMovement * _cubeMaxPosition;
            }
        }
    }

    private void OnPointerUp() //released the cube
    {
        if (isPlayerCube)
        {
            if (_isTouchDown && canMove)
            {
                _isTouchDown = false;
                canMove = false;
                ThrowCube();
                _target.SetActive(false);
            }
        }
    }

    private void ThrowCube() //throw the cube
    {
        isPlayerCube = false;
        _touchSlider.OnPointerDownEvent -= OnPointerDown;
        _touchSlider.OnPointerDragEvent -= OnPointerDrag;
        _touchSlider.OnPointerUpEvent -= OnPointerUp;
        rb.AddForce(Vector3.forward * _speed, ForceMode.Impulse);
        CallSFXThrowCube();
        CallPlayerCubeSpawner();
    }
}
