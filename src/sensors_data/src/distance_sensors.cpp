#include "rclcpp/rclcpp.hpp"
#include "custom_interfaces/msg/distance_sensors.hpp"
#include "random_numbers/random_numbers.h"

class DistanceNode : public rclcpp::Node
{
public:
    DistanceNode() : Node("Distance")
    {
        RCLCPP_INFO(this->get_logger(), "Simulating Distance sensors data !");

        _pub = this->create_publisher<custom_interfaces::msg::DistanceSensors>("distance_data", 10);
        _timer = this->create_wall_timer(std::chrono::milliseconds(900), std::bind(&DistanceNode::cb_DistanceSensorsData, this));
    }

private:
    custom_interfaces::msg::DistanceSensors sensors;
    random_numbers::RandomNumberGenerator rng;
    rclcpp::Publisher<custom_interfaces::msg::DistanceSensors>::SharedPtr _pub;
    rclcpp::TimerBase::SharedPtr _timer;

    void cb_DistanceSensorsData()
    {
        sensors.ultrasonic_front = rng.uniformReal(0.05, 4.0);
        sensors.ultrasonic_left = rng.uniformReal(0.05, 4.0);
        sensors.ultrasonic_right = rng.uniformReal(0.05, 4.0);
        sensors.ir_front = rng.uniformReal(0.02, 1.2);

        _pub->publish(sensors);
    }
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<DistanceNode>());
    rclcpp::shutdown();
    return 0;
}