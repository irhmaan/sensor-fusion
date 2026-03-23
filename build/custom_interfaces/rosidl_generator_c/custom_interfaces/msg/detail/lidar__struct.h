// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:msg/Lidar.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_interfaces/msg/lidar.h"


#ifndef CUSTOM_INTERFACES__MSG__DETAIL__LIDAR__STRUCT_H_
#define CUSTOM_INTERFACES__MSG__DETAIL__LIDAR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'distances'
// Member 'angles'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Lidar in the package custom_interfaces.
/**
  * Lidar Data
 */
typedef struct custom_interfaces__msg__Lidar
{
  rosidl_runtime_c__double__Sequence distances;
  rosidl_runtime_c__int64__Sequence angles;
} custom_interfaces__msg__Lidar;

// Struct for a sequence of custom_interfaces__msg__Lidar.
typedef struct custom_interfaces__msg__Lidar__Sequence
{
  custom_interfaces__msg__Lidar * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__msg__Lidar__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__LIDAR__STRUCT_H_
