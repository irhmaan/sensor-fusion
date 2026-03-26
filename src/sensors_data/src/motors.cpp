#include "rclcpp/rclcpp.hpp"
#include "custom_interfaces/msg/motors.hpp"
#include "random_numbers/random_numbers.h"

class MotorsNode : public rclcpp::Node
{
public:
    MotorsNode() : Node("motors")
    {
        RCLCPP_INFO(this->get_logger(), "Simulating motor data!");
        _pub = this->create_publisher<custom_interfaces::msg::Motors>("motors_fb_data", 10);
        _timer = this->create_wall_timer(std::chrono::milliseconds(1000), std::bind(&MotorsNode::cb_MotorFeedbackData, this));
    }

private:
    random_numbers::RandomNumberGenerator rng;
    custom_interfaces::msg::Motors motor_data;
    rclcpp::Publisher<custom_interfaces::msg::Motors>::SharedPtr _pub;
    rclcpp::TimerBase::SharedPtr _timer;

    void cb_MotorFeedbackData()
    {
        motor_data.left_pwm = static_cast<int16_t>(rng.uniformInteger(-255, 255));
        motor_data.right_pwm = static_cast<int16_t>(rng.uniformInteger(-255, 255));
        motor_data.left_current = rng.uniformReal(0.1, 2.8);
        motor_data.right_current = rng.uniformReal(0.1, 2.8);

        _pub->publish(motor_data);
    }
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<MotorsNode>());
    rclcpp::shutdown();
    return 0;
}