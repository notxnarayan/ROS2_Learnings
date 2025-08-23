#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

class CreateNode(Node):
    def __init__(self):
        super().__init__("test")
        self.counter_ = 0
        self.get_logger().info("Hello World")
        self.create_timer(1.0,self.timer_test)

    def timer_test(self):
        self.get_logger().info("Hi!" + str(self.counter_))
        self.counter_+=1

def main(args=None):
    rclpy.init(args=args)
    node1 = CreateNode()
    rclpy.spin(node=node1)
    rclpy.shutdown()

if __name__== "__main__":
    main()