#!/usr/bin/env python

import rospy
import math
from sensor_msgs.msg import LaserScan
from std_msgs.msg import Float32

class MinDistHandler:

    def __init__(self):
        rospy.init_node('min_dist_node',anonymous=True)
        self.pub = rospy.Publisher('/min_dist', Float32, queue_size=10)
        self.sub = rospy.Subscriber('/scan', LaserScan, self.callback)
        pass

    def publish(self, sound):
        pass
    
    def callback(self, data):
        range_min = data.range_max
        for actual_range in data.ranges:
            if actual_range <= range_min and math.isnan(actual_range) == False:
                range_min = actual_range
        self.pub.publish(range_min)
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