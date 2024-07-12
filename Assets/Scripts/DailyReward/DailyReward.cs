using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Networking;
using Newtonsoft.Json.Linq;

sealed class DailyReward : MonoBehaviour, IDataPersistance
{
    [Header("Current Reward")]
    [SerializeField]
    private TextMeshProUGUI _currentRewardText;

    [Header("RewardsSettings")]
    [SerializeField]
    private GameObject[] _rewardImage;
    [SerializeField]
    private int[] _rewardValue;

    [Header("Screens")]
    [SerializeField]
    private GameObject[] _dailyRewardScreens;

    [Header("CoinManager")]
    [SerializeField]
    private CoinManager _coinManager;

    private int _totalRewards = 7;
    [SerializeField]
    private int _currentDay = 1;
    private DateTime _lastClaimedTime;

    private NotificationMessage _sendNotifications;

    public void LoadData(GameData data)
    {
        _currentDay = data.currentDay;
        long ticks = data.lastClaimedTime;
        _lastClaimedTime = new DateTime(ticks);
    }

    public void SaveData(GameData data)
    {
        data.lastClaimedTime = _lastClaimedTime.Ticks;
        data.currentDay = _currentDay;
    }

    private void Start()
    {
        _coinManager.GetComponent<CoinManager>();
        _sendNotifications = GameObject.Find("NotificationManager").GetComponent<NotificationMessage>();
    }

    public void ClaimDailyReward()
    {
        if (_currentDay <= _totalRewards)
        {
            _coinManager.GainCoins(_rewardValue[_currentDay - 1]);
            _coinManager.UpdateCoins();
            _lastClaimedTime = GetInternetTime();
            _sendNotifications.SendNotificationDailyReward();
            _currentDay++;
            if(_currentDay > _totalRewards)
            {
                _currentDay = 1;
            }
            DataPersistanceManager.instance.SaveGame();

            Debug.Log("Recompensa di�ria reclamada!");
        }
    }

    private void GiveReward(int day)
    {
        _rewardImage[day - 1].SetActive(true);
        _currentRewardText.text = _rewardValue[day - 1].ToString();
    }

    public void GiveCheckDaily()
    {
        StartCoroutine(CheckForDailyReset());
    }

    private IEnumerator CheckForDailyReset()
    {
        UnityWebRequest www = UnityWebRequest.Get("http://worldtimeapi.org/api/ip");
        yield return www.SendWebRequest();

        if (www.result == UnityWebRequest.Result.Success)
        {
            string responseText = www.downloadHandler.text;

            JObject responseData = JObject.Parse(responseText);
            string dateTimeString = responseData["utc_datetime"].ToString();

            Debug.Log("DateTime String from API: " + dateTimeString);

            DateTime internetTime;
            if (TryParseDateTime(dateTimeString, out internetTime))
            {
                TimeSpan timeSinceLastClaim = internetTime - _lastClaimedTime;
                if (timeSinceLastClaim.TotalHours >= 24)
                {
                    _dailyRewardScreens[0].SetActive(true);
                    _dailyRewardScreens[1].SetActive(false);
                    GiveReward(_currentDay);
                    Debug.Log("Você pode reinvidicar sua recompensa diária");
                }
                else
                {
                    _dailyRewardScreens[1].SetActive(true);
                    _dailyRewardScreens[0].SetActive(false);
                    Debug.Log("Você não pode reinvidicar sua recompensa diária");
                }
            }
        }
        else
        {
            Debug.LogError("Erro ao obter a hora da internet: " + www.error);
        }
    }

    private DateTime GetInternetTime()
    {
        UnityWebRequest www = UnityWebRequest.Get("http://worldtimeapi.org/api/ip");
        www.SendWebRequest();

        while (!www.isDone) { }

        if (www.result == UnityWebRequest.Result.Success)
        {
            string responseText = www.downloadHandler.text;

            JObject responseData = JObject.Parse(responseText);
            string dateTimeString = responseData["utc_datetime"].ToString();

            DateTime internetTime;
            if(TryParseDateTime(dateTimeString, out internetTime))
            {
                return internetTime;
            }
            else
            {
                Debug.LogError("Erro ao converter a hora da internet para DateTime.");
                return DateTime.Now;
            }
        }
        else
        {
            Debug.LogError("Erro ao obter a hora da internet: " + www.error);
            return DateTime.Now;
        }
    }

    private bool TryParseDateTime(string dateTimeString, out DateTime result)
    {
        return DateTime.TryParse(dateTimeString, out result);
    }
}
