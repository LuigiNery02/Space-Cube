using System.Collections;
using System.Collections.Generic;
using UnityEngine;

sealed class Translate : MonoBehaviour
{
    public static SystemLanguage Idioma { get; set; }

    public static int idioma;

    private void Awake()
    {
        if (PlayerPrefs.HasKey("linguagem"))
        {
            idioma = PlayerPrefs.GetInt("linguagem");
        }
        else
        {
            if (idioma == 0)
            {
                Idioma = Application.systemLanguage;

                if (Idioma == SystemLanguage.Portuguese)
                {
                    idioma = 1;
                    PlayerPrefs.SetInt("linguagem", idioma);
                }
                else
                {
                    idioma = 2;
                    PlayerPrefs.SetInt("linguagem", idioma);
                }
            }
            else
            {
                if (Idioma == SystemLanguage.Portuguese)
                {
                    idioma = 1;
                    PlayerPrefs.SetInt("linguagem", idioma);
                }
                else
                {
                    idioma = 2;
                    PlayerPrefs.SetInt("linguagem", idioma);
                }
            }
        }

        ComumTexts[] comumTexts = FindObjectsOfType<ComumTexts>();

        foreach (ComumTexts comumText in comumTexts)
        {
            comumText.ChangeText();
        }
    }

    public void UpdateLanguage(int value)
    {
        idioma = value;
        ComumTexts[] comumTexts = FindObjectsOfType<ComumTexts>();

        foreach (ComumTexts comumText in comumTexts)
        {
            comumText.ChangeText();
        }
        PlayerPrefs.SetInt("linguagem", idioma);
    }
}
