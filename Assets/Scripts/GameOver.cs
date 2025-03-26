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
}
