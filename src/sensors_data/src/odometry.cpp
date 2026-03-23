#include "rclcpp/rclcpp.hpp"
#include "custom_interfaces/msg/odometry.hpp"
#include "random_numbers/random_numbers.h"

using namespace std;

class DefaultNode : public rclcpp::Node
{
public:
    DefaultNode() : Node("odometry")
    {
        RCLCPP_INFO(this->get_logger(), "Simualting odometry data");
    }

private:
    random_numbers::RandomNumberGenerator rng;
    custom_interfaces::msg::Odometry odometry_data;
    rclcpp::Publisher<custom_interfaces::msg::Odometry>::SharedPtr
        odoDataPub;
    rclcpp::TimerBase::SharedPtr _timer;

    void generateOdometryData()
    {
        odometry_data.x = rng.gaussian(0.0, 0.1);
        odometry_data.y = rng.gaussian(0.0, 0.1);
        odometry_data.theta = rng.uniformReal(-M_PI, M_PI);
    }
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<DefaultNode>());
    rclcpp::shutdown();
    return 0;
}