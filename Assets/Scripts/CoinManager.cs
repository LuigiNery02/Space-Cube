using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

sealed class CoinManager : MonoBehaviour, IDataPersistance
{
    [HideInInspector]
    public int currentCoins;

    [Header("CoinsDisplay")]
    [SerializeField]
    private TextMeshProUGUI _coinsText;

    private void Start()
    {
        UpdateCoins();
    }

    public void LoadData(GameData data)
    {
        currentCoins = data.currentCoins;
    }

    public void SaveData(GameData data)
    {
        data.currentCoins = currentCoins;
    }

    public void UpdateCoins()
    {
        _coinsText.text = currentCoins.ToString();
    }

    public void GainCoins(int newCoins)
    {
        currentCoins += newCoins;
        if(currentCoins >= 999999)
        {
            currentCoins = 999999;
        }
    }

    public void LoseCoins(int cost)
    {
        currentCoins -= cost;
    }
}
