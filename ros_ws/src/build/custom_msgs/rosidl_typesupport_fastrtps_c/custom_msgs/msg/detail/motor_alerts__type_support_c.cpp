// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from custom_msgs:msg/MotorAlerts.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/motor_alerts__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "custom_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "custom_msgs/msg/detail/motor_alerts__struct.h"
#include "custom_msgs/msg/detail/motor_alerts__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // additional_info, motor_id
#include "rosidl_runtime_c/string_functions.h"  // additional_info, motor_id

// forward declare type support functions


using _MotorAlerts__ros_msg_type = custom_msgs__msg__MotorAlerts;

static bool _MotorAlerts__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MotorAlerts__ros_msg_type * ros_message = static_cast<const _MotorAlerts__ros_msg_type *>(untyped_ros_message);
  // Field name: sec
  {
    cdr << ros_message->sec;
  }

  // Field name: nanosec
  {
    cdr << ros_message->nanosec;
  }

  // Field name: motor_id
  {
    const rosidl_runtime_c__String * str = &ros_message->motor_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: overheating
  {
    cdr << (ros_message->overheating ? true : false);
  }

  // Field name: electrical_fault
  {
    cdr << (ros_message->electrical_fault ? true : false);
  }

  // Field name: stall
  {
    cdr << (ros_message->stall ? true : false);
  }

  // Field name: overcurrent
  {
    cdr << (ros_message->overcurrent ? true : false);
  }

  // Field name: obstruction
  {
    cdr << (ros_message->obstruction ? true : false);
  }

  // Field name: encoder_fault
  {
    cdr << (ros_message->encoder_fault ? true : false);
  }

  // Field name: runtime_exceeded
  {
    cdr << (ros_message->runtime_exceeded ? true : false);
  }

  // Field name: additional_info
  {
    const rosidl_runtime_c__String * str = &ros_message->additional_info;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _MotorAlerts__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MotorAlerts__ros_msg_type * ros_message = static_cast<_MotorAlerts__ros_msg_type *>(untyped_ros_message);
  // Field name: sec
  {
    cdr >> ros_message->sec;
  }

  // Field name: nanosec
  {
    cdr >> ros_message->nanosec;
  }

  // Field name: motor_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->motor_id.data) {
      rosidl_runtime_c__String__init(&ros_message->motor_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->motor_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'motor_id'\n");
      return false;
    }
  }

  // Field name: overheating
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->overheating = tmp ? true : false;
  }

  // Field name: electrical_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->electrical_fault = tmp ? true : false;
  }

  // Field name: stall
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->stall = tmp ? true : false;
  }

  // Field name: overcurrent
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->overcurrent = tmp ? true : false;
  }

  // Field name: obstruction
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->obstruction = tmp ? true : false;
  }

  // Field name: encoder_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->encoder_fault = tmp ? true : false;
  }

  // Field name: runtime_exceeded
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->runtime_exceeded = tmp ? true : false;
  }

  // Field name: additional_info
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->additional_info.data) {
      rosidl_runtime_c__String__init(&ros_message->additional_info);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->additional_info,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'additional_info'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t get_serialized_size_custom_msgs__msg__MotorAlerts(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MotorAlerts__ros_msg_type * ros_message = static_cast<const _MotorAlerts__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name sec
  {
    size_t item_size = sizeof(ros_message->sec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name nanosec
  {
    size_t item_size = sizeof(ros_message->nanosec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name motor_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->motor_id.size + 1);
  // field.name overheating
  {
    size_t item_size = sizeof(ros_message->overheating);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name electrical_fault
  {
    size_t item_size = sizeof(ros_message->electrical_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stall
  {
    size_t item_size = sizeof(ros_message->stall);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name overcurrent
  {
    size_t item_size = sizeof(ros_message->overcurrent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name obstruction
  {
    size_t item_size = sizeof(ros_message->obstruction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name encoder_fault
  {
    size_t item_size = sizeof(ros_message->encoder_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name runtime_exceeded
  {
    size_t item_size = sizeof(ros_message->runtime_exceeded);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name additional_info
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->additional_info.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _MotorAlerts__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_custom_msgs__msg__MotorAlerts(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t max_serialized_size_custom_msgs__msg__MotorAlerts(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: sec
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: nanosec
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: motor_id
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: overheating
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: electrical_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: stall
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: overcurrent
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: obstruction
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: encoder_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: runtime_exceeded
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: additional_info
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _MotorAlerts__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_custom_msgs__msg__MotorAlerts(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MotorAlerts = {
  "custom_msgs::msg",
  "MotorAlerts",
  _MotorAlerts__cdr_serialize,
  _MotorAlerts__cdr_deserialize,
  _MotorAlerts__get_serialized_size,
  _MotorAlerts__max_serialized_size
};

static rosidl_message_type_support_t _MotorAlerts__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MotorAlerts,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msgs, msg, MotorAlerts)() {
  return &_MotorAlerts__type_support;
}

#if defined(__cplusplus)
}
#endif
