// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rclrs_example_msgs:msg/VariousTypes.idl
// generated code does not contain a copyright notice

#ifndef RCLRS_EXAMPLE_MSGS__MSG__DETAIL__VARIOUS_TYPES__FUNCTIONS_H_
#define RCLRS_EXAMPLE_MSGS__MSG__DETAIL__VARIOUS_TYPES__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rclrs_example_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "rclrs_example_msgs/msg/detail/various_types__struct.h"

/// Initialize msg/VariousTypes message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rclrs_example_msgs__msg__VariousTypes
 * )) before or use
 * rclrs_example_msgs__msg__VariousTypes__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rclrs_example_msgs
bool
rclrs_example_msgs__msg__VariousTypes__init(rclrs_example_msgs__msg__VariousTypes * msg);

/// Finalize msg/VariousTypes message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rclrs_example_msgs
void
rclrs_example_msgs__msg__VariousTypes__fini(rclrs_example_msgs__msg__VariousTypes * msg);

/// Create msg/VariousTypes message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rclrs_example_msgs__msg__VariousTypes__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rclrs_example_msgs
rclrs_example_msgs__msg__VariousTypes *
rclrs_example_msgs__msg__VariousTypes__create();

/// Destroy msg/VariousTypes message.
/**
 * It calls
 * rclrs_example_msgs__msg__VariousTypes__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rclrs_example_msgs
void
rclrs_example_msgs__msg__VariousTypes__destroy(rclrs_example_msgs__msg__VariousTypes * msg);

/// Check for msg/VariousTypes message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rclrs_example_msgs
bool
rclrs_example_msgs__msg__VariousTypes__are_equal(const rclrs_example_msgs__msg__VariousTypes * lhs, const rclrs_example_msgs__msg__VariousTypes * rhs);

/// Copy a msg/VariousTypes message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rclrs_example_msgs
bool
rclrs_example_msgs__msg__VariousTypes__copy(
  const rclrs_example_msgs__msg__VariousTypes * input,
  rclrs_example_msgs__msg__VariousTypes * output);

/// Initialize array of msg/VariousTypes messages.
/**
 * It allocates the memory for the number of elements and calls
 * rclrs_example_msgs__msg__VariousTypes__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rclrs_example_msgs
bool
rclrs_example_msgs__msg__VariousTypes__Sequence__init(rclrs_example_msgs__msg__VariousTypes__Sequence * array, size_t size);

/// Finalize array of msg/VariousTypes messages.
/**
 * It calls
 * rclrs_example_msgs__msg__VariousTypes__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rclrs_example_msgs
void
rclrs_example_msgs__msg__VariousTypes__Sequence__fini(rclrs_example_msgs__msg__VariousTypes__Sequence * array);

/// Create array of msg/VariousTypes messages.
/**
 * It allocates the memory for the array and calls
 * rclrs_example_msgs__msg__VariousTypes__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rclrs_example_msgs
rclrs_example_msgs__msg__VariousTypes__Sequence *
rclrs_example_msgs__msg__VariousTypes__Sequence__create(size_t size);

/// Destroy array of msg/VariousTypes messages.
/**
 * It calls
 * rclrs_example_msgs__msg__VariousTypes__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rclrs_example_msgs
void
rclrs_example_msgs__msg__VariousTypes__Sequence__destroy(rclrs_example_msgs__msg__VariousTypes__Sequence * array);

/// Check for msg/VariousTypes message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rclrs_example_msgs
bool
rclrs_example_msgs__msg__VariousTypes__Sequence__are_equal(const rclrs_example_msgs__msg__VariousTypes__Sequence * lhs, const rclrs_example_msgs__msg__VariousTypes__Sequence * rhs);

/// Copy an array of msg/VariousTypes messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rclrs_example_msgs
bool
rclrs_example_msgs__msg__VariousTypes__Sequence__copy(
  const rclrs_example_msgs__msg__VariousTypes__Sequence * input,
  rclrs_example_msgs__msg__VariousTypes__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // RCLRS_EXAMPLE_MSGS__MSG__DETAIL__VARIOUS_TYPES__FUNCTIONS_H_
