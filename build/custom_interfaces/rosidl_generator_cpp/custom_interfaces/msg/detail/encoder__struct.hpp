// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_interfaces:msg/Encoder.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_interfaces/msg/encoder.hpp"


#ifndef CUSTOM_INTERFACES__MSG__DETAIL__ENCODER__STRUCT_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__ENCODER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__custom_interfaces__msg__Encoder __attribute__((deprecated))
#else
# define DEPRECATED__custom_interfaces__msg__Encoder __declspec(deprecated)
#endif

namespace custom_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Encoder_
{
  using Type = Encoder_<ContainerAllocator>;

  explicit Encoder_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_ticks = 0ll;
      this->left_velocity = 0.0;
      this->right_ticks = 0ll;
      this->right_velocity = 0.0;
    }
  }

  explicit Encoder_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_ticks = 0ll;
      this->left_velocity = 0.0;
      this->right_ticks = 0ll;
      this->right_velocity = 0.0;
    }
  }

  // field types and members
  using _left_ticks_type =
    int64_t;
  _left_ticks_type left_ticks;
  using _left_velocity_type =
    double;
  _left_velocity_type left_velocity;
  using _right_ticks_type =
    int64_t;
  _right_ticks_type right_ticks;
  using _right_velocity_type =
    double;
  _right_velocity_type right_velocity;

  // setters for named parameter idiom
  Type & set__left_ticks(
    const int64_t & _arg)
  {
    this->left_ticks = _arg;
    return *this;
  }
  Type & set__left_velocity(
    const double & _arg)
  {
    this->left_velocity = _arg;
    return *this;
  }
  Type & set__right_ticks(
    const int64_t & _arg)
  {
    this->right_ticks = _arg;
    return *this;
  }
  Type & set__right_velocity(
    const double & _arg)
  {
    this->right_velocity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interfaces::msg::Encoder_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interfaces::msg::Encoder_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interfaces::msg::Encoder_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interfaces::msg::Encoder_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::msg::Encoder_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::msg::Encoder_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::msg::Encoder_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::msg::Encoder_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interfaces::msg::Encoder_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interfaces::msg::Encoder_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interfaces__msg__Encoder
    std::shared_ptr<custom_interfaces::msg::Encoder_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interfaces__msg__Encoder
    std::shared_ptr<custom_interfaces::msg::Encoder_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Encoder_ & other) const
  {
    if (this->left_ticks != other.left_ticks) {
      return false;
    }
    if (this->left_velocity != other.left_velocity) {
      return false;
    }
    if (this->right_ticks != other.right_ticks) {
      return false;
    }
    if (this->right_velocity != other.right_velocity) {
      return false;
    }
    return true;
  }
  bool operator!=(const Encoder_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Encoder_

// alias to use template instance with default allocator
using Encoder =
  custom_interfaces::msg::Encoder_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__ENCODER__STRUCT_HPP_
