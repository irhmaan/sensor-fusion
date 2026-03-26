// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from custom_interfaces:msg/Encoder.idl
// generated code does not contain a copyright notice

#include "custom_interfaces/msg/detail/encoder__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
const rosidl_type_hash_t *
custom_interfaces__msg__Encoder__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x10, 0x1d, 0x5c, 0xf4, 0x50, 0x2c, 0x6c, 0x37,
      0xdd, 0xd0, 0xcb, 0x84, 0x97, 0x85, 0xf5, 0xfa,
      0x54, 0xfb, 0x11, 0x1a, 0xe9, 0x1b, 0x98, 0xa6,
      0xb8, 0x7e, 0x8c, 0xda, 0x74, 0x07, 0x77, 0x9a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char custom_interfaces__msg__Encoder__TYPE_NAME[] = "custom_interfaces/msg/Encoder";

// Define type names, field names, and default values
static char custom_interfaces__msg__Encoder__FIELD_NAME__left_ticks[] = "left_ticks";
static char custom_interfaces__msg__Encoder__FIELD_NAME__left_velocity[] = "left_velocity";
static char custom_interfaces__msg__Encoder__FIELD_NAME__right_ticks[] = "right_ticks";
static char custom_interfaces__msg__Encoder__FIELD_NAME__right_velocity[] = "right_velocity";

static rosidl_runtime_c__type_description__Field custom_interfaces__msg__Encoder__FIELDS[] = {
  {
    {custom_interfaces__msg__Encoder__FIELD_NAME__left_ticks, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_interfaces__msg__Encoder__FIELD_NAME__left_velocity, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_interfaces__msg__Encoder__FIELD_NAME__right_ticks, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_interfaces__msg__Encoder__FIELD_NAME__right_velocity, 14, 14},
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
custom_interfaces__msg__Encoder__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {custom_interfaces__msg__Encoder__TYPE_NAME, 29, 29},
      {custom_interfaces__msg__Encoder__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#Encoder Data\n"
  "int64 left_ticks\n"
  "float64 left_velocity\n"
  "int64 right_ticks\n"
  "float64 right_velocity";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
custom_interfaces__msg__Encoder__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {custom_interfaces__msg__Encoder__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 94, 94},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
custom_interfaces__msg__Encoder__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *custom_interfaces__msg__Encoder__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
