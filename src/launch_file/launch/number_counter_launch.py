from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os

def generate_launch_description():
    ld = LaunchDescription()

    param_config = os.path.join(get_package_share_directory("launch_file"),
                                "config","number_params.yaml")

    number_publisher = Node(
        package="TransNum",
        executable="number_publisher",
        name="SKIBIDI",
        remappings=[("/number","/my_number")],
        # parameters=[
        #     {"time_period": 5.0},
        #     {"min_num": 0},
        #     {"max_num": 1},
        # ]
        parameters=[param_config]

    )
    
    two_way = Node(
        package="TransNum",
        executable="two_way",
        name="remapped",
        remappings=[("/number","/my_number")],
    )


    ld.add_action(number_publisher)
    ld.add_action(two_way)

    return ld
