// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_interfaces:msg/Motors.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_interfaces/msg/motors.hpp"


#ifndef CUSTOM_INTERFACES__MSG__DETAIL__MOTORS__TRAITS_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__MOTORS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_interfaces/msg/detail/motors__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace custom_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Motors & msg,
  std::ostream & out)
{
  out << "{";
  // member: left_pwm
  {
    out << "left_pwm: ";
    rosidl_generator_traits::value_to_yaml(msg.left_pwm, out);
    out << ", ";
  }

  // member: left_current
  {
    out << "left_current: ";
    rosidl_generator_traits::value_to_yaml(msg.left_current, out);
    out << ", ";
  }

  // member: right_pwm
  {
    out << "right_pwm: ";
    rosidl_generator_traits::value_to_yaml(msg.right_pwm, out);
    out << ", ";
  }

  // member: right_current
  {
    out << "right_current: ";
    rosidl_generator_traits::value_to_yaml(msg.right_current, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Motors & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: left_pwm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_pwm: ";
    rosidl_generator_traits::value_to_yaml(msg.left_pwm, out);
    out << "\n";
  }

  // member: left_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_current: ";
    rosidl_generator_traits::value_to_yaml(msg.left_current, out);
    out << "\n";
  }

  // member: right_pwm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_pwm: ";
    rosidl_generator_traits::value_to_yaml(msg.right_pwm, out);
    out << "\n";
  }

  // member: right_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_current: ";
    rosidl_generator_traits::value_to_yaml(msg.right_current, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Motors & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace custom_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use custom_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_interfaces::msg::Motors & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const custom_interfaces::msg::Motors & msg)
{
  return custom_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<custom_interfaces::msg::Motors>()
{
  return "custom_interfaces::msg::Motors";
}

template<>
inline const char * name<custom_interfaces::msg::Motors>()
{
  return "custom_interfaces/msg/Motors";
}

template<>
struct has_fixed_size<custom_interfaces::msg::Motors>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_interfaces::msg::Motors>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_interfaces::msg::Motors>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__MOTORS__TRAITS_HPP_
