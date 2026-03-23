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
      0xf8, 0x37, 0x84, 0x22, 0xbc, 0xd6, 0x50, 0x43,
      0x4b, 0xa8, 0x2d, 0xe8, 0x10, 0xfc, 0x32, 0xd3,
      0xfa, 0xca, 0x9f, 0x8a, 0x3e, 0x55, 0xbc, 0xe2,
      0x39, 0x69, 0x5b, 0x66, 0x95, 0xf5, 0x6f, 0x65,
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
static char custom_interfaces__msg__Encoder__FIELD_NAME__left_velocit[] = "left_velocit";
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
    {custom_interfaces__msg__Encoder__FIELD_NAME__left_velocit, 12, 12},
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
  "float64 left_velocit\n"
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
    {toplevel_type_raw_source, 93, 93},
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
