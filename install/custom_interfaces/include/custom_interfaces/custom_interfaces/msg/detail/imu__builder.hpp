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

class Init_IMU_mag
{
public:
  explicit Init_IMU_mag(::custom_interfaces::msg::IMU & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::msg::IMU mag(::custom_interfaces::msg::IMU::_mag_type arg)
  {
    msg_.mag = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::msg::IMU msg_;
};

class Init_IMU_gyro
{
public:
  explicit Init_IMU_gyro(::custom_interfaces::msg::IMU & msg)
  : msg_(msg)
  {}
  Init_IMU_mag gyro(::custom_interfaces::msg::IMU::_gyro_type arg)
  {
    msg_.gyro = std::move(arg);
    return Init_IMU_mag(msg_);
  }

private:
  ::custom_interfaces::msg::IMU msg_;
};

class Init_IMU_accel
{
public:
  Init_IMU_accel()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IMU_gyro accel(::custom_interfaces::msg::IMU::_accel_type arg)
  {
    msg_.accel = std::move(arg);
    return Init_IMU_gyro(msg_);
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
  return custom_interfaces::msg::builder::Init_IMU_accel();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__IMU__BUILDER_HPP_
