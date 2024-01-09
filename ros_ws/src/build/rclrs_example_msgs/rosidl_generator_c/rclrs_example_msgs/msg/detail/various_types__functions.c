// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rclrs_example_msgs:msg/VariousTypes.idl
// generated code does not contain a copyright notice
#include "rclrs_example_msgs/msg/detail/various_types__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `float_seq_bounded`
// Member `float_seq_unbounded`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `string_member`
// Member `bounded_string_member`
// Member `string_array`
// Member `string_seq_bounded`
// Member `string_seq_unbounded`
// Member `bounded_string_array`
// Member `bounded_string_seq_bounded`
// Member `bounded_string_seq_unbounded`
#include "rosidl_runtime_c/string_functions.h"
// Member `wstring_member`
// Member `bounded_wstring_member`
#include "rosidl_runtime_c/u16string_functions.h"
// Member `nested_member`
// Member `nested_array`
// Member `nested_seq_unbounded`
// Member `nested_seq_bounded`
#include "rclrs_example_msgs/msg/detail/nested_type__functions.h"

bool
rclrs_example_msgs__msg__VariousTypes__init(rclrs_example_msgs__msg__VariousTypes * msg)
{
  if (!msg) {
    return false;
  }
  // bool_member
  msg->bool_member = true;
  // int8_member
  msg->int8_member = 1;
  // uint8_member
  msg->uint8_member = 2;
  // byte_member
  msg->byte_member = 3;
  // float32_member
  msg->float32_member = 0.01f;
  // float_array
  msg->float_array[0] = 1.0f;
  msg->float_array[1] = 2.0f;
  msg->float_array[2] = 3.0f;
  // float_seq_bounded
  {
    bool success = rosidl_runtime_c__float__Sequence__init(&msg->float_seq_bounded, 2);
    if (!success) {
      goto abort_init_0;
    }
  }
  msg->float_seq_bounded.data[0] = 4.0f;
  msg->float_seq_bounded.data[1] = 5.0f;
  // float_seq_unbounded
  {
    bool success = rosidl_runtime_c__float__Sequence__init(&msg->float_seq_unbounded, 1);
    if (!success) {
      goto abort_init_1;
    }
  }
  msg->float_seq_unbounded.data[0] = 6.0f;
  // string_member
  if (!rosidl_runtime_c__String__init(&msg->string_member)) {
    rclrs_example_msgs__msg__VariousTypes__fini(msg);
    return false;
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->string_member, "Χαίρετε 你好");
    if (!success) {
      goto abort_init_2;
    }
  }
  // wstring_member
  if (!rosidl_runtime_c__U16String__init(&msg->wstring_member)) {
    rclrs_example_msgs__msg__VariousTypes__fini(msg);
    return false;
  }
  {
    bool success = rosidl_runtime_c__U16String__assign(&msg->wstring_member, u"αντίο σου 再见");
    if (!success) {
      goto abort_init_3;
    }
  }
  // bounded_string_member
  if (!rosidl_runtime_c__String__init(&msg->bounded_string_member)) {
    rclrs_example_msgs__msg__VariousTypes__fini(msg);
    return false;
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->bounded_string_member, "äöü");
    if (!success) {
      goto abort_init_4;
    }
  }
  // bounded_wstring_member
  if (!rosidl_runtime_c__U16String__init(&msg->bounded_wstring_member)) {
    rclrs_example_msgs__msg__VariousTypes__fini(msg);
    return false;
  }
  {
    bool success = rosidl_runtime_c__U16String__assign(&msg->bounded_wstring_member, u"äöü");
    if (!success) {
      goto abort_init_5;
    }
  }
  // string_array
  for (size_t i = 0; i < 4; ++i) {
    if (!rosidl_runtime_c__String__init(&msg->string_array[i])) {
      rclrs_example_msgs__msg__VariousTypes__fini(msg);
      return false;
    }
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->string_array[0], "R");
    if (!success) {
      goto abort_init_6;
    }
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->string_array[1], "O");
    if (!success) {
      goto abort_init_7;
    }
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->string_array[2], "S");
    if (!success) {
      goto abort_init_8;
    }
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->string_array[3], "2");
    if (!success) {
      goto abort_init_9;
    }
  }
  // string_seq_bounded
  {
    bool success = rosidl_runtime_c__String__Sequence__init(&msg->string_seq_bounded, 4);
    if (!success) {
      goto abort_init_10;
    }
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->string_seq_bounded.data[0], "R");
    if (!success) {
      goto abort_init_11;
    }
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->string_seq_bounded.data[1], "O");
    if (!success) {
      goto abort_init_12;
    }
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->string_seq_bounded.data[2], "S");
    if (!success) {
      goto abort_init_13;
    }
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->string_seq_bounded.data[3], "2");
    if (!success) {
      goto abort_init_14;
    }
  }
  // string_seq_unbounded
  {
    bool success = rosidl_runtime_c__String__Sequence__init(&msg->string_seq_unbounded, 4);
    if (!success) {
      goto abort_init_15;
    }
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->string_seq_unbounded.data[0], "R");
    if (!success) {
      goto abort_init_16;
    }
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->string_seq_unbounded.data[1], "O");
    if (!success) {
      goto abort_init_17;
    }
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->string_seq_unbounded.data[2], "S");
    if (!success) {
      goto abort_init_18;
    }
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->string_seq_unbounded.data[3], "2");
    if (!success) {
      goto abort_init_19;
    }
  }
  // bounded_string_array
  for (size_t i = 0; i < 4; ++i) {
    if (!rosidl_runtime_c__String__init(&msg->bounded_string_array[i])) {
      rclrs_example_msgs__msg__VariousTypes__fini(msg);
      return false;
    }
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->bounded_string_array[0], "R");
    if (!success) {
      goto abort_init_20;
    }
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->bounded_string_array[1], "O");
    if (!success) {
      goto abort_init_21;
    }
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->bounded_string_array[2], "S");
    if (!success) {
      goto abort_init_22;
    }
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->bounded_string_array[3], "2");
    if (!success) {
      goto abort_init_23;
    }
  }
  // bounded_string_seq_bounded
  {
    bool success = rosidl_runtime_c__String__Sequence__init(&msg->bounded_string_seq_bounded, 4);
    if (!success) {
      goto abort_init_24;
    }
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->bounded_string_seq_bounded.data[0], "R");
    if (!success) {
      goto abort_init_25;
    }
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->bounded_string_seq_bounded.data[1], "O");
    if (!success) {
      goto abort_init_26;
    }
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->bounded_string_seq_bounded.data[2], "S");
    if (!success) {
      goto abort_init_27;
    }
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->bounded_string_seq_bounded.data[3], "2");
    if (!success) {
      goto abort_init_28;
    }
  }
  // bounded_string_seq_unbounded
  {
    bool success = rosidl_runtime_c__String__Sequence__init(&msg->bounded_string_seq_unbounded, 4);
    if (!success) {
      goto abort_init_29;
    }
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->bounded_string_seq_unbounded.data[0], "R");
    if (!success) {
      goto abort_init_30;
    }
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->bounded_string_seq_unbounded.data[1], "O");
    if (!success) {
      goto abort_init_31;
    }
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->bounded_string_seq_unbounded.data[2], "S");
    if (!success) {
      goto abort_init_32;
    }
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->bounded_string_seq_unbounded.data[3], "2");
    if (!success) {
      goto abort_init_33;
    }
  }
  // nested_member
  if (!rclrs_example_msgs__msg__NestedType__init(&msg->nested_member)) {
    rclrs_example_msgs__msg__VariousTypes__fini(msg);
    return false;
  }
  // nested_array
  for (size_t i = 0; i < 2; ++i) {
    if (!rclrs_example_msgs__msg__NestedType__init(&msg->nested_array[i])) {
      rclrs_example_msgs__msg__VariousTypes__fini(msg);
      return false;
    }
  }
  // nested_seq_unbounded
  if (!rclrs_example_msgs__msg__NestedType__Sequence__init(&msg->nested_seq_unbounded, 0)) {
    rclrs_example_msgs__msg__VariousTypes__fini(msg);
    return false;
  }
  // nested_seq_bounded
  if (!rclrs_example_msgs__msg__NestedType__Sequence__init(&msg->nested_seq_bounded, 0)) {
    rclrs_example_msgs__msg__VariousTypes__fini(msg);
    return false;
  }
  return true;
abort_init_33:
  rosidl_runtime_c__String__fini(&msg->bounded_string_seq_unbounded.data[2]);
abort_init_32:
  rosidl_runtime_c__String__fini(&msg->bounded_string_seq_unbounded.data[1]);
abort_init_31:
  rosidl_runtime_c__String__fini(&msg->bounded_string_seq_unbounded.data[0]);
abort_init_30:
  rosidl_runtime_c__String__Sequence__fini(&msg->bounded_string_seq_unbounded);
abort_init_29:
  rosidl_runtime_c__String__fini(&msg->bounded_string_seq_bounded.data[3]);
abort_init_28:
  rosidl_runtime_c__String__fini(&msg->bounded_string_seq_bounded.data[2]);
abort_init_27:
  rosidl_runtime_c__String__fini(&msg->bounded_string_seq_bounded.data[1]);
abort_init_26:
  rosidl_runtime_c__String__fini(&msg->bounded_string_seq_bounded.data[0]);
abort_init_25:
  rosidl_runtime_c__String__Sequence__fini(&msg->bounded_string_seq_bounded);
abort_init_24:
  rosidl_runtime_c__String__fini(&msg->bounded_string_array[3]);
abort_init_23:
  rosidl_runtime_c__String__fini(&msg->bounded_string_array[2]);
abort_init_22:
  rosidl_runtime_c__String__fini(&msg->bounded_string_array[1]);
abort_init_21:
  rosidl_runtime_c__String__fini(&msg->bounded_string_array[0]);
abort_init_20:
  rosidl_runtime_c__String__fini(&msg->string_seq_unbounded.data[3]);
abort_init_19:
  rosidl_runtime_c__String__fini(&msg->string_seq_unbounded.data[2]);
abort_init_18:
  rosidl_runtime_c__String__fini(&msg->string_seq_unbounded.data[1]);
abort_init_17:
  rosidl_runtime_c__String__fini(&msg->string_seq_unbounded.data[0]);
abort_init_16:
  rosidl_runtime_c__String__Sequence__fini(&msg->string_seq_unbounded);
abort_init_15:
  rosidl_runtime_c__String__fini(&msg->string_seq_bounded.data[3]);
abort_init_14:
  rosidl_runtime_c__String__fini(&msg->string_seq_bounded.data[2]);
abort_init_13:
  rosidl_runtime_c__String__fini(&msg->string_seq_bounded.data[1]);
abort_init_12:
  rosidl_runtime_c__String__fini(&msg->string_seq_bounded.data[0]);
abort_init_11:
  rosidl_runtime_c__String__Sequence__fini(&msg->string_seq_bounded);
abort_init_10:
  rosidl_runtime_c__String__fini(&msg->string_array[3]);
abort_init_9:
  rosidl_runtime_c__String__fini(&msg->string_array[2]);
abort_init_8:
  rosidl_runtime_c__String__fini(&msg->string_array[1]);
abort_init_7:
  rosidl_runtime_c__String__fini(&msg->string_array[0]);
abort_init_6:
  rosidl_runtime_c__U16String__fini(&msg->bounded_wstring_member);
abort_init_5:
  rosidl_runtime_c__String__fini(&msg->bounded_string_member);
abort_init_4:
  rosidl_runtime_c__U16String__fini(&msg->wstring_member);
abort_init_3:
  rosidl_runtime_c__String__fini(&msg->string_member);
abort_init_2:
  rosidl_runtime_c__float__Sequence__fini(&msg->float_seq_unbounded);
abort_init_1:
  rosidl_runtime_c__float__Sequence__fini(&msg->float_seq_bounded);
abort_init_0:
  return false;
}

void
rclrs_example_msgs__msg__VariousTypes__fini(rclrs_example_msgs__msg__VariousTypes * msg)
{
  if (!msg) {
    return;
  }
  // bool_member
  // int8_member
  // uint8_member
  // byte_member
  // float32_member
  // float_array
  // float_seq_bounded
  rosidl_runtime_c__float__Sequence__fini(&msg->float_seq_bounded);
  // float_seq_unbounded
  rosidl_runtime_c__float__Sequence__fini(&msg->float_seq_unbounded);
  // string_member
  rosidl_runtime_c__String__fini(&msg->string_member);
  // wstring_member
  rosidl_runtime_c__U16String__fini(&msg->wstring_member);
  // bounded_string_member
  rosidl_runtime_c__String__fini(&msg->bounded_string_member);
  // bounded_wstring_member
  rosidl_runtime_c__U16String__fini(&msg->bounded_wstring_member);
  // string_array
  for (size_t i = 0; i < 4; ++i) {
    rosidl_runtime_c__String__fini(&msg->string_array[i]);
  }
  // string_seq_bounded
  rosidl_runtime_c__String__Sequence__fini(&msg->string_seq_bounded);
  // string_seq_unbounded
  rosidl_runtime_c__String__Sequence__fini(&msg->string_seq_unbounded);
  // bounded_string_array
  for (size_t i = 0; i < 4; ++i) {
    rosidl_runtime_c__String__fini(&msg->bounded_string_array[i]);
  }
  // bounded_string_seq_bounded
  rosidl_runtime_c__String__Sequence__fini(&msg->bounded_string_seq_bounded);
  // bounded_string_seq_unbounded
  rosidl_runtime_c__String__Sequence__fini(&msg->bounded_string_seq_unbounded);
  // nested_member
  rclrs_example_msgs__msg__NestedType__fini(&msg->nested_member);
  // nested_array
  for (size_t i = 0; i < 2; ++i) {
    rclrs_example_msgs__msg__NestedType__fini(&msg->nested_array[i]);
  }
  // nested_seq_unbounded
  rclrs_example_msgs__msg__NestedType__Sequence__fini(&msg->nested_seq_unbounded);
  // nested_seq_bounded
  rclrs_example_msgs__msg__NestedType__Sequence__fini(&msg->nested_seq_bounded);
}

bool
rclrs_example_msgs__msg__VariousTypes__are_equal(const rclrs_example_msgs__msg__VariousTypes * lhs, const rclrs_example_msgs__msg__VariousTypes * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // bool_member
  if (lhs->bool_member != rhs->bool_member) {
    return false;
  }
  // int8_member
  if (lhs->int8_member != rhs->int8_member) {
    return false;
  }
  // uint8_member
  if (lhs->uint8_member != rhs->uint8_member) {
    return false;
  }
  // byte_member
  if (lhs->byte_member != rhs->byte_member) {
    return false;
  }
  // float32_member
  if (lhs->float32_member != rhs->float32_member) {
    return false;
  }
  // float_array
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->float_array[i] != rhs->float_array[i]) {
      return false;
    }
  }
  // float_seq_bounded
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->float_seq_bounded), &(rhs->float_seq_bounded)))
  {
    return false;
  }
  // float_seq_unbounded
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->float_seq_unbounded), &(rhs->float_seq_unbounded)))
  {
    return false;
  }
  // string_member
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->string_member), &(rhs->string_member)))
  {
    return false;
  }
  // wstring_member
  if (!rosidl_runtime_c__U16String__are_equal(
      &(lhs->wstring_member), &(rhs->wstring_member)))
  {
    return false;
  }
  // bounded_string_member
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->bounded_string_member), &(rhs->bounded_string_member)))
  {
    return false;
  }
  // bounded_wstring_member
  if (!rosidl_runtime_c__U16String__are_equal(
      &(lhs->bounded_wstring_member), &(rhs->bounded_wstring_member)))
  {
    return false;
  }
  // string_array
  for (size_t i = 0; i < 4; ++i) {
    if (!rosidl_runtime_c__String__are_equal(
        &(lhs->string_array[i]), &(rhs->string_array[i])))
    {
      return false;
    }
  }
  // string_seq_bounded
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->string_seq_bounded), &(rhs->string_seq_bounded)))
  {
    return false;
  }
  // string_seq_unbounded
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->string_seq_unbounded), &(rhs->string_seq_unbounded)))
  {
    return false;
  }
  // bounded_string_array
  for (size_t i = 0; i < 4; ++i) {
    if (!rosidl_runtime_c__String__are_equal(
        &(lhs->bounded_string_array[i]), &(rhs->bounded_string_array[i])))
    {
      return false;
    }
  }
  // bounded_string_seq_bounded
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->bounded_string_seq_bounded), &(rhs->bounded_string_seq_bounded)))
  {
    return false;
  }
  // bounded_string_seq_unbounded
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->bounded_string_seq_unbounded), &(rhs->bounded_string_seq_unbounded)))
  {
    return false;
  }
  // nested_member
  if (!rclrs_example_msgs__msg__NestedType__are_equal(
      &(lhs->nested_member), &(rhs->nested_member)))
  {
    return false;
  }
  // nested_array
  for (size_t i = 0; i < 2; ++i) {
    if (!rclrs_example_msgs__msg__NestedType__are_equal(
        &(lhs->nested_array[i]), &(rhs->nested_array[i])))
    {
      return false;
    }
  }
  // nested_seq_unbounded
  if (!rclrs_example_msgs__msg__NestedType__Sequence__are_equal(
      &(lhs->nested_seq_unbounded), &(rhs->nested_seq_unbounded)))
  {
    return false;
  }
  // nested_seq_bounded
  if (!rclrs_example_msgs__msg__NestedType__Sequence__are_equal(
      &(lhs->nested_seq_bounded), &(rhs->nested_seq_bounded)))
  {
    return false;
  }
  return true;
}

bool
rclrs_example_msgs__msg__VariousTypes__copy(
  const rclrs_example_msgs__msg__VariousTypes * input,
  rclrs_example_msgs__msg__VariousTypes * output)
{
  if (!input || !output) {
    return false;
  }
  // bool_member
  output->bool_member = input->bool_member;
  // int8_member
  output->int8_member = input->int8_member;
  // uint8_member
  output->uint8_member = input->uint8_member;
  // byte_member
  output->byte_member = input->byte_member;
  // float32_member
  output->float32_member = input->float32_member;
  // float_array
  for (size_t i = 0; i < 3; ++i) {
    output->float_array[i] = input->float_array[i];
  }
  // float_seq_bounded
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->float_seq_bounded), &(output->float_seq_bounded)))
  {
    return false;
  }
  // float_seq_unbounded
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->float_seq_unbounded), &(output->float_seq_unbounded)))
  {
    return false;
  }
  // string_member
  if (!rosidl_runtime_c__String__copy(
      &(input->string_member), &(output->string_member)))
  {
    return false;
  }
  // wstring_member
  if (!rosidl_runtime_c__U16String__copy(
      &(input->wstring_member), &(output->wstring_member)))
  {
    return false;
  }
  // bounded_string_member
  if (!rosidl_runtime_c__String__copy(
      &(input->bounded_string_member), &(output->bounded_string_member)))
  {
    return false;
  }
  // bounded_wstring_member
  if (!rosidl_runtime_c__U16String__copy(
      &(input->bounded_wstring_member), &(output->bounded_wstring_member)))
  {
    return false;
  }
  // string_array
  for (size_t i = 0; i < 4; ++i) {
    if (!rosidl_runtime_c__String__copy(
        &(input->string_array[i]), &(output->string_array[i])))
    {
      return false;
    }
  }
  // string_seq_bounded
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->string_seq_bounded), &(output->string_seq_bounded)))
  {
    return false;
  }
  // string_seq_unbounded
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->string_seq_unbounded), &(output->string_seq_unbounded)))
  {
    return false;
  }
  // bounded_string_array
  for (size_t i = 0; i < 4; ++i) {
    if (!rosidl_runtime_c__String__copy(
        &(input->bounded_string_array[i]), &(output->bounded_string_array[i])))
    {
      return false;
    }
  }
  // bounded_string_seq_bounded
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->bounded_string_seq_bounded), &(output->bounded_string_seq_bounded)))
  {
    return false;
  }
  // bounded_string_seq_unbounded
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->bounded_string_seq_unbounded), &(output->bounded_string_seq_unbounded)))
  {
    return false;
  }
  // nested_member
  if (!rclrs_example_msgs__msg__NestedType__copy(
      &(input->nested_member), &(output->nested_member)))
  {
    return false;
  }
  // nested_array
  for (size_t i = 0; i < 2; ++i) {
    if (!rclrs_example_msgs__msg__NestedType__copy(
        &(input->nested_array[i]), &(output->nested_array[i])))
    {
      return false;
    }
  }
  // nested_seq_unbounded
  if (!rclrs_example_msgs__msg__NestedType__Sequence__copy(
      &(input->nested_seq_unbounded), &(output->nested_seq_unbounded)))
  {
    return false;
  }
  // nested_seq_bounded
  if (!rclrs_example_msgs__msg__NestedType__Sequence__copy(
      &(input->nested_seq_bounded), &(output->nested_seq_bounded)))
  {
    return false;
  }
  return true;
}

rclrs_example_msgs__msg__VariousTypes *
rclrs_example_msgs__msg__VariousTypes__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rclrs_example_msgs__msg__VariousTypes * msg = (rclrs_example_msgs__msg__VariousTypes *)allocator.allocate(sizeof(rclrs_example_msgs__msg__VariousTypes), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rclrs_example_msgs__msg__VariousTypes));
  bool success = rclrs_example_msgs__msg__VariousTypes__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rclrs_example_msgs__msg__VariousTypes__destroy(rclrs_example_msgs__msg__VariousTypes * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rclrs_example_msgs__msg__VariousTypes__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rclrs_example_msgs__msg__VariousTypes__Sequence__init(rclrs_example_msgs__msg__VariousTypes__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rclrs_example_msgs__msg__VariousTypes * data = NULL;

  if (size) {
    data = (rclrs_example_msgs__msg__VariousTypes *)allocator.zero_allocate(size, sizeof(rclrs_example_msgs__msg__VariousTypes), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rclrs_example_msgs__msg__VariousTypes__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rclrs_example_msgs__msg__VariousTypes__fini(&data[i - 1]);
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
rclrs_example_msgs__msg__VariousTypes__Sequence__fini(rclrs_example_msgs__msg__VariousTypes__Sequence * array)
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
      rclrs_example_msgs__msg__VariousTypes__fini(&array->data[i]);
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

rclrs_example_msgs__msg__VariousTypes__Sequence *
rclrs_example_msgs__msg__VariousTypes__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rclrs_example_msgs__msg__VariousTypes__Sequence * array = (rclrs_example_msgs__msg__VariousTypes__Sequence *)allocator.allocate(sizeof(rclrs_example_msgs__msg__VariousTypes__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rclrs_example_msgs__msg__VariousTypes__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rclrs_example_msgs__msg__VariousTypes__Sequence__destroy(rclrs_example_msgs__msg__VariousTypes__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rclrs_example_msgs__msg__VariousTypes__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rclrs_example_msgs__msg__VariousTypes__Sequence__are_equal(const rclrs_example_msgs__msg__VariousTypes__Sequence * lhs, const rclrs_example_msgs__msg__VariousTypes__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rclrs_example_msgs__msg__VariousTypes__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rclrs_example_msgs__msg__VariousTypes__Sequence__copy(
  const rclrs_example_msgs__msg__VariousTypes__Sequence * input,
  rclrs_example_msgs__msg__VariousTypes__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rclrs_example_msgs__msg__VariousTypes);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rclrs_example_msgs__msg__VariousTypes * data =
      (rclrs_example_msgs__msg__VariousTypes *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rclrs_example_msgs__msg__VariousTypes__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rclrs_example_msgs__msg__VariousTypes__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rclrs_example_msgs__msg__VariousTypes__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
