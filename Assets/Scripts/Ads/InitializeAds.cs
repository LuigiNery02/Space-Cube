using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Advertisements;

sealed class InitializeAds : MonoBehaviour, IUnityAdsInitializationListener
{
    [SerializeField]
    private string _androidGameID;
    [SerializeField]
    private bool _isTesting;

    private string _gameID;

    public void OnInitializationComplete()
    {
        Debug.Log("Ads Initialized...");
    }

    public void OnInitializationFailed(UnityAdsInitializationError error, string message)
    {

    }

    private void Awake()
    {
#if UNITY_ANDROID
        _gameID = _androidGameID;
#elif UNITY_EDITOR
        _gameID = _androidGameID;
#endif

        if(!Advertisement.isInitialized && Advertisement.isSupported)
        {
            Advertisement.Initialize(_gameID, _isTesting, this);
        }
    }
}
