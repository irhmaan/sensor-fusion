// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_interfaces:msg/DistanceSensors.idl
// generated code does not contain a copyright notice
#include "custom_interfaces/msg/detail/distance_sensors__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
custom_interfaces__msg__DistanceSensors__init(custom_interfaces__msg__DistanceSensors * msg)
{
  if (!msg) {
    return false;
  }
  // ultrasonic_front
  // ultrasonic_left
  // ultrasonic_right
  // ir_front
  return true;
}

void
custom_interfaces__msg__DistanceSensors__fini(custom_interfaces__msg__DistanceSensors * msg)
{
  if (!msg) {
    return;
  }
  // ultrasonic_front
  // ultrasonic_left
  // ultrasonic_right
  // ir_front
}

bool
custom_interfaces__msg__DistanceSensors__are_equal(const custom_interfaces__msg__DistanceSensors * lhs, const custom_interfaces__msg__DistanceSensors * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ultrasonic_front
  if (lhs->ultrasonic_front != rhs->ultrasonic_front) {
    return false;
  }
  // ultrasonic_left
  if (lhs->ultrasonic_left != rhs->ultrasonic_left) {
    return false;
  }
  // ultrasonic_right
  if (lhs->ultrasonic_right != rhs->ultrasonic_right) {
    return false;
  }
  // ir_front
  if (lhs->ir_front != rhs->ir_front) {
    return false;
  }
  return true;
}

bool
custom_interfaces__msg__DistanceSensors__copy(
  const custom_interfaces__msg__DistanceSensors * input,
  custom_interfaces__msg__DistanceSensors * output)
{
  if (!input || !output) {
    return false;
  }
  // ultrasonic_front
  output->ultrasonic_front = input->ultrasonic_front;
  // ultrasonic_left
  output->ultrasonic_left = input->ultrasonic_left;
  // ultrasonic_right
  output->ultrasonic_right = input->ultrasonic_right;
  // ir_front
  output->ir_front = input->ir_front;
  return true;
}

custom_interfaces__msg__DistanceSensors *
custom_interfaces__msg__DistanceSensors__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_interfaces__msg__DistanceSensors * msg = (custom_interfaces__msg__DistanceSensors *)allocator.allocate(sizeof(custom_interfaces__msg__DistanceSensors), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_interfaces__msg__DistanceSensors));
  bool success = custom_interfaces__msg__DistanceSensors__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_interfaces__msg__DistanceSensors__destroy(custom_interfaces__msg__DistanceSensors * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_interfaces__msg__DistanceSensors__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_interfaces__msg__DistanceSensors__Sequence__init(custom_interfaces__msg__DistanceSensors__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_interfaces__msg__DistanceSensors * data = NULL;

  if (size) {
    data = (custom_interfaces__msg__DistanceSensors *)allocator.zero_allocate(size, sizeof(custom_interfaces__msg__DistanceSensors), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_interfaces__msg__DistanceSensors__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_interfaces__msg__DistanceSensors__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
custom_interfaces__msg__DistanceSensors__Sequence__fini(custom_interfaces__msg__DistanceSensors__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_interfaces__msg__DistanceSensors__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

custom_interfaces__msg__DistanceSensors__Sequence *
custom_interfaces__msg__DistanceSensors__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_interfaces__msg__DistanceSensors__Sequence * array = (custom_interfaces__msg__DistanceSensors__Sequence *)allocator.allocate(sizeof(custom_interfaces__msg__DistanceSensors__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_interfaces__msg__DistanceSensors__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_interfaces__msg__DistanceSensors__Sequence__destroy(custom_interfaces__msg__DistanceSensors__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_interfaces__msg__DistanceSensors__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_interfaces__msg__DistanceSensors__Sequence__are_equal(const custom_interfaces__msg__DistanceSensors__Sequence * lhs, const custom_interfaces__msg__DistanceSensors__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_interfaces__msg__DistanceSensors__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_interfaces__msg__DistanceSensors__Sequence__copy(
  const custom_interfaces__msg__DistanceSensors__Sequence * input,
  custom_interfaces__msg__DistanceSensors__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_interfaces__msg__DistanceSensors);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    custom_interfaces__msg__DistanceSensors * data =
      (custom_interfaces__msg__DistanceSensors *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_interfaces__msg__DistanceSensors__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          custom_interfaces__msg__DistanceSensors__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_interfaces__msg__DistanceSensors__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
