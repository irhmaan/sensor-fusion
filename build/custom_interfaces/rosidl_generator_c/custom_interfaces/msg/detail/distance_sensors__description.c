// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from custom_interfaces:msg/DistanceSensors.idl
// generated code does not contain a copyright notice

#include "custom_interfaces/msg/detail/distance_sensors__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
const rosidl_type_hash_t *
custom_interfaces__msg__DistanceSensors__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xde, 0x32, 0xe3, 0x71, 0x6c, 0x46, 0xf5, 0x88,
      0xdb, 0x76, 0x84, 0x74, 0xe2, 0x17, 0x66, 0xfc,
      0x4c, 0xd3, 0x77, 0xad, 0xdc, 0x3f, 0x30, 0x75,
      0x34, 0x9a, 0x12, 0xa2, 0x18, 0x4f, 0x9b, 0x42,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char custom_interfaces__msg__DistanceSensors__TYPE_NAME[] = "custom_interfaces/msg/DistanceSensors";

// Define type names, field names, and default values
static char custom_interfaces__msg__DistanceSensors__FIELD_NAME__ultrasonic_front[] = "ultrasonic_front";
static char custom_interfaces__msg__DistanceSensors__FIELD_NAME__ultrasonic_left[] = "ultrasonic_left";
static char custom_interfaces__msg__DistanceSensors__FIELD_NAME__ultrasonic_right[] = "ultrasonic_right";
static char custom_interfaces__msg__DistanceSensors__FIELD_NAME__ir_front[] = "ir_front";

static rosidl_runtime_c__type_description__Field custom_interfaces__msg__DistanceSensors__FIELDS[] = {
  {
    {custom_interfaces__msg__DistanceSensors__FIELD_NAME__ultrasonic_front, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_interfaces__msg__DistanceSensors__FIELD_NAME__ultrasonic_left, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_interfaces__msg__DistanceSensors__FIELD_NAME__ultrasonic_right, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_interfaces__msg__DistanceSensors__FIELD_NAME__ir_front, 8, 8},
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
custom_interfaces__msg__DistanceSensors__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {custom_interfaces__msg__DistanceSensors__TYPE_NAME, 37, 37},
      {custom_interfaces__msg__DistanceSensors__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#UltraSonic and IR Sensors\n"
  "float64 ultrasonic_front\n"
  "float64 ultrasonic_left\n"
  "float64 ultrasonic_right\n"
  "float64 ir_front";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
custom_interfaces__msg__DistanceSensors__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {custom_interfaces__msg__DistanceSensors__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 117, 117},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
custom_interfaces__msg__DistanceSensors__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *custom_interfaces__msg__DistanceSensors__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
