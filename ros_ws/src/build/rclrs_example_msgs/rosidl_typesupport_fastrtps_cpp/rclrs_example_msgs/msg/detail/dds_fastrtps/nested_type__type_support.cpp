// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from rclrs_example_msgs:msg/NestedType.idl
// generated code does not contain a copyright notice
#include "rclrs_example_msgs/msg/detail/nested_type__rosidl_typesupport_fastrtps_cpp.hpp"
#include "rclrs_example_msgs/msg/detail/nested_type__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace rclrs_example_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rclrs_example_msgs
cdr_serialize(
  const rclrs_example_msgs::msg::NestedType & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: effect
  cdr << ros_message.effect;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rclrs_example_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rclrs_example_msgs::msg::NestedType & ros_message)
{
  // Member: effect
  cdr >> ros_message.effect;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rclrs_example_msgs
get_serialized_size(
  const rclrs_example_msgs::msg::NestedType & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: effect
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.effect.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rclrs_example_msgs
max_serialized_size_NestedType(
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


  // Member: effect
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

static bool _NestedType__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rclrs_example_msgs::msg::NestedType *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _NestedType__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rclrs_example_msgs::msg::NestedType *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _NestedType__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rclrs_example_msgs::msg::NestedType *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _NestedType__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_NestedType(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _NestedType__callbacks = {
  "rclrs_example_msgs::msg",
  "NestedType",
  _NestedType__cdr_serialize,
  _NestedType__cdr_deserialize,
  _NestedType__get_serialized_size,
  _NestedType__max_serialized_size
};

static rosidl_message_type_support_t _NestedType__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_NestedType__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace rclrs_example_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_rclrs_example_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<rclrs_example_msgs::msg::NestedType>()
{
  return &rclrs_example_msgs::msg::typesupport_fastrtps_cpp::_NestedType__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rclrs_example_msgs, msg, NestedType)() {
  return &rclrs_example_msgs::msg::typesupport_fastrtps_cpp::_NestedType__handle;
}

#ifdef __cplusplus
}
#endif
