#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from example_interfaces.msg import Int64
import random

class CreateNode(Node):
    def __init__(self):
        super().__init__("number_publisher")
        self.publisher_= self.create_publisher(Int64,"number",10)
        self.timer_ = self.create_timer(1.0,self.pubnums)
        self.get_logger().info("Started publishing random numbers!")

    def pubnums(self):
        num = Int64()
        num.data=int(random.randint(1,10))
        self.publisher_.publish(num)


def main(args=None):
    rclpy.init(args=args)
    node1 = CreateNode()
    rclpy.spin(node=node1)
    rclpy.shutdown()

if __name__== "__main__":
    main()