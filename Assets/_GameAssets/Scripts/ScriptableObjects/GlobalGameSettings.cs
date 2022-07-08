using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

[CreateAssetMenu(fileName = "Game Settings", menuName = "Global Settings/Game Settings")]
public class GlobalGameSettings : SingletonScriptableObject<GlobalGameSettings>
{
   [Header("Main Settings")] 
   [Range(1,90)]
   public int countSegments;
   public bool DebugMode;
   
   [Space][Header("WheelSpin Settings")][Space] 
   public WheelSpin.WheelSpinSetting wheelSpinSetting;
   
   [Space][Header("Other Settings")][Space] 
   public Spinner.SpinnerInStartUISettings uiSpinnerSettings;
}