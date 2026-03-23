// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:msg/DistanceSensors.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_interfaces/msg/distance_sensors.h"


#ifndef CUSTOM_INTERFACES__MSG__DETAIL__DISTANCE_SENSORS__STRUCT_H_
#define CUSTOM_INTERFACES__MSG__DETAIL__DISTANCE_SENSORS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/DistanceSensors in the package custom_interfaces.
/**
  * UltraSonic and IR Sensors
 */
typedef struct custom_interfaces__msg__DistanceSensors
{
  double ultrasonic_front;
  double ultrasonic_left;
  double ultrasonic_right;
  double ir_front;
} custom_interfaces__msg__DistanceSensors;

// Struct for a sequence of custom_interfaces__msg__DistanceSensors.
typedef struct custom_interfaces__msg__DistanceSensors__Sequence
{
  custom_interfaces__msg__DistanceSensors * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__msg__DistanceSensors__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__DISTANCE_SENSORS__STRUCT_H_
