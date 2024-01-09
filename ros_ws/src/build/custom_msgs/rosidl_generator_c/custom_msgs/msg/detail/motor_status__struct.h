// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/MotorStatus.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__MOTOR_STATUS__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__MOTOR_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'RUNNING'.
enum
{
  custom_msgs__msg__MotorStatus__RUNNING = 1
};

/// Constant 'STOPPED'.
enum
{
  custom_msgs__msg__MotorStatus__STOPPED = 2
};

/// Constant 'ERROR'.
enum
{
  custom_msgs__msg__MotorStatus__ERROR = 3
};

// Include directives for member types
// Member 'description'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MotorStatus in the package custom_msgs.
/**
  * MotorStatus.msg
 */
typedef struct custom_msgs__msg__MotorStatus
{
  int32_t sec;
  uint32_t nanosec;
  int8_t state;
  int32_t speed_rpm;
  float load_percentage;
  int32_t error_code;
  rosidl_runtime_c__String description;
} custom_msgs__msg__MotorStatus;

// Struct for a sequence of custom_msgs__msg__MotorStatus.
typedef struct custom_msgs__msg__MotorStatus__Sequence
{
  custom_msgs__msg__MotorStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__MotorStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__MOTOR_STATUS__STRUCT_H_
