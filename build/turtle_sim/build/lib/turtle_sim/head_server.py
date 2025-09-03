#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from my_interfaces.srv import TurtleHead
import math
from turtlesim.srv import Kill

class CreateNode(Node):
    def __init__(self):
        super().__init__("Head")
        
        self.active_turtles= {}

        self.post_turtle_ = self.create_service(TurtleHead,"post_turtle", self.add_turtle)
        self.nearest_turtle_ = self.create_service(TurtleHead,"get_nearest",
                                                    self.find_nearest)
        
        self.client_ = self.create_client(Kill, "/kill")
        while not self.client_.wait_for_service(1.0):
            self.get_logger().warn("Waiting for server...")

    def add_turtle(self, request: TurtleHead.Request, response: TurtleHead.Response):
        self.active_turtles[request.name] = (request.x,request.y)
        self.get_logger().info(f"dict: {self.active_turtles}")
        response.success = True
        return response
    

    def find_nearest(self, request: TurtleHead.Request, response: TurtleHead.Response):
        if request.x:
            x = request.x
            y = request.y
            nearest_turtle = []
            for key,val in self.active_turtles.items():
                xx,yy = val
                distance = math.sqrt(((x-xx)**2)+((y-yy)**2))
                if nearest_turtle and nearest_turtle[1]>distance:
                    nearest_turtle[0] = key
                    nearest_turtle[1] = distance
                elif not nearest_turtle:
                    nearest_turtle.append(key)
                    nearest_turtle.append(distance)


            x,y = self.active_turtles[nearest_turtle[0]]
            nearest_turtle[0] = str(nearest_turtle[0])
            nearest_turtle[1] = str(x)
            nearest_turtle.append(str(y))

            response.success = True
            response.nearest = nearest_turtle
            return response
        else:
            msg = Kill.Request()
            msg.name = request.name
            self.client_.call_async(msg)
            del self.active_turtles[request.name]
            response.success = True
            return response
    
def main(args=None):
    rclpy.init(args=args)
    node1 = CreateNode()
    rclpy.spin(node=node1)
    rclpy.shutdown()

if __name__== "__main__":
    main()