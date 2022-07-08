using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SingletonScriptableObject<T> : ScriptableObject where T: SingletonScriptableObject<T>
{
   private static T _instance;
   public static T instance
   {
      get
      {
         if (_instance == null)
         {
            var load = Resources.LoadAll<T>("_GameSettings/");
            if(load.Length==0 || load.Length>1)
               throw new Exception("Not Found Scriptable Object in path Assets/Resources/_GameSettings/...");
            _instance = load[0];
         }

         if (_instance == null)
            throw new Exception("Error Found");
         
         return _instance;
      }
   }
}
