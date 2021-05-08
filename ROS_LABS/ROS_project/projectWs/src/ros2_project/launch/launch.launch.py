from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    obj_launch=LaunchDescription()
    spawn_node=Node(
        package="ros2_project",
        executable="spawn_node",
    )
    control_node=Node(
        package="ros2_project",
        executable="control_node",

    )
    turtlesim_node=Node(
        package="turtlesim",
        executable="turtlesim_node",
    )


    obj_launch.add_action(spawn_node)
    obj_launch.add_action(control_node)
    obj_launch.add_action(turtlesim_node)

    return obj_launch


