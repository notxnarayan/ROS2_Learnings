#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from example_interfaces.msg import Int64
import random
from example_interfaces.srv import SetBool
class CreateNode(Node):
    def __init__(self):
        self.count_=0
        super().__init__("number_counter")
        self.publisher_= self.create_publisher(Int64,"number_count",10)
        self.subscriber_ = self.create_subscription(Int64, "number",self.readmsg,10)
        self.get_logger().info("Started publishing random numbers!")
        self.server_ = self.create_service(SetBool,"clear", self.clearnum)
        self.get_logger().info("Started Server...")

    def clearnum(self,request: SetBool.Request, response: SetBool.Response):
        if request.data:
            self.count_ = 0
            self.get_logger().info("Count has been cleared....")
            response.success = True
            response.message = 'Count Cleared'
        else:
            response.success = True
            response.message = 'nil'
        return response
    
    def pubcount(self):
        num = Int64()
        num.data=int(self.count_)
        self.publisher_.publish(num)

    def readmsg(self,msg: Int64):
        self.get_logger().info(str(msg.data))
        self.count_+=int(msg.data)
        self.pubcount()


def main(args=None):
    rclpy.init(args=args)
    node1 = CreateNode()
    rclpy.spin(node=node1)
    rclpy.shutdown()

if __name__== "__main__":
    main()