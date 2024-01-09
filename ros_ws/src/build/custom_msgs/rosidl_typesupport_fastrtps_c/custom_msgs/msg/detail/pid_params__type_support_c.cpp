// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from custom_msgs:msg/PIDParams.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/pid_params__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "custom_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "custom_msgs/msg/detail/pid_params__struct.h"
#include "custom_msgs/msg/detail/pid_params__functions.h"
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


// forward declare type support functions


using _PIDParams__ros_msg_type = custom_msgs__msg__PIDParams;

static bool _PIDParams__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PIDParams__ros_msg_type * ros_message = static_cast<const _PIDParams__ros_msg_type *>(untyped_ros_message);
  // Field name: sec
  {
    cdr << ros_message->sec;
  }

  // Field name: nanosec
  {
    cdr << ros_message->nanosec;
  }

  // Field name: p_value
  {
    cdr << ros_message->p_value;
  }

  // Field name: i_value
  {
    cdr << ros_message->i_value;
  }

  // Field name: d_value
  {
    cdr << ros_message->d_value;
  }

  // Field name: integral_limit_upper
  {
    cdr << ros_message->integral_limit_upper;
  }

  // Field name: integral_limit_lower
  {
    cdr << ros_message->integral_limit_lower;
  }

  return true;
}

static bool _PIDParams__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PIDParams__ros_msg_type * ros_message = static_cast<_PIDParams__ros_msg_type *>(untyped_ros_message);
  // Field name: sec
  {
    cdr >> ros_message->sec;
  }

  // Field name: nanosec
  {
    cdr >> ros_message->nanosec;
  }

  // Field name: p_value
  {
    cdr >> ros_message->p_value;
  }

  // Field name: i_value
  {
    cdr >> ros_message->i_value;
  }

  // Field name: d_value
  {
    cdr >> ros_message->d_value;
  }

  // Field name: integral_limit_upper
  {
    cdr >> ros_message->integral_limit_upper;
  }

  // Field name: integral_limit_lower
  {
    cdr >> ros_message->integral_limit_lower;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t get_serialized_size_custom_msgs__msg__PIDParams(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PIDParams__ros_msg_type * ros_message = static_cast<const _PIDParams__ros_msg_type *>(untyped_ros_message);
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
  // field.name p_value
  {
    size_t item_size = sizeof(ros_message->p_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name i_value
  {
    size_t item_size = sizeof(ros_message->i_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name d_value
  {
    size_t item_size = sizeof(ros_message->d_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name integral_limit_upper
  {
    size_t item_size = sizeof(ros_message->integral_limit_upper);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name integral_limit_lower
  {
    size_t item_size = sizeof(ros_message->integral_limit_lower);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PIDParams__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_custom_msgs__msg__PIDParams(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t max_serialized_size_custom_msgs__msg__PIDParams(
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
  // member: p_value
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: i_value
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: d_value
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: integral_limit_upper
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: integral_limit_lower
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _PIDParams__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_custom_msgs__msg__PIDParams(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PIDParams = {
  "custom_msgs::msg",
  "PIDParams",
  _PIDParams__cdr_serialize,
  _PIDParams__cdr_deserialize,
  _PIDParams__get_serialized_size,
  _PIDParams__max_serialized_size
};

static rosidl_message_type_support_t _PIDParams__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PIDParams,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msgs, msg, PIDParams)() {
  return &_PIDParams__type_support;
}

#if defined(__cplusplus)
}
#endif
