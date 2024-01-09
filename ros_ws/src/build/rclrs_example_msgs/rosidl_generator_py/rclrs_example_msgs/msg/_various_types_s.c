// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rclrs_example_msgs:msg/VariousTypes.idl
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
#include "rclrs_example_msgs/msg/detail/various_types__struct.h"
#include "rclrs_example_msgs/msg/detail/various_types__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/u16string.h"
#include "rosidl_runtime_c/u16string_functions.h"

// Nested array functions includes
#include "rclrs_example_msgs/msg/detail/nested_type__functions.h"
// end nested array functions include
bool rclrs_example_msgs__msg__nested_type__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rclrs_example_msgs__msg__nested_type__convert_to_py(void * raw_ros_message);
bool rclrs_example_msgs__msg__nested_type__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rclrs_example_msgs__msg__nested_type__convert_to_py(void * raw_ros_message);
bool rclrs_example_msgs__msg__nested_type__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rclrs_example_msgs__msg__nested_type__convert_to_py(void * raw_ros_message);
bool rclrs_example_msgs__msg__nested_type__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rclrs_example_msgs__msg__nested_type__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool rclrs_example_msgs__msg__various_types__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[51];
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
    assert(strncmp("rclrs_example_msgs.msg._various_types.VariousTypes", full_classname_dest, 50) == 0);
  }
  rclrs_example_msgs__msg__VariousTypes * ros_message = _ros_message;
  {  // bool_member
    PyObject * field = PyObject_GetAttrString(_pymsg, "bool_member");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bool_member = (Py_True == field);
    Py_DECREF(field);
  }
  {  // int8_member
    PyObject * field = PyObject_GetAttrString(_pymsg, "int8_member");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->int8_member = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // uint8_member
    PyObject * field = PyObject_GetAttrString(_pymsg, "uint8_member");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->uint8_member = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // byte_member
    PyObject * field = PyObject_GetAttrString(_pymsg, "byte_member");
    if (!field) {
      return false;
    }
    assert(PyBytes_Check(field));
    ros_message->byte_member = PyBytes_AS_STRING(field)[0];
    Py_DECREF(field);
  }
  {  // float32_member
    PyObject * field = PyObject_GetAttrString(_pymsg, "float32_member");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->float32_member = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // float_array
    PyObject * field = PyObject_GetAttrString(_pymsg, "float_array");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
      Py_ssize_t size = 3;
      float * dest = ros_message->float_array;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // float_seq_bounded
    PyObject * field = PyObject_GetAttrString(_pymsg, "float_seq_bounded");
    if (!field) {
      return false;
    }
    if (PyObject_CheckBuffer(field)) {
      // Optimization for converting arrays of primitives
      Py_buffer view;
      int rc = PyObject_GetBuffer(field, &view, PyBUF_SIMPLE);
      if (rc < 0) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = view.len / sizeof(float);
      if (!rosidl_runtime_c__float__Sequence__init(&(ros_message->float_seq_bounded), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create float__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      float * dest = ros_message->float_seq_bounded.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'float_seq_bounded'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = PySequence_Size(field);
      if (-1 == size) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      if (!rosidl_runtime_c__float__Sequence__init(&(ros_message->float_seq_bounded), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create float__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      float * dest = ros_message->float_seq_bounded.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyFloat_Check(item));
        float tmp = (float)PyFloat_AS_DOUBLE(item);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // float_seq_unbounded
    PyObject * field = PyObject_GetAttrString(_pymsg, "float_seq_unbounded");
    if (!field) {
      return false;
    }
    if (PyObject_CheckBuffer(field)) {
      // Optimization for converting arrays of primitives
      Py_buffer view;
      int rc = PyObject_GetBuffer(field, &view, PyBUF_SIMPLE);
      if (rc < 0) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = view.len / sizeof(float);
      if (!rosidl_runtime_c__float__Sequence__init(&(ros_message->float_seq_unbounded), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create float__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      float * dest = ros_message->float_seq_unbounded.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'float_seq_unbounded'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = PySequence_Size(field);
      if (-1 == size) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      if (!rosidl_runtime_c__float__Sequence__init(&(ros_message->float_seq_unbounded), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create float__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      float * dest = ros_message->float_seq_unbounded.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyFloat_Check(item));
        float tmp = (float)PyFloat_AS_DOUBLE(item);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // string_member
    PyObject * field = PyObject_GetAttrString(_pymsg, "string_member");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->string_member, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // wstring_member
    PyObject * field = PyObject_GetAttrString(_pymsg, "wstring_member");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    // the returned string starts with a BOM mark and uses native byte order
    PyObject * encoded_field = PyUnicode_AsUTF16String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    char * buffer;
    Py_ssize_t length;
    int rc = PyBytes_AsStringAndSize(encoded_field, &buffer, &length);
    if (rc) {
      Py_DECREF(encoded_field);
      Py_DECREF(field);
      return false;
    }
    // use offset of 2 to skip BOM mark
    {
      bool succeeded = rosidl_runtime_c__U16String__assignn_from_char(&ros_message->wstring_member, buffer + 2, length - 2);
      Py_DECREF(encoded_field);
      if (!succeeded) {
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(field);
  }
  {  // bounded_string_member
    PyObject * field = PyObject_GetAttrString(_pymsg, "bounded_string_member");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->bounded_string_member, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // bounded_wstring_member
    PyObject * field = PyObject_GetAttrString(_pymsg, "bounded_wstring_member");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    // the returned string starts with a BOM mark and uses native byte order
    PyObject * encoded_field = PyUnicode_AsUTF16String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    char * buffer;
    Py_ssize_t length;
    int rc = PyBytes_AsStringAndSize(encoded_field, &buffer, &length);
    if (rc) {
      Py_DECREF(encoded_field);
      Py_DECREF(field);
      return false;
    }
    // use offset of 2 to skip BOM mark
    {
      bool succeeded = rosidl_runtime_c__U16String__assignn_from_char(&ros_message->bounded_wstring_member, buffer + 2, length - 2);
      Py_DECREF(encoded_field);
      if (!succeeded) {
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(field);
  }
  {  // string_array
    PyObject * field = PyObject_GetAttrString(_pymsg, "string_array");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'string_array'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = 4;
      rosidl_runtime_c__String * dest = ros_message->string_array;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyUnicode_Check(item));
        PyObject * encoded_item = PyUnicode_AsUTF8String(item);
        if (!encoded_item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        rosidl_runtime_c__String__assign(&dest[i], PyBytes_AS_STRING(encoded_item));
        Py_DECREF(encoded_item);
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // string_seq_bounded
    PyObject * field = PyObject_GetAttrString(_pymsg, "string_seq_bounded");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'string_seq_bounded'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = PySequence_Size(field);
      if (-1 == size) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      if (!rosidl_runtime_c__String__Sequence__init(&(ros_message->string_seq_bounded), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create String__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_runtime_c__String * dest = ros_message->string_seq_bounded.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyUnicode_Check(item));
        PyObject * encoded_item = PyUnicode_AsUTF8String(item);
        if (!encoded_item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        rosidl_runtime_c__String__assign(&dest[i], PyBytes_AS_STRING(encoded_item));
        Py_DECREF(encoded_item);
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // string_seq_unbounded
    PyObject * field = PyObject_GetAttrString(_pymsg, "string_seq_unbounded");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'string_seq_unbounded'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = PySequence_Size(field);
      if (-1 == size) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      if (!rosidl_runtime_c__String__Sequence__init(&(ros_message->string_seq_unbounded), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create String__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_runtime_c__String * dest = ros_message->string_seq_unbounded.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyUnicode_Check(item));
        PyObject * encoded_item = PyUnicode_AsUTF8String(item);
        if (!encoded_item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        rosidl_runtime_c__String__assign(&dest[i], PyBytes_AS_STRING(encoded_item));
        Py_DECREF(encoded_item);
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // bounded_string_array
    PyObject * field = PyObject_GetAttrString(_pymsg, "bounded_string_array");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'bounded_string_array'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = 4;
      rosidl_runtime_c__String * dest = ros_message->bounded_string_array;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyUnicode_Check(item));
        PyObject * encoded_item = PyUnicode_AsUTF8String(item);
        if (!encoded_item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        rosidl_runtime_c__String__assign(&dest[i], PyBytes_AS_STRING(encoded_item));
        Py_DECREF(encoded_item);
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // bounded_string_seq_bounded
    PyObject * field = PyObject_GetAttrString(_pymsg, "bounded_string_seq_bounded");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'bounded_string_seq_bounded'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = PySequence_Size(field);
      if (-1 == size) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      if (!rosidl_runtime_c__String__Sequence__init(&(ros_message->bounded_string_seq_bounded), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create String__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_runtime_c__String * dest = ros_message->bounded_string_seq_bounded.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyUnicode_Check(item));
        PyObject * encoded_item = PyUnicode_AsUTF8String(item);
        if (!encoded_item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        rosidl_runtime_c__String__assign(&dest[i], PyBytes_AS_STRING(encoded_item));
        Py_DECREF(encoded_item);
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // bounded_string_seq_unbounded
    PyObject * field = PyObject_GetAttrString(_pymsg, "bounded_string_seq_unbounded");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'bounded_string_seq_unbounded'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = PySequence_Size(field);
      if (-1 == size) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      if (!rosidl_runtime_c__String__Sequence__init(&(ros_message->bounded_string_seq_unbounded), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create String__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_runtime_c__String * dest = ros_message->bounded_string_seq_unbounded.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyUnicode_Check(item));
        PyObject * encoded_item = PyUnicode_AsUTF8String(item);
        if (!encoded_item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        rosidl_runtime_c__String__assign(&dest[i], PyBytes_AS_STRING(encoded_item));
        Py_DECREF(encoded_item);
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // nested_member
    PyObject * field = PyObject_GetAttrString(_pymsg, "nested_member");
    if (!field) {
      return false;
    }
    if (!rclrs_example_msgs__msg__nested_type__convert_from_py(field, &ros_message->nested_member)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // nested_array
    PyObject * field = PyObject_GetAttrString(_pymsg, "nested_array");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'nested_array'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = 2;
    rclrs_example_msgs__msg__NestedType * dest = ros_message->nested_array;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!rclrs_example_msgs__msg__nested_type__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // nested_seq_unbounded
    PyObject * field = PyObject_GetAttrString(_pymsg, "nested_seq_unbounded");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'nested_seq_unbounded'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!rclrs_example_msgs__msg__NestedType__Sequence__init(&(ros_message->nested_seq_unbounded), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create rclrs_example_msgs__msg__NestedType__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    rclrs_example_msgs__msg__NestedType * dest = ros_message->nested_seq_unbounded.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!rclrs_example_msgs__msg__nested_type__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // nested_seq_bounded
    PyObject * field = PyObject_GetAttrString(_pymsg, "nested_seq_bounded");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'nested_seq_bounded'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!rclrs_example_msgs__msg__NestedType__Sequence__init(&(ros_message->nested_seq_bounded), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create rclrs_example_msgs__msg__NestedType__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    rclrs_example_msgs__msg__NestedType * dest = ros_message->nested_seq_bounded.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!rclrs_example_msgs__msg__nested_type__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rclrs_example_msgs__msg__various_types__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VariousTypes */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rclrs_example_msgs.msg._various_types");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VariousTypes");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rclrs_example_msgs__msg__VariousTypes * ros_message = (rclrs_example_msgs__msg__VariousTypes *)raw_ros_message;
  {  // bool_member
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bool_member ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bool_member", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // int8_member
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->int8_member);
    {
      int rc = PyObject_SetAttrString(_pymessage, "int8_member", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // uint8_member
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->uint8_member);
    {
      int rc = PyObject_SetAttrString(_pymessage, "uint8_member", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // byte_member
    PyObject * field = NULL;
    field = PyBytes_FromStringAndSize((const char *)&ros_message->byte_member, 1);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "byte_member", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // float32_member
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->float32_member);
    {
      int rc = PyObject_SetAttrString(_pymessage, "float32_member", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // float_array
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "float_array");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
    assert(sizeof(npy_float32) == sizeof(float));
    npy_float32 * dst = (npy_float32 *)PyArray_GETPTR1(seq_field, 0);
    float * src = &(ros_message->float_array[0]);
    memcpy(dst, src, 3 * sizeof(float));
    Py_DECREF(field);
  }
  {  // float_seq_bounded
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "float_seq_bounded");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(float)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->float_seq_bounded.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      float * src = &(ros_message->float_seq_bounded.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->float_seq_bounded.size * sizeof(float));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }
  {  // float_seq_unbounded
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "float_seq_unbounded");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(float)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->float_seq_unbounded.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      float * src = &(ros_message->float_seq_unbounded.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->float_seq_unbounded.size * sizeof(float));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }
  {  // string_member
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->string_member.data,
      strlen(ros_message->string_member.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "string_member", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wstring_member
    PyObject * field = NULL;
    int byteorder = 0;
    field = PyUnicode_DecodeUTF16(
      (const char *)ros_message->wstring_member.data,
      ros_message->wstring_member.size * sizeof(uint16_t),
      NULL, &byteorder);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "wstring_member", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bounded_string_member
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->bounded_string_member.data,
      strlen(ros_message->bounded_string_member.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "bounded_string_member", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bounded_wstring_member
    PyObject * field = NULL;
    int byteorder = 0;
    field = PyUnicode_DecodeUTF16(
      (const char *)ros_message->bounded_wstring_member.data,
      ros_message->bounded_wstring_member.size * sizeof(uint16_t),
      NULL, &byteorder);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "bounded_wstring_member", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // string_array
    PyObject * field = NULL;
    size_t size = 4;
    rosidl_runtime_c__String * src = ros_message->string_array;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      PyObject * decoded_item = PyUnicode_DecodeUTF8(src[i].data, strlen(src[i].data), "replace");
      if (!decoded_item) {
        return NULL;
      }
      int rc = PyList_SetItem(field, i, decoded_item);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "string_array", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // string_seq_bounded
    PyObject * field = NULL;
    size_t size = ros_message->string_seq_bounded.size;
    rosidl_runtime_c__String * src = ros_message->string_seq_bounded.data;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      PyObject * decoded_item = PyUnicode_DecodeUTF8(src[i].data, strlen(src[i].data), "replace");
      if (!decoded_item) {
        return NULL;
      }
      int rc = PyList_SetItem(field, i, decoded_item);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "string_seq_bounded", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // string_seq_unbounded
    PyObject * field = NULL;
    size_t size = ros_message->string_seq_unbounded.size;
    rosidl_runtime_c__String * src = ros_message->string_seq_unbounded.data;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      PyObject * decoded_item = PyUnicode_DecodeUTF8(src[i].data, strlen(src[i].data), "replace");
      if (!decoded_item) {
        return NULL;
      }
      int rc = PyList_SetItem(field, i, decoded_item);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "string_seq_unbounded", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bounded_string_array
    PyObject * field = NULL;
    size_t size = 4;
    rosidl_runtime_c__String * src = ros_message->bounded_string_array;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      PyObject * decoded_item = PyUnicode_DecodeUTF8(src[i].data, strlen(src[i].data), "replace");
      if (!decoded_item) {
        return NULL;
      }
      int rc = PyList_SetItem(field, i, decoded_item);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "bounded_string_array", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bounded_string_seq_bounded
    PyObject * field = NULL;
    size_t size = ros_message->bounded_string_seq_bounded.size;
    rosidl_runtime_c__String * src = ros_message->bounded_string_seq_bounded.data;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      PyObject * decoded_item = PyUnicode_DecodeUTF8(src[i].data, strlen(src[i].data), "replace");
      if (!decoded_item) {
        return NULL;
      }
      int rc = PyList_SetItem(field, i, decoded_item);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "bounded_string_seq_bounded", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bounded_string_seq_unbounded
    PyObject * field = NULL;
    size_t size = ros_message->bounded_string_seq_unbounded.size;
    rosidl_runtime_c__String * src = ros_message->bounded_string_seq_unbounded.data;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      PyObject * decoded_item = PyUnicode_DecodeUTF8(src[i].data, strlen(src[i].data), "replace");
      if (!decoded_item) {
        return NULL;
      }
      int rc = PyList_SetItem(field, i, decoded_item);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "bounded_string_seq_unbounded", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nested_member
    PyObject * field = NULL;
    field = rclrs_example_msgs__msg__nested_type__convert_to_py(&ros_message->nested_member);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "nested_member", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nested_array
    PyObject * field = NULL;
    size_t size = 2;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    rclrs_example_msgs__msg__NestedType * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->nested_array[i]);
      PyObject * pyitem = rclrs_example_msgs__msg__nested_type__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "nested_array", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nested_seq_unbounded
    PyObject * field = NULL;
    size_t size = ros_message->nested_seq_unbounded.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    rclrs_example_msgs__msg__NestedType * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->nested_seq_unbounded.data[i]);
      PyObject * pyitem = rclrs_example_msgs__msg__nested_type__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "nested_seq_unbounded", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nested_seq_bounded
    PyObject * field = NULL;
    size_t size = ros_message->nested_seq_bounded.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    rclrs_example_msgs__msg__NestedType * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->nested_seq_bounded.data[i]);
      PyObject * pyitem = rclrs_example_msgs__msg__nested_type__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "nested_seq_bounded", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
