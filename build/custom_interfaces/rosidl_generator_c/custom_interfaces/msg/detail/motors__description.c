// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from custom_interfaces:msg/Motors.idl
// generated code does not contain a copyright notice

#include "custom_interfaces/msg/detail/motors__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
const rosidl_type_hash_t *
custom_interfaces__msg__Motors__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x67, 0x8d, 0xb2, 0x02, 0x6d, 0xd4, 0xc4, 0xe2,
      0x7e, 0x01, 0xac, 0x18, 0x59, 0xfc, 0x3c, 0x2c,
      0xaf, 0x20, 0xf4, 0x88, 0x83, 0xbc, 0xa6, 0x72,
      0x91, 0x72, 0x16, 0x69, 0x4d, 0x34, 0x24, 0xaa,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char custom_interfaces__msg__Motors__TYPE_NAME[] = "custom_interfaces/msg/Motors";

// Define type names, field names, and default values
static char custom_interfaces__msg__Motors__FIELD_NAME__left_pwm[] = "left_pwm";
static char custom_interfaces__msg__Motors__FIELD_NAME__left_current[] = "left_current";
static char custom_interfaces__msg__Motors__FIELD_NAME__right_pwm[] = "right_pwm";
static char custom_interfaces__msg__Motors__FIELD_NAME__right_current[] = "right_current";

static rosidl_runtime_c__type_description__Field custom_interfaces__msg__Motors__FIELDS[] = {
  {
    {custom_interfaces__msg__Motors__FIELD_NAME__left_pwm, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_interfaces__msg__Motors__FIELD_NAME__left_current, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_interfaces__msg__Motors__FIELD_NAME__right_pwm, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_interfaces__msg__Motors__FIELD_NAME__right_current, 13, 13},
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
custom_interfaces__msg__Motors__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {custom_interfaces__msg__Motors__TYPE_NAME, 28, 28},
      {custom_interfaces__msg__Motors__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#Motors Data\n"
  "int64 left_pwm\n"
  "float64 left_current\n"
  "int64 right_pwm\n"
  "float64 right_current";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
custom_interfaces__msg__Motors__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {custom_interfaces__msg__Motors__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 87, 87},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
custom_interfaces__msg__Motors__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *custom_interfaces__msg__Motors__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
