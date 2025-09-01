#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from my_interfaces.srv import SetLED
import random
import time

class CreateNode(Node):
    def __init__(self):
        super().__init__("battery")
        self.battery_ = 100
        self.client_ = self.create_client(SetLED, "set_led")
        while not self.client_.wait_for_service(1.0):
            self.get_logger().warn("Waiting for server...")
        self.timer_ = self.create_timer(1.0,self.callrequest)


    def callrequest(self):
        request = SetLED.Request()
        self.battery_ -= 5
        if self.battery_ >= 90:
            request.led_val = [1,0,0]
        elif self.battery_ >= 40 and self.battery_ <90:
            request.led_val = [1,1,0]
        elif self.battery_ >= 0 and self.battery_ <40:
            if self.battery_ <=0:
                self.battery_ = 100
            request.led_val = [1,1,1]
        
        future = self.client_.call_async(request)
        #rclpy.spin_until_future_complete(self,future)
        future.add_done_callback(self.done)


    def done(self,future):
        response = future.result()
        self.get_logger().info(f"Response: {response.success}")


def main(args=None):
    rclpy.init(args=args)
    node1 = CreateNode()
    rclpy.spin(node=node1)
    rclpy.shutdown()

if __name__== "__main__":
    main()