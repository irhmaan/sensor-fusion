#include "rclcpp/rclcpp.hpp"
#include "custom_interfaces/msg/encoder.hpp"
#include "random_numbers/random_numbers.h"

class WheelEncodersNode : public rclcpp::Node
{
public:
    WheelEncodersNode() : Node("wheel_encoders")
    {
        RCLCPP_INFO(this->get_logger(), "Simulating wheel_encoders data ");
        _timer = this->create_wall_timer(std::chrono::milliseconds(800), std::bind(&WheelEncodersNode::cb_encodersData, this));
        _pub = this->create_publisher<custom_interfaces::msg::Encoder>("whl_encoder_data", 10);
    }

private:
    custom_interfaces::msg::Encoder whl_encoders;
    rclcpp::Publisher<custom_interfaces::msg::Encoder>::SharedPtr _pub;
    rclcpp::TimerBase::SharedPtr _timer;
    random_numbers::RandomNumberGenerator rng;
    void cb_encodersData()
    {
        this->whl_encoders.left_ticks = rng.uniformInteger(0, 100000);
        this->whl_encoders.right_ticks = rng.uniformInteger(0, 100000);
        this->whl_encoders.left_velocity = rng.uniformReal(-1.2, 1.2);
        this->whl_encoders.right_velocity = rng.uniformReal(-1.2, 1.2);

        _pub->publish(whl_encoders);
    }
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<WheelEncodersNode>());
    rclcpp::shutdown();
    return 0;
}