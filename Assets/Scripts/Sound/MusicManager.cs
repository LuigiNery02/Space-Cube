using System.Collections;
using System.Collections.Generic;
using UnityEngine;

sealed class MusicManager : MonoBehaviour, IDataPersistance
{
    [Header("Musics")]
    [SerializeField]
    private AudioSource[] _musics;
    [SerializeField]
    private AudioSource[] _musicsPreview;
    [SerializeField]
    private int _preview;

    private int _musicID;
    public void LoadData(GameData data)
    {
        _musicID = data.musicID;
    }

    public void SaveData(GameData data)
    {
        data.musicID = _musicID;
    }

    private void Start()
    {
        CheckMusicID();
    }

    private void CheckMusicID()
    {
        _musics[_musicID].Play();
    }

    public void GetMusicID(int id)
    {
        for(int i = 0; i < _musics.Length; i++)
        {
            _musics[i].Stop();
        }
        for (int i = 0; i < _musicsPreview.Length; i++)
        {
            _musicsPreview[i].Stop();
        }
        _musicID = id;
        CheckMusicID();
    }

    public void PreviewMusic(int id)
    {
        for (int i = 0; i < _musics.Length; i++)
        {
            _musics[i].Pause();
        }
        for (int i = 0; i < _musicsPreview.Length; i++)
        {
            _musicsPreview[i].Stop();
        }
        _musicsPreview[id].Play();
        StartCoroutine(WaitPreview());
    }

    IEnumerator WaitPreview()
    {
        yield return new WaitForSeconds(_preview);
        for (int i = 0; i < _musicsPreview.Length; i++)
        {
            _musicsPreview[i].Stop();
        }
        _musics[_musicID].UnPause();
    }
}
