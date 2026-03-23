// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_interfaces:msg/Environment.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_interfaces/msg/environment.hpp"


#ifndef CUSTOM_INTERFACES__MSG__DETAIL__ENVIRONMENT__STRUCT_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__ENVIRONMENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__custom_interfaces__msg__Environment __attribute__((deprecated))
#else
# define DEPRECATED__custom_interfaces__msg__Environment __declspec(deprecated)
#endif

namespace custom_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Environment_
{
  using Type = Environment_<ContainerAllocator>;

  explicit Environment_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->temperature = 0.0;
      this->humidity = 0ll;
    }
  }

  explicit Environment_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->temperature = 0.0;
      this->humidity = 0ll;
    }
  }

  // field types and members
  using _temperature_type =
    double;
  _temperature_type temperature;
  using _humidity_type =
    int64_t;
  _humidity_type humidity;

  // setters for named parameter idiom
  Type & set__temperature(
    const double & _arg)
  {
    this->temperature = _arg;
    return *this;
  }
  Type & set__humidity(
    const int64_t & _arg)
  {
    this->humidity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interfaces::msg::Environment_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interfaces::msg::Environment_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interfaces::msg::Environment_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interfaces::msg::Environment_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::msg::Environment_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::msg::Environment_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::msg::Environment_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::msg::Environment_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interfaces::msg::Environment_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interfaces::msg::Environment_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interfaces__msg__Environment
    std::shared_ptr<custom_interfaces::msg::Environment_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interfaces__msg__Environment
    std::shared_ptr<custom_interfaces::msg::Environment_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Environment_ & other) const
  {
    if (this->temperature != other.temperature) {
      return false;
    }
    if (this->humidity != other.humidity) {
      return false;
    }
    return true;
  }
  bool operator!=(const Environment_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Environment_

// alias to use template instance with default allocator
using Environment =
  custom_interfaces::msg::Environment_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__ENVIRONMENT__STRUCT_HPP_
