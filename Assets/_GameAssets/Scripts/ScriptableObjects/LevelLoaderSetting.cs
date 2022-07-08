using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

[CreateAssetMenu(fileName = "Level Loading Settings", menuName = "Global Settings/Level Loading Settings")]
public class LevelLoaderSetting : SingletonScriptableObject<LevelLoaderSetting>
{
    public List<string> scenesList;

    public void LoadNextLevel()
    {
        SceneManager.LoadScene(
            scenesList[PlayerPrefs.GetInt(ConstantSetting.instance.saving.LEVEL) % scenesList.Count]);
    }
    public void LoadMainScene()
    {
        SceneManager.LoadScene(0);
    }
   
}