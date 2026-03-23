// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:msg/Battery.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_interfaces/msg/battery.h"


#ifndef CUSTOM_INTERFACES__MSG__DETAIL__BATTERY__STRUCT_H_
#define CUSTOM_INTERFACES__MSG__DETAIL__BATTERY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Battery in the package custom_interfaces.
/**
  * Battery Data
 */
typedef struct custom_interfaces__msg__Battery
{
  double volatge;
  int64_t percentage;
} custom_interfaces__msg__Battery;

// Struct for a sequence of custom_interfaces__msg__Battery.
typedef struct custom_interfaces__msg__Battery__Sequence
{
  custom_interfaces__msg__Battery * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__msg__Battery__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__BATTERY__STRUCT_H_
