using System.Collections;
using System.Collections.Generic;
using Unity.Notifications.Android;
using UnityEngine;

public class SendNotifications : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        var channel = new AndroidNotificationChannel()
        {
            Id = "channel_id",
            Name = "Default Channel",
            Importance = Importance.Default,
            Description = "Generic notifications",
        };
        AndroidNotificationCenter.RegisterNotificationChannel(channel);
    }

    public void SendLocalNotifications(string title, string msg, bool reward)
    {
        if (reward)
        {
            var notification = new AndroidNotification()
            {
                Title = title,
                Text = msg,
                LargeIcon = "icon_0",
                SmallIcon = "icon_1",
                FireTime = System.DateTime.Now.AddHours(24)
            };

            AndroidNotificationCenter.SendNotification(notification, "channel_id");
        }
        else
        {
            var notification = new AndroidNotification()
            {
                Title = title,
                Text = msg,
                LargeIcon = "icon_0",
                SmallIcon = "icon_1",
                FireTime = System.DateTime.Now.AddHours(3)
            };

            AndroidNotificationCenter.SendNotification(notification, "channel_id");
        }
    }
}
