using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using UnityEngine.UI;

sealed class Touch : MonoBehaviour, IPointerDownHandler, IPointerUpHandler
{
    [Header("Slider")]
    [SerializeField]
    private Slider _touchSlider; //touch slider

    [Header("Texts")]
    [SerializeField]
    private TextMeshProUGUI _tutorialMessage; //tmp text tutorial
    private int _languageValue; //language value

    //unityactions
    public UnityAction OnPointerDownEvent;
    public UnityAction<float> OnPointerDragEvent;
    public UnityAction OnPointerUpEvent;

    [HideInInspector]
    public bool startedGame;

    private void Awake()
    {
        _touchSlider = GetComponent<Slider>();
        _touchSlider.onValueChanged.AddListener(OnSliderValueChanged);
    }

    private void Start()
    {
        startedGame = false;

        //get the language value
        _languageValue = Translate.idioma;

        if (_languageValue == 2)
        {
            _tutorialMessage.text = ("Drag to Throw");
        }
        else if (_languageValue == 1)
        {
            _tutorialMessage.text = ("Arraste para Jogar");
        }
    }
    public void OnPointerDown(PointerEventData eventData)
    {

        if (OnPointerDownEvent != null)
        {
            OnPointerDownEvent.Invoke();
        }

        if (OnPointerDragEvent != null)
        {
            OnPointerDragEvent.Invoke(_touchSlider.value);
        }

        if (!startedGame)
        {
            startedGame = true;
        }
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        _tutorialMessage.text = ("");

        if (OnPointerUpEvent != null)
        {
            OnPointerUpEvent.Invoke();
            _touchSlider.value = 0f;
        }
    }

    private void OnSliderValueChanged(float value)
    {
        if (OnPointerDragEvent != null)
        {
            OnPointerDragEvent.Invoke(value);
        }
    }

    private void OnDestroy()
    {
        _touchSlider.onValueChanged.RemoveListener(OnSliderValueChanged);
    }

    public void ChangeText()
    {
        //get the language value
        _languageValue = Translate.idioma;

        if (_languageValue == 2)
        {
            _tutorialMessage.text = ("Drag to Throw");
        }
        else if (_languageValue == 1)
        {
            _tutorialMessage.text = ("Arraste para Jogar");
        }
    }
}
