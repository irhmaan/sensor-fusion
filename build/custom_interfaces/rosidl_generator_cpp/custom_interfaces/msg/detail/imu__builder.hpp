// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:msg/IMU.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_interfaces/msg/imu.hpp"


#ifndef CUSTOM_INTERFACES__MSG__DETAIL__IMU__BUILDER_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__IMU__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/msg/detail/imu__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_IMU_z
{
public:
  explicit Init_IMU_z(::custom_interfaces::msg::IMU & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::msg::IMU z(::custom_interfaces::msg::IMU::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::msg::IMU msg_;
};

class Init_IMU_y
{
public:
  explicit Init_IMU_y(::custom_interfaces::msg::IMU & msg)
  : msg_(msg)
  {}
  Init_IMU_z y(::custom_interfaces::msg::IMU::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_IMU_z(msg_);
  }

private:
  ::custom_interfaces::msg::IMU msg_;
};

class Init_IMU_x
{
public:
  explicit Init_IMU_x(::custom_interfaces::msg::IMU & msg)
  : msg_(msg)
  {}
  Init_IMU_y x(::custom_interfaces::msg::IMU::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_IMU_y(msg_);
  }

private:
  ::custom_interfaces::msg::IMU msg_;
};

class Init_IMU_name
{
public:
  Init_IMU_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IMU_x name(::custom_interfaces::msg::IMU::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_IMU_x(msg_);
  }

private:
  ::custom_interfaces::msg::IMU msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::msg::IMU>()
{
  return custom_interfaces::msg::builder::Init_IMU_name();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__IMU__BUILDER_HPP_
