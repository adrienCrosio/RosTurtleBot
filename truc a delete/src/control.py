#!/usr/bin/env python

import rospy
from sensor_msgs.msg import Joy
from std_msgs.msg import Empty,Bool
from geometry_msgs.msg import Twist
from mini_projet.srv import mode_service

mode_loisir = True

def callback(data):
    global mode_loisir
    pub = rospy.Publisher('/bebop/cmd_vel', Twist, queue_size=10)

    myTwist = Twist()
    if mode_loisir == True
        myTwist.linear.x = data.axes[1]
        myTwist.linear.y = data.axes[0]

        rotation = data.axes[3]
        myTwist.angular.z = rotation

        buttonL1 = data.buttons[4]
        buttonR1 = data.buttons[5]
        if buttonL1 != buttonR1:
            if buttonL1 == 1:
                myTwist.linear.z = 1
            elif buttonR1 == 1:
                myTwist.linear.z = -1
    else:
        myTwist.angular.z = 0.5

    pressJoyTakeOff = data.buttons[6]
    pressJoyLand = data.buttons[7]
    if pressJoyTakeOff == 1:
        rospy.Publisher('/bebop/takeoff', Empty, queue_size=10).publish()
        rospy.loginfo('takeoff')
    if pressJoyLand == 1:
        rospy.Publisher('/bebop/land', Empty, queue_size=10).publish()
        rospy.loginfo('land')

    pub.publish(myTwist)
    pass

def setLoisirMode() :
    global mode_loisir
    mode_loisir = True
    return True

def setSurveillanceMode() :
    global mode_loisir
    mode_loisir = False
    return True

def controller():
    rospy.init_node('control',anonymous=True)
    rospy.Subscriber('/joy', Joy, callback)
    rospy.Service('loisir_mode', mode_service, setLoisirMode)
    rospy.Service('surveillance_mode', mode_service, setSurveillanceMode)
    rospy.spin()
    pass

if __name__ == "__main__":
    try:
        controller()
        pass
    except rospy.ROSInterruptException:
        pass
    pass