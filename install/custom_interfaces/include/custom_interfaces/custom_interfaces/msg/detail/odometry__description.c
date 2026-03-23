// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from custom_interfaces:msg/Odometry.idl
// generated code does not contain a copyright notice

#include "custom_interfaces/msg/detail/odometry__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
const rosidl_type_hash_t *
custom_interfaces__msg__Odometry__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1f, 0xb5, 0x84, 0x41, 0xd8, 0x0d, 0x12, 0xd0,
      0xf9, 0x39, 0x34, 0x88, 0xf0, 0x79, 0x2a, 0x1a,
      0x09, 0x07, 0xaf, 0xd8, 0xb0, 0xba, 0x73, 0x62,
      0xe3, 0x7b, 0x5f, 0xca, 0xae, 0xb1, 0x68, 0x98,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char custom_interfaces__msg__Odometry__TYPE_NAME[] = "custom_interfaces/msg/Odometry";

// Define type names, field names, and default values
static char custom_interfaces__msg__Odometry__FIELD_NAME__x[] = "x";
static char custom_interfaces__msg__Odometry__FIELD_NAME__y[] = "y";
static char custom_interfaces__msg__Odometry__FIELD_NAME__theta[] = "theta";

static rosidl_runtime_c__type_description__Field custom_interfaces__msg__Odometry__FIELDS[] = {
  {
    {custom_interfaces__msg__Odometry__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_interfaces__msg__Odometry__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_interfaces__msg__Odometry__FIELD_NAME__theta, 5, 5},
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
custom_interfaces__msg__Odometry__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {custom_interfaces__msg__Odometry__TYPE_NAME, 30, 30},
      {custom_interfaces__msg__Odometry__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#Odomentry Data\n"
  "float64 x\n"
  "float64 y\n"
  "float64 theta";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
custom_interfaces__msg__Odometry__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {custom_interfaces__msg__Odometry__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 49, 49},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
custom_interfaces__msg__Odometry__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *custom_interfaces__msg__Odometry__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
