using System.Collections;
using System.Collections.Generic;
using UnityEngine;

sealed class Translate : MonoBehaviour
{
    public static SystemLanguage Idioma { get; set; }

    public static int idioma;

    private void Awake()
    {
        if (PlayerPrefs.HasKey("language"))
        {
            idioma = PlayerPrefs.GetInt("language");
        }
        else
        {
            if (idioma == 0)
            {
                Idioma = Application.systemLanguage;

                if (Idioma == SystemLanguage.Portuguese)
                {
                    idioma = 1;
                    PlayerPrefs.SetInt("language", idioma);
                }
                else
                {
                    idioma = 2;
                    PlayerPrefs.SetInt("language", idioma);
                }
            }
            else
            {
                if (Idioma == SystemLanguage.Portuguese)
                {
                    idioma = 1;
                    PlayerPrefs.SetInt("language", idioma);
                }
                else
                {
                    idioma = 2;
                    PlayerPrefs.SetInt("language", idioma);
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
        PlayerPrefs.SetInt("language", idioma);
    }
}
