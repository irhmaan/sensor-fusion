// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from custom_interfaces:msg/IMU.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "custom_interfaces/msg/detail/imu__rosidl_typesupport_introspection_c.h"
#include "custom_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "custom_interfaces/msg/detail/imu__functions.h"
#include "custom_interfaces/msg/detail/imu__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void custom_interfaces__msg__IMU__rosidl_typesupport_introspection_c__IMU_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_interfaces__msg__IMU__init(message_memory);
}

void custom_interfaces__msg__IMU__rosidl_typesupport_introspection_c__IMU_fini_function(void * message_memory)
{
  custom_interfaces__msg__IMU__fini(message_memory);
}

size_t custom_interfaces__msg__IMU__rosidl_typesupport_introspection_c__size_function__IMU__accel(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * custom_interfaces__msg__IMU__rosidl_typesupport_introspection_c__get_const_function__IMU__accel(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * custom_interfaces__msg__IMU__rosidl_typesupport_introspection_c__get_function__IMU__accel(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void custom_interfaces__msg__IMU__rosidl_typesupport_introspection_c__fetch_function__IMU__accel(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    custom_interfaces__msg__IMU__rosidl_typesupport_introspection_c__get_const_function__IMU__accel(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void custom_interfaces__msg__IMU__rosidl_typesupport_introspection_c__assign_function__IMU__accel(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    custom_interfaces__msg__IMU__rosidl_typesupport_introspection_c__get_function__IMU__accel(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t custom_interfaces__msg__IMU__rosidl_typesupport_introspection_c__size_function__IMU__gyro(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * custom_interfaces__msg__IMU__rosidl_typesupport_introspection_c__get_const_function__IMU__gyro(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * custom_interfaces__msg__IMU__rosidl_typesupport_introspection_c__get_function__IMU__gyro(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void custom_interfaces__msg__IMU__rosidl_typesupport_introspection_c__fetch_function__IMU__gyro(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    custom_interfaces__msg__IMU__rosidl_typesupport_introspection_c__get_const_function__IMU__gyro(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void custom_interfaces__msg__IMU__rosidl_typesupport_introspection_c__assign_function__IMU__gyro(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    custom_interfaces__msg__IMU__rosidl_typesupport_introspection_c__get_function__IMU__gyro(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t custom_interfaces__msg__IMU__rosidl_typesupport_introspection_c__size_function__IMU__mag(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * custom_interfaces__msg__IMU__rosidl_typesupport_introspection_c__get_const_function__IMU__mag(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * custom_interfaces__msg__IMU__rosidl_typesupport_introspection_c__get_function__IMU__mag(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void custom_interfaces__msg__IMU__rosidl_typesupport_introspection_c__fetch_function__IMU__mag(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    custom_interfaces__msg__IMU__rosidl_typesupport_introspection_c__get_const_function__IMU__mag(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void custom_interfaces__msg__IMU__rosidl_typesupport_introspection_c__assign_function__IMU__mag(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    custom_interfaces__msg__IMU__rosidl_typesupport_introspection_c__get_function__IMU__mag(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember custom_interfaces__msg__IMU__rosidl_typesupport_introspection_c__IMU_message_member_array[3] = {
  {
    "accel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces__msg__IMU, accel),  // bytes offset in struct
    NULL,  // default value
    custom_interfaces__msg__IMU__rosidl_typesupport_introspection_c__size_function__IMU__accel,  // size() function pointer
    custom_interfaces__msg__IMU__rosidl_typesupport_introspection_c__get_const_function__IMU__accel,  // get_const(index) function pointer
    custom_interfaces__msg__IMU__rosidl_typesupport_introspection_c__get_function__IMU__accel,  // get(index) function pointer
    custom_interfaces__msg__IMU__rosidl_typesupport_introspection_c__fetch_function__IMU__accel,  // fetch(index, &value) function pointer
    custom_interfaces__msg__IMU__rosidl_typesupport_introspection_c__assign_function__IMU__accel,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gyro",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces__msg__IMU, gyro),  // bytes offset in struct
    NULL,  // default value
    custom_interfaces__msg__IMU__rosidl_typesupport_introspection_c__size_function__IMU__gyro,  // size() function pointer
    custom_interfaces__msg__IMU__rosidl_typesupport_introspection_c__get_const_function__IMU__gyro,  // get_const(index) function pointer
    custom_interfaces__msg__IMU__rosidl_typesupport_introspection_c__get_function__IMU__gyro,  // get(index) function pointer
    custom_interfaces__msg__IMU__rosidl_typesupport_introspection_c__fetch_function__IMU__gyro,  // fetch(index, &value) function pointer
    custom_interfaces__msg__IMU__rosidl_typesupport_introspection_c__assign_function__IMU__gyro,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mag",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces__msg__IMU, mag),  // bytes offset in struct
    NULL,  // default value
    custom_interfaces__msg__IMU__rosidl_typesupport_introspection_c__size_function__IMU__mag,  // size() function pointer
    custom_interfaces__msg__IMU__rosidl_typesupport_introspection_c__get_const_function__IMU__mag,  // get_const(index) function pointer
    custom_interfaces__msg__IMU__rosidl_typesupport_introspection_c__get_function__IMU__mag,  // get(index) function pointer
    custom_interfaces__msg__IMU__rosidl_typesupport_introspection_c__fetch_function__IMU__mag,  // fetch(index, &value) function pointer
    custom_interfaces__msg__IMU__rosidl_typesupport_introspection_c__assign_function__IMU__mag,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers custom_interfaces__msg__IMU__rosidl_typesupport_introspection_c__IMU_message_members = {
  "custom_interfaces__msg",  // message namespace
  "IMU",  // message name
  3,  // number of fields
  sizeof(custom_interfaces__msg__IMU),
  false,  // has_any_key_member_
  custom_interfaces__msg__IMU__rosidl_typesupport_introspection_c__IMU_message_member_array,  // message members
  custom_interfaces__msg__IMU__rosidl_typesupport_introspection_c__IMU_init_function,  // function to initialize message memory (memory has to be allocated)
  custom_interfaces__msg__IMU__rosidl_typesupport_introspection_c__IMU_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t custom_interfaces__msg__IMU__rosidl_typesupport_introspection_c__IMU_message_type_support_handle = {
  0,
  &custom_interfaces__msg__IMU__rosidl_typesupport_introspection_c__IMU_message_members,
  get_message_typesupport_handle_function,
  &custom_interfaces__msg__IMU__get_type_hash,
  &custom_interfaces__msg__IMU__get_type_description,
  &custom_interfaces__msg__IMU__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, msg, IMU)() {
  if (!custom_interfaces__msg__IMU__rosidl_typesupport_introspection_c__IMU_message_type_support_handle.typesupport_identifier) {
    custom_interfaces__msg__IMU__rosidl_typesupport_introspection_c__IMU_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &custom_interfaces__msg__IMU__rosidl_typesupport_introspection_c__IMU_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
