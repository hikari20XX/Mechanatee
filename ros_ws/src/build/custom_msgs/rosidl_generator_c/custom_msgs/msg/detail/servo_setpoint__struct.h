// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/ServoSetpoint.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SERVO_SETPOINT__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__SERVO_SETPOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ServoSetpoint in the package custom_msgs.
/**
  * ServoSetpoint.msg
 */
typedef struct custom_msgs__msg__ServoSetpoint
{
  int32_t sec;
  uint32_t nanosec;
  float position;
} custom_msgs__msg__ServoSetpoint;

// Struct for a sequence of custom_msgs__msg__ServoSetpoint.
typedef struct custom_msgs__msg__ServoSetpoint__Sequence
{
  custom_msgs__msg__ServoSetpoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__ServoSetpoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__SERVO_SETPOINT__STRUCT_H_
