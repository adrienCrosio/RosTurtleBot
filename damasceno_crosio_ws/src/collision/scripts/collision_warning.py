#!/usr/bin/env python

import rospy
from kobuki_msgs.msg import BumperEvent, Sound

def callback(data):
    mySound = Sound()
    mySound.value = 0
    pub = rospy.Publisher('/mobile_base/events,sound', Sound, queue_size=10)
    pub.publish(mySound)
    pass

def controller():
    rospy.init_node('bumper_sound',anonymous=True)
    rospy.Subscriber('/mobile_base/events/bumper', BumperEvent, callback)
    rospy.spin()
    pass

if __name__ == "__main__":
    try:
        controller()
        pass
    except rospy.ROSInterruptException:
        pass
    pass