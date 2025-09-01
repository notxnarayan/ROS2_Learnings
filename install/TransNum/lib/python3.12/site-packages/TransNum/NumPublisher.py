#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from example_interfaces.msg import Int64
import random

class CreateNode(Node):
    def __init__(self):
        super().__init__("number_publisher")
        self.declare_parameter("time_period", 1.0)
        self.declare_parameter("max_num", 10)
        self.declare_parameter("min_num", 0)

        self.time_period_ = self.get_parameter("time_period").value
        self.max_num_ = self.get_parameter("max_num").value
        self.min_num_ = self.get_parameter("min_num").value
        
        self.get_logger().info(f"Time Period: {self.time_period_}, MaxNum: {self.max_num_}, MinNum: {self.min_num_}")

        self.publisher_= self.create_publisher(Int64,"number",10)
        self.timer_ = self.create_timer(self.time_period_,self.pubnums)
        self.get_logger().info("Started publishing random numbers!")

    def pubnums(self):
        num = Int64()
        num.data=int(random.randint(self.min_num_,self.max_num_))
        self.publisher_.publish(num)


def main(args=None):
    rclpy.init(args=args)
    node1 = CreateNode()
    rclpy.spin(node=node1)
    rclpy.shutdown()

if __name__== "__main__":
    main()