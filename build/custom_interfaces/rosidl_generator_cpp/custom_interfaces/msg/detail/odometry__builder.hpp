// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:msg/Odometry.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_interfaces/msg/odometry.hpp"


#ifndef CUSTOM_INTERFACES__MSG__DETAIL__ODOMETRY__BUILDER_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__ODOMETRY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/msg/detail/odometry__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_Odometry_theta
{
public:
  explicit Init_Odometry_theta(::custom_interfaces::msg::Odometry & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::msg::Odometry theta(::custom_interfaces::msg::Odometry::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::msg::Odometry msg_;
};

class Init_Odometry_y
{
public:
  explicit Init_Odometry_y(::custom_interfaces::msg::Odometry & msg)
  : msg_(msg)
  {}
  Init_Odometry_theta y(::custom_interfaces::msg::Odometry::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Odometry_theta(msg_);
  }

private:
  ::custom_interfaces::msg::Odometry msg_;
};

class Init_Odometry_x
{
public:
  Init_Odometry_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Odometry_y x(::custom_interfaces::msg::Odometry::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Odometry_y(msg_);
  }

private:
  ::custom_interfaces::msg::Odometry msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::msg::Odometry>()
{
  return custom_interfaces::msg::builder::Init_Odometry_x();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__ODOMETRY__BUILDER_HPP_
