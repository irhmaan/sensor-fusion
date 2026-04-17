from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, TimerAction
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
from launch.substitutions import PathJoinSubstitution, Command
from launch.launch_description_sources import PythonLaunchDescriptionSource

def generate_launch_description():

    xacro_file = PathJoinSubstitution([
        FindPackageShare('fourwd_robot'),
        'urdf',
        'fourwd_robot.xacro'
    ])

    robot_description = Command(['xacro ', xacro_file])

    return LaunchDescription([

        # 1. Robot State Publisher
        Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            output='screen',
            parameters=[{'robot_description': robot_description}]
        ),

        # 2. Start Gazebo FIRST
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource([
                FindPackageShare('ros_gz_sim'),
                '/launch/gz_sim.launch.py'
            ]),
            launch_arguments={'gz_args': '-r empty.sdf'}.items()
        ),

        # 3. Spawn robot AFTER Gazebo starts
        TimerAction(
            period=2.0,
            actions=[
                Node(
                    package='ros_gz_sim',
                    executable='create',
                    arguments=[
                        '-topic', '/robot_description',
                        '-name', 'fourwd_robot',
                        '-x', '0.0',
                        '-y', '0.0',
                        '-z', '0.2'
                    ],
                    output='screen'
                )
            ]
        ),

        # 4. Bridge topics
        Node(
            package='ros_gz_bridge',
            executable='parameter_bridge',
            arguments=[
                '/scan@sensor_msgs/msg/LaserScan@gz.msgs.LaserScan',
                '/imu/data@sensor_msgs/msg/Imu@gz.msgs.IMU',
                '/clock@rosgraph_msgs/msg/Clock@gz.msgs.Clock',
            ],
            output='screen'
        ),

        # 5. Spawn controllers AFTER Gazebo + ros2_control is ready
        TimerAction(
            period=6.0,
            actions=[

                Node(
                    package='controller_manager',
                    executable='spawner',
                    arguments=[
                        'joint_state_broadcaster',
                        '--controller-manager', '/controller_manager'
                    ],
                    output='screen'
                ),

                Node(
                    package='controller_manager',
                    executable='spawner',
                    arguments=[
                        'diff_drive_controller',
                        '--controller-manager', '/controller_manager'
                    ],
                    output='screen'
                ),
            ]
        ),
    ])
