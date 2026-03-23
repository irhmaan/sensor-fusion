// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:msg/Encoder.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_interfaces/msg/encoder.hpp"


#ifndef CUSTOM_INTERFACES__MSG__DETAIL__ENCODER__BUILDER_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__ENCODER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/msg/detail/encoder__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_Encoder_right_velocity
{
public:
  explicit Init_Encoder_right_velocity(::custom_interfaces::msg::Encoder & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::msg::Encoder right_velocity(::custom_interfaces::msg::Encoder::_right_velocity_type arg)
  {
    msg_.right_velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::msg::Encoder msg_;
};

class Init_Encoder_right_ticks
{
public:
  explicit Init_Encoder_right_ticks(::custom_interfaces::msg::Encoder & msg)
  : msg_(msg)
  {}
  Init_Encoder_right_velocity right_ticks(::custom_interfaces::msg::Encoder::_right_ticks_type arg)
  {
    msg_.right_ticks = std::move(arg);
    return Init_Encoder_right_velocity(msg_);
  }

private:
  ::custom_interfaces::msg::Encoder msg_;
};

class Init_Encoder_left_velocit
{
public:
  explicit Init_Encoder_left_velocit(::custom_interfaces::msg::Encoder & msg)
  : msg_(msg)
  {}
  Init_Encoder_right_ticks left_velocit(::custom_interfaces::msg::Encoder::_left_velocit_type arg)
  {
    msg_.left_velocit = std::move(arg);
    return Init_Encoder_right_ticks(msg_);
  }

private:
  ::custom_interfaces::msg::Encoder msg_;
};

class Init_Encoder_left_ticks
{
public:
  Init_Encoder_left_ticks()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Encoder_left_velocit left_ticks(::custom_interfaces::msg::Encoder::_left_ticks_type arg)
  {
    msg_.left_ticks = std::move(arg);
    return Init_Encoder_left_velocit(msg_);
  }

private:
  ::custom_interfaces::msg::Encoder msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::msg::Encoder>()
{
  return custom_interfaces::msg::builder::Init_Encoder_left_ticks();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__ENCODER__BUILDER_HPP_
