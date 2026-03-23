// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from custom_interfaces:msg/Lidar.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "custom_interfaces/msg/detail/lidar__rosidl_typesupport_introspection_c.h"
#include "custom_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "custom_interfaces/msg/detail/lidar__functions.h"
#include "custom_interfaces/msg/detail/lidar__struct.h"


// Include directives for member types
// Member `distances`
// Member `angles`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void custom_interfaces__msg__Lidar__rosidl_typesupport_introspection_c__Lidar_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_interfaces__msg__Lidar__init(message_memory);
}

void custom_interfaces__msg__Lidar__rosidl_typesupport_introspection_c__Lidar_fini_function(void * message_memory)
{
  custom_interfaces__msg__Lidar__fini(message_memory);
}

size_t custom_interfaces__msg__Lidar__rosidl_typesupport_introspection_c__size_function__Lidar__distances(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * custom_interfaces__msg__Lidar__rosidl_typesupport_introspection_c__get_const_function__Lidar__distances(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * custom_interfaces__msg__Lidar__rosidl_typesupport_introspection_c__get_function__Lidar__distances(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void custom_interfaces__msg__Lidar__rosidl_typesupport_introspection_c__fetch_function__Lidar__distances(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    custom_interfaces__msg__Lidar__rosidl_typesupport_introspection_c__get_const_function__Lidar__distances(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void custom_interfaces__msg__Lidar__rosidl_typesupport_introspection_c__assign_function__Lidar__distances(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    custom_interfaces__msg__Lidar__rosidl_typesupport_introspection_c__get_function__Lidar__distances(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool custom_interfaces__msg__Lidar__rosidl_typesupport_introspection_c__resize_function__Lidar__distances(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t custom_interfaces__msg__Lidar__rosidl_typesupport_introspection_c__size_function__Lidar__angles(
  const void * untyped_member)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return member->size;
}

const void * custom_interfaces__msg__Lidar__rosidl_typesupport_introspection_c__get_const_function__Lidar__angles(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * custom_interfaces__msg__Lidar__rosidl_typesupport_introspection_c__get_function__Lidar__angles(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void custom_interfaces__msg__Lidar__rosidl_typesupport_introspection_c__fetch_function__Lidar__angles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int64_t * item =
    ((const int64_t *)
    custom_interfaces__msg__Lidar__rosidl_typesupport_introspection_c__get_const_function__Lidar__angles(untyped_member, index));
  int64_t * value =
    (int64_t *)(untyped_value);
  *value = *item;
}

void custom_interfaces__msg__Lidar__rosidl_typesupport_introspection_c__assign_function__Lidar__angles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int64_t * item =
    ((int64_t *)
    custom_interfaces__msg__Lidar__rosidl_typesupport_introspection_c__get_function__Lidar__angles(untyped_member, index));
  const int64_t * value =
    (const int64_t *)(untyped_value);
  *item = *value;
}

bool custom_interfaces__msg__Lidar__rosidl_typesupport_introspection_c__resize_function__Lidar__angles(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  rosidl_runtime_c__int64__Sequence__fini(member);
  return rosidl_runtime_c__int64__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember custom_interfaces__msg__Lidar__rosidl_typesupport_introspection_c__Lidar_message_member_array[2] = {
  {
    "distances",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces__msg__Lidar, distances),  // bytes offset in struct
    NULL,  // default value
    custom_interfaces__msg__Lidar__rosidl_typesupport_introspection_c__size_function__Lidar__distances,  // size() function pointer
    custom_interfaces__msg__Lidar__rosidl_typesupport_introspection_c__get_const_function__Lidar__distances,  // get_const(index) function pointer
    custom_interfaces__msg__Lidar__rosidl_typesupport_introspection_c__get_function__Lidar__distances,  // get(index) function pointer
    custom_interfaces__msg__Lidar__rosidl_typesupport_introspection_c__fetch_function__Lidar__distances,  // fetch(index, &value) function pointer
    custom_interfaces__msg__Lidar__rosidl_typesupport_introspection_c__assign_function__Lidar__distances,  // assign(index, value) function pointer
    custom_interfaces__msg__Lidar__rosidl_typesupport_introspection_c__resize_function__Lidar__distances  // resize(index) function pointer
  },
  {
    "angles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces__msg__Lidar, angles),  // bytes offset in struct
    NULL,  // default value
    custom_interfaces__msg__Lidar__rosidl_typesupport_introspection_c__size_function__Lidar__angles,  // size() function pointer
    custom_interfaces__msg__Lidar__rosidl_typesupport_introspection_c__get_const_function__Lidar__angles,  // get_const(index) function pointer
    custom_interfaces__msg__Lidar__rosidl_typesupport_introspection_c__get_function__Lidar__angles,  // get(index) function pointer
    custom_interfaces__msg__Lidar__rosidl_typesupport_introspection_c__fetch_function__Lidar__angles,  // fetch(index, &value) function pointer
    custom_interfaces__msg__Lidar__rosidl_typesupport_introspection_c__assign_function__Lidar__angles,  // assign(index, value) function pointer
    custom_interfaces__msg__Lidar__rosidl_typesupport_introspection_c__resize_function__Lidar__angles  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers custom_interfaces__msg__Lidar__rosidl_typesupport_introspection_c__Lidar_message_members = {
  "custom_interfaces__msg",  // message namespace
  "Lidar",  // message name
  2,  // number of fields
  sizeof(custom_interfaces__msg__Lidar),
  false,  // has_any_key_member_
  custom_interfaces__msg__Lidar__rosidl_typesupport_introspection_c__Lidar_message_member_array,  // message members
  custom_interfaces__msg__Lidar__rosidl_typesupport_introspection_c__Lidar_init_function,  // function to initialize message memory (memory has to be allocated)
  custom_interfaces__msg__Lidar__rosidl_typesupport_introspection_c__Lidar_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t custom_interfaces__msg__Lidar__rosidl_typesupport_introspection_c__Lidar_message_type_support_handle = {
  0,
  &custom_interfaces__msg__Lidar__rosidl_typesupport_introspection_c__Lidar_message_members,
  get_message_typesupport_handle_function,
  &custom_interfaces__msg__Lidar__get_type_hash,
  &custom_interfaces__msg__Lidar__get_type_description,
  &custom_interfaces__msg__Lidar__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, msg, Lidar)() {
  if (!custom_interfaces__msg__Lidar__rosidl_typesupport_introspection_c__Lidar_message_type_support_handle.typesupport_identifier) {
    custom_interfaces__msg__Lidar__rosidl_typesupport_introspection_c__Lidar_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &custom_interfaces__msg__Lidar__rosidl_typesupport_introspection_c__Lidar_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
