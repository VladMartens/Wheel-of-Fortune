using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class EconomicController
{

    private static string[] shortName = new[]
    {
        "",
        "K",
        "M",
        "B",
        "T",
        "Q"
    };
    
    private static int Money
    {
        get => PlayerPrefs.GetInt(ConstantSetting.instance.saving.MONEY);
        set => PlayerPrefs.SetInt(ConstantSetting.instance.saving.MONEY, value);
    }
    
    public static string ConvertShotMoney(float money)
    {
        if (money == 0) return "0";

        var i = 0;
        while (i + 1 < shortName.Length && money >= 1000)
        { money /= 1000; i++; }

        return money.ToString("#.##")+shortName[i];
    }
    
    public static string GetShotMoney()
    {
        return ConvertShotMoney(Money);
    }
    
    public static int GetMoney()
    {
        return Money;
    }
    public static void SetMoney(int value)
    {
        Money+=value;
    }
}
