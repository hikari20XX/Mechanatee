// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_msgs:msg/SystemLogs.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/system_logs__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `component_id`
// Member `message`
// Member `details`
#include "rosidl_runtime_c/string_functions.h"

bool
custom_msgs__msg__SystemLogs__init(custom_msgs__msg__SystemLogs * msg)
{
  if (!msg) {
    return false;
  }
  // sec
  // nanosec
  // component_id
  if (!rosidl_runtime_c__String__init(&msg->component_id)) {
    custom_msgs__msg__SystemLogs__fini(msg);
    return false;
  }
  // log_level
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    custom_msgs__msg__SystemLogs__fini(msg);
    return false;
  }
  // details
  if (!rosidl_runtime_c__String__init(&msg->details)) {
    custom_msgs__msg__SystemLogs__fini(msg);
    return false;
  }
  // time_since_last_log
  // max_log_frequency
  return true;
}

void
custom_msgs__msg__SystemLogs__fini(custom_msgs__msg__SystemLogs * msg)
{
  if (!msg) {
    return;
  }
  // sec
  // nanosec
  // component_id
  rosidl_runtime_c__String__fini(&msg->component_id);
  // log_level
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // details
  rosidl_runtime_c__String__fini(&msg->details);
  // time_since_last_log
  // max_log_frequency
}

bool
custom_msgs__msg__SystemLogs__are_equal(const custom_msgs__msg__SystemLogs * lhs, const custom_msgs__msg__SystemLogs * rhs)
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
  // component_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->component_id), &(rhs->component_id)))
  {
    return false;
  }
  // log_level
  if (lhs->log_level != rhs->log_level) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  // details
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->details), &(rhs->details)))
  {
    return false;
  }
  // time_since_last_log
  if (lhs->time_since_last_log != rhs->time_since_last_log) {
    return false;
  }
  // max_log_frequency
  if (lhs->max_log_frequency != rhs->max_log_frequency) {
    return false;
  }
  return true;
}

bool
custom_msgs__msg__SystemLogs__copy(
  const custom_msgs__msg__SystemLogs * input,
  custom_msgs__msg__SystemLogs * output)
{
  if (!input || !output) {
    return false;
  }
  // sec
  output->sec = input->sec;
  // nanosec
  output->nanosec = input->nanosec;
  // component_id
  if (!rosidl_runtime_c__String__copy(
      &(input->component_id), &(output->component_id)))
  {
    return false;
  }
  // log_level
  output->log_level = input->log_level;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  // details
  if (!rosidl_runtime_c__String__copy(
      &(input->details), &(output->details)))
  {
    return false;
  }
  // time_since_last_log
  output->time_since_last_log = input->time_since_last_log;
  // max_log_frequency
  output->max_log_frequency = input->max_log_frequency;
  return true;
}

custom_msgs__msg__SystemLogs *
custom_msgs__msg__SystemLogs__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__msg__SystemLogs * msg = (custom_msgs__msg__SystemLogs *)allocator.allocate(sizeof(custom_msgs__msg__SystemLogs), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_msgs__msg__SystemLogs));
  bool success = custom_msgs__msg__SystemLogs__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_msgs__msg__SystemLogs__destroy(custom_msgs__msg__SystemLogs * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_msgs__msg__SystemLogs__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_msgs__msg__SystemLogs__Sequence__init(custom_msgs__msg__SystemLogs__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__msg__SystemLogs * data = NULL;

  if (size) {
    data = (custom_msgs__msg__SystemLogs *)allocator.zero_allocate(size, sizeof(custom_msgs__msg__SystemLogs), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_msgs__msg__SystemLogs__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_msgs__msg__SystemLogs__fini(&data[i - 1]);
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
custom_msgs__msg__SystemLogs__Sequence__fini(custom_msgs__msg__SystemLogs__Sequence * array)
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
      custom_msgs__msg__SystemLogs__fini(&array->data[i]);
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

custom_msgs__msg__SystemLogs__Sequence *
custom_msgs__msg__SystemLogs__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__msg__SystemLogs__Sequence * array = (custom_msgs__msg__SystemLogs__Sequence *)allocator.allocate(sizeof(custom_msgs__msg__SystemLogs__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_msgs__msg__SystemLogs__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_msgs__msg__SystemLogs__Sequence__destroy(custom_msgs__msg__SystemLogs__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_msgs__msg__SystemLogs__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_msgs__msg__SystemLogs__Sequence__are_equal(const custom_msgs__msg__SystemLogs__Sequence * lhs, const custom_msgs__msg__SystemLogs__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_msgs__msg__SystemLogs__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_msgs__msg__SystemLogs__Sequence__copy(
  const custom_msgs__msg__SystemLogs__Sequence * input,
  custom_msgs__msg__SystemLogs__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_msgs__msg__SystemLogs);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    custom_msgs__msg__SystemLogs * data =
      (custom_msgs__msg__SystemLogs *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_msgs__msg__SystemLogs__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          custom_msgs__msg__SystemLogs__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_msgs__msg__SystemLogs__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
