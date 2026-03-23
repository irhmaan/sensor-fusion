// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_interfaces:msg/DistanceSensors.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_interfaces/msg/distance_sensors.hpp"


#ifndef CUSTOM_INTERFACES__MSG__DETAIL__DISTANCE_SENSORS__TRAITS_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__DISTANCE_SENSORS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_interfaces/msg/detail/distance_sensors__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace custom_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const DistanceSensors & msg,
  std::ostream & out)
{
  out << "{";
  // member: ultrasonic_front
  {
    out << "ultrasonic_front: ";
    rosidl_generator_traits::value_to_yaml(msg.ultrasonic_front, out);
    out << ", ";
  }

  // member: ultrasonic_left
  {
    out << "ultrasonic_left: ";
    rosidl_generator_traits::value_to_yaml(msg.ultrasonic_left, out);
    out << ", ";
  }

  // member: ultrasonic_right
  {
    out << "ultrasonic_right: ";
    rosidl_generator_traits::value_to_yaml(msg.ultrasonic_right, out);
    out << ", ";
  }

  // member: ir_front
  {
    out << "ir_front: ";
    rosidl_generator_traits::value_to_yaml(msg.ir_front, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DistanceSensors & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ultrasonic_front
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ultrasonic_front: ";
    rosidl_generator_traits::value_to_yaml(msg.ultrasonic_front, out);
    out << "\n";
  }

  // member: ultrasonic_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ultrasonic_left: ";
    rosidl_generator_traits::value_to_yaml(msg.ultrasonic_left, out);
    out << "\n";
  }

  // member: ultrasonic_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ultrasonic_right: ";
    rosidl_generator_traits::value_to_yaml(msg.ultrasonic_right, out);
    out << "\n";
  }

  // member: ir_front
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ir_front: ";
    rosidl_generator_traits::value_to_yaml(msg.ir_front, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DistanceSensors & msg, bool use_flow_style = false)
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
  const custom_interfaces::msg::DistanceSensors & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const custom_interfaces::msg::DistanceSensors & msg)
{
  return custom_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<custom_interfaces::msg::DistanceSensors>()
{
  return "custom_interfaces::msg::DistanceSensors";
}

template<>
inline const char * name<custom_interfaces::msg::DistanceSensors>()
{
  return "custom_interfaces/msg/DistanceSensors";
}

template<>
struct has_fixed_size<custom_interfaces::msg::DistanceSensors>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_interfaces::msg::DistanceSensors>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_interfaces::msg::DistanceSensors>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__DISTANCE_SENSORS__TRAITS_HPP_
