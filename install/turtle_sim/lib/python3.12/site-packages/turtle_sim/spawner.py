#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from turtlesim.srv import Spawn
from random import uniform
from my_interfaces.srv import TurtleHead

class CreateNode(Node):
    def __init__(self):
        super().__init__("Spawner")
        self.number_ = 2
        self.client_ = self.create_client(Spawn, "spawn")
        while not self.client_.wait_for_service(1.0):
            self.get_logger().warn("Waiting for server...")

        self.client_post_ = self.create_client(TurtleHead, "post_turtle")
        while not self.client_post_.wait_for_service(1.0):
            self.get_logger().warn("Waiting for server...")

        self.timer_ = self.create_timer(1.0,self.spawn)

    def spawn(self):
        msg = Spawn.Request()
        postmsg = TurtleHead.Request()

        x = uniform(1.0,10.0)
        y = uniform(1.0,10.0)
        tta = uniform(0.0, 360.0)
        msg.x = x
        postmsg.x = x
        msg.y = y
        postmsg.y = y
        msg.theta = tta
        msg.name = "Turtle" + str(self.number_)
        postmsg.name = msg.name
        self.number_+=1

        self.client_.call_async(msg)
        self.client_post_.call_async(postmsg)
        self.get_logger().info("Published Turtle successfully!")

def main(args=None):
    rclpy.init(args=args)
    node1 = CreateNode()
    rclpy.spin(node=node1)
    rclpy.shutdown()

if __name__== "__main__":
    main()