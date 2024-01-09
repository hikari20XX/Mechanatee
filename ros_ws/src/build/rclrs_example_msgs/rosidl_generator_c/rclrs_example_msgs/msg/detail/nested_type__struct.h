// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rclrs_example_msgs:msg/NestedType.idl
// generated code does not contain a copyright notice

#ifndef RCLRS_EXAMPLE_MSGS__MSG__DETAIL__NESTED_TYPE__STRUCT_H_
#define RCLRS_EXAMPLE_MSGS__MSG__DETAIL__NESTED_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'effect'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/NestedType in the package rclrs_example_msgs.
typedef struct rclrs_example_msgs__msg__NestedType
{
  rosidl_runtime_c__String effect;
} rclrs_example_msgs__msg__NestedType;

// Struct for a sequence of rclrs_example_msgs__msg__NestedType.
typedef struct rclrs_example_msgs__msg__NestedType__Sequence
{
  rclrs_example_msgs__msg__NestedType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rclrs_example_msgs__msg__NestedType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RCLRS_EXAMPLE_MSGS__MSG__DETAIL__NESTED_TYPE__STRUCT_H_
