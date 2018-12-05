#if !UNITY_IOS
using System;
using System.Collections.Generic;
using System.Linq;

using UnityEngine.Windows.Speech;


public class KeywordActionListener
{

    private KeywordRecognizer keywordRecognizer;
    private Dictionary<string, Action> keywordActionPairs;

    public KeywordActionListener(Dictionary<string, Action> keywordActionPairs)
    {
        //if (!Utility.IsSpeechRecognitionSupported()) { return; }
        if (keywordActionPairs.Count == 0)
            return;
        this.keywordActionPairs = new Dictionary<string, Action>(keywordActionPairs);
        keywordRecognizer = new KeywordRecognizer(this.keywordActionPairs.Keys.ToArray());
        keywordRecognizer.OnPhraseRecognized += KeywordRecognizer_OnPhraseRecognized;
        keywordRecognizer.Start();

    }

    private void KeywordRecognizer_OnPhraseRecognized(PhraseRecognizedEventArgs args)
    {
        Action keywordAction;
        if (keywordActionPairs.TryGetValue(args.text, out keywordAction))
        {
            keywordAction.Invoke();
        }

    }

    public void StopListener()
    {
        keywordRecognizer.Stop();

    }

}


#endif