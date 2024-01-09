// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rclrs_example_msgs:msg/VariousTypes.idl
// generated code does not contain a copyright notice

#ifndef RCLRS_EXAMPLE_MSGS__MSG__DETAIL__VARIOUS_TYPES__STRUCT_H_
#define RCLRS_EXAMPLE_MSGS__MSG__DETAIL__VARIOUS_TYPES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TWO_PLUS_TWO'.
/**
  * binary, hexadecimal and octal constants are also possible
 */
enum
{
  rclrs_example_msgs__msg__VariousTypes__TWO_PLUS_TWO = 5
};

/// Constant 'PASSWORD'.
/**
  * Only unbounded strings are possible
 */
static const char * const rclrs_example_msgs__msg__VariousTypes__PASSWORD = "hunter2";

/// Constant 'PI'.
/**
  * As determined by Edward J. Goodwin
 */
static const float rclrs_example_msgs__msg__VariousTypes__PI = 3.0f;

// Include directives for member types
// Member 'float_seq_bounded'
// Member 'float_seq_unbounded'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'string_member'
// Member 'bounded_string_member'
// Member 'string_array'
// Member 'string_seq_bounded'
// Member 'string_seq_unbounded'
// Member 'bounded_string_array'
// Member 'bounded_string_seq_bounded'
// Member 'bounded_string_seq_unbounded'
#include "rosidl_runtime_c/string.h"
// Member 'wstring_member'
// Member 'bounded_wstring_member'
#include "rosidl_runtime_c/u16string.h"
// Member 'nested_member'
// Member 'nested_array'
// Member 'nested_seq_unbounded'
// Member 'nested_seq_bounded'
#include "rclrs_example_msgs/msg/detail/nested_type__struct.h"

// constants for array fields with an upper bound
// float_seq_bounded
enum
{
  rclrs_example_msgs__msg__VariousTypes__float_seq_bounded__MAX_SIZE = 3
};
// bounded_string_member
enum
{
  rclrs_example_msgs__msg__VariousTypes__bounded_string_member__MAX_STRING_SIZE = 3
};
// bounded_wstring_member
enum
{
  rclrs_example_msgs__msg__VariousTypes__bounded_wstring_member__MAX_STRING_SIZE = 3
};
// string_seq_bounded
enum
{
  rclrs_example_msgs__msg__VariousTypes__string_seq_bounded__MAX_SIZE = 4
};
// bounded_string_array
enum
{
  rclrs_example_msgs__msg__VariousTypes__bounded_string_array__MAX_STRING_SIZE = 1
};
// bounded_string_seq_bounded
enum
{
  rclrs_example_msgs__msg__VariousTypes__bounded_string_seq_bounded__MAX_SIZE = 4
};
// bounded_string_seq_bounded
enum
{
  rclrs_example_msgs__msg__VariousTypes__bounded_string_seq_bounded__MAX_STRING_SIZE = 1
};
// bounded_string_seq_unbounded
enum
{
  rclrs_example_msgs__msg__VariousTypes__bounded_string_seq_unbounded__MAX_STRING_SIZE = 1
};
// nested_seq_bounded
enum
{
  rclrs_example_msgs__msg__VariousTypes__nested_seq_bounded__MAX_SIZE = 3
};

/// Struct defined in msg/VariousTypes in the package rclrs_example_msgs.
/**
  * Primitive types
 */
typedef struct rclrs_example_msgs__msg__VariousTypes
{
  bool bool_member;
  int8_t int8_member;
  uint8_t uint8_member;
  uint8_t byte_member;
  float float32_member;
  /// Array/sequence of primitive type
  float float_array[3];
  rosidl_runtime_c__float__Sequence float_seq_bounded;
  rosidl_runtime_c__float__Sequence float_seq_unbounded;
  /// String types
  rosidl_runtime_c__String string_member;
  rosidl_runtime_c__U16String wstring_member;
  rosidl_runtime_c__String bounded_string_member;
  rosidl_runtime_c__U16String bounded_wstring_member;
  /// Array/sequence of string type
  rosidl_runtime_c__String string_array[4];
  rosidl_runtime_c__String__Sequence string_seq_bounded;
  rosidl_runtime_c__String__Sequence string_seq_unbounded;
  rosidl_runtime_c__String bounded_string_array[4];
  rosidl_runtime_c__String__Sequence bounded_string_seq_bounded;
  rosidl_runtime_c__String__Sequence bounded_string_seq_unbounded;
  /// Nested type
  rclrs_example_msgs__msg__NestedType nested_member;
  /// Array/sequence of nested type
  rclrs_example_msgs__msg__NestedType nested_array[2];
  rclrs_example_msgs__msg__NestedType__Sequence nested_seq_unbounded;
  rclrs_example_msgs__msg__NestedType__Sequence nested_seq_bounded;
} rclrs_example_msgs__msg__VariousTypes;

// Struct for a sequence of rclrs_example_msgs__msg__VariousTypes.
typedef struct rclrs_example_msgs__msg__VariousTypes__Sequence
{
  rclrs_example_msgs__msg__VariousTypes * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rclrs_example_msgs__msg__VariousTypes__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RCLRS_EXAMPLE_MSGS__MSG__DETAIL__VARIOUS_TYPES__STRUCT_H_
