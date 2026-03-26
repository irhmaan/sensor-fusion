from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():   
    ld = LaunchDescription()

    odometry_node = Node(
        package="sensors_data",                    
        executable="odometry_node", 
        name="odometry_node"
    )

    whl_encoders_node = Node(
        package="sensors_data",                   
        executable="whl_encoders_node", 
        name="whl_encoders_node"
    )

    distance_node = Node(
        package="sensors_data",                    
        executable="distance_sensors_node", 
        name="distance_node"
    )

    battery_node = Node(
        package="sensors_data",                    
        executable="battery_node", 
        name="battery_node"
    )

    env_node = Node(
        package="sensors_data",                    
        executable="environment_node", 
        name="env_node"
    )


    imu_node = Node(
        package="sensors_data",                    
        executable="imu_node", 
        name="imu_node"
    )

    lidar_node = Node(
        package="sensors_data",                    
        executable="lidar_node", 
        name="lidar_node"
    )


    motors_node = Node(
        package="sensors_data",                    
        executable="motors_node", 
        name="motors_node"
    )

    ld.add_action(odometry_node)
    ld.add_action(whl_encoders_node)
    ld.add_action(distance_node)
    ld.add_action(motors_node)
    ld.add_action(imu_node)
    ld.add_action(battery_node)
    ld.add_action(env_node)
    ld.add_action(lidar_node)

    return ld