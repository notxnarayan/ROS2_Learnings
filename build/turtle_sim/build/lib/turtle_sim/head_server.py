#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from my_interfaces.srv import TurtleHead
class CreateNode(Node):
    def __init__(self):
        super().__init__("Head")
        
        self.active_turtles= {}

        self.post_turtle_ = self.create_service(TurtleHead,"post_turtle", self.add_turtle)

    def add_turtle(self, request: TurtleHead.Request, response: TurtleHead.Response):
        self.active_turtles[request.name] = (request.x,request.y)
        self.get_logger().info(f"dict: {self.active_turtles}")
        response.success = True
        return response

def main(args=None):
    rclpy.init(args=args)
    node1 = CreateNode()
    rclpy.spin(node=node1)
    rclpy.shutdown()

if __name__== "__main__":
    main()