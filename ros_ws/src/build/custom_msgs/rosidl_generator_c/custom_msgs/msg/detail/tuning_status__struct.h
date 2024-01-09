// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/TuningStatus.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__TUNING_STATUS__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__TUNING_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NOT_STARTED'.
enum
{
  custom_msgs__msg__TuningStatus__NOT_STARTED = 0
};

/// Constant 'ONGOING'.
enum
{
  custom_msgs__msg__TuningStatus__ONGOING = 1
};

/// Constant 'COMPLETED'.
enum
{
  custom_msgs__msg__TuningStatus__COMPLETED = 2
};

/// Constant 'FAILED'.
enum
{
  custom_msgs__msg__TuningStatus__FAILED = 3
};

// Include directives for member types
// Member 'details'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/TuningStatus in the package custom_msgs.
/**
  * TuningStatus.msg
 */
typedef struct custom_msgs__msg__TuningStatus
{
  int32_t sec;
  uint32_t nanosec;
  int8_t status;
  rosidl_runtime_c__String details;
} custom_msgs__msg__TuningStatus;

// Struct for a sequence of custom_msgs__msg__TuningStatus.
typedef struct custom_msgs__msg__TuningStatus__Sequence
{
  custom_msgs__msg__TuningStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__TuningStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__TUNING_STATUS__STRUCT_H_
