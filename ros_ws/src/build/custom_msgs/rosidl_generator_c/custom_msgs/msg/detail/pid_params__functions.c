// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_msgs:msg/PIDParams.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/pid_params__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
custom_msgs__msg__PIDParams__init(custom_msgs__msg__PIDParams * msg)
{
  if (!msg) {
    return false;
  }
  // sec
  // nanosec
  // p_value
  // i_value
  // d_value
  // integral_limit_upper
  // integral_limit_lower
  return true;
}

void
custom_msgs__msg__PIDParams__fini(custom_msgs__msg__PIDParams * msg)
{
  if (!msg) {
    return;
  }
  // sec
  // nanosec
  // p_value
  // i_value
  // d_value
  // integral_limit_upper
  // integral_limit_lower
}

bool
custom_msgs__msg__PIDParams__are_equal(const custom_msgs__msg__PIDParams * lhs, const custom_msgs__msg__PIDParams * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sec
  if (lhs->sec != rhs->sec) {
    return false;
  }
  // nanosec
  if (lhs->nanosec != rhs->nanosec) {
    return false;
  }
  // p_value
  if (lhs->p_value != rhs->p_value) {
    return false;
  }
  // i_value
  if (lhs->i_value != rhs->i_value) {
    return false;
  }
  // d_value
  if (lhs->d_value != rhs->d_value) {
    return false;
  }
  // integral_limit_upper
  if (lhs->integral_limit_upper != rhs->integral_limit_upper) {
    return false;
  }
  // integral_limit_lower
  if (lhs->integral_limit_lower != rhs->integral_limit_lower) {
    return false;
  }
  return true;
}

bool
custom_msgs__msg__PIDParams__copy(
  const custom_msgs__msg__PIDParams * input,
  custom_msgs__msg__PIDParams * output)
{
  if (!input || !output) {
    return false;
  }
  // sec
  output->sec = input->sec;
  // nanosec
  output->nanosec = input->nanosec;
  // p_value
  output->p_value = input->p_value;
  // i_value
  output->i_value = input->i_value;
  // d_value
  output->d_value = input->d_value;
  // integral_limit_upper
  output->integral_limit_upper = input->integral_limit_upper;
  // integral_limit_lower
  output->integral_limit_lower = input->integral_limit_lower;
  return true;
}

custom_msgs__msg__PIDParams *
custom_msgs__msg__PIDParams__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__msg__PIDParams * msg = (custom_msgs__msg__PIDParams *)allocator.allocate(sizeof(custom_msgs__msg__PIDParams), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_msgs__msg__PIDParams));
  bool success = custom_msgs__msg__PIDParams__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_msgs__msg__PIDParams__destroy(custom_msgs__msg__PIDParams * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_msgs__msg__PIDParams__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_msgs__msg__PIDParams__Sequence__init(custom_msgs__msg__PIDParams__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__msg__PIDParams * data = NULL;

  if (size) {
    data = (custom_msgs__msg__PIDParams *)allocator.zero_allocate(size, sizeof(custom_msgs__msg__PIDParams), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_msgs__msg__PIDParams__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_msgs__msg__PIDParams__fini(&data[i - 1]);
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
custom_msgs__msg__PIDParams__Sequence__fini(custom_msgs__msg__PIDParams__Sequence * array)
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
      custom_msgs__msg__PIDParams__fini(&array->data[i]);
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

custom_msgs__msg__PIDParams__Sequence *
custom_msgs__msg__PIDParams__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__msg__PIDParams__Sequence * array = (custom_msgs__msg__PIDParams__Sequence *)allocator.allocate(sizeof(custom_msgs__msg__PIDParams__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_msgs__msg__PIDParams__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_msgs__msg__PIDParams__Sequence__destroy(custom_msgs__msg__PIDParams__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_msgs__msg__PIDParams__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_msgs__msg__PIDParams__Sequence__are_equal(const custom_msgs__msg__PIDParams__Sequence * lhs, const custom_msgs__msg__PIDParams__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_msgs__msg__PIDParams__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_msgs__msg__PIDParams__Sequence__copy(
  const custom_msgs__msg__PIDParams__Sequence * input,
  custom_msgs__msg__PIDParams__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_msgs__msg__PIDParams);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    custom_msgs__msg__PIDParams * data =
      (custom_msgs__msg__PIDParams *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_msgs__msg__PIDParams__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          custom_msgs__msg__PIDParams__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_msgs__msg__PIDParams__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
