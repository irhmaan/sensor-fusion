#include "rclcpp/rclcpp.hpp"
#include "custom_interfaces/msg/environment.hpp"
#include "random_numbers/random_numbers.h"

class EnviromentNode : public rclcpp::Node
{
public:
    EnviromentNode() : Node("environment")
    {
        RCLCPP_INFO(this->get_logger(), "Simulating humidity & temp. data.");
        _pub = this->create_publisher<custom_interfaces::msg::Environment>("env_data", 10);
        _timer = this->create_wall_timer(std::chrono::milliseconds(1000), std::bind(&EnviromentNode::cb_EnvData, this));
    }

private:
    random_numbers::RandomNumberGenerator rng;
    custom_interfaces::msg::Environment env_data;
    rclcpp::Publisher<custom_interfaces::msg::Environment>::SharedPtr _pub;
    rclcpp::TimerBase::SharedPtr _timer;

    void cb_EnvData()
    {
        env_data.temperature = rng.uniformReal(30.0, 48.0);
        env_data.humidity = rng.uniformReal(40.0, 50.0);

        _pub->publish(env_data);
    }
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<EnviromentNode>());
    rclcpp::shutdown();
    return 0;
}