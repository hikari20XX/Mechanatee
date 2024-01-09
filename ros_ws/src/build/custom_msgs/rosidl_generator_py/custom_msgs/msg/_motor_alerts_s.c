// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from custom_msgs:msg/MotorAlerts.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "custom_msgs/msg/detail/motor_alerts__struct.h"
#include "custom_msgs/msg/detail/motor_alerts__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool custom_msgs__msg__motor_alerts__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[42];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("custom_msgs.msg._motor_alerts.MotorAlerts", full_classname_dest, 41) == 0);
  }
  custom_msgs__msg__MotorAlerts * ros_message = _ros_message;
  {  // sec
    PyObject * field = PyObject_GetAttrString(_pymsg, "sec");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sec = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // nanosec
    PyObject * field = PyObject_GetAttrString(_pymsg, "nanosec");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->nanosec = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // motor_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->motor_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // overheating
    PyObject * field = PyObject_GetAttrString(_pymsg, "overheating");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->overheating = (Py_True == field);
    Py_DECREF(field);
  }
  {  // electrical_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "electrical_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->electrical_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // stall
    PyObject * field = PyObject_GetAttrString(_pymsg, "stall");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->stall = (Py_True == field);
    Py_DECREF(field);
  }
  {  // overcurrent
    PyObject * field = PyObject_GetAttrString(_pymsg, "overcurrent");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->overcurrent = (Py_True == field);
    Py_DECREF(field);
  }
  {  // obstruction
    PyObject * field = PyObject_GetAttrString(_pymsg, "obstruction");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->obstruction = (Py_True == field);
    Py_DECREF(field);
  }
  {  // encoder_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "encoder_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->encoder_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // runtime_exceeded
    PyObject * field = PyObject_GetAttrString(_pymsg, "runtime_exceeded");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->runtime_exceeded = (Py_True == field);
    Py_DECREF(field);
  }
  {  // additional_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "additional_info");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->additional_info, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * custom_msgs__msg__motor_alerts__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MotorAlerts */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("custom_msgs.msg._motor_alerts");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MotorAlerts");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  custom_msgs__msg__MotorAlerts * ros_message = (custom_msgs__msg__MotorAlerts *)raw_ros_message;
  {  // sec
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->sec);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sec", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nanosec
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->nanosec);
    {
      int rc = PyObject_SetAttrString(_pymessage, "nanosec", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motor_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->motor_id.data,
      strlen(ros_message->motor_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // overheating
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->overheating ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "overheating", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // electrical_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->electrical_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "electrical_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stall
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->stall ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stall", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // overcurrent
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->overcurrent ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "overcurrent", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // obstruction
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->obstruction ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "obstruction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // encoder_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->encoder_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "encoder_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // runtime_exceeded
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->runtime_exceeded ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "runtime_exceeded", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // additional_info
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->additional_info.data,
      strlen(ros_message->additional_info.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "additional_info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
