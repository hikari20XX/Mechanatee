// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_msgs:msg/ServoFeedback.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/servo_feedback__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
custom_msgs__msg__ServoFeedback__init(custom_msgs__msg__ServoFeedback * msg)
{
  if (!msg) {
    return false;
  }
  // sec
  // nanosec
  // position
  return true;
}

void
custom_msgs__msg__ServoFeedback__fini(custom_msgs__msg__ServoFeedback * msg)
{
  if (!msg) {
    return;
  }
  // sec
  // nanosec
  // position
}

bool
custom_msgs__msg__ServoFeedback__are_equal(const custom_msgs__msg__ServoFeedback * lhs, const custom_msgs__msg__ServoFeedback * rhs)
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
  // position
  if (lhs->position != rhs->position) {
    return false;
  }
  return true;
}

bool
custom_msgs__msg__ServoFeedback__copy(
  const custom_msgs__msg__ServoFeedback * input,
  custom_msgs__msg__ServoFeedback * output)
{
  if (!input || !output) {
    return false;
  }
  // sec
  output->sec = input->sec;
  // nanosec
  output->nanosec = input->nanosec;
  // position
  output->position = input->position;
  return true;
}

custom_msgs__msg__ServoFeedback *
custom_msgs__msg__ServoFeedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__msg__ServoFeedback * msg = (custom_msgs__msg__ServoFeedback *)allocator.allocate(sizeof(custom_msgs__msg__ServoFeedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_msgs__msg__ServoFeedback));
  bool success = custom_msgs__msg__ServoFeedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_msgs__msg__ServoFeedback__destroy(custom_msgs__msg__ServoFeedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_msgs__msg__ServoFeedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_msgs__msg__ServoFeedback__Sequence__init(custom_msgs__msg__ServoFeedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__msg__ServoFeedback * data = NULL;

  if (size) {
    data = (custom_msgs__msg__ServoFeedback *)allocator.zero_allocate(size, sizeof(custom_msgs__msg__ServoFeedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_msgs__msg__ServoFeedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_msgs__msg__ServoFeedback__fini(&data[i - 1]);
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
custom_msgs__msg__ServoFeedback__Sequence__fini(custom_msgs__msg__ServoFeedback__Sequence * array)
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
      custom_msgs__msg__ServoFeedback__fini(&array->data[i]);
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

custom_msgs__msg__ServoFeedback__Sequence *
custom_msgs__msg__ServoFeedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__msg__ServoFeedback__Sequence * array = (custom_msgs__msg__ServoFeedback__Sequence *)allocator.allocate(sizeof(custom_msgs__msg__ServoFeedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_msgs__msg__ServoFeedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_msgs__msg__ServoFeedback__Sequence__destroy(custom_msgs__msg__ServoFeedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_msgs__msg__ServoFeedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_msgs__msg__ServoFeedback__Sequence__are_equal(const custom_msgs__msg__ServoFeedback__Sequence * lhs, const custom_msgs__msg__ServoFeedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_msgs__msg__ServoFeedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_msgs__msg__ServoFeedback__Sequence__copy(
  const custom_msgs__msg__ServoFeedback__Sequence * input,
  custom_msgs__msg__ServoFeedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_msgs__msg__ServoFeedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    custom_msgs__msg__ServoFeedback * data =
      (custom_msgs__msg__ServoFeedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_msgs__msg__ServoFeedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          custom_msgs__msg__ServoFeedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_msgs__msg__ServoFeedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
