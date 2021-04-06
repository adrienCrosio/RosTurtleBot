#!/usr/bin/env python

import rospy
import time
import math
from std_msgs.msg import Float32
from kobuki_msgs.msg import Sound, Led

class MinDistHandler:

    def __init__(self):
        rospy.init_node('min_dist_feedback_node',anonymous=True)
        self.pubSound = rospy.Publisher('/mobile_base/commands/sound', Sound, queue_size=10)
        self.pubLed = rospy.Publisher('/mobile_base/commands/led1', Led, queue_size=10)
        self.sub = rospy.Subscriber('/min_dist', Float32, self.callback)
        self.myLed = Led()
        self.myLed.value = 3
        self.min_dist = False
        self.launch_feedback()
        pass

    def launch_feedback(self):
        self._infinite_loop_feedback()
        pass

    def _infinite_loop_feedback(self):
        while not rospy.is_shutdown():
            mySound = Sound()
            mySound.value = 3
            if self.myLed.value == 0:
                self.myLed.value = 3
            else:
                self.myLed.value = 0
            if self.min_dist != False:
                self.pubLed.publish(self.myLed)
                self.pubSound.publish(mySound)
                self.wait_min_dist()
        pass
        
    def wait_min_dist(self):
        rate = rospy.Rate(1/self.min_dist*5)
        rate.sleep()
        pass
    
    def callback(self, data):
        self.min_dist = data.data
        pass

def controller():
    MinDistHandler()
    rospy.spin()
    pass

if __name__ == "__main__":
    try:
        controller()
        pass
    except rospy.ROSInterruptException:
        pass
    pass