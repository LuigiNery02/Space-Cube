using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Advertisements;
using UnityEngine.Events;

sealed class GameMaster : MonoBehaviour
{
    [SerializeField]
    private UnityEvent _rewardXCube;

    [SerializeField]
    private UnityEvent _rewardExplosiveCube;

    [SerializeField]
    private UnityEvent _forcedGameOver;

    [HideInInspector]
    public bool isRewarded;

    private bool _gameMode;

    public static GameMaster Instance { get; private set; }

    [SerializeField]
    private float _skyBoxSpeed; //speed of the skybox rotation

    private void Awake()
    {
        if (Instance != null && Instance != this)
        {
            Destroy(gameObject);
            return;
        }
        Instance = this;
        DontDestroyOnLoad(gameObject);

        StartCoroutine(DisplayBannerWithDelay());
    }

    private IEnumerator DisplayBannerWithDelay()
    {
        yield return new WaitForSeconds(1f);
        AdsManager.Instance.bannerAds.ShowBannerAd();
    }

    private void FixedUpdate()
    {
        RenderSettings.skybox.SetFloat("_Rotation", Time.time *  _skyBoxSpeed); //rotate the skybox
    }

    public void GameOver()
    {
        AdsManager.Instance.interstitialAds.ShowInterstitialAd();
    }

    public void Reward(string name)
    {
        if (name == "x")
        {
            Debug.Log("OkayX");
            if (isRewarded)
            {
                _rewardXCube.Invoke();
            }
        }
        else if (name == "explosive")
        {
            Debug.Log("OkayEX");
            if (isRewarded)
            {
                _rewardExplosiveCube.Invoke();
            }
        }
    }

    public void GameOn()
    {
        _gameMode = true;
    }

    public void ForceGameOver()
    {
        _gameMode = false;
        _forcedGameOver.Invoke();
    }
}
