// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_interfaces:msg/IMU.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_interfaces/msg/imu.hpp"


#ifndef CUSTOM_INTERFACES__MSG__DETAIL__IMU__TRAITS_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__IMU__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_interfaces/msg/detail/imu__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace custom_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const IMU & msg,
  std::ostream & out)
{
  out << "{";
  // member: accel
  {
    if (msg.accel.size() == 0) {
      out << "accel: []";
    } else {
      out << "accel: [";
      size_t pending_items = msg.accel.size();
      for (auto item : msg.accel) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: gyro
  {
    if (msg.gyro.size() == 0) {
      out << "gyro: []";
    } else {
      out << "gyro: [";
      size_t pending_items = msg.gyro.size();
      for (auto item : msg.gyro) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: mag
  {
    if (msg.mag.size() == 0) {
      out << "mag: []";
    } else {
      out << "mag: [";
      size_t pending_items = msg.mag.size();
      for (auto item : msg.mag) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IMU & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.accel.size() == 0) {
      out << "accel: []\n";
    } else {
      out << "accel:\n";
      for (auto item : msg.accel) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: gyro
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gyro.size() == 0) {
      out << "gyro: []\n";
    } else {
      out << "gyro:\n";
      for (auto item : msg.gyro) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: mag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.mag.size() == 0) {
      out << "mag: []\n";
    } else {
      out << "mag:\n";
      for (auto item : msg.mag) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IMU & msg, bool use_flow_style = false)
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
  const custom_interfaces::msg::IMU & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const custom_interfaces::msg::IMU & msg)
{
  return custom_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<custom_interfaces::msg::IMU>()
{
  return "custom_interfaces::msg::IMU";
}

template<>
inline const char * name<custom_interfaces::msg::IMU>()
{
  return "custom_interfaces/msg/IMU";
}

template<>
struct has_fixed_size<custom_interfaces::msg::IMU>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_interfaces::msg::IMU>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_interfaces::msg::IMU>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__IMU__TRAITS_HPP_
