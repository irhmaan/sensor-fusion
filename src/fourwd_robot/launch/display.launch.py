from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import Command, LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare

def generate_launch_description():
    pkg_share = FindPackageShare(package='fourwd_robot').find('fourwd_robot')
    
    urdf_model = LaunchConfiguration('urdf_model')
    rviz_config = LaunchConfiguration('rviz_config')

    declare_urdf_cmd = DeclareLaunchArgument(
        name='urdf_model',
        default_value=PathJoinSubstitution([pkg_share, 'urdf', 'fourwd_robot.urdf']),
        description='Absolute path to robot urdf file'
    )

    declare_rviz_cmd = DeclareLaunchArgument(
        name='rviz_config',
        default_value=PathJoinSubstitution([pkg_share, 'rviz', 'view_robot.rviz']),
        description='Absolute path to rviz config file'
    )

    robot_state_publisher_node = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        arguments=[urdf_model]
    )

    joint_state_publisher_gui_node = Node(
        package='joint_state_publisher_gui',
        executable='joint_state_publisher_gui',
        name='joint_state_publisher_gui'
    )

    rviz_node = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        arguments=['-d', rviz_config]
    )

    return LaunchDescription([
        declare_urdf_cmd,
        declare_rviz_cmd,
        robot_state_publisher_node,
        joint_state_publisher_gui_node,
        rviz_node
    ])