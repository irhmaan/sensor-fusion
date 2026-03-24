#include "rclcpp/rclcpp.hpp"
#include "custom_interfaces/msg/battery.hpp"
#include "random_numbers/random_numbers.h"

class BatteryNode : public rclcpp::Node
{
public:
    BatteryNode() : Node("Battery")
    {
        RCLCPP_INFO(this->get_logger(), "Battery Node running.");
        _publisher = this->create_publisher<custom_interfaces::msg::Battery>("battery_data", 10);
        _timer = this->create_wall_timer(std::chrono::seconds(90), std::bind(&BatteryNode::cb_BatteryReading, this));
        battery_data.voltage = 12.0; // Initial voltage, assuming full battery
    }

private:
    rclcpp::Publisher<custom_interfaces::msg::Battery>::SharedPtr _publisher;
    rclcpp::TimerBase::SharedPtr _timer;

    custom_interfaces::msg::Battery battery_data;
    random_numbers::RandomNumberGenerator rng;
    int reading_count = 0; // Counter to simulate decreasing over time

    void cb_BatteryReading()
    {
        // Decrease voltage over time, e.g., by 0.05V per reading
        this->battery_data.voltage -= 0.05;
        // Add some random noise
        this->battery_data.voltage += rng.uniformReal(-0.05, 0.05);
        // Clamp voltage to valid range
        if (battery_data.voltage < 0.0)
            battery_data.voltage = 0.0;
        // Add percentage
        battery_data.percentage = (battery_data.voltage / 12.0) * 100.0;
        if (battery_data.percentage < 0.0)
            battery_data.percentage = 0.0;

        reading_count++;
        _publisher->publish(battery_data);
        // RCLCPP_INFO(this->get_logger(), "Battery Voltage: %.2f V, Percentage: %.2f%%", battery_data.voltage, battery_data.percentage);
    }
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<BatteryNode>());
    rclcpp::shutdown();
    return 0;
}
