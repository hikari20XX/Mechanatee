// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/AnalogInput.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__ANALOG_INPUT__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__ANALOG_INPUT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/AnalogInput in the package custom_msgs.
/**
  * AnalogInput.msg
 */
typedef struct custom_msgs__msg__AnalogInput
{
  int32_t sec;
  uint32_t nanosec;
  double value;
} custom_msgs__msg__AnalogInput;

// Struct for a sequence of custom_msgs__msg__AnalogInput.
typedef struct custom_msgs__msg__AnalogInput__Sequence
{
  custom_msgs__msg__AnalogInput * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__AnalogInput__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__ANALOG_INPUT__STRUCT_H_
