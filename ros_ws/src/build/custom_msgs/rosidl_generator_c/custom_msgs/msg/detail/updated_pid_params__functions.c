// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_msgs:msg/UpdatedPIDParams.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/updated_pid_params__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
custom_msgs__msg__UpdatedPIDParams__init(custom_msgs__msg__UpdatedPIDParams * msg)
{
  if (!msg) {
    return false;
  }
  // sec
  // nanosec
  // updated_p_value
  // updated_i_value
  // updated_d_value
  return true;
}

void
custom_msgs__msg__UpdatedPIDParams__fini(custom_msgs__msg__UpdatedPIDParams * msg)
{
  if (!msg) {
    return;
  }
  // sec
  // nanosec
  // updated_p_value
  // updated_i_value
  // updated_d_value
}

bool
custom_msgs__msg__UpdatedPIDParams__are_equal(const custom_msgs__msg__UpdatedPIDParams * lhs, const custom_msgs__msg__UpdatedPIDParams * rhs)
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
  // updated_p_value
  if (lhs->updated_p_value != rhs->updated_p_value) {
    return false;
  }
  // updated_i_value
  if (lhs->updated_i_value != rhs->updated_i_value) {
    return false;
  }
  // updated_d_value
  if (lhs->updated_d_value != rhs->updated_d_value) {
    return false;
  }
  return true;
}

bool
custom_msgs__msg__UpdatedPIDParams__copy(
  const custom_msgs__msg__UpdatedPIDParams * input,
  custom_msgs__msg__UpdatedPIDParams * output)
{
  if (!input || !output) {
    return false;
  }
  // sec
  output->sec = input->sec;
  // nanosec
  output->nanosec = input->nanosec;
  // updated_p_value
  output->updated_p_value = input->updated_p_value;
  // updated_i_value
  output->updated_i_value = input->updated_i_value;
  // updated_d_value
  output->updated_d_value = input->updated_d_value;
  return true;
}

custom_msgs__msg__UpdatedPIDParams *
custom_msgs__msg__UpdatedPIDParams__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__msg__UpdatedPIDParams * msg = (custom_msgs__msg__UpdatedPIDParams *)allocator.allocate(sizeof(custom_msgs__msg__UpdatedPIDParams), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_msgs__msg__UpdatedPIDParams));
  bool success = custom_msgs__msg__UpdatedPIDParams__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_msgs__msg__UpdatedPIDParams__destroy(custom_msgs__msg__UpdatedPIDParams * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_msgs__msg__UpdatedPIDParams__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_msgs__msg__UpdatedPIDParams__Sequence__init(custom_msgs__msg__UpdatedPIDParams__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__msg__UpdatedPIDParams * data = NULL;

  if (size) {
    data = (custom_msgs__msg__UpdatedPIDParams *)allocator.zero_allocate(size, sizeof(custom_msgs__msg__UpdatedPIDParams), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_msgs__msg__UpdatedPIDParams__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_msgs__msg__UpdatedPIDParams__fini(&data[i - 1]);
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
custom_msgs__msg__UpdatedPIDParams__Sequence__fini(custom_msgs__msg__UpdatedPIDParams__Sequence * array)
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
      custom_msgs__msg__UpdatedPIDParams__fini(&array->data[i]);
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

custom_msgs__msg__UpdatedPIDParams__Sequence *
custom_msgs__msg__UpdatedPIDParams__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__msg__UpdatedPIDParams__Sequence * array = (custom_msgs__msg__UpdatedPIDParams__Sequence *)allocator.allocate(sizeof(custom_msgs__msg__UpdatedPIDParams__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_msgs__msg__UpdatedPIDParams__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_msgs__msg__UpdatedPIDParams__Sequence__destroy(custom_msgs__msg__UpdatedPIDParams__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_msgs__msg__UpdatedPIDParams__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_msgs__msg__UpdatedPIDParams__Sequence__are_equal(const custom_msgs__msg__UpdatedPIDParams__Sequence * lhs, const custom_msgs__msg__UpdatedPIDParams__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_msgs__msg__UpdatedPIDParams__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_msgs__msg__UpdatedPIDParams__Sequence__copy(
  const custom_msgs__msg__UpdatedPIDParams__Sequence * input,
  custom_msgs__msg__UpdatedPIDParams__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_msgs__msg__UpdatedPIDParams);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    custom_msgs__msg__UpdatedPIDParams * data =
      (custom_msgs__msg__UpdatedPIDParams *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_msgs__msg__UpdatedPIDParams__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          custom_msgs__msg__UpdatedPIDParams__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_msgs__msg__UpdatedPIDParams__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
