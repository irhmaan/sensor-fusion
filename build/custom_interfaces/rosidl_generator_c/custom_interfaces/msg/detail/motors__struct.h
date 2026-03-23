// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:msg/Motors.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_interfaces/msg/motors.h"


#ifndef CUSTOM_INTERFACES__MSG__DETAIL__MOTORS__STRUCT_H_
#define CUSTOM_INTERFACES__MSG__DETAIL__MOTORS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Motors in the package custom_interfaces.
/**
  * Motors Data
 */
typedef struct custom_interfaces__msg__Motors
{
  int64_t left_pwm;
  double left_current;
  int64_t right_pwm;
  double right_current;
} custom_interfaces__msg__Motors;

// Struct for a sequence of custom_interfaces__msg__Motors.
typedef struct custom_interfaces__msg__Motors__Sequence
{
  custom_interfaces__msg__Motors * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__msg__Motors__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__MOTORS__STRUCT_H_
