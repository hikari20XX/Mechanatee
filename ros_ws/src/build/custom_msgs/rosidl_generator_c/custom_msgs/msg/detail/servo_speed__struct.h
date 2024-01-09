// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/ServoSpeed.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SERVO_SPEED__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__SERVO_SPEED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'servo_id'
// Member 'additional_info'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ServoSpeed in the package custom_msgs.
/**
  * ServoSpeed.msg
 */
typedef struct custom_msgs__msg__ServoSpeed
{
  /// Timestamp for when the speed was set or measured
  /// seconds since epoch
  int32_t sec;
  /// nanoseconds since the last second
  uint32_t nanosec;
  /// Servo ID or name, to identify which servo this speed relates to
  rosidl_runtime_c__String servo_id;
  /// Desired or measured speed of the servo.
  /// This could be in terms of degrees/sec for rotational servos.
  double speed;
  /// Optional: Direction in which the servo is moving, if relevant
  /// -1 for counterclockwise, 1 for clockwise, 0 for stationary
  int8_t direction;
  /// Optional: Additional information or status about the servo speed setting
  rosidl_runtime_c__String additional_info;
} custom_msgs__msg__ServoSpeed;

// Struct for a sequence of custom_msgs__msg__ServoSpeed.
typedef struct custom_msgs__msg__ServoSpeed__Sequence
{
  custom_msgs__msg__ServoSpeed * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__ServoSpeed__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__SERVO_SPEED__STRUCT_H_
