// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:msg/Lidar.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_interfaces/msg/lidar.hpp"


#ifndef CUSTOM_INTERFACES__MSG__DETAIL__LIDAR__BUILDER_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__LIDAR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/msg/detail/lidar__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_Lidar_angles
{
public:
  explicit Init_Lidar_angles(::custom_interfaces::msg::Lidar & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::msg::Lidar angles(::custom_interfaces::msg::Lidar::_angles_type arg)
  {
    msg_.angles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::msg::Lidar msg_;
};

class Init_Lidar_distances
{
public:
  Init_Lidar_distances()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Lidar_angles distances(::custom_interfaces::msg::Lidar::_distances_type arg)
  {
    msg_.distances = std::move(arg);
    return Init_Lidar_angles(msg_);
  }

private:
  ::custom_interfaces::msg::Lidar msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::msg::Lidar>()
{
  return custom_interfaces::msg::builder::Init_Lidar_distances();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__LIDAR__BUILDER_HPP_
