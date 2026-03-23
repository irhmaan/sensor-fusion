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
      0x72, 0xd5, 0x73, 0x30, 0x2b, 0x94, 0xf8, 0x11,
      0x9f, 0xec, 0xec, 0xa5, 0xcc, 0x3a, 0x74, 0x70,
      0x22, 0x1e, 0xcf, 0x58, 0xd6, 0xbf, 0x54, 0x5f,
      0x83, 0xbe, 0x09, 0x9e, 0x46, 0x53, 0xbe, 0xe1,
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
static char custom_interfaces__msg__IMU__FIELD_NAME__name[] = "name";
static char custom_interfaces__msg__IMU__FIELD_NAME__x[] = "x";
static char custom_interfaces__msg__IMU__FIELD_NAME__y[] = "y";
static char custom_interfaces__msg__IMU__FIELD_NAME__z[] = "z";

static rosidl_runtime_c__type_description__Field custom_interfaces__msg__IMU__FIELDS[] = {
  {
    {custom_interfaces__msg__IMU__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_interfaces__msg__IMU__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_interfaces__msg__IMU__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_interfaces__msg__IMU__FIELD_NAME__z, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
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
      {custom_interfaces__msg__IMU__FIELDS, 4, 4},
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
  "string name\n"
  "float64 x\n"
  "float64 y\n"
  "float64 z";

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
    {toplevel_type_raw_source, 54, 54},
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
