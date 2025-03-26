using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

sealed class CubeSpawner : MonoBehaviour
{
    [Header("Cubes")]
    [SerializeField]
    private GameObject _playerCube; //main cube
    [SerializeField]
    private GameObject _cube; //commom cube

    [Header("Score")]
    [SerializeField]
    private Score _score; //score number


    [Header("TouchSlider")]
    [SerializeField]
    private GameObject _touchSlider; //slider to aim the cube

    [Header("DeathZone")]
    [SerializeField]
    private DeathZone _deathZone; //deathzone 

    private PlayerCube _currentPlayerCube;

    [HideInInspector]
    public bool canInstantiate; //variable to check if can instantiate a cube
    [HideInInspector]
    public bool canInstantiatePlayerCube; //variable to check if can instantiate the player cube

    private void Start()
    {
        canInstantiatePlayerCube = true;
    }

    public void SpawnCube(Vector3 position, int cubeNumber) //spawn a cube with double value
    {
        if (canInstantiate)
        {
            canInstantiate = false;
            if (ObjectPool.cubes.Count > 0) //if has cubes in the pool
            {
                //respawn a cube by the pool
                ObjectPool.cubes[0].SetActive(true);
                ObjectPool.cubes[0].GetComponent<Cube>().Respawn(position, Quaternion.Euler(0, 0, 0), cubeNumber * 2);
                float pushForce = 2.5f;
                _cube.GetComponent<Rigidbody>().AddForce(new Vector3(0, .3f, 1f) * pushForce, ForceMode.Impulse);
                float randomValue = Random.Range(-20f, 20f);
                Vector3 randomDirection = Vector3.one * randomValue;
                _cube.GetComponent<Rigidbody>().AddTorque(randomDirection);
            }
            else
            {
                //spawn a cube
                _cube.GetComponent<Cube>().currentNumber = cubeNumber * 2;
                Instantiate(_cube, position, Quaternion.identity);
                float pushForce = 2.5f;
                _cube.GetComponent<Rigidbody>().AddForce(new Vector3(0, .3f, 1f) * pushForce, ForceMode.Impulse);
                float randomValue = Random.Range(-20f, 20f);
                Vector3 randomDirection = Vector3.one * randomValue;
                _cube.GetComponent<Rigidbody>().AddTorque(randomDirection);
            }
            _score.GetComponent<Score>().NewScore(cubeNumber * 2); //adds the value to the score
        }
    }

    public void SpawnPlayerCube(Vector3 position) //spawn the main cube
    {
        _deathZone.canDeath = false;
        StartCoroutine(WaitToSpawnPlayerCube(position));
    }

    IEnumerator WaitToSpawnPlayerCube(Vector3 position) //wait a certain amount of time to reposition the cube
    {
        if (canInstantiatePlayerCube)
        {
            canInstantiatePlayerCube = false;
            _touchSlider.SetActive(false);
            yield return new WaitForSeconds(0.5f);
            _deathZone.canDeath = true;
            _touchSlider.SetActive(true);
            if (ObjectPool.playerCubes.Count > 0) //if has cubes in the pool
            {
                //reposition the cube
                ObjectPool.playerCubes[0].GetComponent<PlayerCube>().rb.velocity = new Vector3(0, 0, 0);
                ObjectPool.playerCubes[0].SetActive(true);
                ObjectPool.playerCubes[0].GetComponent<PlayerCube>().EssentialFunctions();
                ObjectPool.playerCubes[0].GetComponent<PlayerCube>().Delegates();
                ObjectPool.playerCubes[0].GetComponent<PlayerCube>().Respawn(position, Quaternion.Euler(0, 0, 0), 0);
            }
            else
            {
                //instantiate and reposition the cube
                Instantiate(_playerCube, position, Quaternion.Euler(0, 0, 0));
            }
            canInstantiatePlayerCube = true;
        }
    }
}
