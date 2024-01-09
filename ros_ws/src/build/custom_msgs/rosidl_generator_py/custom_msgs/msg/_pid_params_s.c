// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from custom_msgs:msg/PIDParams.idl
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
#include "custom_msgs/msg/detail/pid_params__struct.h"
#include "custom_msgs/msg/detail/pid_params__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool custom_msgs__msg__pid_params__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[38];
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
    assert(strncmp("custom_msgs.msg._pid_params.PIDParams", full_classname_dest, 37) == 0);
  }
  custom_msgs__msg__PIDParams * ros_message = _ros_message;
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
  {  // p_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "p_value");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->p_value = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // i_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "i_value");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->i_value = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // d_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "d_value");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->d_value = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // integral_limit_upper
    PyObject * field = PyObject_GetAttrString(_pymsg, "integral_limit_upper");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->integral_limit_upper = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // integral_limit_lower
    PyObject * field = PyObject_GetAttrString(_pymsg, "integral_limit_lower");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->integral_limit_lower = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * custom_msgs__msg__pid_params__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PIDParams */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("custom_msgs.msg._pid_params");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PIDParams");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  custom_msgs__msg__PIDParams * ros_message = (custom_msgs__msg__PIDParams *)raw_ros_message;
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
  {  // p_value
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->p_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "p_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // i_value
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->i_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "i_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // d_value
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->d_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "d_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // integral_limit_upper
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->integral_limit_upper);
    {
      int rc = PyObject_SetAttrString(_pymessage, "integral_limit_upper", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // integral_limit_lower
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->integral_limit_lower);
    {
      int rc = PyObject_SetAttrString(_pymessage, "integral_limit_lower", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
