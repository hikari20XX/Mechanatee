// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/BatteryStatus.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__BATTERY_STATUS__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__BATTERY_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'OK'.
enum
{
  custom_msgs__msg__BatteryStatus__OK = 1
};

/// Constant 'LOW'.
enum
{
  custom_msgs__msg__BatteryStatus__LOW = 2
};

/// Constant 'CRITICAL'.
enum
{
  custom_msgs__msg__BatteryStatus__CRITICAL = 3
};

/// Struct defined in msg/BatteryStatus in the package custom_msgs.
/**
  * BatteryStatus.msg
 */
typedef struct custom_msgs__msg__BatteryStatus
{
  int32_t sec;
  uint32_t nanosec;
  float charge_percentage;
  float voltage;
  float current;
  float time_remaining;
  int8_t status;
  float health_percentage;
} custom_msgs__msg__BatteryStatus;

// Struct for a sequence of custom_msgs__msg__BatteryStatus.
typedef struct custom_msgs__msg__BatteryStatus__Sequence
{
  custom_msgs__msg__BatteryStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__BatteryStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__BATTERY_STATUS__STRUCT_H_
