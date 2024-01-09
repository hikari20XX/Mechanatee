// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_msgs:msg/ServoStatus.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/servo_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `servo_id`
// Member `additional_info`
#include "rosidl_runtime_c/string_functions.h"

bool
custom_msgs__msg__ServoStatus__init(custom_msgs__msg__ServoStatus * msg)
{
  if (!msg) {
    return false;
  }
  // sec
  // nanosec
  // servo_id
  if (!rosidl_runtime_c__String__init(&msg->servo_id)) {
    custom_msgs__msg__ServoStatus__fini(msg);
    return false;
  }
  // position
  // speed
  // load
  // temperature
  // voltage
  // error_status
  // additional_info
  if (!rosidl_runtime_c__String__init(&msg->additional_info)) {
    custom_msgs__msg__ServoStatus__fini(msg);
    return false;
  }
  return true;
}

void
custom_msgs__msg__ServoStatus__fini(custom_msgs__msg__ServoStatus * msg)
{
  if (!msg) {
    return;
  }
  // sec
  // nanosec
  // servo_id
  rosidl_runtime_c__String__fini(&msg->servo_id);
  // position
  // speed
  // load
  // temperature
  // voltage
  // error_status
  // additional_info
  rosidl_runtime_c__String__fini(&msg->additional_info);
}

bool
custom_msgs__msg__ServoStatus__are_equal(const custom_msgs__msg__ServoStatus * lhs, const custom_msgs__msg__ServoStatus * rhs)
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
  // servo_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->servo_id), &(rhs->servo_id)))
  {
    return false;
  }
  // position
  if (lhs->position != rhs->position) {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  // load
  if (lhs->load != rhs->load) {
    return false;
  }
  // temperature
  if (lhs->temperature != rhs->temperature) {
    return false;
  }
  // voltage
  if (lhs->voltage != rhs->voltage) {
    return false;
  }
  // error_status
  if (lhs->error_status != rhs->error_status) {
    return false;
  }
  // additional_info
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->additional_info), &(rhs->additional_info)))
  {
    return false;
  }
  return true;
}

bool
custom_msgs__msg__ServoStatus__copy(
  const custom_msgs__msg__ServoStatus * input,
  custom_msgs__msg__ServoStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // sec
  output->sec = input->sec;
  // nanosec
  output->nanosec = input->nanosec;
  // servo_id
  if (!rosidl_runtime_c__String__copy(
      &(input->servo_id), &(output->servo_id)))
  {
    return false;
  }
  // position
  output->position = input->position;
  // speed
  output->speed = input->speed;
  // load
  output->load = input->load;
  // temperature
  output->temperature = input->temperature;
  // voltage
  output->voltage = input->voltage;
  // error_status
  output->error_status = input->error_status;
  // additional_info
  if (!rosidl_runtime_c__String__copy(
      &(input->additional_info), &(output->additional_info)))
  {
    return false;
  }
  return true;
}

custom_msgs__msg__ServoStatus *
custom_msgs__msg__ServoStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__msg__ServoStatus * msg = (custom_msgs__msg__ServoStatus *)allocator.allocate(sizeof(custom_msgs__msg__ServoStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_msgs__msg__ServoStatus));
  bool success = custom_msgs__msg__ServoStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_msgs__msg__ServoStatus__destroy(custom_msgs__msg__ServoStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_msgs__msg__ServoStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_msgs__msg__ServoStatus__Sequence__init(custom_msgs__msg__ServoStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__msg__ServoStatus * data = NULL;

  if (size) {
    data = (custom_msgs__msg__ServoStatus *)allocator.zero_allocate(size, sizeof(custom_msgs__msg__ServoStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_msgs__msg__ServoStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_msgs__msg__ServoStatus__fini(&data[i - 1]);
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
custom_msgs__msg__ServoStatus__Sequence__fini(custom_msgs__msg__ServoStatus__Sequence * array)
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
      custom_msgs__msg__ServoStatus__fini(&array->data[i]);
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

custom_msgs__msg__ServoStatus__Sequence *
custom_msgs__msg__ServoStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__msg__ServoStatus__Sequence * array = (custom_msgs__msg__ServoStatus__Sequence *)allocator.allocate(sizeof(custom_msgs__msg__ServoStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_msgs__msg__ServoStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_msgs__msg__ServoStatus__Sequence__destroy(custom_msgs__msg__ServoStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_msgs__msg__ServoStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_msgs__msg__ServoStatus__Sequence__are_equal(const custom_msgs__msg__ServoStatus__Sequence * lhs, const custom_msgs__msg__ServoStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_msgs__msg__ServoStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_msgs__msg__ServoStatus__Sequence__copy(
  const custom_msgs__msg__ServoStatus__Sequence * input,
  custom_msgs__msg__ServoStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_msgs__msg__ServoStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    custom_msgs__msg__ServoStatus * data =
      (custom_msgs__msg__ServoStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_msgs__msg__ServoStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          custom_msgs__msg__ServoStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_msgs__msg__ServoStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
