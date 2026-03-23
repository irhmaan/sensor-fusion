// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:msg/DistanceSensors.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_interfaces/msg/distance_sensors.hpp"


#ifndef CUSTOM_INTERFACES__MSG__DETAIL__DISTANCE_SENSORS__BUILDER_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__DISTANCE_SENSORS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/msg/detail/distance_sensors__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_DistanceSensors_ir_front
{
public:
  explicit Init_DistanceSensors_ir_front(::custom_interfaces::msg::DistanceSensors & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::msg::DistanceSensors ir_front(::custom_interfaces::msg::DistanceSensors::_ir_front_type arg)
  {
    msg_.ir_front = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::msg::DistanceSensors msg_;
};

class Init_DistanceSensors_ultrasonic_right
{
public:
  explicit Init_DistanceSensors_ultrasonic_right(::custom_interfaces::msg::DistanceSensors & msg)
  : msg_(msg)
  {}
  Init_DistanceSensors_ir_front ultrasonic_right(::custom_interfaces::msg::DistanceSensors::_ultrasonic_right_type arg)
  {
    msg_.ultrasonic_right = std::move(arg);
    return Init_DistanceSensors_ir_front(msg_);
  }

private:
  ::custom_interfaces::msg::DistanceSensors msg_;
};

class Init_DistanceSensors_ultrasonic_left
{
public:
  explicit Init_DistanceSensors_ultrasonic_left(::custom_interfaces::msg::DistanceSensors & msg)
  : msg_(msg)
  {}
  Init_DistanceSensors_ultrasonic_right ultrasonic_left(::custom_interfaces::msg::DistanceSensors::_ultrasonic_left_type arg)
  {
    msg_.ultrasonic_left = std::move(arg);
    return Init_DistanceSensors_ultrasonic_right(msg_);
  }

private:
  ::custom_interfaces::msg::DistanceSensors msg_;
};

class Init_DistanceSensors_ultrasonic_front
{
public:
  Init_DistanceSensors_ultrasonic_front()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DistanceSensors_ultrasonic_left ultrasonic_front(::custom_interfaces::msg::DistanceSensors::_ultrasonic_front_type arg)
  {
    msg_.ultrasonic_front = std::move(arg);
    return Init_DistanceSensors_ultrasonic_left(msg_);
  }

private:
  ::custom_interfaces::msg::DistanceSensors msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::msg::DistanceSensors>()
{
  return custom_interfaces::msg::builder::Init_DistanceSensors_ultrasonic_front();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__DISTANCE_SENSORS__BUILDER_HPP_
