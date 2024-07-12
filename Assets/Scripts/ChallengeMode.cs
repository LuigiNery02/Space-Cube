using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.Events;

sealed class ChallengeMode : MonoBehaviour
{
    public static bool isChallengeMode;
    public static bool isChallengeWon;

    private int _challengeNumber;

    [Header("UI")]
    [SerializeField]
    private TextMeshProUGUI _textNumber;

    [Header("GameOver")]
    [SerializeField]
    private GameOver _gameOver; //gameover

    int GetRandomNumber()
    {
        System.Random random = new System.Random();

        int numeroAleatorio = random.Next(0, 100);

        if (numeroAleatorio % 4 != 0)
        {
            numeroAleatorio += 4 - (numeroAleatorio % 4);
        }

        return numeroAleatorio;
    }

    public void StartChallenge()
    {
        isChallengeMode = true;
        _challengeNumber = GetRandomNumber();
        _textNumber.text = _challengeNumber.ToString();
    }

    public void CancelChallenge()
    {
        isChallengeMode = false;
    }

    public void CheckScore(int playerScore)
    {
        if(playerScore == _challengeNumber)
        {
            isChallengeWon = true;
            EndChallenge();
        }
        else if(playerScore > _challengeNumber)
        {
            isChallengeWon= false;
            EndChallenge();
        }
    }

    public void EndChallenge()
    {
        _gameOver.onGameOver.Invoke();
    }
}
