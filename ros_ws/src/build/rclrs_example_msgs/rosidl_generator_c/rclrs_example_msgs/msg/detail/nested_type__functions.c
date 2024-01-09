// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rclrs_example_msgs:msg/NestedType.idl
// generated code does not contain a copyright notice
#include "rclrs_example_msgs/msg/detail/nested_type__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `effect`
#include "rosidl_runtime_c/string_functions.h"

bool
rclrs_example_msgs__msg__NestedType__init(rclrs_example_msgs__msg__NestedType * msg)
{
  if (!msg) {
    return false;
  }
  // effect
  if (!rosidl_runtime_c__String__init(&msg->effect)) {
    rclrs_example_msgs__msg__NestedType__fini(msg);
    return false;
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->effect, "discombobulate");
    if (!success) {
      goto abort_init_0;
    }
  }
  return true;
abort_init_0:
  return false;
}

void
rclrs_example_msgs__msg__NestedType__fini(rclrs_example_msgs__msg__NestedType * msg)
{
  if (!msg) {
    return;
  }
  // effect
  rosidl_runtime_c__String__fini(&msg->effect);
}

bool
rclrs_example_msgs__msg__NestedType__are_equal(const rclrs_example_msgs__msg__NestedType * lhs, const rclrs_example_msgs__msg__NestedType * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // effect
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->effect), &(rhs->effect)))
  {
    return false;
  }
  return true;
}

bool
rclrs_example_msgs__msg__NestedType__copy(
  const rclrs_example_msgs__msg__NestedType * input,
  rclrs_example_msgs__msg__NestedType * output)
{
  if (!input || !output) {
    return false;
  }
  // effect
  if (!rosidl_runtime_c__String__copy(
      &(input->effect), &(output->effect)))
  {
    return false;
  }
  return true;
}

rclrs_example_msgs__msg__NestedType *
rclrs_example_msgs__msg__NestedType__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rclrs_example_msgs__msg__NestedType * msg = (rclrs_example_msgs__msg__NestedType *)allocator.allocate(sizeof(rclrs_example_msgs__msg__NestedType), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rclrs_example_msgs__msg__NestedType));
  bool success = rclrs_example_msgs__msg__NestedType__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rclrs_example_msgs__msg__NestedType__destroy(rclrs_example_msgs__msg__NestedType * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rclrs_example_msgs__msg__NestedType__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rclrs_example_msgs__msg__NestedType__Sequence__init(rclrs_example_msgs__msg__NestedType__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rclrs_example_msgs__msg__NestedType * data = NULL;

  if (size) {
    data = (rclrs_example_msgs__msg__NestedType *)allocator.zero_allocate(size, sizeof(rclrs_example_msgs__msg__NestedType), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rclrs_example_msgs__msg__NestedType__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rclrs_example_msgs__msg__NestedType__fini(&data[i - 1]);
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
rclrs_example_msgs__msg__NestedType__Sequence__fini(rclrs_example_msgs__msg__NestedType__Sequence * array)
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
      rclrs_example_msgs__msg__NestedType__fini(&array->data[i]);
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

rclrs_example_msgs__msg__NestedType__Sequence *
rclrs_example_msgs__msg__NestedType__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rclrs_example_msgs__msg__NestedType__Sequence * array = (rclrs_example_msgs__msg__NestedType__Sequence *)allocator.allocate(sizeof(rclrs_example_msgs__msg__NestedType__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rclrs_example_msgs__msg__NestedType__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rclrs_example_msgs__msg__NestedType__Sequence__destroy(rclrs_example_msgs__msg__NestedType__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rclrs_example_msgs__msg__NestedType__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rclrs_example_msgs__msg__NestedType__Sequence__are_equal(const rclrs_example_msgs__msg__NestedType__Sequence * lhs, const rclrs_example_msgs__msg__NestedType__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rclrs_example_msgs__msg__NestedType__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rclrs_example_msgs__msg__NestedType__Sequence__copy(
  const rclrs_example_msgs__msg__NestedType__Sequence * input,
  rclrs_example_msgs__msg__NestedType__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rclrs_example_msgs__msg__NestedType);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rclrs_example_msgs__msg__NestedType * data =
      (rclrs_example_msgs__msg__NestedType *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rclrs_example_msgs__msg__NestedType__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rclrs_example_msgs__msg__NestedType__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rclrs_example_msgs__msg__NestedType__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
