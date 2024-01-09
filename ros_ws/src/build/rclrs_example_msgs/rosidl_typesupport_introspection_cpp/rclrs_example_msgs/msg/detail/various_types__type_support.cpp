// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rclrs_example_msgs:msg/VariousTypes.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rclrs_example_msgs/msg/detail/various_types__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rclrs_example_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void VariousTypes_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rclrs_example_msgs::msg::VariousTypes(_init);
}

void VariousTypes_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rclrs_example_msgs::msg::VariousTypes *>(message_memory);
  typed_message->~VariousTypes();
}

size_t size_function__VariousTypes__float_array(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__VariousTypes__float_array(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__VariousTypes__float_array(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__VariousTypes__float_array(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__VariousTypes__float_array(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__VariousTypes__float_array(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__VariousTypes__float_array(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__VariousTypes__float_seq_bounded(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__VariousTypes__float_seq_bounded(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__VariousTypes__float_seq_bounded(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__VariousTypes__float_seq_bounded(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__VariousTypes__float_seq_bounded(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__VariousTypes__float_seq_bounded(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__VariousTypes__float_seq_bounded(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__VariousTypes__float_seq_bounded(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__VariousTypes__float_seq_unbounded(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__VariousTypes__float_seq_unbounded(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__VariousTypes__float_seq_unbounded(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__VariousTypes__float_seq_unbounded(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__VariousTypes__float_seq_unbounded(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__VariousTypes__float_seq_unbounded(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__VariousTypes__float_seq_unbounded(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__VariousTypes__float_seq_unbounded(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__VariousTypes__string_array(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__VariousTypes__string_array(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<std::string, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__VariousTypes__string_array(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<std::string, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__VariousTypes__string_array(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__VariousTypes__string_array(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__VariousTypes__string_array(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__VariousTypes__string_array(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

size_t size_function__VariousTypes__string_seq_bounded(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__VariousTypes__string_seq_bounded(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__VariousTypes__string_seq_bounded(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__VariousTypes__string_seq_bounded(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__VariousTypes__string_seq_bounded(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__VariousTypes__string_seq_bounded(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__VariousTypes__string_seq_bounded(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__VariousTypes__string_seq_bounded(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__VariousTypes__string_seq_unbounded(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__VariousTypes__string_seq_unbounded(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__VariousTypes__string_seq_unbounded(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__VariousTypes__string_seq_unbounded(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__VariousTypes__string_seq_unbounded(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__VariousTypes__string_seq_unbounded(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__VariousTypes__string_seq_unbounded(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__VariousTypes__string_seq_unbounded(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__VariousTypes__bounded_string_array(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__VariousTypes__bounded_string_array(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<std::string, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__VariousTypes__bounded_string_array(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<std::string, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__VariousTypes__bounded_string_array(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__VariousTypes__bounded_string_array(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__VariousTypes__bounded_string_array(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__VariousTypes__bounded_string_array(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

size_t size_function__VariousTypes__bounded_string_seq_bounded(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__VariousTypes__bounded_string_seq_bounded(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__VariousTypes__bounded_string_seq_bounded(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__VariousTypes__bounded_string_seq_bounded(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__VariousTypes__bounded_string_seq_bounded(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__VariousTypes__bounded_string_seq_bounded(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__VariousTypes__bounded_string_seq_bounded(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__VariousTypes__bounded_string_seq_bounded(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__VariousTypes__bounded_string_seq_unbounded(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__VariousTypes__bounded_string_seq_unbounded(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__VariousTypes__bounded_string_seq_unbounded(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__VariousTypes__bounded_string_seq_unbounded(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__VariousTypes__bounded_string_seq_unbounded(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__VariousTypes__bounded_string_seq_unbounded(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__VariousTypes__bounded_string_seq_unbounded(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__VariousTypes__bounded_string_seq_unbounded(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__VariousTypes__nested_array(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__VariousTypes__nested_array(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<rclrs_example_msgs::msg::NestedType, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__VariousTypes__nested_array(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<rclrs_example_msgs::msg::NestedType, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__VariousTypes__nested_array(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const rclrs_example_msgs::msg::NestedType *>(
    get_const_function__VariousTypes__nested_array(untyped_member, index));
  auto & value = *reinterpret_cast<rclrs_example_msgs::msg::NestedType *>(untyped_value);
  value = item;
}

void assign_function__VariousTypes__nested_array(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<rclrs_example_msgs::msg::NestedType *>(
    get_function__VariousTypes__nested_array(untyped_member, index));
  const auto & value = *reinterpret_cast<const rclrs_example_msgs::msg::NestedType *>(untyped_value);
  item = value;
}

size_t size_function__VariousTypes__nested_seq_unbounded(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<rclrs_example_msgs::msg::NestedType> *>(untyped_member);
  return member->size();
}

const void * get_const_function__VariousTypes__nested_seq_unbounded(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<rclrs_example_msgs::msg::NestedType> *>(untyped_member);
  return &member[index];
}

void * get_function__VariousTypes__nested_seq_unbounded(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<rclrs_example_msgs::msg::NestedType> *>(untyped_member);
  return &member[index];
}

void fetch_function__VariousTypes__nested_seq_unbounded(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const rclrs_example_msgs::msg::NestedType *>(
    get_const_function__VariousTypes__nested_seq_unbounded(untyped_member, index));
  auto & value = *reinterpret_cast<rclrs_example_msgs::msg::NestedType *>(untyped_value);
  value = item;
}

void assign_function__VariousTypes__nested_seq_unbounded(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<rclrs_example_msgs::msg::NestedType *>(
    get_function__VariousTypes__nested_seq_unbounded(untyped_member, index));
  const auto & value = *reinterpret_cast<const rclrs_example_msgs::msg::NestedType *>(untyped_value);
  item = value;
}

void resize_function__VariousTypes__nested_seq_unbounded(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<rclrs_example_msgs::msg::NestedType> *>(untyped_member);
  member->resize(size);
}

size_t size_function__VariousTypes__nested_seq_bounded(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<rclrs_example_msgs::msg::NestedType> *>(untyped_member);
  return member->size();
}

const void * get_const_function__VariousTypes__nested_seq_bounded(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<rclrs_example_msgs::msg::NestedType> *>(untyped_member);
  return &member[index];
}

void * get_function__VariousTypes__nested_seq_bounded(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<rclrs_example_msgs::msg::NestedType> *>(untyped_member);
  return &member[index];
}

void fetch_function__VariousTypes__nested_seq_bounded(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const rclrs_example_msgs::msg::NestedType *>(
    get_const_function__VariousTypes__nested_seq_bounded(untyped_member, index));
  auto & value = *reinterpret_cast<rclrs_example_msgs::msg::NestedType *>(untyped_value);
  value = item;
}

void assign_function__VariousTypes__nested_seq_bounded(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<rclrs_example_msgs::msg::NestedType *>(
    get_function__VariousTypes__nested_seq_bounded(untyped_member, index));
  const auto & value = *reinterpret_cast<const rclrs_example_msgs::msg::NestedType *>(untyped_value);
  item = value;
}

void resize_function__VariousTypes__nested_seq_bounded(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<rclrs_example_msgs::msg::NestedType> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember VariousTypes_message_member_array[22] = {
  {
    "bool_member",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs::msg::VariousTypes, bool_member),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "int8_member",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs::msg::VariousTypes, int8_member),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "uint8_member",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs::msg::VariousTypes, uint8_member),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "byte_member",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_OCTET,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs::msg::VariousTypes, byte_member),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "float32_member",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs::msg::VariousTypes, float32_member),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "float_array",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs::msg::VariousTypes, float_array),  // bytes offset in struct
    nullptr,  // default value
    size_function__VariousTypes__float_array,  // size() function pointer
    get_const_function__VariousTypes__float_array,  // get_const(index) function pointer
    get_function__VariousTypes__float_array,  // get(index) function pointer
    fetch_function__VariousTypes__float_array,  // fetch(index, &value) function pointer
    assign_function__VariousTypes__float_array,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "float_seq_bounded",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(rclrs_example_msgs::msg::VariousTypes, float_seq_bounded),  // bytes offset in struct
    nullptr,  // default value
    size_function__VariousTypes__float_seq_bounded,  // size() function pointer
    get_const_function__VariousTypes__float_seq_bounded,  // get_const(index) function pointer
    get_function__VariousTypes__float_seq_bounded,  // get(index) function pointer
    fetch_function__VariousTypes__float_seq_bounded,  // fetch(index, &value) function pointer
    assign_function__VariousTypes__float_seq_bounded,  // assign(index, value) function pointer
    resize_function__VariousTypes__float_seq_bounded  // resize(index) function pointer
  },
  {
    "float_seq_unbounded",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs::msg::VariousTypes, float_seq_unbounded),  // bytes offset in struct
    nullptr,  // default value
    size_function__VariousTypes__float_seq_unbounded,  // size() function pointer
    get_const_function__VariousTypes__float_seq_unbounded,  // get_const(index) function pointer
    get_function__VariousTypes__float_seq_unbounded,  // get(index) function pointer
    fetch_function__VariousTypes__float_seq_unbounded,  // fetch(index, &value) function pointer
    assign_function__VariousTypes__float_seq_unbounded,  // assign(index, value) function pointer
    resize_function__VariousTypes__float_seq_unbounded  // resize(index) function pointer
  },
  {
    "string_member",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs::msg::VariousTypes, string_member),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "wstring_member",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_WSTRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs::msg::VariousTypes, wstring_member),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "bounded_string_member",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    3,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs::msg::VariousTypes, bounded_string_member),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "bounded_wstring_member",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_WSTRING,  // type
    3,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs::msg::VariousTypes, bounded_wstring_member),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "string_array",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs::msg::VariousTypes, string_array),  // bytes offset in struct
    nullptr,  // default value
    size_function__VariousTypes__string_array,  // size() function pointer
    get_const_function__VariousTypes__string_array,  // get_const(index) function pointer
    get_function__VariousTypes__string_array,  // get(index) function pointer
    fetch_function__VariousTypes__string_array,  // fetch(index, &value) function pointer
    assign_function__VariousTypes__string_array,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "string_seq_bounded",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    true,  // is upper bound
    offsetof(rclrs_example_msgs::msg::VariousTypes, string_seq_bounded),  // bytes offset in struct
    nullptr,  // default value
    size_function__VariousTypes__string_seq_bounded,  // size() function pointer
    get_const_function__VariousTypes__string_seq_bounded,  // get_const(index) function pointer
    get_function__VariousTypes__string_seq_bounded,  // get(index) function pointer
    fetch_function__VariousTypes__string_seq_bounded,  // fetch(index, &value) function pointer
    assign_function__VariousTypes__string_seq_bounded,  // assign(index, value) function pointer
    resize_function__VariousTypes__string_seq_bounded  // resize(index) function pointer
  },
  {
    "string_seq_unbounded",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs::msg::VariousTypes, string_seq_unbounded),  // bytes offset in struct
    nullptr,  // default value
    size_function__VariousTypes__string_seq_unbounded,  // size() function pointer
    get_const_function__VariousTypes__string_seq_unbounded,  // get_const(index) function pointer
    get_function__VariousTypes__string_seq_unbounded,  // get(index) function pointer
    fetch_function__VariousTypes__string_seq_unbounded,  // fetch(index, &value) function pointer
    assign_function__VariousTypes__string_seq_unbounded,  // assign(index, value) function pointer
    resize_function__VariousTypes__string_seq_unbounded  // resize(index) function pointer
  },
  {
    "bounded_string_array",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    1,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs::msg::VariousTypes, bounded_string_array),  // bytes offset in struct
    nullptr,  // default value
    size_function__VariousTypes__bounded_string_array,  // size() function pointer
    get_const_function__VariousTypes__bounded_string_array,  // get_const(index) function pointer
    get_function__VariousTypes__bounded_string_array,  // get(index) function pointer
    fetch_function__VariousTypes__bounded_string_array,  // fetch(index, &value) function pointer
    assign_function__VariousTypes__bounded_string_array,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "bounded_string_seq_bounded",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    1,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    true,  // is upper bound
    offsetof(rclrs_example_msgs::msg::VariousTypes, bounded_string_seq_bounded),  // bytes offset in struct
    nullptr,  // default value
    size_function__VariousTypes__bounded_string_seq_bounded,  // size() function pointer
    get_const_function__VariousTypes__bounded_string_seq_bounded,  // get_const(index) function pointer
    get_function__VariousTypes__bounded_string_seq_bounded,  // get(index) function pointer
    fetch_function__VariousTypes__bounded_string_seq_bounded,  // fetch(index, &value) function pointer
    assign_function__VariousTypes__bounded_string_seq_bounded,  // assign(index, value) function pointer
    resize_function__VariousTypes__bounded_string_seq_bounded  // resize(index) function pointer
  },
  {
    "bounded_string_seq_unbounded",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    1,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs::msg::VariousTypes, bounded_string_seq_unbounded),  // bytes offset in struct
    nullptr,  // default value
    size_function__VariousTypes__bounded_string_seq_unbounded,  // size() function pointer
    get_const_function__VariousTypes__bounded_string_seq_unbounded,  // get_const(index) function pointer
    get_function__VariousTypes__bounded_string_seq_unbounded,  // get(index) function pointer
    fetch_function__VariousTypes__bounded_string_seq_unbounded,  // fetch(index, &value) function pointer
    assign_function__VariousTypes__bounded_string_seq_unbounded,  // assign(index, value) function pointer
    resize_function__VariousTypes__bounded_string_seq_unbounded  // resize(index) function pointer
  },
  {
    "nested_member",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rclrs_example_msgs::msg::NestedType>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs::msg::VariousTypes, nested_member),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "nested_array",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rclrs_example_msgs::msg::NestedType>(),  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs::msg::VariousTypes, nested_array),  // bytes offset in struct
    nullptr,  // default value
    size_function__VariousTypes__nested_array,  // size() function pointer
    get_const_function__VariousTypes__nested_array,  // get_const(index) function pointer
    get_function__VariousTypes__nested_array,  // get(index) function pointer
    fetch_function__VariousTypes__nested_array,  // fetch(index, &value) function pointer
    assign_function__VariousTypes__nested_array,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "nested_seq_unbounded",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rclrs_example_msgs::msg::NestedType>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs::msg::VariousTypes, nested_seq_unbounded),  // bytes offset in struct
    nullptr,  // default value
    size_function__VariousTypes__nested_seq_unbounded,  // size() function pointer
    get_const_function__VariousTypes__nested_seq_unbounded,  // get_const(index) function pointer
    get_function__VariousTypes__nested_seq_unbounded,  // get(index) function pointer
    fetch_function__VariousTypes__nested_seq_unbounded,  // fetch(index, &value) function pointer
    assign_function__VariousTypes__nested_seq_unbounded,  // assign(index, value) function pointer
    resize_function__VariousTypes__nested_seq_unbounded  // resize(index) function pointer
  },
  {
    "nested_seq_bounded",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rclrs_example_msgs::msg::NestedType>(),  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(rclrs_example_msgs::msg::VariousTypes, nested_seq_bounded),  // bytes offset in struct
    nullptr,  // default value
    size_function__VariousTypes__nested_seq_bounded,  // size() function pointer
    get_const_function__VariousTypes__nested_seq_bounded,  // get_const(index) function pointer
    get_function__VariousTypes__nested_seq_bounded,  // get(index) function pointer
    fetch_function__VariousTypes__nested_seq_bounded,  // fetch(index, &value) function pointer
    assign_function__VariousTypes__nested_seq_bounded,  // assign(index, value) function pointer
    resize_function__VariousTypes__nested_seq_bounded  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers VariousTypes_message_members = {
  "rclrs_example_msgs::msg",  // message namespace
  "VariousTypes",  // message name
  22,  // number of fields
  sizeof(rclrs_example_msgs::msg::VariousTypes),
  VariousTypes_message_member_array,  // message members
  VariousTypes_init_function,  // function to initialize message memory (memory has to be allocated)
  VariousTypes_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t VariousTypes_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &VariousTypes_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace rclrs_example_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rclrs_example_msgs::msg::VariousTypes>()
{
  return &::rclrs_example_msgs::msg::rosidl_typesupport_introspection_cpp::VariousTypes_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rclrs_example_msgs, msg, VariousTypes)() {
  return &::rclrs_example_msgs::msg::rosidl_typesupport_introspection_cpp::VariousTypes_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
