// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_interfaces:msg/Battery.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_interfaces/msg/battery.hpp"


#ifndef CUSTOM_INTERFACES__MSG__DETAIL__BATTERY__STRUCT_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__BATTERY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__custom_interfaces__msg__Battery __attribute__((deprecated))
#else
# define DEPRECATED__custom_interfaces__msg__Battery __declspec(deprecated)
#endif

namespace custom_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Battery_
{
  using Type = Battery_<ContainerAllocator>;

  explicit Battery_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->volatge = 0.0;
      this->percentage = 0ll;
    }
  }

  explicit Battery_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->volatge = 0.0;
      this->percentage = 0ll;
    }
  }

  // field types and members
  using _volatge_type =
    double;
  _volatge_type volatge;
  using _percentage_type =
    int64_t;
  _percentage_type percentage;

  // setters for named parameter idiom
  Type & set__volatge(
    const double & _arg)
  {
    this->volatge = _arg;
    return *this;
  }
  Type & set__percentage(
    const int64_t & _arg)
  {
    this->percentage = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interfaces::msg::Battery_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interfaces::msg::Battery_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interfaces::msg::Battery_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interfaces::msg::Battery_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::msg::Battery_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::msg::Battery_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::msg::Battery_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::msg::Battery_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interfaces::msg::Battery_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interfaces::msg::Battery_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interfaces__msg__Battery
    std::shared_ptr<custom_interfaces::msg::Battery_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interfaces__msg__Battery
    std::shared_ptr<custom_interfaces::msg::Battery_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Battery_ & other) const
  {
    if (this->volatge != other.volatge) {
      return false;
    }
    if (this->percentage != other.percentage) {
      return false;
    }
    return true;
  }
  bool operator!=(const Battery_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Battery_

// alias to use template instance with default allocator
using Battery =
  custom_interfaces::msg::Battery_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__BATTERY__STRUCT_HPP_
