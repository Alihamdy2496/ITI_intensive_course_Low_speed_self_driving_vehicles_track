from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    obj_launch=LaunchDescription()
    publisher_node=Node(
        package="iti_lab3",
        executable="publisher_node"
    )
    receiver_node=Node(
        package="iti_lab3",
        executable="receiver_node"

    )
    reset_node=Node(
        package="iti_lab3",
        executable="reset_node"
    )


    obj_launch.add_action(publisher_node)
    obj_launch.add_action(receiver_node)
    obj_launch.add_action(reset_node)

    return obj_launch


