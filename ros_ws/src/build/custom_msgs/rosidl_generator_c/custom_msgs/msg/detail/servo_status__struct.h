// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/ServoStatus.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SERVO_STATUS__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__SERVO_STATUS__STRUCT_H_

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

/// Struct defined in msg/ServoStatus in the package custom_msgs.
/**
  * ServoStatus.msg
 */
typedef struct custom_msgs__msg__ServoStatus
{
  /// Timestamp for when the status was retrieved or reported
  /// seconds since epoch
  int32_t sec;
  /// nanoseconds since the last second
  uint32_t nanosec;
  /// Servo ID or name, to identify which servo this status relates to
  rosidl_runtime_c__String servo_id;
  /// Current position of the servo.
  /// This could be in degrees, or another unit if relevant for your servo.
  double position;
  /// Current speed of the servo.
  /// This could be in terms of degrees/sec for rotational servos.
  double speed;
  /// Current load or torque being exerted by or on the servo.
  /// This could be in terms of percentage or actual force value.
  double load;
  /// Temperature of the servo in Celsius
  double temperature;
  /// Voltage being supplied to the servo, if relevant
  double voltage;
  /// Error status or health of the servo
  /// 0 means OK, other numbers can represent specific error codes or conditions
  int32_t error_status;
  /// Optional: Additional textual information or status about the servo
  rosidl_runtime_c__String additional_info;
} custom_msgs__msg__ServoStatus;

// Struct for a sequence of custom_msgs__msg__ServoStatus.
typedef struct custom_msgs__msg__ServoStatus__Sequence
{
  custom_msgs__msg__ServoStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__ServoStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__SERVO_STATUS__STRUCT_H_
