using UnityEngine;

public class Spinner : MonoBehaviour
{
    [SerializeField] private Transform parentPartsCircle;

    [System.Serializable]
    public struct SpinnerInStartUISettings
    {
        public GameObject prefabPartCircle;
        public Color[] colorsPart;
        public Color[] colorsQuestions;
    }

    public void Initialize()
    { SpawnParts(); }

#if UNITY_EDITOR
    private void Update()
    {
        if (GlobalGameSettings.instance.DebugMode)
        { SpawnParts(); }
    }
#endif

    private void SpawnParts()
    {
        while (parentPartsCircle.childCount != 0)
        { Destroy(parentPartsCircle.GetChild(0).gameObject); }

        for (var i = 0; i < GlobalGameSettings.instance.countSegments; i++)
        {
            var newPart = Instantiate(GlobalGameSettings.instance.uiSpinnerSettings.prefabPartCircle, parentPartsCircle) .GetComponent<PartCircle>();
            newPart.Initialize(GlobalGameSettings.instance.uiSpinnerSettings.colorsPart[ i % GlobalGameSettings.instance.uiSpinnerSettings.colorsPart.Length],
                GlobalGameSettings.instance.uiSpinnerSettings.colorsQuestions[i % GlobalGameSettings.instance.uiSpinnerSettings.colorsQuestions.Length],
                (360f / GlobalGameSettings.instance.countSegments)*i);
        }
    }
}
