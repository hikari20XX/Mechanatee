// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/VoltageReading.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__VOLTAGE_READING__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__VOLTAGE_READING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'sensor_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/VoltageReading in the package custom_msgs.
/**
  * VoltageReading.msg
 */
typedef struct custom_msgs__msg__VoltageReading
{
  int32_t sec;
  uint32_t nanosec;
  float voltage_value;
  rosidl_runtime_c__String sensor_id;
} custom_msgs__msg__VoltageReading;

// Struct for a sequence of custom_msgs__msg__VoltageReading.
typedef struct custom_msgs__msg__VoltageReading__Sequence
{
  custom_msgs__msg__VoltageReading * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__VoltageReading__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__VOLTAGE_READING__STRUCT_H_
