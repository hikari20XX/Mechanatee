// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rclrs_example_msgs:msg/VariousTypes.idl
// generated code does not contain a copyright notice
#include "rclrs_example_msgs/msg/detail/various_types__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rclrs_example_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rclrs_example_msgs/msg/detail/various_types__struct.h"
#include "rclrs_example_msgs/msg/detail/various_types__functions.h"
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

#include "rclrs_example_msgs/msg/detail/nested_type__functions.h"  // nested_array, nested_member, nested_seq_bounded, nested_seq_unbounded
#include "rosidl_runtime_c/primitives_sequence.h"  // float_seq_bounded, float_seq_unbounded
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // float_seq_bounded, float_seq_unbounded
#include "rosidl_runtime_c/string.h"  // bounded_string_array, bounded_string_member, bounded_string_seq_bounded, bounded_string_seq_unbounded, string_array, string_member, string_seq_bounded, string_seq_unbounded
#include "rosidl_runtime_c/string_functions.h"  // bounded_string_array, bounded_string_member, bounded_string_seq_bounded, bounded_string_seq_unbounded, string_array, string_member, string_seq_bounded, string_seq_unbounded
#include "rosidl_runtime_c/u16string.h"  // bounded_wstring_member, wstring_member
#include "rosidl_runtime_c/u16string_functions.h"  // bounded_wstring_member, wstring_member

// forward declare type support functions
size_t get_serialized_size_rclrs_example_msgs__msg__NestedType(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rclrs_example_msgs__msg__NestedType(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rclrs_example_msgs, msg, NestedType)();


using _VariousTypes__ros_msg_type = rclrs_example_msgs__msg__VariousTypes;

static bool _VariousTypes__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _VariousTypes__ros_msg_type * ros_message = static_cast<const _VariousTypes__ros_msg_type *>(untyped_ros_message);
  // Field name: bool_member
  {
    cdr << (ros_message->bool_member ? true : false);
  }

  // Field name: int8_member
  {
    cdr << ros_message->int8_member;
  }

  // Field name: uint8_member
  {
    cdr << ros_message->uint8_member;
  }

  // Field name: byte_member
  {
    cdr << ros_message->byte_member;
  }

  // Field name: float32_member
  {
    cdr << ros_message->float32_member;
  }

  // Field name: float_array
  {
    size_t size = 3;
    auto array_ptr = ros_message->float_array;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: float_seq_bounded
  {
    size_t size = ros_message->float_seq_bounded.size;
    auto array_ptr = ros_message->float_seq_bounded.data;
    if (size > 3) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: float_seq_unbounded
  {
    size_t size = ros_message->float_seq_unbounded.size;
    auto array_ptr = ros_message->float_seq_unbounded.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: string_member
  {
    const rosidl_runtime_c__String * str = &ros_message->string_member;
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

  // Field name: wstring_member
  {
    std::wstring wstr;
    rosidl_typesupport_fastrtps_c::u16string_to_wstring(ros_message->wstring_member, wstr);
    cdr << wstr;
  }

  // Field name: bounded_string_member
  {
    const rosidl_runtime_c__String * str = &ros_message->bounded_string_member;
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

  // Field name: bounded_wstring_member
  {
    std::wstring wstr;
    rosidl_typesupport_fastrtps_c::u16string_to_wstring(ros_message->bounded_wstring_member, wstr);
    cdr << wstr;
  }

  // Field name: string_array
  {
    size_t size = 4;
    auto array_ptr = ros_message->string_array;
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: string_seq_bounded
  {
    size_t size = ros_message->string_seq_bounded.size;
    auto array_ptr = ros_message->string_seq_bounded.data;
    if (size > 4) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: string_seq_unbounded
  {
    size_t size = ros_message->string_seq_unbounded.size;
    auto array_ptr = ros_message->string_seq_unbounded.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: bounded_string_array
  {
    size_t size = 4;
    auto array_ptr = ros_message->bounded_string_array;
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: bounded_string_seq_bounded
  {
    size_t size = ros_message->bounded_string_seq_bounded.size;
    auto array_ptr = ros_message->bounded_string_seq_bounded.data;
    if (size > 4) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: bounded_string_seq_unbounded
  {
    size_t size = ros_message->bounded_string_seq_unbounded.size;
    auto array_ptr = ros_message->bounded_string_seq_unbounded.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: nested_member
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rclrs_example_msgs, msg, NestedType
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->nested_member, cdr))
    {
      return false;
    }
  }

  // Field name: nested_array
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rclrs_example_msgs, msg, NestedType
      )()->data);
    size_t size = 2;
    auto array_ptr = ros_message->nested_array;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: nested_seq_unbounded
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rclrs_example_msgs, msg, NestedType
      )()->data);
    size_t size = ros_message->nested_seq_unbounded.size;
    auto array_ptr = ros_message->nested_seq_unbounded.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: nested_seq_bounded
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rclrs_example_msgs, msg, NestedType
      )()->data);
    size_t size = ros_message->nested_seq_bounded.size;
    auto array_ptr = ros_message->nested_seq_bounded.data;
    if (size > 3) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _VariousTypes__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _VariousTypes__ros_msg_type * ros_message = static_cast<_VariousTypes__ros_msg_type *>(untyped_ros_message);
  // Field name: bool_member
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->bool_member = tmp ? true : false;
  }

  // Field name: int8_member
  {
    cdr >> ros_message->int8_member;
  }

  // Field name: uint8_member
  {
    cdr >> ros_message->uint8_member;
  }

  // Field name: byte_member
  {
    cdr >> ros_message->byte_member;
  }

  // Field name: float32_member
  {
    cdr >> ros_message->float32_member;
  }

  // Field name: float_array
  {
    size_t size = 3;
    auto array_ptr = ros_message->float_array;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: float_seq_bounded
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->float_seq_bounded.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->float_seq_bounded);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->float_seq_bounded, size)) {
      fprintf(stderr, "failed to create array for field 'float_seq_bounded'");
      return false;
    }
    auto array_ptr = ros_message->float_seq_bounded.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: float_seq_unbounded
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->float_seq_unbounded.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->float_seq_unbounded);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->float_seq_unbounded, size)) {
      fprintf(stderr, "failed to create array for field 'float_seq_unbounded'");
      return false;
    }
    auto array_ptr = ros_message->float_seq_unbounded.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: string_member
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->string_member.data) {
      rosidl_runtime_c__String__init(&ros_message->string_member);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->string_member,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'string_member'\n");
      return false;
    }
  }

  // Field name: wstring_member
  {
    if (!ros_message->wstring_member.data) {
      rosidl_runtime_c__U16String__init(&ros_message->wstring_member);
    }
    std::wstring wstr;
    cdr >> wstr;
    bool succeeded = rosidl_typesupport_fastrtps_c::wstring_to_u16string(wstr, ros_message->wstring_member);
    if (!succeeded) {
      fprintf(stderr, "failed to create wstring from u16string\n");
      rosidl_runtime_c__U16String__fini(&ros_message->wstring_member);
      return false;
    }
  }

  // Field name: bounded_string_member
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->bounded_string_member.data) {
      rosidl_runtime_c__String__init(&ros_message->bounded_string_member);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->bounded_string_member,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'bounded_string_member'\n");
      return false;
    }
  }

  // Field name: bounded_wstring_member
  {
    if (!ros_message->bounded_wstring_member.data) {
      rosidl_runtime_c__U16String__init(&ros_message->bounded_wstring_member);
    }
    std::wstring wstr;
    cdr >> wstr;
    bool succeeded = rosidl_typesupport_fastrtps_c::wstring_to_u16string(wstr, ros_message->bounded_wstring_member);
    if (!succeeded) {
      fprintf(stderr, "failed to create wstring from u16string\n");
      rosidl_runtime_c__U16String__fini(&ros_message->bounded_wstring_member);
      return false;
    }
  }

  // Field name: string_array
  {
    size_t size = 4;
    auto array_ptr = ros_message->string_array;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'string_array'\n");
        return false;
      }
    }
  }

  // Field name: string_seq_bounded
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->string_seq_bounded.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->string_seq_bounded);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->string_seq_bounded, size)) {
      fprintf(stderr, "failed to create array for field 'string_seq_bounded'");
      return false;
    }
    auto array_ptr = ros_message->string_seq_bounded.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'string_seq_bounded'\n");
        return false;
      }
    }
  }

  // Field name: string_seq_unbounded
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->string_seq_unbounded.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->string_seq_unbounded);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->string_seq_unbounded, size)) {
      fprintf(stderr, "failed to create array for field 'string_seq_unbounded'");
      return false;
    }
    auto array_ptr = ros_message->string_seq_unbounded.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'string_seq_unbounded'\n");
        return false;
      }
    }
  }

  // Field name: bounded_string_array
  {
    size_t size = 4;
    auto array_ptr = ros_message->bounded_string_array;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'bounded_string_array'\n");
        return false;
      }
    }
  }

  // Field name: bounded_string_seq_bounded
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->bounded_string_seq_bounded.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->bounded_string_seq_bounded);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->bounded_string_seq_bounded, size)) {
      fprintf(stderr, "failed to create array for field 'bounded_string_seq_bounded'");
      return false;
    }
    auto array_ptr = ros_message->bounded_string_seq_bounded.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'bounded_string_seq_bounded'\n");
        return false;
      }
    }
  }

  // Field name: bounded_string_seq_unbounded
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->bounded_string_seq_unbounded.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->bounded_string_seq_unbounded);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->bounded_string_seq_unbounded, size)) {
      fprintf(stderr, "failed to create array for field 'bounded_string_seq_unbounded'");
      return false;
    }
    auto array_ptr = ros_message->bounded_string_seq_unbounded.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'bounded_string_seq_unbounded'\n");
        return false;
      }
    }
  }

  // Field name: nested_member
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rclrs_example_msgs, msg, NestedType
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->nested_member))
    {
      return false;
    }
  }

  // Field name: nested_array
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rclrs_example_msgs, msg, NestedType
      )()->data);
    size_t size = 2;
    auto array_ptr = ros_message->nested_array;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: nested_seq_unbounded
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rclrs_example_msgs, msg, NestedType
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->nested_seq_unbounded.data) {
      rclrs_example_msgs__msg__NestedType__Sequence__fini(&ros_message->nested_seq_unbounded);
    }
    if (!rclrs_example_msgs__msg__NestedType__Sequence__init(&ros_message->nested_seq_unbounded, size)) {
      fprintf(stderr, "failed to create array for field 'nested_seq_unbounded'");
      return false;
    }
    auto array_ptr = ros_message->nested_seq_unbounded.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: nested_seq_bounded
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rclrs_example_msgs, msg, NestedType
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->nested_seq_bounded.data) {
      rclrs_example_msgs__msg__NestedType__Sequence__fini(&ros_message->nested_seq_bounded);
    }
    if (!rclrs_example_msgs__msg__NestedType__Sequence__init(&ros_message->nested_seq_bounded, size)) {
      fprintf(stderr, "failed to create array for field 'nested_seq_bounded'");
      return false;
    }
    auto array_ptr = ros_message->nested_seq_bounded.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rclrs_example_msgs
size_t get_serialized_size_rclrs_example_msgs__msg__VariousTypes(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VariousTypes__ros_msg_type * ros_message = static_cast<const _VariousTypes__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name bool_member
  {
    size_t item_size = sizeof(ros_message->bool_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name int8_member
  {
    size_t item_size = sizeof(ros_message->int8_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uint8_member
  {
    size_t item_size = sizeof(ros_message->uint8_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name byte_member
  {
    size_t item_size = sizeof(ros_message->byte_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name float32_member
  {
    size_t item_size = sizeof(ros_message->float32_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name float_array
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->float_array;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name float_seq_bounded
  {
    size_t array_size = ros_message->float_seq_bounded.size;
    auto array_ptr = ros_message->float_seq_bounded.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name float_seq_unbounded
  {
    size_t array_size = ros_message->float_seq_unbounded.size;
    auto array_ptr = ros_message->float_seq_unbounded.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name string_member
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->string_member.size + 1);
  // field.name wstring_member
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    wchar_size *
    (ros_message->wstring_member.size + 1);
  // field.name bounded_string_member
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->bounded_string_member.size + 1);
  // field.name bounded_wstring_member
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    wchar_size *
    (ros_message->bounded_wstring_member.size + 1);
  // field.name string_array
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->string_array;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name string_seq_bounded
  {
    size_t array_size = ros_message->string_seq_bounded.size;
    auto array_ptr = ros_message->string_seq_bounded.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name string_seq_unbounded
  {
    size_t array_size = ros_message->string_seq_unbounded.size;
    auto array_ptr = ros_message->string_seq_unbounded.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name bounded_string_array
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->bounded_string_array;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name bounded_string_seq_bounded
  {
    size_t array_size = ros_message->bounded_string_seq_bounded.size;
    auto array_ptr = ros_message->bounded_string_seq_bounded.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name bounded_string_seq_unbounded
  {
    size_t array_size = ros_message->bounded_string_seq_unbounded.size;
    auto array_ptr = ros_message->bounded_string_seq_unbounded.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name nested_member

  current_alignment += get_serialized_size_rclrs_example_msgs__msg__NestedType(
    &(ros_message->nested_member), current_alignment);
  // field.name nested_array
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->nested_array;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_rclrs_example_msgs__msg__NestedType(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name nested_seq_unbounded
  {
    size_t array_size = ros_message->nested_seq_unbounded.size;
    auto array_ptr = ros_message->nested_seq_unbounded.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_rclrs_example_msgs__msg__NestedType(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name nested_seq_bounded
  {
    size_t array_size = ros_message->nested_seq_bounded.size;
    auto array_ptr = ros_message->nested_seq_bounded.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_rclrs_example_msgs__msg__NestedType(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _VariousTypes__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rclrs_example_msgs__msg__VariousTypes(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rclrs_example_msgs
size_t max_serialized_size_rclrs_example_msgs__msg__VariousTypes(
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

  // member: bool_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: int8_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: uint8_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: byte_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: float32_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: float_array
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: float_seq_bounded
  {
    size_t array_size = 3;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: float_seq_unbounded
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: string_member
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
  // member: wstring_member
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
  // member: bounded_string_member
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
  // member: bounded_wstring_member
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
  // member: string_array
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
  // member: string_seq_bounded
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
  // member: string_seq_unbounded
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
  // member: bounded_string_array
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
  // member: bounded_string_seq_bounded
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
  // member: bounded_string_seq_unbounded
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
  // member: nested_member
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_rclrs_example_msgs__msg__NestedType(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: nested_array
  {
    size_t array_size = 2;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_rclrs_example_msgs__msg__NestedType(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: nested_seq_unbounded
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
        max_serialized_size_rclrs_example_msgs__msg__NestedType(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: nested_seq_bounded
  {
    size_t array_size = 3;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_rclrs_example_msgs__msg__NestedType(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _VariousTypes__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rclrs_example_msgs__msg__VariousTypes(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_VariousTypes = {
  "rclrs_example_msgs::msg",
  "VariousTypes",
  _VariousTypes__cdr_serialize,
  _VariousTypes__cdr_deserialize,
  _VariousTypes__get_serialized_size,
  _VariousTypes__max_serialized_size
};

static rosidl_message_type_support_t _VariousTypes__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VariousTypes,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rclrs_example_msgs, msg, VariousTypes)() {
  return &_VariousTypes__type_support;
}

#if defined(__cplusplus)
}
#endif
