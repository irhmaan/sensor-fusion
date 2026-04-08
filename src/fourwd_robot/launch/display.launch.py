from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution, Command , FileContent
from launch_ros.substitutions import FindPackageShare
from launch_ros.actions import Node
from launch_ros.parameter_descriptions import ParameterValue



def generate_launch_description():

    # xacro path
    xacro_path = PathJoinSubstitution([
        FindPackageShare('fourwd_robot'),
        'urdf',
        'fourwd_robot.xacro'
    ])

    #rviz path
    rviz_config_path = PathJoinSubstitution([
    FindPackageShare('fourwd_robot'),
    'rviz',
    'fourwd_robot.rviz'
    ])

    # Launch arguments
    gui_arg = DeclareLaunchArgument(
        name='gui',
        default_value='true',
        choices=['true', 'false'],
        description='Enable joint_state_publisher_gui'
    )

    model_arg = DeclareLaunchArgument(
        name='model',
        default_value=xacro_path,
        description='Path to URDF file'
    )

    # robot_description - to be used when using urdf - raw urdf can be passed.
    # But in case of Xacro, need to parse the file using xacro command provided the file path.
    # robot_description = {
    #     'robot_description': ParameterValue(
    #         FileContent(LaunchConfiguration('model')),
    #         value_type=str
    #     )
    # }

    return LaunchDescription([

        gui_arg,
        model_arg,

        # Robot State Publisher
        Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            name='robot_state_publisher',
            output='screen',
            parameters=[{
                'robot_description': Command(['xacro ', xacro_path])
                }]
        ),
        

        # Joint State Publisher GUI
        Node(
            package='joint_state_publisher_gui',
            executable='joint_state_publisher_gui',
            name='joint_state_publisher_gui'
        ),
        # Rviz loaded with fourwd.rviz   
        Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        arguments=['-d', rviz_config_path],
        output='screen'
    )
    ])