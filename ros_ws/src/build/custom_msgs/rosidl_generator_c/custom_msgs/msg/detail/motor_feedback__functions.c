// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_msgs:msg/MotorFeedback.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/motor_feedback__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `motor_id`
// Member `additional_info`
#include "rosidl_runtime_c/string_functions.h"

bool
custom_msgs__msg__MotorFeedback__init(custom_msgs__msg__MotorFeedback * msg)
{
  if (!msg) {
    return false;
  }
  // sec
  // nanosec
  // motor_id
  if (!rosidl_runtime_c__String__init(&msg->motor_id)) {
    custom_msgs__msg__MotorFeedback__fini(msg);
    return false;
  }
  // position
  // speed
  // torque
  // temperature
  // current
  // voltage
  // encoder_counts
  // additional_info
  if (!rosidl_runtime_c__String__init(&msg->additional_info)) {
    custom_msgs__msg__MotorFeedback__fini(msg);
    return false;
  }
  return true;
}

void
custom_msgs__msg__MotorFeedback__fini(custom_msgs__msg__MotorFeedback * msg)
{
  if (!msg) {
    return;
  }
  // sec
  // nanosec
  // motor_id
  rosidl_runtime_c__String__fini(&msg->motor_id);
  // position
  // speed
  // torque
  // temperature
  // current
  // voltage
  // encoder_counts
  // additional_info
  rosidl_runtime_c__String__fini(&msg->additional_info);
}

bool
custom_msgs__msg__MotorFeedback__are_equal(const custom_msgs__msg__MotorFeedback * lhs, const custom_msgs__msg__MotorFeedback * rhs)
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
  // motor_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->motor_id), &(rhs->motor_id)))
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
  // torque
  if (lhs->torque != rhs->torque) {
    return false;
  }
  // temperature
  if (lhs->temperature != rhs->temperature) {
    return false;
  }
  // current
  if (lhs->current != rhs->current) {
    return false;
  }
  // voltage
  if (lhs->voltage != rhs->voltage) {
    return false;
  }
  // encoder_counts
  if (lhs->encoder_counts != rhs->encoder_counts) {
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
custom_msgs__msg__MotorFeedback__copy(
  const custom_msgs__msg__MotorFeedback * input,
  custom_msgs__msg__MotorFeedback * output)
{
  if (!input || !output) {
    return false;
  }
  // sec
  output->sec = input->sec;
  // nanosec
  output->nanosec = input->nanosec;
  // motor_id
  if (!rosidl_runtime_c__String__copy(
      &(input->motor_id), &(output->motor_id)))
  {
    return false;
  }
  // position
  output->position = input->position;
  // speed
  output->speed = input->speed;
  // torque
  output->torque = input->torque;
  // temperature
  output->temperature = input->temperature;
  // current
  output->current = input->current;
  // voltage
  output->voltage = input->voltage;
  // encoder_counts
  output->encoder_counts = input->encoder_counts;
  // additional_info
  if (!rosidl_runtime_c__String__copy(
      &(input->additional_info), &(output->additional_info)))
  {
    return false;
  }
  return true;
}

custom_msgs__msg__MotorFeedback *
custom_msgs__msg__MotorFeedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__msg__MotorFeedback * msg = (custom_msgs__msg__MotorFeedback *)allocator.allocate(sizeof(custom_msgs__msg__MotorFeedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_msgs__msg__MotorFeedback));
  bool success = custom_msgs__msg__MotorFeedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_msgs__msg__MotorFeedback__destroy(custom_msgs__msg__MotorFeedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_msgs__msg__MotorFeedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_msgs__msg__MotorFeedback__Sequence__init(custom_msgs__msg__MotorFeedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__msg__MotorFeedback * data = NULL;

  if (size) {
    data = (custom_msgs__msg__MotorFeedback *)allocator.zero_allocate(size, sizeof(custom_msgs__msg__MotorFeedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_msgs__msg__MotorFeedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_msgs__msg__MotorFeedback__fini(&data[i - 1]);
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
custom_msgs__msg__MotorFeedback__Sequence__fini(custom_msgs__msg__MotorFeedback__Sequence * array)
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
      custom_msgs__msg__MotorFeedback__fini(&array->data[i]);
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

custom_msgs__msg__MotorFeedback__Sequence *
custom_msgs__msg__MotorFeedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__msg__MotorFeedback__Sequence * array = (custom_msgs__msg__MotorFeedback__Sequence *)allocator.allocate(sizeof(custom_msgs__msg__MotorFeedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_msgs__msg__MotorFeedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_msgs__msg__MotorFeedback__Sequence__destroy(custom_msgs__msg__MotorFeedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_msgs__msg__MotorFeedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_msgs__msg__MotorFeedback__Sequence__are_equal(const custom_msgs__msg__MotorFeedback__Sequence * lhs, const custom_msgs__msg__MotorFeedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_msgs__msg__MotorFeedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_msgs__msg__MotorFeedback__Sequence__copy(
  const custom_msgs__msg__MotorFeedback__Sequence * input,
  custom_msgs__msg__MotorFeedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_msgs__msg__MotorFeedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    custom_msgs__msg__MotorFeedback * data =
      (custom_msgs__msg__MotorFeedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_msgs__msg__MotorFeedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          custom_msgs__msg__MotorFeedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_msgs__msg__MotorFeedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
