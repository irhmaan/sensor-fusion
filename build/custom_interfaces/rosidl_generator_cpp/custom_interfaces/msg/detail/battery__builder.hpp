// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:msg/Battery.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_interfaces/msg/battery.hpp"


#ifndef CUSTOM_INTERFACES__MSG__DETAIL__BATTERY__BUILDER_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__BATTERY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/msg/detail/battery__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_Battery_percentage
{
public:
  explicit Init_Battery_percentage(::custom_interfaces::msg::Battery & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::msg::Battery percentage(::custom_interfaces::msg::Battery::_percentage_type arg)
  {
    msg_.percentage = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::msg::Battery msg_;
};

class Init_Battery_volatge
{
public:
  Init_Battery_volatge()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Battery_percentage volatge(::custom_interfaces::msg::Battery::_volatge_type arg)
  {
    msg_.volatge = std::move(arg);
    return Init_Battery_percentage(msg_);
  }

private:
  ::custom_interfaces::msg::Battery msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::msg::Battery>()
{
  return custom_interfaces::msg::builder::Init_Battery_volatge();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__BATTERY__BUILDER_HPP_
