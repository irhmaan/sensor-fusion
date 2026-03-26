// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:msg/Encoder.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_interfaces/msg/encoder.h"


#ifndef CUSTOM_INTERFACES__MSG__DETAIL__ENCODER__STRUCT_H_
#define CUSTOM_INTERFACES__MSG__DETAIL__ENCODER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Encoder in the package custom_interfaces.
/**
  * Encoder Data
 */
typedef struct custom_interfaces__msg__Encoder
{
  int64_t left_ticks;
  double left_velocity;
  int64_t right_ticks;
  double right_velocity;
} custom_interfaces__msg__Encoder;

// Struct for a sequence of custom_interfaces__msg__Encoder.
typedef struct custom_interfaces__msg__Encoder__Sequence
{
  custom_interfaces__msg__Encoder * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__msg__Encoder__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__ENCODER__STRUCT_H_
