using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NotificationMessage : MonoBehaviour
{
    [Header("Mensagens")]
    public string[] titles;
    public string[] lettersNotification;
    public string[] rewardNotification;

    public SendNotifications sn;

    private int _language;

    private void Start()
    {
        sn = GetComponent<SendNotifications>();
        SendNotification();
    }

    public void SendNotification()
    {
        _language = Translate.idioma;

        if(_language == 1)
        {
            sn.SendLocalNotifications(titles[0], lettersNotification[0], false);
        }
        else
        {
            sn.SendLocalNotifications(titles[1], lettersNotification[1], false);
        }
    }

    public void SendNotificationDailyReward()
    {
        _language = Translate.idioma;

        if (_language == 1)
        {
            sn.SendLocalNotifications(titles[2], rewardNotification[0], true);
        }
        else
        {
            sn.SendLocalNotifications(titles[3], rewardNotification[1], true);
        }
    }
}
