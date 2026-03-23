// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from custom_interfaces:msg/Environment.idl
// generated code does not contain a copyright notice

#include "custom_interfaces/msg/detail/environment__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
const rosidl_type_hash_t *
custom_interfaces__msg__Environment__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x35, 0x5d, 0x82, 0xc7, 0x74, 0x1c, 0x69, 0x70,
      0xa3, 0x38, 0xab, 0xfe, 0xd6, 0x33, 0x28, 0xc8,
      0x09, 0x6b, 0x14, 0x52, 0x31, 0xb4, 0x10, 0x51,
      0x18, 0x38, 0x94, 0x32, 0x02, 0xf3, 0x21, 0xc0,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char custom_interfaces__msg__Environment__TYPE_NAME[] = "custom_interfaces/msg/Environment";

// Define type names, field names, and default values
static char custom_interfaces__msg__Environment__FIELD_NAME__temperature[] = "temperature";
static char custom_interfaces__msg__Environment__FIELD_NAME__humidity[] = "humidity";

static rosidl_runtime_c__type_description__Field custom_interfaces__msg__Environment__FIELDS[] = {
  {
    {custom_interfaces__msg__Environment__FIELD_NAME__temperature, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_interfaces__msg__Environment__FIELD_NAME__humidity, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
custom_interfaces__msg__Environment__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {custom_interfaces__msg__Environment__TYPE_NAME, 33, 33},
      {custom_interfaces__msg__Environment__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#Environment Data\n"
  "float64 temperature\n"
  "int64 humidity";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
custom_interfaces__msg__Environment__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {custom_interfaces__msg__Environment__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 52, 52},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
custom_interfaces__msg__Environment__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *custom_interfaces__msg__Environment__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
