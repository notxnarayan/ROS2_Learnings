#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from my_interfaces.msg import LEDstatus
from my_interfaces.srv import SetLED

class CreateNode(Node):
    def __init__(self):
        super().__init__("led_panel")
        self.declare_parameter("starting_config", [0,0,0])
        self.ledx_status = self.get_parameter("starting_config").value
        self.publisher_ = self.create_publisher(LEDstatus, "led_panel",10)
        self.server_ = self.create_service(SetLED,"set_led", self.add2ints)
        self.timer_ = self.create_timer(0.5,self.publish_msg)
        self.get_logger().info("Transmition started!")
        self.get_logger().info(f"Server Initiated with starting lights: {self.ledx_status}")

    def publish_msg(self):
        msg1 = LEDstatus()
        msg1.ledx_status = self.ledx_status
        self.publisher_.publish(msg1)


    def add2ints(self,request: SetLED.Request, response: SetLED.Response):
        response.success = True
        self.get_logger().info(f"Values: {request}")
        self.ledx_status = request.led_val
        return response

def main(args=None):
    rclpy.init(args=args)
    node1 = CreateNode()
    rclpy.spin(node=node1)
    rclpy.shutdown()

if __name__== "__main__":
    main()