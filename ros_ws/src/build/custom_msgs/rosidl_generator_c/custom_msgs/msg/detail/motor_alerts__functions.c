// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_msgs:msg/MotorAlerts.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/motor_alerts__functions.h"

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
custom_msgs__msg__MotorAlerts__init(custom_msgs__msg__MotorAlerts * msg)
{
  if (!msg) {
    return false;
  }
  // sec
  // nanosec
  // motor_id
  if (!rosidl_runtime_c__String__init(&msg->motor_id)) {
    custom_msgs__msg__MotorAlerts__fini(msg);
    return false;
  }
  // overheating
  // electrical_fault
  // stall
  // overcurrent
  // obstruction
  // encoder_fault
  // runtime_exceeded
  // additional_info
  if (!rosidl_runtime_c__String__init(&msg->additional_info)) {
    custom_msgs__msg__MotorAlerts__fini(msg);
    return false;
  }
  return true;
}

void
custom_msgs__msg__MotorAlerts__fini(custom_msgs__msg__MotorAlerts * msg)
{
  if (!msg) {
    return;
  }
  // sec
  // nanosec
  // motor_id
  rosidl_runtime_c__String__fini(&msg->motor_id);
  // overheating
  // electrical_fault
  // stall
  // overcurrent
  // obstruction
  // encoder_fault
  // runtime_exceeded
  // additional_info
  rosidl_runtime_c__String__fini(&msg->additional_info);
}

bool
custom_msgs__msg__MotorAlerts__are_equal(const custom_msgs__msg__MotorAlerts * lhs, const custom_msgs__msg__MotorAlerts * rhs)
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
  // overheating
  if (lhs->overheating != rhs->overheating) {
    return false;
  }
  // electrical_fault
  if (lhs->electrical_fault != rhs->electrical_fault) {
    return false;
  }
  // stall
  if (lhs->stall != rhs->stall) {
    return false;
  }
  // overcurrent
  if (lhs->overcurrent != rhs->overcurrent) {
    return false;
  }
  // obstruction
  if (lhs->obstruction != rhs->obstruction) {
    return false;
  }
  // encoder_fault
  if (lhs->encoder_fault != rhs->encoder_fault) {
    return false;
  }
  // runtime_exceeded
  if (lhs->runtime_exceeded != rhs->runtime_exceeded) {
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
custom_msgs__msg__MotorAlerts__copy(
  const custom_msgs__msg__MotorAlerts * input,
  custom_msgs__msg__MotorAlerts * output)
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
  // overheating
  output->overheating = input->overheating;
  // electrical_fault
  output->electrical_fault = input->electrical_fault;
  // stall
  output->stall = input->stall;
  // overcurrent
  output->overcurrent = input->overcurrent;
  // obstruction
  output->obstruction = input->obstruction;
  // encoder_fault
  output->encoder_fault = input->encoder_fault;
  // runtime_exceeded
  output->runtime_exceeded = input->runtime_exceeded;
  // additional_info
  if (!rosidl_runtime_c__String__copy(
      &(input->additional_info), &(output->additional_info)))
  {
    return false;
  }
  return true;
}

custom_msgs__msg__MotorAlerts *
custom_msgs__msg__MotorAlerts__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__msg__MotorAlerts * msg = (custom_msgs__msg__MotorAlerts *)allocator.allocate(sizeof(custom_msgs__msg__MotorAlerts), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_msgs__msg__MotorAlerts));
  bool success = custom_msgs__msg__MotorAlerts__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_msgs__msg__MotorAlerts__destroy(custom_msgs__msg__MotorAlerts * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_msgs__msg__MotorAlerts__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_msgs__msg__MotorAlerts__Sequence__init(custom_msgs__msg__MotorAlerts__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__msg__MotorAlerts * data = NULL;

  if (size) {
    data = (custom_msgs__msg__MotorAlerts *)allocator.zero_allocate(size, sizeof(custom_msgs__msg__MotorAlerts), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_msgs__msg__MotorAlerts__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_msgs__msg__MotorAlerts__fini(&data[i - 1]);
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
custom_msgs__msg__MotorAlerts__Sequence__fini(custom_msgs__msg__MotorAlerts__Sequence * array)
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
      custom_msgs__msg__MotorAlerts__fini(&array->data[i]);
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

custom_msgs__msg__MotorAlerts__Sequence *
custom_msgs__msg__MotorAlerts__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__msg__MotorAlerts__Sequence * array = (custom_msgs__msg__MotorAlerts__Sequence *)allocator.allocate(sizeof(custom_msgs__msg__MotorAlerts__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_msgs__msg__MotorAlerts__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_msgs__msg__MotorAlerts__Sequence__destroy(custom_msgs__msg__MotorAlerts__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_msgs__msg__MotorAlerts__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_msgs__msg__MotorAlerts__Sequence__are_equal(const custom_msgs__msg__MotorAlerts__Sequence * lhs, const custom_msgs__msg__MotorAlerts__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_msgs__msg__MotorAlerts__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_msgs__msg__MotorAlerts__Sequence__copy(
  const custom_msgs__msg__MotorAlerts__Sequence * input,
  custom_msgs__msg__MotorAlerts__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_msgs__msg__MotorAlerts);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    custom_msgs__msg__MotorAlerts * data =
      (custom_msgs__msg__MotorAlerts *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_msgs__msg__MotorAlerts__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          custom_msgs__msg__MotorAlerts__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_msgs__msg__MotorAlerts__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
