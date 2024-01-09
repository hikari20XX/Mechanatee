// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from rclrs_example_msgs:msg/VariousTypes.idl
// generated code does not contain a copyright notice
#include "rclrs_example_msgs/msg/detail/various_types__rosidl_typesupport_fastrtps_cpp.hpp"
#include "rclrs_example_msgs/msg/detail/various_types__struct.hpp"

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
bool cdr_serialize(
  const rclrs_example_msgs::msg::NestedType &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  rclrs_example_msgs::msg::NestedType &);
size_t get_serialized_size(
  const rclrs_example_msgs::msg::NestedType &,
  size_t current_alignment);
size_t
max_serialized_size_NestedType(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace rclrs_example_msgs

// functions for rclrs_example_msgs::msg::NestedType already declared above

// functions for rclrs_example_msgs::msg::NestedType already declared above

// functions for rclrs_example_msgs::msg::NestedType already declared above


namespace rclrs_example_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rclrs_example_msgs
cdr_serialize(
  const rclrs_example_msgs::msg::VariousTypes & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: bool_member
  cdr << (ros_message.bool_member ? true : false);
  // Member: int8_member
  cdr << ros_message.int8_member;
  // Member: uint8_member
  cdr << ros_message.uint8_member;
  // Member: byte_member
  cdr << ros_message.byte_member;
  // Member: float32_member
  cdr << ros_message.float32_member;
  // Member: float_array
  {
    cdr << ros_message.float_array;
  }
  // Member: float_seq_bounded
  {
    size_t size = ros_message.float_seq_bounded.size();
    if (size > 3) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    if (size > 0) {
      cdr.serializeArray(&(ros_message.float_seq_bounded[0]), size);
    }
  }
  // Member: float_seq_unbounded
  {
    cdr << ros_message.float_seq_unbounded;
  }
  // Member: string_member
  cdr << ros_message.string_member;
  // Member: wstring_member
  {
    std::wstring wstr;
    rosidl_typesupport_fastrtps_cpp::u16string_to_wstring(ros_message.wstring_member, wstr);
    cdr << wstr;
  }
  // Member: bounded_string_member
  cdr << ros_message.bounded_string_member;
  // Member: bounded_wstring_member
  {
    std::wstring wstr;
    rosidl_typesupport_fastrtps_cpp::u16string_to_wstring(ros_message.bounded_wstring_member, wstr);
    cdr << wstr;
  }
  // Member: string_array
  {
    cdr << ros_message.string_array;
  }
  // Member: string_seq_bounded
  {
    size_t size = ros_message.string_seq_bounded.size();
    if (size > 4) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      cdr << ros_message.string_seq_bounded[i];
    }
  }
  // Member: string_seq_unbounded
  {
    cdr << ros_message.string_seq_unbounded;
  }
  // Member: bounded_string_array
  {
    cdr << ros_message.bounded_string_array;
  }
  // Member: bounded_string_seq_bounded
  {
    size_t size = ros_message.bounded_string_seq_bounded.size();
    if (size > 4) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      cdr << ros_message.bounded_string_seq_bounded[i];
    }
  }
  // Member: bounded_string_seq_unbounded
  {
    cdr << ros_message.bounded_string_seq_unbounded;
  }
  // Member: nested_member
  rclrs_example_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.nested_member,
    cdr);
  // Member: nested_array
  {
    for (size_t i = 0; i < 2; i++) {
      rclrs_example_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.nested_array[i],
        cdr);
    }
  }
  // Member: nested_seq_unbounded
  {
    size_t size = ros_message.nested_seq_unbounded.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      rclrs_example_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.nested_seq_unbounded[i],
        cdr);
    }
  }
  // Member: nested_seq_bounded
  {
    size_t size = ros_message.nested_seq_bounded.size();
    if (size > 3) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      rclrs_example_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.nested_seq_bounded[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rclrs_example_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rclrs_example_msgs::msg::VariousTypes & ros_message)
{
  // Member: bool_member
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.bool_member = tmp ? true : false;
  }

  // Member: int8_member
  cdr >> ros_message.int8_member;

  // Member: uint8_member
  cdr >> ros_message.uint8_member;

  // Member: byte_member
  cdr >> ros_message.byte_member;

  // Member: float32_member
  cdr >> ros_message.float32_member;

  // Member: float_array
  {
    cdr >> ros_message.float_array;
  }

  // Member: float_seq_bounded
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.float_seq_bounded.resize(size);
    if (size > 0) {
      cdr.deserializeArray(&(ros_message.float_seq_bounded[0]), size);
    }
  }

  // Member: float_seq_unbounded
  {
    cdr >> ros_message.float_seq_unbounded;
  }

  // Member: string_member
  cdr >> ros_message.string_member;

  // Member: wstring_member
  {
    std::wstring wstr;
    cdr >> wstr;
    bool succeeded = rosidl_typesupport_fastrtps_cpp::wstring_to_u16string(wstr, ros_message.wstring_member);
    if (!succeeded) {
      fprintf(stderr, "failed to create wstring from u16string\n");
      return false;
    }
  }

  // Member: bounded_string_member
  cdr >> ros_message.bounded_string_member;

  // Member: bounded_wstring_member
  {
    std::wstring wstr;
    cdr >> wstr;
    bool succeeded = rosidl_typesupport_fastrtps_cpp::wstring_to_u16string(wstr, ros_message.bounded_wstring_member);
    if (!succeeded) {
      fprintf(stderr, "failed to create wstring from u16string\n");
      return false;
    }
  }

  // Member: string_array
  {
    cdr >> ros_message.string_array;
  }

  // Member: string_seq_bounded
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.string_seq_bounded.resize(size);
    for (size_t i = 0; i < size; i++) {
      cdr >> ros_message.string_seq_bounded[i];
    }
  }

  // Member: string_seq_unbounded
  {
    cdr >> ros_message.string_seq_unbounded;
  }

  // Member: bounded_string_array
  {
    cdr >> ros_message.bounded_string_array;
  }

  // Member: bounded_string_seq_bounded
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.bounded_string_seq_bounded.resize(size);
    for (size_t i = 0; i < size; i++) {
      cdr >> ros_message.bounded_string_seq_bounded[i];
    }
  }

  // Member: bounded_string_seq_unbounded
  {
    cdr >> ros_message.bounded_string_seq_unbounded;
  }

  // Member: nested_member
  rclrs_example_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.nested_member);

  // Member: nested_array
  {
    for (size_t i = 0; i < 2; i++) {
      rclrs_example_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr,
        ros_message.nested_array[i]);
    }
  }

  // Member: nested_seq_unbounded
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.nested_seq_unbounded.resize(size);
    for (size_t i = 0; i < size; i++) {
      rclrs_example_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.nested_seq_unbounded[i]);
    }
  }

  // Member: nested_seq_bounded
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.nested_seq_bounded.resize(size);
    for (size_t i = 0; i < size; i++) {
      rclrs_example_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.nested_seq_bounded[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rclrs_example_msgs
get_serialized_size(
  const rclrs_example_msgs::msg::VariousTypes & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: bool_member
  {
    size_t item_size = sizeof(ros_message.bool_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: int8_member
  {
    size_t item_size = sizeof(ros_message.int8_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: uint8_member
  {
    size_t item_size = sizeof(ros_message.uint8_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: byte_member
  {
    size_t item_size = sizeof(ros_message.byte_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: float32_member
  {
    size_t item_size = sizeof(ros_message.float32_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: float_array
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.float_array[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: float_seq_bounded
  {
    size_t array_size = ros_message.float_seq_bounded.size();
    if (array_size > 3) {
      throw std::runtime_error("array size exceeds upper bound");
    }

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.float_seq_bounded[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: float_seq_unbounded
  {
    size_t array_size = ros_message.float_seq_unbounded.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.float_seq_unbounded[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: string_member
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.string_member.size() + 1);
  // Member: wstring_member
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    wchar_size *
    (ros_message.wstring_member.size() + 1);
  // Member: bounded_string_member
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.bounded_string_member.size() + 1);
  // Member: bounded_wstring_member
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    wchar_size *
    (ros_message.bounded_wstring_member.size() + 1);
  // Member: string_array
  {
    size_t array_size = 4;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.string_array[index].size() + 1);
    }
  }
  // Member: string_seq_bounded
  {
    size_t array_size = ros_message.string_seq_bounded.size();
    if (array_size > 4) {
      throw std::runtime_error("array size exceeds upper bound");
    }

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.string_seq_bounded[index].size() + 1);
    }
  }
  // Member: string_seq_unbounded
  {
    size_t array_size = ros_message.string_seq_unbounded.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.string_seq_unbounded[index].size() + 1);
    }
  }
  // Member: bounded_string_array
  {
    size_t array_size = 4;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.bounded_string_array[index].size() + 1);
    }
  }
  // Member: bounded_string_seq_bounded
  {
    size_t array_size = ros_message.bounded_string_seq_bounded.size();
    if (array_size > 4) {
      throw std::runtime_error("array size exceeds upper bound");
    }

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.bounded_string_seq_bounded[index].size() + 1);
    }
  }
  // Member: bounded_string_seq_unbounded
  {
    size_t array_size = ros_message.bounded_string_seq_unbounded.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.bounded_string_seq_unbounded[index].size() + 1);
    }
  }
  // Member: nested_member

  current_alignment +=
    rclrs_example_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.nested_member, current_alignment);
  // Member: nested_array
  {
    size_t array_size = 2;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        rclrs_example_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.nested_array[index], current_alignment);
    }
  }
  // Member: nested_seq_unbounded
  {
    size_t array_size = ros_message.nested_seq_unbounded.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        rclrs_example_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.nested_seq_unbounded[index], current_alignment);
    }
  }
  // Member: nested_seq_bounded
  {
    size_t array_size = ros_message.nested_seq_bounded.size();
    if (array_size > 3) {
      throw std::runtime_error("array size exceeds upper bound");
    }

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        rclrs_example_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.nested_seq_bounded[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rclrs_example_msgs
max_serialized_size_VariousTypes(
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


  // Member: bool_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: int8_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: uint8_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: byte_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: float32_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: float_array
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: float_seq_bounded
  {
    size_t array_size = 3;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: float_seq_unbounded
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: string_member
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

  // Member: wstring_member
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        wchar_size *
        1;
    }
  }

  // Member: bounded_string_member
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        3 +
        1;
    }
  }

  // Member: bounded_wstring_member
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        wchar_size *
        3 +
        wchar_size *
        1;
    }
  }

  // Member: string_array
  {
    size_t array_size = 4;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: string_seq_bounded
  {
    size_t array_size = 4;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: string_seq_unbounded
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: bounded_string_array
  {
    size_t array_size = 4;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1 +
        1;
    }
  }

  // Member: bounded_string_seq_bounded
  {
    size_t array_size = 4;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1 +
        1;
    }
  }

  // Member: bounded_string_seq_unbounded
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1 +
        1;
    }
  }

  // Member: nested_member
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        rclrs_example_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_NestedType(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: nested_array
  {
    size_t array_size = 2;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        rclrs_example_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_NestedType(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: nested_seq_unbounded
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        rclrs_example_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_NestedType(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: nested_seq_bounded
  {
    size_t array_size = 3;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        rclrs_example_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_NestedType(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _VariousTypes__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rclrs_example_msgs::msg::VariousTypes *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _VariousTypes__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rclrs_example_msgs::msg::VariousTypes *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _VariousTypes__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rclrs_example_msgs::msg::VariousTypes *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _VariousTypes__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_VariousTypes(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _VariousTypes__callbacks = {
  "rclrs_example_msgs::msg",
  "VariousTypes",
  _VariousTypes__cdr_serialize,
  _VariousTypes__cdr_deserialize,
  _VariousTypes__get_serialized_size,
  _VariousTypes__max_serialized_size
};

static rosidl_message_type_support_t _VariousTypes__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_VariousTypes__callbacks,
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
get_message_type_support_handle<rclrs_example_msgs::msg::VariousTypes>()
{
  return &rclrs_example_msgs::msg::typesupport_fastrtps_cpp::_VariousTypes__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rclrs_example_msgs, msg, VariousTypes)() {
  return &rclrs_example_msgs::msg::typesupport_fastrtps_cpp::_VariousTypes__handle;
}

#ifdef __cplusplus
}
#endif
