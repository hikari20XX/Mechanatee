// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/MotorFeedback.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__MOTOR_FEEDBACK__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__MOTOR_FEEDBACK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'motor_id'
// Member 'additional_info'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MotorFeedback in the package custom_msgs.
/**
  * MotorFeedback.msg
 */
typedef struct custom_msgs__msg__MotorFeedback
{
  /// Timestamp for when the feedback was generated
  /// seconds since epoch
  int32_t sec;
  /// nanoseconds since the last second
  uint32_t nanosec;
  /// Motor ID or name, to identify which motor this feedback is about
  rosidl_runtime_c__String motor_id;
  /// Current position of the motor (could be in angles for rotational motors or in distance units for linear actuators)
  double position;
  /// Current speed or velocity of the motor
  double speed;
  /// Current torque or force being applied by the motor
  double torque;
  /// Current temperature of the motor (useful for monitoring overheating)
  double temperature;
  /// Current drawn by the motor (in amperes)
  double current;
  /// Voltage being supplied to the motor
  double voltage;
  /// Encoder feedback (if you have an encoder and want to track the counts or any specific encoder data)
  int64_t encoder_counts;
  /// Optional: Additional diagnostic or status information
  rosidl_runtime_c__String additional_info;
} custom_msgs__msg__MotorFeedback;

// Struct for a sequence of custom_msgs__msg__MotorFeedback.
typedef struct custom_msgs__msg__MotorFeedback__Sequence
{
  custom_msgs__msg__MotorFeedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__MotorFeedback__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__MOTOR_FEEDBACK__STRUCT_H_
