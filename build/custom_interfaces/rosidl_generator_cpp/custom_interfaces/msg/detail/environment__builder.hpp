// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:msg/Environment.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_interfaces/msg/environment.hpp"


#ifndef CUSTOM_INTERFACES__MSG__DETAIL__ENVIRONMENT__BUILDER_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__ENVIRONMENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/msg/detail/environment__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_Environment_humidity
{
public:
  explicit Init_Environment_humidity(::custom_interfaces::msg::Environment & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::msg::Environment humidity(::custom_interfaces::msg::Environment::_humidity_type arg)
  {
    msg_.humidity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::msg::Environment msg_;
};

class Init_Environment_temperature
{
public:
  Init_Environment_temperature()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Environment_humidity temperature(::custom_interfaces::msg::Environment::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_Environment_humidity(msg_);
  }

private:
  ::custom_interfaces::msg::Environment msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::msg::Environment>()
{
  return custom_interfaces::msg::builder::Init_Environment_temperature();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__ENVIRONMENT__BUILDER_HPP_
