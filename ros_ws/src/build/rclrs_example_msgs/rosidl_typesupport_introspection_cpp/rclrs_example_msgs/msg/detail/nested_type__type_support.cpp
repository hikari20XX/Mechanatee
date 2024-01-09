// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rclrs_example_msgs:msg/NestedType.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rclrs_example_msgs/msg/detail/nested_type__struct.hpp"
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

void NestedType_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rclrs_example_msgs::msg::NestedType(_init);
}

void NestedType_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rclrs_example_msgs::msg::NestedType *>(message_memory);
  typed_message->~NestedType();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember NestedType_message_member_array[1] = {
  {
    "effect",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rclrs_example_msgs::msg::NestedType, effect),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers NestedType_message_members = {
  "rclrs_example_msgs::msg",  // message namespace
  "NestedType",  // message name
  1,  // number of fields
  sizeof(rclrs_example_msgs::msg::NestedType),
  NestedType_message_member_array,  // message members
  NestedType_init_function,  // function to initialize message memory (memory has to be allocated)
  NestedType_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t NestedType_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NestedType_message_members,
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
get_message_type_support_handle<rclrs_example_msgs::msg::NestedType>()
{
  return &::rclrs_example_msgs::msg::rosidl_typesupport_introspection_cpp::NestedType_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rclrs_example_msgs, msg, NestedType)() {
  return &::rclrs_example_msgs::msg::rosidl_typesupport_introspection_cpp::NestedType_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
