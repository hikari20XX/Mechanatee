// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/UpdatedPIDParams.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__UPDATED_PID_PARAMS__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__UPDATED_PID_PARAMS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/UpdatedPIDParams in the package custom_msgs.
/**
  * UpdatedPIDParams.msg
 */
typedef struct custom_msgs__msg__UpdatedPIDParams
{
  int32_t sec;
  uint32_t nanosec;
  double updated_p_value;
  double updated_i_value;
  double updated_d_value;
} custom_msgs__msg__UpdatedPIDParams;

// Struct for a sequence of custom_msgs__msg__UpdatedPIDParams.
typedef struct custom_msgs__msg__UpdatedPIDParams__Sequence
{
  custom_msgs__msg__UpdatedPIDParams * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__UpdatedPIDParams__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__UPDATED_PID_PARAMS__STRUCT_H_
