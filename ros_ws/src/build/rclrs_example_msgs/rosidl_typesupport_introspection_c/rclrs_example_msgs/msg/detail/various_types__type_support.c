// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rclrs_example_msgs:msg/VariousTypes.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rclrs_example_msgs/msg/detail/various_types__rosidl_typesupport_introspection_c.h"
#include "rclrs_example_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rclrs_example_msgs/msg/detail/various_types__functions.h"
#include "rclrs_example_msgs/msg/detail/various_types__struct.h"


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
#include "rclrs_example_msgs/msg/nested_type.h"
// Member `nested_member`
// Member `nested_array`
// Member `nested_seq_unbounded`
// Member `nested_seq_bounded`
#include "rclrs_example_msgs/msg/detail/nested_type__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__VariousTypes_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rclrs_example_msgs__msg__VariousTypes__init(message_memory);
}

void rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__VariousTypes_fini_function(void * message_memory)
{
  rclrs_example_msgs__msg__VariousTypes__fini(message_memory);
}

size_t rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__size_function__VariousTypes__float_array(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_const_function__VariousTypes__float_array(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_function__VariousTypes__float_array(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__fetch_function__VariousTypes__float_array(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_const_function__VariousTypes__float_array(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__assign_function__VariousTypes__float_array(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_function__VariousTypes__float_array(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__size_function__VariousTypes__float_seq_bounded(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_const_function__VariousTypes__float_seq_bounded(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_function__VariousTypes__float_seq_bounded(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__fetch_function__VariousTypes__float_seq_bounded(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_const_function__VariousTypes__float_seq_bounded(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__assign_function__VariousTypes__float_seq_bounded(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_function__VariousTypes__float_seq_bounded(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__resize_function__VariousTypes__float_seq_bounded(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__size_function__VariousTypes__float_seq_unbounded(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_const_function__VariousTypes__float_seq_unbounded(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_function__VariousTypes__float_seq_unbounded(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__fetch_function__VariousTypes__float_seq_unbounded(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_const_function__VariousTypes__float_seq_unbounded(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__assign_function__VariousTypes__float_seq_unbounded(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_function__VariousTypes__float_seq_unbounded(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__resize_function__VariousTypes__float_seq_unbounded(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__size_function__VariousTypes__string_array(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_const_function__VariousTypes__string_array(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String * member =
    (const rosidl_runtime_c__String *)(untyped_member);
  return &member[index];
}

void * rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_function__VariousTypes__string_array(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String * member =
    (rosidl_runtime_c__String *)(untyped_member);
  return &member[index];
}

void rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__fetch_function__VariousTypes__string_array(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_const_function__VariousTypes__string_array(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__assign_function__VariousTypes__string_array(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_function__VariousTypes__string_array(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

size_t rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__size_function__VariousTypes__string_seq_bounded(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_const_function__VariousTypes__string_seq_bounded(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_function__VariousTypes__string_seq_bounded(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__fetch_function__VariousTypes__string_seq_bounded(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_const_function__VariousTypes__string_seq_bounded(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__assign_function__VariousTypes__string_seq_bounded(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_function__VariousTypes__string_seq_bounded(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__resize_function__VariousTypes__string_seq_bounded(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__size_function__VariousTypes__string_seq_unbounded(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_const_function__VariousTypes__string_seq_unbounded(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_function__VariousTypes__string_seq_unbounded(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__fetch_function__VariousTypes__string_seq_unbounded(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_const_function__VariousTypes__string_seq_unbounded(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__assign_function__VariousTypes__string_seq_unbounded(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_function__VariousTypes__string_seq_unbounded(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__resize_function__VariousTypes__string_seq_unbounded(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__size_function__VariousTypes__bounded_string_array(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_const_function__VariousTypes__bounded_string_array(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String * member =
    (const rosidl_runtime_c__String *)(untyped_member);
  return &member[index];
}

void * rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_function__VariousTypes__bounded_string_array(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String * member =
    (rosidl_runtime_c__String *)(untyped_member);
  return &member[index];
}

void rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__fetch_function__VariousTypes__bounded_string_array(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_const_function__VariousTypes__bounded_string_array(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__assign_function__VariousTypes__bounded_string_array(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_function__VariousTypes__bounded_string_array(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

size_t rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__size_function__VariousTypes__bounded_string_seq_bounded(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_const_function__VariousTypes__bounded_string_seq_bounded(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_function__VariousTypes__bounded_string_seq_bounded(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__fetch_function__VariousTypes__bounded_string_seq_bounded(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_const_function__VariousTypes__bounded_string_seq_bounded(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__assign_function__VariousTypes__bounded_string_seq_bounded(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_function__VariousTypes__bounded_string_seq_bounded(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__resize_function__VariousTypes__bounded_string_seq_bounded(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__size_function__VariousTypes__bounded_string_seq_unbounded(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_const_function__VariousTypes__bounded_string_seq_unbounded(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_function__VariousTypes__bounded_string_seq_unbounded(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__fetch_function__VariousTypes__bounded_string_seq_unbounded(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_const_function__VariousTypes__bounded_string_seq_unbounded(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__assign_function__VariousTypes__bounded_string_seq_unbounded(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_function__VariousTypes__bounded_string_seq_unbounded(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__resize_function__VariousTypes__bounded_string_seq_unbounded(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__size_function__VariousTypes__nested_array(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_const_function__VariousTypes__nested_array(
  const void * untyped_member, size_t index)
{
  const rclrs_example_msgs__msg__NestedType * member =
    (const rclrs_example_msgs__msg__NestedType *)(untyped_member);
  return &member[index];
}

void * rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_function__VariousTypes__nested_array(
  void * untyped_member, size_t index)
{
  rclrs_example_msgs__msg__NestedType * member =
    (rclrs_example_msgs__msg__NestedType *)(untyped_member);
  return &member[index];
}

void rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__fetch_function__VariousTypes__nested_array(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rclrs_example_msgs__msg__NestedType * item =
    ((const rclrs_example_msgs__msg__NestedType *)
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_const_function__VariousTypes__nested_array(untyped_member, index));
  rclrs_example_msgs__msg__NestedType * value =
    (rclrs_example_msgs__msg__NestedType *)(untyped_value);
  *value = *item;
}

void rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__assign_function__VariousTypes__nested_array(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rclrs_example_msgs__msg__NestedType * item =
    ((rclrs_example_msgs__msg__NestedType *)
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_function__VariousTypes__nested_array(untyped_member, index));
  const rclrs_example_msgs__msg__NestedType * value =
    (const rclrs_example_msgs__msg__NestedType *)(untyped_value);
  *item = *value;
}

size_t rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__size_function__VariousTypes__nested_seq_unbounded(
  const void * untyped_member)
{
  const rclrs_example_msgs__msg__NestedType__Sequence * member =
    (const rclrs_example_msgs__msg__NestedType__Sequence *)(untyped_member);
  return member->size;
}

const void * rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_const_function__VariousTypes__nested_seq_unbounded(
  const void * untyped_member, size_t index)
{
  const rclrs_example_msgs__msg__NestedType__Sequence * member =
    (const rclrs_example_msgs__msg__NestedType__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_function__VariousTypes__nested_seq_unbounded(
  void * untyped_member, size_t index)
{
  rclrs_example_msgs__msg__NestedType__Sequence * member =
    (rclrs_example_msgs__msg__NestedType__Sequence *)(untyped_member);
  return &member->data[index];
}

void rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__fetch_function__VariousTypes__nested_seq_unbounded(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rclrs_example_msgs__msg__NestedType * item =
    ((const rclrs_example_msgs__msg__NestedType *)
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_const_function__VariousTypes__nested_seq_unbounded(untyped_member, index));
  rclrs_example_msgs__msg__NestedType * value =
    (rclrs_example_msgs__msg__NestedType *)(untyped_value);
  *value = *item;
}

void rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__assign_function__VariousTypes__nested_seq_unbounded(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rclrs_example_msgs__msg__NestedType * item =
    ((rclrs_example_msgs__msg__NestedType *)
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_function__VariousTypes__nested_seq_unbounded(untyped_member, index));
  const rclrs_example_msgs__msg__NestedType * value =
    (const rclrs_example_msgs__msg__NestedType *)(untyped_value);
  *item = *value;
}

bool rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__resize_function__VariousTypes__nested_seq_unbounded(
  void * untyped_member, size_t size)
{
  rclrs_example_msgs__msg__NestedType__Sequence * member =
    (rclrs_example_msgs__msg__NestedType__Sequence *)(untyped_member);
  rclrs_example_msgs__msg__NestedType__Sequence__fini(member);
  return rclrs_example_msgs__msg__NestedType__Sequence__init(member, size);
}

size_t rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__size_function__VariousTypes__nested_seq_bounded(
  const void * untyped_member)
{
  const rclrs_example_msgs__msg__NestedType__Sequence * member =
    (const rclrs_example_msgs__msg__NestedType__Sequence *)(untyped_member);
  return member->size;
}

const void * rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_const_function__VariousTypes__nested_seq_bounded(
  const void * untyped_member, size_t index)
{
  const rclrs_example_msgs__msg__NestedType__Sequence * member =
    (const rclrs_example_msgs__msg__NestedType__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_function__VariousTypes__nested_seq_bounded(
  void * untyped_member, size_t index)
{
  rclrs_example_msgs__msg__NestedType__Sequence * member =
    (rclrs_example_msgs__msg__NestedType__Sequence *)(untyped_member);
  return &member->data[index];
}

void rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__fetch_function__VariousTypes__nested_seq_bounded(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rclrs_example_msgs__msg__NestedType * item =
    ((const rclrs_example_msgs__msg__NestedType *)
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_const_function__VariousTypes__nested_seq_bounded(untyped_member, index));
  rclrs_example_msgs__msg__NestedType * value =
    (rclrs_example_msgs__msg__NestedType *)(untyped_value);
  *value = *item;
}

void rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__assign_function__VariousTypes__nested_seq_bounded(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rclrs_example_msgs__msg__NestedType * item =
    ((rclrs_example_msgs__msg__NestedType *)
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_function__VariousTypes__nested_seq_bounded(untyped_member, index));
  const rclrs_example_msgs__msg__NestedType * value =
    (const rclrs_example_msgs__msg__NestedType *)(untyped_value);
  *item = *value;
}

bool rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__resize_function__VariousTypes__nested_seq_bounded(
  void * untyped_member, size_t size)
{
  rclrs_example_msgs__msg__NestedType__Sequence * member =
    (rclrs_example_msgs__msg__NestedType__Sequence *)(untyped_member);
  rclrs_example_msgs__msg__NestedType__Sequence__fini(member);
  return rclrs_example_msgs__msg__NestedType__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__VariousTypes_message_member_array[22] = {
  {
    "bool_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs__msg__VariousTypes, bool_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "int8_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs__msg__VariousTypes, int8_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "uint8_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs__msg__VariousTypes, uint8_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "byte_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_OCTET,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs__msg__VariousTypes, byte_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "float32_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs__msg__VariousTypes, float32_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "float_array",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs__msg__VariousTypes, float_array),  // bytes offset in struct
    NULL,  // default value
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__size_function__VariousTypes__float_array,  // size() function pointer
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_const_function__VariousTypes__float_array,  // get_const(index) function pointer
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_function__VariousTypes__float_array,  // get(index) function pointer
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__fetch_function__VariousTypes__float_array,  // fetch(index, &value) function pointer
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__assign_function__VariousTypes__float_array,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "float_seq_bounded",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(rclrs_example_msgs__msg__VariousTypes, float_seq_bounded),  // bytes offset in struct
    NULL,  // default value
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__size_function__VariousTypes__float_seq_bounded,  // size() function pointer
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_const_function__VariousTypes__float_seq_bounded,  // get_const(index) function pointer
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_function__VariousTypes__float_seq_bounded,  // get(index) function pointer
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__fetch_function__VariousTypes__float_seq_bounded,  // fetch(index, &value) function pointer
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__assign_function__VariousTypes__float_seq_bounded,  // assign(index, value) function pointer
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__resize_function__VariousTypes__float_seq_bounded  // resize(index) function pointer
  },
  {
    "float_seq_unbounded",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs__msg__VariousTypes, float_seq_unbounded),  // bytes offset in struct
    NULL,  // default value
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__size_function__VariousTypes__float_seq_unbounded,  // size() function pointer
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_const_function__VariousTypes__float_seq_unbounded,  // get_const(index) function pointer
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_function__VariousTypes__float_seq_unbounded,  // get(index) function pointer
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__fetch_function__VariousTypes__float_seq_unbounded,  // fetch(index, &value) function pointer
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__assign_function__VariousTypes__float_seq_unbounded,  // assign(index, value) function pointer
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__resize_function__VariousTypes__float_seq_unbounded  // resize(index) function pointer
  },
  {
    "string_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs__msg__VariousTypes, string_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wstring_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_WSTRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs__msg__VariousTypes, wstring_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bounded_string_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    3,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs__msg__VariousTypes, bounded_string_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bounded_wstring_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_WSTRING,  // type
    3,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs__msg__VariousTypes, bounded_wstring_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "string_array",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs__msg__VariousTypes, string_array),  // bytes offset in struct
    NULL,  // default value
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__size_function__VariousTypes__string_array,  // size() function pointer
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_const_function__VariousTypes__string_array,  // get_const(index) function pointer
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_function__VariousTypes__string_array,  // get(index) function pointer
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__fetch_function__VariousTypes__string_array,  // fetch(index, &value) function pointer
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__assign_function__VariousTypes__string_array,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "string_seq_bounded",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    true,  // is upper bound
    offsetof(rclrs_example_msgs__msg__VariousTypes, string_seq_bounded),  // bytes offset in struct
    NULL,  // default value
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__size_function__VariousTypes__string_seq_bounded,  // size() function pointer
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_const_function__VariousTypes__string_seq_bounded,  // get_const(index) function pointer
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_function__VariousTypes__string_seq_bounded,  // get(index) function pointer
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__fetch_function__VariousTypes__string_seq_bounded,  // fetch(index, &value) function pointer
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__assign_function__VariousTypes__string_seq_bounded,  // assign(index, value) function pointer
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__resize_function__VariousTypes__string_seq_bounded  // resize(index) function pointer
  },
  {
    "string_seq_unbounded",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs__msg__VariousTypes, string_seq_unbounded),  // bytes offset in struct
    NULL,  // default value
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__size_function__VariousTypes__string_seq_unbounded,  // size() function pointer
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_const_function__VariousTypes__string_seq_unbounded,  // get_const(index) function pointer
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_function__VariousTypes__string_seq_unbounded,  // get(index) function pointer
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__fetch_function__VariousTypes__string_seq_unbounded,  // fetch(index, &value) function pointer
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__assign_function__VariousTypes__string_seq_unbounded,  // assign(index, value) function pointer
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__resize_function__VariousTypes__string_seq_unbounded  // resize(index) function pointer
  },
  {
    "bounded_string_array",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    1,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs__msg__VariousTypes, bounded_string_array),  // bytes offset in struct
    NULL,  // default value
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__size_function__VariousTypes__bounded_string_array,  // size() function pointer
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_const_function__VariousTypes__bounded_string_array,  // get_const(index) function pointer
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_function__VariousTypes__bounded_string_array,  // get(index) function pointer
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__fetch_function__VariousTypes__bounded_string_array,  // fetch(index, &value) function pointer
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__assign_function__VariousTypes__bounded_string_array,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bounded_string_seq_bounded",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    1,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    true,  // is upper bound
    offsetof(rclrs_example_msgs__msg__VariousTypes, bounded_string_seq_bounded),  // bytes offset in struct
    NULL,  // default value
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__size_function__VariousTypes__bounded_string_seq_bounded,  // size() function pointer
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_const_function__VariousTypes__bounded_string_seq_bounded,  // get_const(index) function pointer
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_function__VariousTypes__bounded_string_seq_bounded,  // get(index) function pointer
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__fetch_function__VariousTypes__bounded_string_seq_bounded,  // fetch(index, &value) function pointer
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__assign_function__VariousTypes__bounded_string_seq_bounded,  // assign(index, value) function pointer
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__resize_function__VariousTypes__bounded_string_seq_bounded  // resize(index) function pointer
  },
  {
    "bounded_string_seq_unbounded",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    1,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs__msg__VariousTypes, bounded_string_seq_unbounded),  // bytes offset in struct
    NULL,  // default value
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__size_function__VariousTypes__bounded_string_seq_unbounded,  // size() function pointer
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_const_function__VariousTypes__bounded_string_seq_unbounded,  // get_const(index) function pointer
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_function__VariousTypes__bounded_string_seq_unbounded,  // get(index) function pointer
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__fetch_function__VariousTypes__bounded_string_seq_unbounded,  // fetch(index, &value) function pointer
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__assign_function__VariousTypes__bounded_string_seq_unbounded,  // assign(index, value) function pointer
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__resize_function__VariousTypes__bounded_string_seq_unbounded  // resize(index) function pointer
  },
  {
    "nested_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs__msg__VariousTypes, nested_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nested_array",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs__msg__VariousTypes, nested_array),  // bytes offset in struct
    NULL,  // default value
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__size_function__VariousTypes__nested_array,  // size() function pointer
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_const_function__VariousTypes__nested_array,  // get_const(index) function pointer
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_function__VariousTypes__nested_array,  // get(index) function pointer
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__fetch_function__VariousTypes__nested_array,  // fetch(index, &value) function pointer
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__assign_function__VariousTypes__nested_array,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nested_seq_unbounded",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs__msg__VariousTypes, nested_seq_unbounded),  // bytes offset in struct
    NULL,  // default value
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__size_function__VariousTypes__nested_seq_unbounded,  // size() function pointer
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_const_function__VariousTypes__nested_seq_unbounded,  // get_const(index) function pointer
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_function__VariousTypes__nested_seq_unbounded,  // get(index) function pointer
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__fetch_function__VariousTypes__nested_seq_unbounded,  // fetch(index, &value) function pointer
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__assign_function__VariousTypes__nested_seq_unbounded,  // assign(index, value) function pointer
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__resize_function__VariousTypes__nested_seq_unbounded  // resize(index) function pointer
  },
  {
    "nested_seq_bounded",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(rclrs_example_msgs__msg__VariousTypes, nested_seq_bounded),  // bytes offset in struct
    NULL,  // default value
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__size_function__VariousTypes__nested_seq_bounded,  // size() function pointer
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_const_function__VariousTypes__nested_seq_bounded,  // get_const(index) function pointer
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__get_function__VariousTypes__nested_seq_bounded,  // get(index) function pointer
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__fetch_function__VariousTypes__nested_seq_bounded,  // fetch(index, &value) function pointer
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__assign_function__VariousTypes__nested_seq_bounded,  // assign(index, value) function pointer
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__resize_function__VariousTypes__nested_seq_bounded  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__VariousTypes_message_members = {
  "rclrs_example_msgs__msg",  // message namespace
  "VariousTypes",  // message name
  22,  // number of fields
  sizeof(rclrs_example_msgs__msg__VariousTypes),
  rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__VariousTypes_message_member_array,  // message members
  rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__VariousTypes_init_function,  // function to initialize message memory (memory has to be allocated)
  rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__VariousTypes_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__VariousTypes_message_type_support_handle = {
  0,
  &rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__VariousTypes_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rclrs_example_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rclrs_example_msgs, msg, VariousTypes)() {
  rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__VariousTypes_message_member_array[18].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rclrs_example_msgs, msg, NestedType)();
  rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__VariousTypes_message_member_array[19].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rclrs_example_msgs, msg, NestedType)();
  rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__VariousTypes_message_member_array[20].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rclrs_example_msgs, msg, NestedType)();
  rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__VariousTypes_message_member_array[21].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rclrs_example_msgs, msg, NestedType)();
  if (!rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__VariousTypes_message_type_support_handle.typesupport_identifier) {
    rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__VariousTypes_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rclrs_example_msgs__msg__VariousTypes__rosidl_typesupport_introspection_c__VariousTypes_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
