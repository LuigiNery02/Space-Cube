using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

sealed class ComumTexts : MonoBehaviour
{
    [Header("TMP_TEXT")]
    public TextMeshProUGUI textoAlvo;
    [TextArea(3, 10)]
    public string portuguesTexto; //portuguese text
    [TextArea(3, 10)]
    public string inglesTexto; //english text

    private int _languageValue;

    private void Start()
    {
        ChangeText();
    }

    private void OnEnable()
    {
        ChangeText();
    }

    public void ChangeText() //Change the language of the text
    {
        _languageValue = Translate.idioma;

        if (_languageValue == 2)
        {
            textoAlvo.text = inglesTexto;
        }
        else
        {
            textoAlvo.text = portuguesTexto;
        }
    }
}
