from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    obj_launch=LaunchDescription()
    node=Node(
        package="iti_lab_9",
        executable="node",

    )
    turtlesim_node=Node(
        package="turtlesim",
        executable="turtlesim_node",
    )


    obj_launch.add_action(node)
    obj_launch.add_action(turtlesim_node)

    return obj_launch
