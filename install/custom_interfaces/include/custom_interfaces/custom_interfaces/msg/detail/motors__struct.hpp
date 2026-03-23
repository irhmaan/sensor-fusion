// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_interfaces:msg/Motors.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_interfaces/msg/motors.hpp"


#ifndef CUSTOM_INTERFACES__MSG__DETAIL__MOTORS__STRUCT_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__MOTORS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__custom_interfaces__msg__Motors __attribute__((deprecated))
#else
# define DEPRECATED__custom_interfaces__msg__Motors __declspec(deprecated)
#endif

namespace custom_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Motors_
{
  using Type = Motors_<ContainerAllocator>;

  explicit Motors_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_pwm = 0ll;
      this->left_current = 0.0;
      this->right_pwm = 0ll;
      this->right_current = 0.0;
    }
  }

  explicit Motors_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_pwm = 0ll;
      this->left_current = 0.0;
      this->right_pwm = 0ll;
      this->right_current = 0.0;
    }
  }

  // field types and members
  using _left_pwm_type =
    int64_t;
  _left_pwm_type left_pwm;
  using _left_current_type =
    double;
  _left_current_type left_current;
  using _right_pwm_type =
    int64_t;
  _right_pwm_type right_pwm;
  using _right_current_type =
    double;
  _right_current_type right_current;

  // setters for named parameter idiom
  Type & set__left_pwm(
    const int64_t & _arg)
  {
    this->left_pwm = _arg;
    return *this;
  }
  Type & set__left_current(
    const double & _arg)
  {
    this->left_current = _arg;
    return *this;
  }
  Type & set__right_pwm(
    const int64_t & _arg)
  {
    this->right_pwm = _arg;
    return *this;
  }
  Type & set__right_current(
    const double & _arg)
  {
    this->right_current = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interfaces::msg::Motors_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interfaces::msg::Motors_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interfaces::msg::Motors_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interfaces::msg::Motors_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::msg::Motors_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::msg::Motors_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::msg::Motors_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::msg::Motors_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interfaces::msg::Motors_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interfaces::msg::Motors_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interfaces__msg__Motors
    std::shared_ptr<custom_interfaces::msg::Motors_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interfaces__msg__Motors
    std::shared_ptr<custom_interfaces::msg::Motors_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Motors_ & other) const
  {
    if (this->left_pwm != other.left_pwm) {
      return false;
    }
    if (this->left_current != other.left_current) {
      return false;
    }
    if (this->right_pwm != other.right_pwm) {
      return false;
    }
    if (this->right_current != other.right_current) {
      return false;
    }
    return true;
  }
  bool operator!=(const Motors_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Motors_

// alias to use template instance with default allocator
using Motors =
  custom_interfaces::msg::Motors_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__MOTORS__STRUCT_HPP_
