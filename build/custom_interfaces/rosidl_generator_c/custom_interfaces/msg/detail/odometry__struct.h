// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:msg/Odometry.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_interfaces/msg/odometry.h"


#ifndef CUSTOM_INTERFACES__MSG__DETAIL__ODOMETRY__STRUCT_H_
#define CUSTOM_INTERFACES__MSG__DETAIL__ODOMETRY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Odometry in the package custom_interfaces.
/**
  * Odomentry Data
 */
typedef struct custom_interfaces__msg__Odometry
{
  double x;
  double y;
  double theta;
} custom_interfaces__msg__Odometry;

// Struct for a sequence of custom_interfaces__msg__Odometry.
typedef struct custom_interfaces__msg__Odometry__Sequence
{
  custom_interfaces__msg__Odometry * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__msg__Odometry__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__ODOMETRY__STRUCT_H_
