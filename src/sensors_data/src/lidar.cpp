#include "rclcpp/rclcpp.hpp"
#include "custom_interfaces/msg/lidar.hpp"
#include "random_numbers/random_numbers.h"

class LidarNode : public rclcpp::Node
{
public:
    LidarNode() : Node("lidar")
    {
        RCLCPP_INFO(this->get_logger(), "Simulating lidar data");
        _pub = this->create_publisher<custom_interfaces::msg::Lidar>("lidar_data", 10);
        _timer = this->create_wall_timer(std::chrono::milliseconds(1000), std::bind(&LidarNode::cb_LidarData, this));
    }

private:
    random_numbers::RandomNumberGenerator rng;
    custom_interfaces::msg::Lidar lidar_data;
    rclcpp::Publisher<custom_interfaces::msg::Lidar>::SharedPtr _pub;
    rclcpp::TimerBase::SharedPtr _timer;

    void cb_LidarData()
    {
        lidar_data.distances.clear();
        lidar_data.angles = {-M_PI / 2.0, -M_PI / 4.0, 0.0, M_PI / 4.0, M_PI / 2.0};

        for (size_t i = 0; i < 5; ++i)
        {

            double dist = rng.uniformReal(0.15, 5.0);

            lidar_data.distances.emplace_back(dist);
        }

        _pub->publish(lidar_data);
    }
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<LidarNode>());
    rclcpp::shutdown();
    return 0;
}