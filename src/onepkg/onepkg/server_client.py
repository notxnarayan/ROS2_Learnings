#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from example_interfaces.srv import AddTwoInts
import random
import time

class CreateNode(Node):
    def __init__(self):
        super().__init__("test")
        self.client_ = self.create_client(AddTwoInts, "add")
        while not self.client_.wait_for_service(1.0):
            self.get_logger().warn("Waiting for server...")
        self.timer_ = self.create_timer(1.0,self.callrequest)


    def callrequest(self):
        an = int(random.randint(1,50))
        bn = int(random.randint(1,50))
        request = AddTwoInts.Request()
        request.a = an
        request.b = bn
        future = self.client_.call_async(request)
        #rclpy.spin_until_future_complete(self,future)
        self.get_logger().info(f"{an} + {bn}")
        future.add_done_callback(self.done)


    def done(self,future):
        response = future.result()
        self.get_logger().info(f"Answer: {response.sum}")


def main(args=None):
    rclpy.init(args=args)
    node1 = CreateNode()
    rclpy.spin(node=node1)
    rclpy.shutdown()

if __name__== "__main__":
    main()