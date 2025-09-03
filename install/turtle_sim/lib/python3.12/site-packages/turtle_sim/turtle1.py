#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from turtlesim.msg import Pose
from geometry_msgs.msg import Twist
from my_interfaces.srv import TurtleHead
import math
import time

class CreateNode(Node):
    def __init__(self):
        super().__init__("TurtleController")
        self.pose_: Pose = None
        self.mover_ = self.create_publisher(Twist, "/turtle1/cmd_vel", 10)
        self.position_ = self.create_subscription(Pose,
                                                   "/turtle1/pose", self.update_pose, 10)
        
        self.client_ = self.create_client(TurtleHead,"get_nearest")
        while not self.client_.wait_for_service(1.0):
            self.get_logger().warn("Waiting for server...")

        self.timer_ = self.create_timer(0.08,self.controller)

    def update_pose(self,pose: Pose):
        self.pose_ = pose

    def controller(self):
        if self.pose_ is None:
            self.get_logger().warn("Pose not received yet...")
            return
    
        msg = Twist()
        post = TurtleHead.Request()
        post.x = self.pose_.x
        post.y = self.pose_.y
        future = self.client_.call_async(post)
        future.add_done_callback(self.done)

    def done(self,future):
        result = future.result()

        if result.nearest:
            cmd = Twist()
            name = result.nearest[0]
            x  = float(result.nearest[1])
            y = float(result.nearest[2])
            self.get_logger().info(f"Name: {name}, Cords: {x},{y}")
            xx = self.pose_.x
            yy = self.pose_.y

            dist_x = x-xx
            dist_y = y-yy

            distance = math.sqrt(dist_x*dist_x+dist_y*dist_y)
            
            if distance > 0.5:
                cmd.linear.x = 2*distance
                goal_theta = math.atan2(dist_y,dist_x)
                diff = goal_theta-self.pose_.theta

                if diff > math.pi:
                    diff -= 2*math.pi
                elif diff < -math.pi:
                    diff += 2*math.pi

                cmd.angular.z = 6*diff
                self.mover_.publish(cmd)
            else: 
                cmd.linear.x = 0.0
                cmd.angular.z = 0.0


                self.mover_.publish(cmd)
                killmsg = TurtleHead.Request()
                killmsg.name = str(name)
                future = self.client_.call_async(killmsg)
        else:
            pass



def main(args=None):
    rclpy.init(args=args)
    time.sleep(10.0)
    node1 = CreateNode()
    rclpy.spin(node=node1)
    rclpy.shutdown()

if __name__== "__main__":
    main()