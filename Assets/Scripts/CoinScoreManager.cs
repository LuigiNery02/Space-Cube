using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

sealed class CoinScoreManager : MonoBehaviour
{
    private Score _score;
    private CoinManager _coinManager;

    [HideInInspector]
    public int currentCoins;

    [Header("TextDisplay")]
    [SerializeField]
    private TextMeshProUGUI _text;
    [SerializeField]
    private TextMeshProUGUI _text2;

    private void Awake()
    {
        currentCoins = 0;
        _score = GameObject.Find("Score").GetComponent<Score>();
        _coinManager = GameObject.Find("CoinManager").GetComponent<CoinManager>();
    }

    public void YourReward()
    {
        if (!ChallengeMode.isChallengeMode)
        {
            currentCoins = _score._currentScore / 10;
            _text.text = currentCoins.ToString();
        }
        else
        {
            if (ChallengeMode.isChallengeWon)
            {
                currentCoins = _score._currentScore * 5;
                _text2.text = currentCoins.ToString();
            }
            else
            {
                currentCoins = 1;
                _text2.text = currentCoins.ToString();
            }
        }
    }

    public void ClaimReward()
    {
        _coinManager.GainCoins(currentCoins);
    }
}
