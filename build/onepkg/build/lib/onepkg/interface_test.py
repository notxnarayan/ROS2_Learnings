#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from my_interfaces.msg import HdStatus
import random

class CreateNode(Node):
    def __init__(self):
        super().__init__("robot")
        self.status_ = self.create_publisher(HdStatus, 'hdstatuses',10)
        self.timer_ = self.create_timer(1.0, self.send_msg)
    def send_msg(self):
        msg = HdStatus()
        msg.temperature = float(random.randint(10,80))
        on_or_off = random.randint(1,2)
        self.get_logger().info(f"onoroff: {on_or_off}")
        if on_or_off == 1:
            on_or_off = True
        else: on_or_off = False
        msg.debug = "Nothing"
        msg.are_motors_ready = on_or_off
        self.status_.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node1 = CreateNode()
    rclpy.spin(node=node1)
    rclpy.shutdown()

if __name__== "__main__":
    main()