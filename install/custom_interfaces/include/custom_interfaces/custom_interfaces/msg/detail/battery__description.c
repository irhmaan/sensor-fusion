// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from custom_interfaces:msg/Battery.idl
// generated code does not contain a copyright notice

#include "custom_interfaces/msg/detail/battery__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
const rosidl_type_hash_t *
custom_interfaces__msg__Battery__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7e, 0xe3, 0x38, 0x86, 0xd4, 0x0f, 0x97, 0x3c,
      0x31, 0x4a, 0x7c, 0x35, 0x26, 0x6d, 0x3c, 0xa0,
      0x8e, 0xb8, 0xaf, 0x16, 0x97, 0xfe, 0xd7, 0xea,
      0x6c, 0x6c, 0xab, 0x63, 0xe7, 0xa0, 0xdf, 0x5f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char custom_interfaces__msg__Battery__TYPE_NAME[] = "custom_interfaces/msg/Battery";

// Define type names, field names, and default values
static char custom_interfaces__msg__Battery__FIELD_NAME__voltage[] = "voltage";
static char custom_interfaces__msg__Battery__FIELD_NAME__percentage[] = "percentage";

static rosidl_runtime_c__type_description__Field custom_interfaces__msg__Battery__FIELDS[] = {
  {
    {custom_interfaces__msg__Battery__FIELD_NAME__voltage, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_interfaces__msg__Battery__FIELD_NAME__percentage, 10, 10},
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
custom_interfaces__msg__Battery__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {custom_interfaces__msg__Battery__TYPE_NAME, 29, 29},
      {custom_interfaces__msg__Battery__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#Battery Data\n"
  "float64 voltage\n"
  "int64 percentage";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
custom_interfaces__msg__Battery__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {custom_interfaces__msg__Battery__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 46, 46},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
custom_interfaces__msg__Battery__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *custom_interfaces__msg__Battery__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
