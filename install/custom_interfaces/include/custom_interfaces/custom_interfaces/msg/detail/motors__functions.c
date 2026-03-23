// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_interfaces:msg/Motors.idl
// generated code does not contain a copyright notice
#include "custom_interfaces/msg/detail/motors__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
custom_interfaces__msg__Motors__init(custom_interfaces__msg__Motors * msg)
{
  if (!msg) {
    return false;
  }
  // left_pwm
  // left_current
  // right_pwm
  // right_current
  return true;
}

void
custom_interfaces__msg__Motors__fini(custom_interfaces__msg__Motors * msg)
{
  if (!msg) {
    return;
  }
  // left_pwm
  // left_current
  // right_pwm
  // right_current
}

bool
custom_interfaces__msg__Motors__are_equal(const custom_interfaces__msg__Motors * lhs, const custom_interfaces__msg__Motors * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // left_pwm
  if (lhs->left_pwm != rhs->left_pwm) {
    return false;
  }
  // left_current
  if (lhs->left_current != rhs->left_current) {
    return false;
  }
  // right_pwm
  if (lhs->right_pwm != rhs->right_pwm) {
    return false;
  }
  // right_current
  if (lhs->right_current != rhs->right_current) {
    return false;
  }
  return true;
}

bool
custom_interfaces__msg__Motors__copy(
  const custom_interfaces__msg__Motors * input,
  custom_interfaces__msg__Motors * output)
{
  if (!input || !output) {
    return false;
  }
  // left_pwm
  output->left_pwm = input->left_pwm;
  // left_current
  output->left_current = input->left_current;
  // right_pwm
  output->right_pwm = input->right_pwm;
  // right_current
  output->right_current = input->right_current;
  return true;
}

custom_interfaces__msg__Motors *
custom_interfaces__msg__Motors__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_interfaces__msg__Motors * msg = (custom_interfaces__msg__Motors *)allocator.allocate(sizeof(custom_interfaces__msg__Motors), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_interfaces__msg__Motors));
  bool success = custom_interfaces__msg__Motors__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_interfaces__msg__Motors__destroy(custom_interfaces__msg__Motors * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_interfaces__msg__Motors__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_interfaces__msg__Motors__Sequence__init(custom_interfaces__msg__Motors__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_interfaces__msg__Motors * data = NULL;

  if (size) {
    data = (custom_interfaces__msg__Motors *)allocator.zero_allocate(size, sizeof(custom_interfaces__msg__Motors), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_interfaces__msg__Motors__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_interfaces__msg__Motors__fini(&data[i - 1]);
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
custom_interfaces__msg__Motors__Sequence__fini(custom_interfaces__msg__Motors__Sequence * array)
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
      custom_interfaces__msg__Motors__fini(&array->data[i]);
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

custom_interfaces__msg__Motors__Sequence *
custom_interfaces__msg__Motors__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_interfaces__msg__Motors__Sequence * array = (custom_interfaces__msg__Motors__Sequence *)allocator.allocate(sizeof(custom_interfaces__msg__Motors__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_interfaces__msg__Motors__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_interfaces__msg__Motors__Sequence__destroy(custom_interfaces__msg__Motors__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_interfaces__msg__Motors__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_interfaces__msg__Motors__Sequence__are_equal(const custom_interfaces__msg__Motors__Sequence * lhs, const custom_interfaces__msg__Motors__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_interfaces__msg__Motors__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_interfaces__msg__Motors__Sequence__copy(
  const custom_interfaces__msg__Motors__Sequence * input,
  custom_interfaces__msg__Motors__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_interfaces__msg__Motors);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    custom_interfaces__msg__Motors * data =
      (custom_interfaces__msg__Motors *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_interfaces__msg__Motors__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          custom_interfaces__msg__Motors__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_interfaces__msg__Motors__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
