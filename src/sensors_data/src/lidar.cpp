#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/laser_scan.hpp"
#include "random_numbers/random_numbers.h"

class LidarNode : public rclcpp::Node
{
public:
    LidarNode() : Node("lidar")
    {
        RCLCPP_INFO(this->get_logger(), "Simulating lidar data");
        _pub = this->create_publisher<sensor_msgs::msg::LaserScan>("scan", 10);
        _timer = this->create_wall_timer(std::chrono::milliseconds(1000), std::bind(&LidarNode::cb_LidarData, this));
    }

private:
    random_numbers::RandomNumberGenerator rng;
    sensor_msgs::msg::LaserScan lidar_data;
    rclcpp::Publisher<sensor_msgs::msg::LaserScan>::SharedPtr _pub;
    rclcpp::TimerBase::SharedPtr _timer;

    void cb_LidarData()
    {
        lidar_data.header.stamp = this->get_clock()->now();
        lidar_data.header.frame_id = "lidar_link";

        lidar_data.angle_min = -M_PI / 2.0;
        lidar_data.angle_max = M_PI / 2.0;

        lidar_data.angle_increment = M_PI / 4.0;

        lidar_data.range_min = 0.15;
        lidar_data.range_min = 5.0;

        lidar_data.ranges.clear();
        for (size_t i = 0; i < 5; ++i)
        {

            lidar_data.ranges.resize(5);

            for (size_t i = 0; i < 5; ++i)
            {
                lidar_data.ranges[i] = rng.uniformReal(0.15, 5.0);
            }
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