using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Initializer : MonoBehaviour
{
    private CanvasController _canvasController;
    private WheelSpin _wheelSpin;
    private Action _onUpdateMoneyValue;
    private void Awake()
    {
        Application.targetFrameRate = 60;
        
        _canvasController = FindObjectOfType<CanvasController>();
        _wheelSpin = FindObjectOfType<WheelSpin>();
        
        _canvasController.Initialize(UnityEngine.SceneManagement.SceneManager.GetActiveScene().name.Contains("Main"),ref _onUpdateMoneyValue);
        _wheelSpin?.Initialize(ref _onUpdateMoneyValue);
    }
}
