// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/MotorAlerts.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__MOTOR_ALERTS__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__MOTOR_ALERTS__STRUCT_H_

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

/// Struct defined in msg/MotorAlerts in the package custom_msgs.
/**
  * MotorAlerts.msg
 */
typedef struct custom_msgs__msg__MotorAlerts
{
  /// Timestamp for when the alert was generated
  /// seconds since epoch
  int32_t sec;
  /// nanoseconds since the last second
  uint32_t nanosec;
  /// Motor ID or name, to identify which motor this alert is about
  rosidl_runtime_c__String motor_id;
  /// Boolean flags indicating various alerts or errors
  /// Flag to indicate if the motor is overheating
  bool overheating;
  /// Flag to indicate if there's an electrical fault
  bool electrical_fault;
  /// Flag to indicate if the motor has stalled or isn't moving when it should be
  bool stall;
  /// Flag to indicate if the motor is drawing too much current
  bool overcurrent;
  /// Flag to indicate if there's a mechanical obstruction or blockage
  bool obstruction;
  /// Flag to indicate if the encoder or feedback mechanism is malfunctioning
  bool encoder_fault;
  /// Flag to indicate if the motor has been running for too long continuously
  bool runtime_exceeded;
  /// Optional: Additional information or details about the alert
  rosidl_runtime_c__String additional_info;
} custom_msgs__msg__MotorAlerts;

// Struct for a sequence of custom_msgs__msg__MotorAlerts.
typedef struct custom_msgs__msg__MotorAlerts__Sequence
{
  custom_msgs__msg__MotorAlerts * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__MotorAlerts__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__MOTOR_ALERTS__STRUCT_H_
