// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_interfaces:msg/DistanceSensors.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_interfaces/msg/distance_sensors.hpp"


#ifndef CUSTOM_INTERFACES__MSG__DETAIL__DISTANCE_SENSORS__STRUCT_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__DISTANCE_SENSORS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__custom_interfaces__msg__DistanceSensors __attribute__((deprecated))
#else
# define DEPRECATED__custom_interfaces__msg__DistanceSensors __declspec(deprecated)
#endif

namespace custom_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DistanceSensors_
{
  using Type = DistanceSensors_<ContainerAllocator>;

  explicit DistanceSensors_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ultrasonic_front = 0.0;
      this->ultrasonic_left = 0.0;
      this->ultrasonic_right = 0.0;
      this->ir_front = 0.0;
    }
  }

  explicit DistanceSensors_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ultrasonic_front = 0.0;
      this->ultrasonic_left = 0.0;
      this->ultrasonic_right = 0.0;
      this->ir_front = 0.0;
    }
  }

  // field types and members
  using _ultrasonic_front_type =
    double;
  _ultrasonic_front_type ultrasonic_front;
  using _ultrasonic_left_type =
    double;
  _ultrasonic_left_type ultrasonic_left;
  using _ultrasonic_right_type =
    double;
  _ultrasonic_right_type ultrasonic_right;
  using _ir_front_type =
    double;
  _ir_front_type ir_front;

  // setters for named parameter idiom
  Type & set__ultrasonic_front(
    const double & _arg)
  {
    this->ultrasonic_front = _arg;
    return *this;
  }
  Type & set__ultrasonic_left(
    const double & _arg)
  {
    this->ultrasonic_left = _arg;
    return *this;
  }
  Type & set__ultrasonic_right(
    const double & _arg)
  {
    this->ultrasonic_right = _arg;
    return *this;
  }
  Type & set__ir_front(
    const double & _arg)
  {
    this->ir_front = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interfaces::msg::DistanceSensors_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interfaces::msg::DistanceSensors_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interfaces::msg::DistanceSensors_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interfaces::msg::DistanceSensors_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::msg::DistanceSensors_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::msg::DistanceSensors_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::msg::DistanceSensors_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::msg::DistanceSensors_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interfaces::msg::DistanceSensors_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interfaces::msg::DistanceSensors_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interfaces__msg__DistanceSensors
    std::shared_ptr<custom_interfaces::msg::DistanceSensors_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interfaces__msg__DistanceSensors
    std::shared_ptr<custom_interfaces::msg::DistanceSensors_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DistanceSensors_ & other) const
  {
    if (this->ultrasonic_front != other.ultrasonic_front) {
      return false;
    }
    if (this->ultrasonic_left != other.ultrasonic_left) {
      return false;
    }
    if (this->ultrasonic_right != other.ultrasonic_right) {
      return false;
    }
    if (this->ir_front != other.ir_front) {
      return false;
    }
    return true;
  }
  bool operator!=(const DistanceSensors_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DistanceSensors_

// alias to use template instance with default allocator
using DistanceSensors =
  custom_interfaces::msg::DistanceSensors_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__DISTANCE_SENSORS__STRUCT_HPP_
