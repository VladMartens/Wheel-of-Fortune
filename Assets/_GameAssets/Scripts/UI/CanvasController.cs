using System;
using TMPro;
using UnityEngine;
using UnityEngine.PlayerLoop;
using UnityEngine.UI;

public class CanvasController : MonoBehaviour
{
  [Header("UI Panels")] [SerializeField] private GameObject startUI;
  [SerializeField] private GameObject inGameUI;
  
  [Space] [Header("InGame UI")] [Space] 
  [SerializeField] private Button buttonSpin,buttonGoHome;
  [SerializeField] private TextMeshProUGUI moneyText;

  [Space] [Header("Setting Panel")] [Space] 
  [SerializeField] private Button buttonPlay;

  [SerializeField] private Button buttonSettings;
  [SerializeField] private Button buttonMuteAudio;
  [SerializeField] private Button buttonMuteVibration;
 
  [Space]
  [SerializeField] private Image muteAudioImage;
  [SerializeField] private Image muteVibrationImage;
  [Space]
  [SerializeField] private Sprite muteAudioOn, muteAudioOff;
  [SerializeField] private Sprite muteVibrationOn, muteVibrationOff;
  [Space]
  [SerializeField] private AnimatorStateController settingAnimatorStateController;

  private Spinner _spinner;
  private Fade _fade;
  private bool _settingIsOpened;

  private Action loadNextLevel, loadMainScene;
  public void Initialize(bool mainScene, ref Action newMoneyValue)
  {
    _spinner = FindObjectOfType<Spinner>();
    _fade = FindObjectOfType<Fade>();
    newMoneyValue += UpdateMoneyText;
    _spinner?.Initialize();
    UpdateMoneyText();
    loadNextLevel += NextLevel;
    loadMainScene += MainScene;
    
    _fade?.Initialize(buttonPlay.onClick, buttonGoHome.onClick,mainScene);

    settingAnimatorStateController.Initialize();
    
    muteAudioImage.sprite =
      PlayerPrefs.GetInt(ConstantSetting.instance.saving.AUDIO, 0) == 0 ? muteAudioOn : muteAudioOff;
    muteVibrationImage.sprite =
      PlayerPrefs.GetInt(ConstantSetting.instance.saving.VIBRATION, 0) == 0 ? muteVibrationOn : muteVibrationOff;
    
    buttonSettings.onClick.AddListener(OnClickSetting);
    buttonMuteAudio.onClick.AddListener(OnClickMuteAudio);
    buttonMuteVibration.onClick.AddListener(OnClickMuteVibration);
    buttonGoHome.onClick.AddListener(SetParamInFadeLoadMainScene);
    buttonPlay.onClick.AddListener(SetParamInFadeNextLevel);
  }

  private void OnClickSetting()
  {
    settingAnimatorStateController.PlayAnimation(_settingIsOpened?ConstantSetting.instance.animations.CLOSE:ConstantSetting.instance.animations.OPEN);
    _settingIsOpened = !_settingIsOpened;
  }
  private void OnClickMuteVibration()
  {
    PlayerPrefs.SetInt(ConstantSetting.instance.saving.VIBRATION,
      PlayerPrefs.GetInt(ConstantSetting.instance.saving.VIBRATION, 0) == 0 ? 1 : 0);
    muteVibrationImage.sprite =
      PlayerPrefs.GetInt(ConstantSetting.instance.saving.VIBRATION, 0) == 0 ? muteVibrationOn : muteVibrationOff;
    Taptic.tapticOn = PlayerPrefs.GetInt(ConstantSetting.instance.saving.VIBRATION, 0) == 0;
    if(PlayerPrefs.GetInt(ConstantSetting.instance.saving.VIBRATION, 0) == 0)
      Taptic.Warning();
  }

  private void OnClickMuteAudio()
  {
    PlayerPrefs.SetInt(ConstantSetting.instance.saving.AUDIO,
      PlayerPrefs.GetInt(ConstantSetting.instance.saving.AUDIO, 0) == 0 ? 1 : 0);
    muteAudioImage.sprite =
      PlayerPrefs.GetInt(ConstantSetting.instance.saving.AUDIO, 0) == 0 ? muteAudioOn : muteAudioOff;
  }

  private void SetParamInFadeNextLevel()
  {
    _fade.AddAction(loadNextLevel);
  }
  private void NextLevel()
  {
    LevelLoaderSetting.instance.LoadNextLevel();
  }
  private void MainScene()
  {
    LevelLoaderSetting.instance.LoadMainScene();
  }

  private void UpdateMoneyText()
  {
    moneyText.text = EconomicController.GetShotMoney();
  }
  
  private void SetParamInFadeLoadMainScene()
  {
    _fade.AddAction(loadMainScene);
  }
}
