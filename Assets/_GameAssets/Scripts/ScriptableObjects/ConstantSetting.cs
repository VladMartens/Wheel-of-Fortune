using UnityEditor;
using UnityEngine;

[CreateAssetMenu(fileName = "Constant Settings", menuName = "Global Settings/Constant Settings")]
public class ConstantSetting : SingletonScriptableObject<ConstantSetting>
{
    public Tags tags;
    [Space]
    public Saving saving;
    [Space]
    public AnimationTriggers triggers;
    [Space]
    public AnimationsName animations;
    [Space]
    public FXs fx;

    [System.Serializable]
    public class Tags
    {
      
    }

    [System.Serializable]
    public class Saving
    {
        public string MONEY = "Money";
        public string LEVEL = "Money";
        public string VIBRATION = "Vibration";
        public string AUDIO = "Audio";
    }

    [System.Serializable]
    public class AnimationTriggers
    {
     
    }
    
    [System.Serializable]
    public class AnimationsName
    {
        public string OPEN = "Open";
        public string CLOSE = "Close";
        public string FADEIN = "FadeIn";
        public string FADEOUT = "FadeOut";
        public string BUTTON_PRESS = "Press";
        public string BUTTON_UP = "Up";
        public string BUTTON_IDLE = "Idle";
    }
    
    [System.Serializable]
    public class FXs
    {
    
    }
}