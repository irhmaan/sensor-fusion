// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:msg/Environment.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_interfaces/msg/environment.h"


#ifndef CUSTOM_INTERFACES__MSG__DETAIL__ENVIRONMENT__STRUCT_H_
#define CUSTOM_INTERFACES__MSG__DETAIL__ENVIRONMENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Environment in the package custom_interfaces.
/**
  * Environment Data
 */
typedef struct custom_interfaces__msg__Environment
{
  double temperature;
  int64_t humidity;
} custom_interfaces__msg__Environment;

// Struct for a sequence of custom_interfaces__msg__Environment.
typedef struct custom_interfaces__msg__Environment__Sequence
{
  custom_interfaces__msg__Environment * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__msg__Environment__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__ENVIRONMENT__STRUCT_H_
