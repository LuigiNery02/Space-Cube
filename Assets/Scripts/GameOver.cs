using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.SceneManagement;

sealed class GameOver : MonoBehaviour
{
    public UnityEvent onGameOver;

    [Header("FinalGameScreens")]
    [SerializeField]
    private GameObject[] _screens;

    public void ReloadScene() //restart the scene
    {
        SceneManager.LoadScene(0); 
    }

    public void CheckGameMode()
    {
        if (!ChallengeMode.isChallengeMode)
        {
            _screens[0].SetActive(true);
        }
        else
        {
            _screens[1].SetActive(true);
        }
    }
}
