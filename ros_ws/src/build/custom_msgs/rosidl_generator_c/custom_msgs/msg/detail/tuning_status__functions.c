// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_msgs:msg/TuningStatus.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/tuning_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `details`
#include "rosidl_runtime_c/string_functions.h"

bool
custom_msgs__msg__TuningStatus__init(custom_msgs__msg__TuningStatus * msg)
{
  if (!msg) {
    return false;
  }
  // sec
  // nanosec
  // status
  // details
  if (!rosidl_runtime_c__String__init(&msg->details)) {
    custom_msgs__msg__TuningStatus__fini(msg);
    return false;
  }
  return true;
}

void
custom_msgs__msg__TuningStatus__fini(custom_msgs__msg__TuningStatus * msg)
{
  if (!msg) {
    return;
  }
  // sec
  // nanosec
  // status
  // details
  rosidl_runtime_c__String__fini(&msg->details);
}

bool
custom_msgs__msg__TuningStatus__are_equal(const custom_msgs__msg__TuningStatus * lhs, const custom_msgs__msg__TuningStatus * rhs)
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
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // details
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->details), &(rhs->details)))
  {
    return false;
  }
  return true;
}

bool
custom_msgs__msg__TuningStatus__copy(
  const custom_msgs__msg__TuningStatus * input,
  custom_msgs__msg__TuningStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // sec
  output->sec = input->sec;
  // nanosec
  output->nanosec = input->nanosec;
  // status
  output->status = input->status;
  // details
  if (!rosidl_runtime_c__String__copy(
      &(input->details), &(output->details)))
  {
    return false;
  }
  return true;
}

custom_msgs__msg__TuningStatus *
custom_msgs__msg__TuningStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__msg__TuningStatus * msg = (custom_msgs__msg__TuningStatus *)allocator.allocate(sizeof(custom_msgs__msg__TuningStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_msgs__msg__TuningStatus));
  bool success = custom_msgs__msg__TuningStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_msgs__msg__TuningStatus__destroy(custom_msgs__msg__TuningStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_msgs__msg__TuningStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_msgs__msg__TuningStatus__Sequence__init(custom_msgs__msg__TuningStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__msg__TuningStatus * data = NULL;

  if (size) {
    data = (custom_msgs__msg__TuningStatus *)allocator.zero_allocate(size, sizeof(custom_msgs__msg__TuningStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_msgs__msg__TuningStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_msgs__msg__TuningStatus__fini(&data[i - 1]);
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
custom_msgs__msg__TuningStatus__Sequence__fini(custom_msgs__msg__TuningStatus__Sequence * array)
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
      custom_msgs__msg__TuningStatus__fini(&array->data[i]);
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

custom_msgs__msg__TuningStatus__Sequence *
custom_msgs__msg__TuningStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__msg__TuningStatus__Sequence * array = (custom_msgs__msg__TuningStatus__Sequence *)allocator.allocate(sizeof(custom_msgs__msg__TuningStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_msgs__msg__TuningStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_msgs__msg__TuningStatus__Sequence__destroy(custom_msgs__msg__TuningStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_msgs__msg__TuningStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_msgs__msg__TuningStatus__Sequence__are_equal(const custom_msgs__msg__TuningStatus__Sequence * lhs, const custom_msgs__msg__TuningStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_msgs__msg__TuningStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_msgs__msg__TuningStatus__Sequence__copy(
  const custom_msgs__msg__TuningStatus__Sequence * input,
  custom_msgs__msg__TuningStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_msgs__msg__TuningStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    custom_msgs__msg__TuningStatus * data =
      (custom_msgs__msg__TuningStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_msgs__msg__TuningStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          custom_msgs__msg__TuningStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_msgs__msg__TuningStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
