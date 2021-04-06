#!/usr/bin/env python

import rospy
from kobuki_msgs.msg import BumperEvent,Sound

class PubSoundFromBumber:

    def __init__(self):
        rospy.init_node('bumper_sound_node',anonymous=True)
        #toujours declarer le publisher avant le subcriber sinon le callback peut se lancer sans connaitre ou il vas
        self.pub = rospy.Publisher('/mobile_base/commands/sound', Sound, queue_size=10)
        self.sub = rospy.Subscriber('/mobile_base/events/bumper', BumperEvent, self.callback)
        pass

    def publish(self, sound):
        self.pub.publish(sound)
        pass
    
    def callback(self, data):
        mySound = Sound()
        if data.state == 1:
            mySound.value = 0
            self.publish(mySound)
        else:
            mySound.value = 1
            self.publish(mySound)
        pass

def controller():
    PubSoundFromBumber()
    rospy.spin()
    pass

if __name__ == "__main__":
    try:
        controller()
        pass
    except rospy.ROSInterruptException:
        pass
    pass