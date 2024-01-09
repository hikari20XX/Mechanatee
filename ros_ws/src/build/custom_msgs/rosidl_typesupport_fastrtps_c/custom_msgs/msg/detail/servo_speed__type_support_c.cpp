// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from custom_msgs:msg/ServoSpeed.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/servo_speed__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "custom_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "custom_msgs/msg/detail/servo_speed__struct.h"
#include "custom_msgs/msg/detail/servo_speed__functions.h"
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

#include "rosidl_runtime_c/string.h"  // additional_info, servo_id
#include "rosidl_runtime_c/string_functions.h"  // additional_info, servo_id

// forward declare type support functions


using _ServoSpeed__ros_msg_type = custom_msgs__msg__ServoSpeed;

static bool _ServoSpeed__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ServoSpeed__ros_msg_type * ros_message = static_cast<const _ServoSpeed__ros_msg_type *>(untyped_ros_message);
  // Field name: sec
  {
    cdr << ros_message->sec;
  }

  // Field name: nanosec
  {
    cdr << ros_message->nanosec;
  }

  // Field name: servo_id
  {
    const rosidl_runtime_c__String * str = &ros_message->servo_id;
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

  // Field name: speed
  {
    cdr << ros_message->speed;
  }

  // Field name: direction
  {
    cdr << ros_message->direction;
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

static bool _ServoSpeed__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ServoSpeed__ros_msg_type * ros_message = static_cast<_ServoSpeed__ros_msg_type *>(untyped_ros_message);
  // Field name: sec
  {
    cdr >> ros_message->sec;
  }

  // Field name: nanosec
  {
    cdr >> ros_message->nanosec;
  }

  // Field name: servo_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->servo_id.data) {
      rosidl_runtime_c__String__init(&ros_message->servo_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->servo_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'servo_id'\n");
      return false;
    }
  }

  // Field name: speed
  {
    cdr >> ros_message->speed;
  }

  // Field name: direction
  {
    cdr >> ros_message->direction;
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
size_t get_serialized_size_custom_msgs__msg__ServoSpeed(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ServoSpeed__ros_msg_type * ros_message = static_cast<const _ServoSpeed__ros_msg_type *>(untyped_ros_message);
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
  // field.name servo_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->servo_id.size + 1);
  // field.name speed
  {
    size_t item_size = sizeof(ros_message->speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name direction
  {
    size_t item_size = sizeof(ros_message->direction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name additional_info
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->additional_info.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _ServoSpeed__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_custom_msgs__msg__ServoSpeed(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t max_serialized_size_custom_msgs__msg__ServoSpeed(
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
  // member: servo_id
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
  // member: speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: direction
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

static size_t _ServoSpeed__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_custom_msgs__msg__ServoSpeed(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ServoSpeed = {
  "custom_msgs::msg",
  "ServoSpeed",
  _ServoSpeed__cdr_serialize,
  _ServoSpeed__cdr_deserialize,
  _ServoSpeed__get_serialized_size,
  _ServoSpeed__max_serialized_size
};

static rosidl_message_type_support_t _ServoSpeed__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ServoSpeed,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msgs, msg, ServoSpeed)() {
  return &_ServoSpeed__type_support;
}

#if defined(__cplusplus)
}
#endif
