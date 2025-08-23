#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from example_interfaces.msg import String

class CreateNode(Node):
    def __init__(self):
        super().__init__("transmitter")
        self.publisher_ = self.create_publisher(String, "Transmitter",10)
        self.timer_ = self.create_timer(0.5,self.publish_msg)
        self.get_logger().info("Transmition started!")

    def publish_msg(self):
        msg1 = String()
        msg1.data = "Hello"
        self.publisher_.publish(msg1)

def main(args=None):
    rclpy.init(args=args)
    node1 = CreateNode()
    rclpy.spin(node=node1)
    rclpy.shutdown()

if __name__== "__main__":
    main()