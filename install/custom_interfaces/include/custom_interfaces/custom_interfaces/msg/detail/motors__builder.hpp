// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:msg/Motors.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_interfaces/msg/motors.hpp"


#ifndef CUSTOM_INTERFACES__MSG__DETAIL__MOTORS__BUILDER_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__MOTORS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/msg/detail/motors__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_Motors_right_current
{
public:
  explicit Init_Motors_right_current(::custom_interfaces::msg::Motors & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::msg::Motors right_current(::custom_interfaces::msg::Motors::_right_current_type arg)
  {
    msg_.right_current = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::msg::Motors msg_;
};

class Init_Motors_right_pwm
{
public:
  explicit Init_Motors_right_pwm(::custom_interfaces::msg::Motors & msg)
  : msg_(msg)
  {}
  Init_Motors_right_current right_pwm(::custom_interfaces::msg::Motors::_right_pwm_type arg)
  {
    msg_.right_pwm = std::move(arg);
    return Init_Motors_right_current(msg_);
  }

private:
  ::custom_interfaces::msg::Motors msg_;
};

class Init_Motors_left_current
{
public:
  explicit Init_Motors_left_current(::custom_interfaces::msg::Motors & msg)
  : msg_(msg)
  {}
  Init_Motors_right_pwm left_current(::custom_interfaces::msg::Motors::_left_current_type arg)
  {
    msg_.left_current = std::move(arg);
    return Init_Motors_right_pwm(msg_);
  }

private:
  ::custom_interfaces::msg::Motors msg_;
};

class Init_Motors_left_pwm
{
public:
  Init_Motors_left_pwm()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Motors_left_current left_pwm(::custom_interfaces::msg::Motors::_left_pwm_type arg)
  {
    msg_.left_pwm = std::move(arg);
    return Init_Motors_left_current(msg_);
  }

private:
  ::custom_interfaces::msg::Motors msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::msg::Motors>()
{
  return custom_interfaces::msg::builder::Init_Motors_left_pwm();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__MOTORS__BUILDER_HPP_
