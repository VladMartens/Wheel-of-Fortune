using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PartCircle : MonoBehaviour
{
    [SerializeField] private Image bgImage;
    [SerializeField] private Image questionImage;
    [SerializeField] private Transform questionParent;
    [SerializeField] private Transform frontStick;
    private Transform _transform;

    public void Initialize(Color bgColor,Color questionColor, float angle)
    {
        _transform = transform;
        _transform.localEulerAngles = Vector3.forward*angle;

        bgImage.color = bgColor;
        bgImage.fillAmount = 1f / GlobalGameSettings.instance.countSegments;

        var angleZ = (360f / GlobalGameSettings.instance.countSegments);
        
        questionImage.color = questionColor;
        questionParent.localEulerAngles = Vector3.forward * (angleZ/2);

        frontStick.localEulerAngles = Vector3.forward * angleZ;
    }
}
