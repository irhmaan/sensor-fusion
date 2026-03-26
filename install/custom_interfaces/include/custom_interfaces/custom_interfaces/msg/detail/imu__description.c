// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from custom_interfaces:msg/IMU.idl
// generated code does not contain a copyright notice

#include "custom_interfaces/msg/detail/imu__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
const rosidl_type_hash_t *
custom_interfaces__msg__IMU__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfa, 0x7a, 0x7f, 0x2e, 0x26, 0x6c, 0x3c, 0xbd,
      0x0d, 0xe2, 0x81, 0x35, 0x1d, 0xbb, 0x94, 0x3d,
      0xd3, 0x91, 0x1b, 0x53, 0x74, 0x8d, 0xd4, 0x8b,
      0x07, 0x7f, 0xcb, 0x56, 0xf7, 0xe9, 0x8b, 0x8f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char custom_interfaces__msg__IMU__TYPE_NAME[] = "custom_interfaces/msg/IMU";

// Define type names, field names, and default values
static char custom_interfaces__msg__IMU__FIELD_NAME__accel[] = "accel";
static char custom_interfaces__msg__IMU__FIELD_NAME__gyro[] = "gyro";
static char custom_interfaces__msg__IMU__FIELD_NAME__mag[] = "mag";

static rosidl_runtime_c__type_description__Field custom_interfaces__msg__IMU__FIELDS[] = {
  {
    {custom_interfaces__msg__IMU__FIELD_NAME__accel, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_interfaces__msg__IMU__FIELD_NAME__gyro, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_interfaces__msg__IMU__FIELD_NAME__mag, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
custom_interfaces__msg__IMU__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {custom_interfaces__msg__IMU__TYPE_NAME, 25, 25},
      {custom_interfaces__msg__IMU__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#IMU Sensor\n"
  "float64[3] accel\n"
  "float64[3] gyro\n"
  "float64[3] mag";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
custom_interfaces__msg__IMU__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {custom_interfaces__msg__IMU__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 60, 60},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
custom_interfaces__msg__IMU__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *custom_interfaces__msg__IMU__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
