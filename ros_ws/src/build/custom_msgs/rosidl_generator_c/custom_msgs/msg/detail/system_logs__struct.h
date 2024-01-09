// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/SystemLogs.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SYSTEM_LOGS__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__SYSTEM_LOGS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'component_id'
// Member 'message'
// Member 'details'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/SystemLogs in the package custom_msgs.
/**
  * SystemLogs.msg
 */
typedef struct custom_msgs__msg__SystemLogs
{
  /// Timestamp for when the log entry was created
  /// seconds since epoch
  int32_t sec;
  /// nanoseconds since the last second
  uint32_t nanosec;
  /// The ID or name of the component that's logging the message (e.g., a specific motor, sensor, etc.)
  rosidl_runtime_c__String component_id;
  /// The severity level of the log
  /// Predefined levels:
  /// 1 - DEBUG
  /// 2 - INFO
  /// 3 - WARN
  /// 4 - ERROR
  /// 5 - FATAL
  int32_t log_level;
  /// The main content of the log message
  rosidl_runtime_c__String message;
  /// Optional: Any additional information or data related to the log entry
  rosidl_runtime_c__String details;
  /// Throttling-related fields:
  /// The time (in seconds) since this type of message was last logged
  float time_since_last_log;
  /// The maximum frequency (in Hz) at which this type of message should be logged
  float max_log_frequency;
} custom_msgs__msg__SystemLogs;

// Struct for a sequence of custom_msgs__msg__SystemLogs.
typedef struct custom_msgs__msg__SystemLogs__Sequence
{
  custom_msgs__msg__SystemLogs * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__SystemLogs__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__SYSTEM_LOGS__STRUCT_H_
