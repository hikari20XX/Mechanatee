// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from custom_msgs:msg/ServoStatus.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SERVO_STATUS__FUNCTIONS_H_
#define CUSTOM_MSGS__MSG__DETAIL__SERVO_STATUS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "custom_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "custom_msgs/msg/detail/servo_status__struct.h"

/// Initialize msg/ServoStatus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * custom_msgs__msg__ServoStatus
 * )) before or use
 * custom_msgs__msg__ServoStatus__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs
bool
custom_msgs__msg__ServoStatus__init(custom_msgs__msg__ServoStatus * msg);

/// Finalize msg/ServoStatus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs
void
custom_msgs__msg__ServoStatus__fini(custom_msgs__msg__ServoStatus * msg);

/// Create msg/ServoStatus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * custom_msgs__msg__ServoStatus__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs
custom_msgs__msg__ServoStatus *
custom_msgs__msg__ServoStatus__create();

/// Destroy msg/ServoStatus message.
/**
 * It calls
 * custom_msgs__msg__ServoStatus__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs
void
custom_msgs__msg__ServoStatus__destroy(custom_msgs__msg__ServoStatus * msg);

/// Check for msg/ServoStatus message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs
bool
custom_msgs__msg__ServoStatus__are_equal(const custom_msgs__msg__ServoStatus * lhs, const custom_msgs__msg__ServoStatus * rhs);

/// Copy a msg/ServoStatus message.
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
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs
bool
custom_msgs__msg__ServoStatus__copy(
  const custom_msgs__msg__ServoStatus * input,
  custom_msgs__msg__ServoStatus * output);

/// Initialize array of msg/ServoStatus messages.
/**
 * It allocates the memory for the number of elements and calls
 * custom_msgs__msg__ServoStatus__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs
bool
custom_msgs__msg__ServoStatus__Sequence__init(custom_msgs__msg__ServoStatus__Sequence * array, size_t size);

/// Finalize array of msg/ServoStatus messages.
/**
 * It calls
 * custom_msgs__msg__ServoStatus__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs
void
custom_msgs__msg__ServoStatus__Sequence__fini(custom_msgs__msg__ServoStatus__Sequence * array);

/// Create array of msg/ServoStatus messages.
/**
 * It allocates the memory for the array and calls
 * custom_msgs__msg__ServoStatus__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs
custom_msgs__msg__ServoStatus__Sequence *
custom_msgs__msg__ServoStatus__Sequence__create(size_t size);

/// Destroy array of msg/ServoStatus messages.
/**
 * It calls
 * custom_msgs__msg__ServoStatus__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs
void
custom_msgs__msg__ServoStatus__Sequence__destroy(custom_msgs__msg__ServoStatus__Sequence * array);

/// Check for msg/ServoStatus message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs
bool
custom_msgs__msg__ServoStatus__Sequence__are_equal(const custom_msgs__msg__ServoStatus__Sequence * lhs, const custom_msgs__msg__ServoStatus__Sequence * rhs);

/// Copy an array of msg/ServoStatus messages.
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
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs
bool
custom_msgs__msg__ServoStatus__Sequence__copy(
  const custom_msgs__msg__ServoStatus__Sequence * input,
  custom_msgs__msg__ServoStatus__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__SERVO_STATUS__FUNCTIONS_H_
