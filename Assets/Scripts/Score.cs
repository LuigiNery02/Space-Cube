using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

sealed class Score : MonoBehaviour, IDataPersistance
{
    [Header("Texts")]
    [SerializeField]
    private TextMeshProUGUI _score; //tmp text score
    [SerializeField]
    private TextMeshProUGUI _higherScoreText; //tmp text higher score

    public int _currentScore; //current score value
    [SerializeField]
    private int _higherScore; //higher score value

    [SerializeField]
    private int _languageValue; //check the language value

    public ChallengeMode challengeMode;

    public void LoadData(GameData data) //load the data of the game
    {
        this._higherScore = data.higherScore; //load the higherscore value
    }

    public void SaveData(GameData data) //save the data of the game
    {
        if(_currentScore > data.higherScore)
        {
            data.higherScore = _currentScore; //save the new highscore value
        }
    }

    // Start is called before the first frame update
    void Start()
    {
        //get the current language
        _languageValue = Translate.idioma;

        if(_languageValue == 2)
        {
            _score.text = ("Score: " + _currentScore.ToString());
            _higherScoreText.text = ("Higher Score: " + _higherScore.ToString());
        }
        else if (_languageValue == 1)
        {
            _score.text = ("Pontuação: " + _currentScore.ToString());
            _higherScoreText.text = ("Maior Pontuação: " + _higherScore.ToString());
        }
    }

    public void NewScore(int score) //update the new highscore
    {
        _currentScore += score;
        if (_languageValue == 2)
        {
            _score.text = ("Score: " + _currentScore.ToString());

            if(_currentScore > _higherScore)
            {
                _higherScore = _currentScore;
                _higherScoreText.text = ("HigherScore: " + _higherScore.ToString());
            }
        }
        else if (_languageValue == 1)
        {
            _score.text = ("Pontuação: " + _currentScore.ToString());

            if (_currentScore > _higherScore)
            {
                _higherScore = _currentScore;
                _higherScoreText.text = ("Maior Pontuação: " + _higherScore.ToString());
            }
        }

        if (ChallengeMode.isChallengeMode)
        {
            challengeMode.CheckScore(_currentScore);
        }
    }

    public void UpdateScoreLanguage() //update the language
    {
        _languageValue = Translate.idioma;

        if (_languageValue == 2)
        {
            _score.text = ("Score: " + _currentScore.ToString());
            _higherScoreText.text = ("HigherScore: " + _higherScore.ToString());
        }
        else if (_languageValue == 1)
        {
            _score.text = ("Pontuação: " + _currentScore.ToString());
            _higherScoreText.text = ("Maior Pontuação: " + _higherScore.ToString());
        }
    }
}
