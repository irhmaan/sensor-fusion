// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from custom_interfaces:msg/Lidar.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_interfaces/msg/lidar.h"


#ifndef CUSTOM_INTERFACES__MSG__DETAIL__LIDAR__FUNCTIONS_H_
#define CUSTOM_INTERFACES__MSG__DETAIL__LIDAR__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "custom_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "custom_interfaces/msg/detail/lidar__struct.h"

/// Initialize msg/Lidar message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * custom_interfaces__msg__Lidar
 * )) before or use
 * custom_interfaces__msg__Lidar__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
bool
custom_interfaces__msg__Lidar__init(custom_interfaces__msg__Lidar * msg);

/// Finalize msg/Lidar message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
void
custom_interfaces__msg__Lidar__fini(custom_interfaces__msg__Lidar * msg);

/// Create msg/Lidar message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * custom_interfaces__msg__Lidar__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
custom_interfaces__msg__Lidar *
custom_interfaces__msg__Lidar__create(void);

/// Destroy msg/Lidar message.
/**
 * It calls
 * custom_interfaces__msg__Lidar__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
void
custom_interfaces__msg__Lidar__destroy(custom_interfaces__msg__Lidar * msg);

/// Check for msg/Lidar message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
bool
custom_interfaces__msg__Lidar__are_equal(const custom_interfaces__msg__Lidar * lhs, const custom_interfaces__msg__Lidar * rhs);

/// Copy a msg/Lidar message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
bool
custom_interfaces__msg__Lidar__copy(
  const custom_interfaces__msg__Lidar * input,
  custom_interfaces__msg__Lidar * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
const rosidl_type_hash_t *
custom_interfaces__msg__Lidar__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
custom_interfaces__msg__Lidar__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
const rosidl_runtime_c__type_description__TypeSource *
custom_interfaces__msg__Lidar__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
custom_interfaces__msg__Lidar__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/Lidar messages.
/**
 * It allocates the memory for the number of elements and calls
 * custom_interfaces__msg__Lidar__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
bool
custom_interfaces__msg__Lidar__Sequence__init(custom_interfaces__msg__Lidar__Sequence * array, size_t size);

/// Finalize array of msg/Lidar messages.
/**
 * It calls
 * custom_interfaces__msg__Lidar__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
void
custom_interfaces__msg__Lidar__Sequence__fini(custom_interfaces__msg__Lidar__Sequence * array);

/// Create array of msg/Lidar messages.
/**
 * It allocates the memory for the array and calls
 * custom_interfaces__msg__Lidar__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
custom_interfaces__msg__Lidar__Sequence *
custom_interfaces__msg__Lidar__Sequence__create(size_t size);

/// Destroy array of msg/Lidar messages.
/**
 * It calls
 * custom_interfaces__msg__Lidar__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
void
custom_interfaces__msg__Lidar__Sequence__destroy(custom_interfaces__msg__Lidar__Sequence * array);

/// Check for msg/Lidar message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
bool
custom_interfaces__msg__Lidar__Sequence__are_equal(const custom_interfaces__msg__Lidar__Sequence * lhs, const custom_interfaces__msg__Lidar__Sequence * rhs);

/// Copy an array of msg/Lidar messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
bool
custom_interfaces__msg__Lidar__Sequence__copy(
  const custom_interfaces__msg__Lidar__Sequence * input,
  custom_interfaces__msg__Lidar__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__LIDAR__FUNCTIONS_H_
