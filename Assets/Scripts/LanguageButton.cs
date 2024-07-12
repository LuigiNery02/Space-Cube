using System.Collections;
using System.Collections.Generic;
using UnityEngine;

sealed class LanguageButton : MonoBehaviour
{
    [Header("CountryButton")]
    [SerializeField]
    private bool _isEnglish;

    [Header("Animator")]
    [SerializeField]
    private Animator _animator;

    private int _language;

    private void OnEnable()
    {
        _animator.GetComponent<Animator>();
        PlayAnimation();
    }

    public void PlayAnimation() //play the button animation and change the language
    {
        _language = Translate.idioma;

        if (_isEnglish && _language == 1)
        {
            _animator.SetBool("language", true);
        }
        else if (_isEnglish && _language == 2)
        {
            _animator.SetBool("language", false);
        }
        else if (!_isEnglish && _language == 2)
        {
            _animator.SetBool("language", true);
        }
        else if (!_isEnglish && _language == 1)
        {
            _animator.SetBool("language", false);
        }
    }
}
