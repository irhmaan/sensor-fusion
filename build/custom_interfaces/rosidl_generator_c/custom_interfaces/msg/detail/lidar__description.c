// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from custom_interfaces:msg/Lidar.idl
// generated code does not contain a copyright notice

#include "custom_interfaces/msg/detail/lidar__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
const rosidl_type_hash_t *
custom_interfaces__msg__Lidar__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3c, 0xdc, 0xe3, 0x31, 0x3c, 0x0b, 0xf5, 0x72,
      0x58, 0x63, 0xd4, 0x4d, 0x52, 0xb5, 0xfa, 0x10,
      0x04, 0x0f, 0x9d, 0x73, 0xa6, 0x92, 0xff, 0x68,
      0x2c, 0x00, 0x2e, 0x24, 0x8c, 0x6a, 0x93, 0x60,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char custom_interfaces__msg__Lidar__TYPE_NAME[] = "custom_interfaces/msg/Lidar";

// Define type names, field names, and default values
static char custom_interfaces__msg__Lidar__FIELD_NAME__distances[] = "distances";
static char custom_interfaces__msg__Lidar__FIELD_NAME__angles[] = "angles";

static rosidl_runtime_c__type_description__Field custom_interfaces__msg__Lidar__FIELDS[] = {
  {
    {custom_interfaces__msg__Lidar__FIELD_NAME__distances, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_interfaces__msg__Lidar__FIELD_NAME__angles, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
custom_interfaces__msg__Lidar__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {custom_interfaces__msg__Lidar__TYPE_NAME, 27, 27},
      {custom_interfaces__msg__Lidar__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#Lidar Data\n"
  "float64[] distances\n"
  "float64[] angles";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
custom_interfaces__msg__Lidar__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {custom_interfaces__msg__Lidar__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 48, 48},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
custom_interfaces__msg__Lidar__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *custom_interfaces__msg__Lidar__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
