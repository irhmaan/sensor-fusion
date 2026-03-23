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
      0xfb, 0x8b, 0x18, 0xac, 0xf5, 0xeb, 0x6e, 0x2e,
      0x49, 0x8a, 0x1d, 0x2d, 0xe3, 0x93, 0x0e, 0x18,
      0x1a, 0xde, 0x67, 0x94, 0x4c, 0x50, 0x7b, 0x36,
      0x20, 0xdb, 0x64, 0xaa, 0x31, 0xdf, 0x9b, 0xc2,
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
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64_UNBOUNDED_SEQUENCE,
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
  "int64[] angles";

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
    {toplevel_type_raw_source, 46, 46},
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
