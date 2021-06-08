from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package="filter_pcl",
            executable="filter_pcl_node",
            name="filter_pcl_node",
            output="screen",
            emulate_tty=True,
            parameters=[
                {"pcl_boundaries": "-0.3 0.3 -0.2 0.1 0 0.7"},
                {"ip_Topic_name": "/intel_realsense_d435_depth/points"},
                {"op_Topic_name": "/intel/cropped"},
            ]
        ),
       Node(
            package="filter_pcl",
            executable="perception_lab2",
            name="perception_lab2",
            output="screen",
            emulate_tty=True,
        )      
    ])
