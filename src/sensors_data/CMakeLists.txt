cmake_minimum_required(VERSION 3.8)
project(sensors_data)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(custom_interfaces REQUIRED)
find_package(random_numbers REQUIRED)



# if(BUILD_TESTING)
#   find_package(ament_lint_auto REQUIRED)
#   # the following line skips the linter which checks for copyrights
#   # comment the line when a copyright and license is added to all source files
#   set(ament_cmake_copyright_FOUND TRUE)
#   # the following line skips cpplint (only works in a git repo)
#   # comment the line when this package is in a git repo and when
#   # a copyright and license is added to all source files
#   set(ament_cmake_cpplint_FOUND TRUE)
#   ament_lint_auto_find_test_dependencies()
# endif()

add_executable(odometry_node src/odometry.cpp)
ament_target_dependencies(odometry_node rclcpp custom_interfaces random_numbers)

add_executable(battery_node src/battery.cpp)
ament_target_dependencies(battery_node rclcpp custom_interfaces random_numbers)

add_executable(distance_sensors_node src/distance_sensors.cpp)
ament_target_dependencies(distance_sensors_node rclcpp custom_interfaces random_numbers)

add_executable(environment_node src/environment.cpp)
ament_target_dependencies(environment_node rclcpp custom_interfaces random_numbers)

add_executable(imu_node src/imu.cpp)
ament_target_dependencies(imu_node rclcpp custom_interfaces random_numbers)

add_executable(motors_node src/motors.cpp)
ament_target_dependencies(motors_node rclcpp custom_interfaces random_numbers)

add_executable(lidar_node src/lidar.cpp)
ament_target_dependencies(lidar_node rclcpp custom_interfaces random_numbers)

add_executable(whl_encoders_node src/whl_encoders.cpp)
ament_target_dependencies(whl_encoders_node rclcpp custom_interfaces random_numbers)

install(TARGETS 
odometry_node
battery_node
distance_sensors_node
environment_node
imu_node
lidar_node
motors_node
whl_encoders_node
DESTINATION lib/${PROJECT_NAME}
)

ament_package()
