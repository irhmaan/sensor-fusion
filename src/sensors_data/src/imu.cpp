#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/imu.hpp"
#include "random_numbers/random_numbers.h"

class IMUNode : public rclcpp::Node
{
public:
    IMUNode() : Node("imu")
    {
        RCLCPP_INFO(this->get_logger(), "Simulating IMU data");
        _pub = this->create_publisher<sensor_msgs::msg::Imu>("imu_data", 10);
        _timer = this->create_wall_timer(std::chrono::milliseconds(1000), std::bind(&IMUNode::cb_IMUData, this));
    }

private:
    rclcpp::Publisher<sensor_msgs::msg::Imu>::SharedPtr _pub;
    rclcpp::TimerBase::SharedPtr _timer;
    random_numbers::RandomNumberGenerator rng;
    sensor_msgs::msg::Imu imu_msg;

    void cb_IMUData()
    {

        imu_msg.header.stamp = this->get_clock()->now();
        imu_msg.header.frame_id = "imu_link";

        // ----------------------------
        // Linear Acceleration (m/s^2)
        // ----------------------------
        imu_msg.linear_acceleration.x = rng.gaussian(0.0, 0.15);
        imu_msg.linear_acceleration.y = rng.gaussian(0.0, 0.15);
        imu_msg.linear_acceleration.z = rng.gaussian(9.81, 0.12);

        // ----------------------------
        // Angular Velocity (rad/s)
        // ----------------------------
        imu_msg.angular_velocity.x = rng.gaussian(0.0, 0.08);
        imu_msg.angular_velocity.y = rng.gaussian(0.0, 0.08);
        imu_msg.angular_velocity.z = rng.gaussian(0.0, 0.08);

        // ----------------------------
        // Orientation (Quaternion)
        // ----------------------------
        // For now → assuming robot is levelled no rotation
        imu_msg.orientation.x = 0.0;
        imu_msg.orientation.y = 0.0;
        imu_msg.orientation.z = 0.0;
        imu_msg.orientation.w = 1.0;

        // ----------------------------
        // Covariances
        // ----------------------------
        imu_msg.linear_acceleration_covariance[0] = 0.02;
        imu_msg.angular_velocity_covariance[0] = 0.02;
        imu_msg.orientation_covariance[0] = 0.01;

        _pub->publish(imu_msg);
    }
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<IMUNode>());
    rclcpp::shutdown();
    return 0;
}