#include "rclcpp/rclcpp.hpp"
#include "custom_interfaces/msg/odometry.hpp"
#include "random_numbers/random_numbers.h"

using namespace std;

class OdometryNode : public rclcpp::Node
{
public:
    OdometryNode() : Node("odometry")
    {
        RCLCPP_INFO(this->get_logger(), "Simulating odometry data");
        this->declare_parameter("frequency", 1);
        def_frequency = this->get_parameter("frequency").as_int();

        odoDataPub = this->create_publisher<custom_interfaces::msg::Odometry>("odometry_data", 10);
        _timer = this->create_wall_timer(std::chrono::seconds(def_frequency), std::bind(&OdometryNode::cb_OdometryData, this));
    }

private:
    random_numbers::RandomNumberGenerator rng;
    custom_interfaces::msg::Odometry odometry_data;
    rclcpp::Publisher<custom_interfaces::msg::Odometry>::SharedPtr
        odoDataPub;
    rclcpp::TimerBase::SharedPtr _timer;
    int64_t def_frequency = 1;

    void cb_OdometryData()
    {
        odometry_data.x = rng.gaussian(0.0, 0.1);
        odometry_data.y = rng.gaussian(0.0, 0.1);
        odometry_data.theta = rng.uniformReal(-M_PI, M_PI);

        odoDataPub->publish(odometry_data);
    }
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<OdometryNode>());
    rclcpp::shutdown();
    return 0;
}