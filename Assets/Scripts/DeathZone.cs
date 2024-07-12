using System.Collections;
using System.Collections.Generic;
using UnityEngine;

sealed class DeathZone : MonoBehaviour
{
    [Header("GameOver")]
    [SerializeField]
    private GameOver _gameOver; //gameover

    [HideInInspector]
    public bool canDeath; //check if the player can lose

    private void OnTriggerStay(Collider other) //collision with the deathzone
    {
        if (other.gameObject.GetComponent<Cube>() != null)
        {
            if (canDeath)
            {
                _gameOver.onGameOver.Invoke();
            }
        }
    }
}
