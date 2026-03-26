#include "rclcpp/rclcpp.hpp"
#include "custom_interfaces/msg/imu.hpp"
#include "random_numbers/random_numbers.h"

class IMUNode : public rclcpp::Node
{
public:
    IMUNode() : Node("imu")
    {
        RCLCPP_INFO(this->get_logger(), "Simulating IMU data");
        _pub = this->create_publisher<custom_interfaces::msg::IMU>("imu_data", 10);
        _timer = this->create_wall_timer(std::chrono::milliseconds(1000), std::bind(&IMUNode::cb_IMUData, this));
    }

private:
    custom_interfaces::msg::IMU imu;
    rclcpp::Publisher<custom_interfaces::msg::IMU>::SharedPtr _pub;
    rclcpp::TimerBase::SharedPtr _timer;
    random_numbers::RandomNumberGenerator rng;

    void cb_IMUData()
    {
        // Accelerometer ~ gravity on Z + small noise
        imu.accel[0] = rng.gaussian(0.0, 0.15);
        imu.accel[1] = rng.gaussian(0.0, 0.15);
        imu.accel[2] = rng.gaussian(9.81, 0.12);

        // Gyroscope (angular velocity)
        imu.gyro[0] = rng.gaussian(0.0, 0.08);
        imu.gyro[1] = rng.gaussian(0.0, 0.08);
        imu.gyro[2] = rng.gaussian(0.0, 0.08);

        // Magnetometer (earth magnetic field simulation)
        imu.mag[0] = rng.gaussian(20.0, 8.0);
        imu.mag[1] = rng.gaussian(15.0, 7.0);
        imu.mag[2] = rng.gaussian(-40.0, 6.0);

        _pub->publish(imu);
    }
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<IMUNode>());
    rclcpp::shutdown();
    return 0;
}