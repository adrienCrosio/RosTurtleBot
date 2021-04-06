#!/usr/bin/env python

import rospy
from std_msgs.msg import Float64
from bebop_msgs.msg import Ardrone3PilotingStatePositionChanged


def callback(data):
    pub = rospy.Publisher('/my_altitude',Float64, queue_size=10)
    alt_str = rospy.get_caller_id() + 'Altitude: '+ str(data.altitude)
    rospy.loginfo(alt_str)
    pub.publish(data.altitude)
    pass

def subscribe_alt():
    rospy.init_node('altitude',anonymous=True)
    rospy.Subscriber('/bebop/states/ardrone3/PilotingState/PositionChanged', Ardrone3PilotingStatePositionChanged, callback)
    rospy.spin()
    pass

if __name__ == "__main__":
    try:
        subscribe_alt()
        pass
    except rospy.ROSInterruptException:
        pass
    pass