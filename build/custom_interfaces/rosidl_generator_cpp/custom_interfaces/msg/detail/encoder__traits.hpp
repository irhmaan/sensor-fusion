// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_interfaces:msg/Encoder.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_interfaces/msg/encoder.hpp"


#ifndef CUSTOM_INTERFACES__MSG__DETAIL__ENCODER__TRAITS_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__ENCODER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_interfaces/msg/detail/encoder__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace custom_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Encoder & msg,
  std::ostream & out)
{
  out << "{";
  // member: left_ticks
  {
    out << "left_ticks: ";
    rosidl_generator_traits::value_to_yaml(msg.left_ticks, out);
    out << ", ";
  }

  // member: left_velocit
  {
    out << "left_velocit: ";
    rosidl_generator_traits::value_to_yaml(msg.left_velocit, out);
    out << ", ";
  }

  // member: right_ticks
  {
    out << "right_ticks: ";
    rosidl_generator_traits::value_to_yaml(msg.right_ticks, out);
    out << ", ";
  }

  // member: right_velocity
  {
    out << "right_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.right_velocity, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Encoder & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: left_ticks
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_ticks: ";
    rosidl_generator_traits::value_to_yaml(msg.left_ticks, out);
    out << "\n";
  }

  // member: left_velocit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_velocit: ";
    rosidl_generator_traits::value_to_yaml(msg.left_velocit, out);
    out << "\n";
  }

  // member: right_ticks
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_ticks: ";
    rosidl_generator_traits::value_to_yaml(msg.right_ticks, out);
    out << "\n";
  }

  // member: right_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.right_velocity, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Encoder & msg, bool use_flow_style = false)
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
  const custom_interfaces::msg::Encoder & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const custom_interfaces::msg::Encoder & msg)
{
  return custom_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<custom_interfaces::msg::Encoder>()
{
  return "custom_interfaces::msg::Encoder";
}

template<>
inline const char * name<custom_interfaces::msg::Encoder>()
{
  return "custom_interfaces/msg/Encoder";
}

template<>
struct has_fixed_size<custom_interfaces::msg::Encoder>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_interfaces::msg::Encoder>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_interfaces::msg::Encoder>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__ENCODER__TRAITS_HPP_
