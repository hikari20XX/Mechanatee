// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from custom_msgs:msg/TuningStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "custom_msgs/msg/detail/tuning_status__rosidl_typesupport_introspection_c.h"
#include "custom_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "custom_msgs/msg/detail/tuning_status__functions.h"
#include "custom_msgs/msg/detail/tuning_status__struct.h"


// Include directives for member types
// Member `details`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void custom_msgs__msg__TuningStatus__rosidl_typesupport_introspection_c__TuningStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_msgs__msg__TuningStatus__init(message_memory);
}

void custom_msgs__msg__TuningStatus__rosidl_typesupport_introspection_c__TuningStatus_fini_function(void * message_memory)
{
  custom_msgs__msg__TuningStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember custom_msgs__msg__TuningStatus__rosidl_typesupport_introspection_c__TuningStatus_message_member_array[4] = {
  {
    "sec",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__TuningStatus, sec),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nanosec",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__TuningStatus, nanosec),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__TuningStatus, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "details",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__TuningStatus, details),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers custom_msgs__msg__TuningStatus__rosidl_typesupport_introspection_c__TuningStatus_message_members = {
  "custom_msgs__msg",  // message namespace
  "TuningStatus",  // message name
  4,  // number of fields
  sizeof(custom_msgs__msg__TuningStatus),
  custom_msgs__msg__TuningStatus__rosidl_typesupport_introspection_c__TuningStatus_message_member_array,  // message members
  custom_msgs__msg__TuningStatus__rosidl_typesupport_introspection_c__TuningStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  custom_msgs__msg__TuningStatus__rosidl_typesupport_introspection_c__TuningStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t custom_msgs__msg__TuningStatus__rosidl_typesupport_introspection_c__TuningStatus_message_type_support_handle = {
  0,
  &custom_msgs__msg__TuningStatus__rosidl_typesupport_introspection_c__TuningStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, msg, TuningStatus)() {
  if (!custom_msgs__msg__TuningStatus__rosidl_typesupport_introspection_c__TuningStatus_message_type_support_handle.typesupport_identifier) {
    custom_msgs__msg__TuningStatus__rosidl_typesupport_introspection_c__TuningStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &custom_msgs__msg__TuningStatus__rosidl_typesupport_introspection_c__TuningStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
