#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from example_interfaces.srv import AddTwoInts

class CreateNode(Node):
    def __init__(self):
        super().__init__("server")
        self.server_ = self.create_service(AddTwoInts,"add", self.add2ints)
        self.get_logger().info("Server Initiated")

    def add2ints(self,request: AddTwoInts.Request, response: AddTwoInts.Response):
        response.sum = request.a + request.b
        self.get_logger().info(f"{str(request.a)} + {str(request.b)} = {str(response.sum)}")
        return response

def main(args=None):
    rclpy.init(args=args)
    node1 = CreateNode()
    rclpy.spin(node=node1)
    rclpy.shutdown()

if __name__== "__main__":
    main()