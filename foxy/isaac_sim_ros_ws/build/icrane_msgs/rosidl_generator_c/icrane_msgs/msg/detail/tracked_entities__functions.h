// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from icrane_msgs:msg/TrackedEntities.idl
// generated code does not contain a copyright notice

#ifndef ICRANE_MSGS__MSG__DETAIL__TRACKED_ENTITIES__FUNCTIONS_H_
#define ICRANE_MSGS__MSG__DETAIL__TRACKED_ENTITIES__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "icrane_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "icrane_msgs/msg/detail/tracked_entities__struct.h"

/// Initialize msg/TrackedEntities message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * icrane_msgs__msg__TrackedEntities
 * )) before or use
 * icrane_msgs__msg__TrackedEntities__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_icrane_msgs
bool
icrane_msgs__msg__TrackedEntities__init(icrane_msgs__msg__TrackedEntities * msg);

/// Finalize msg/TrackedEntities message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_icrane_msgs
void
icrane_msgs__msg__TrackedEntities__fini(icrane_msgs__msg__TrackedEntities * msg);

/// Create msg/TrackedEntities message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * icrane_msgs__msg__TrackedEntities__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_icrane_msgs
icrane_msgs__msg__TrackedEntities *
icrane_msgs__msg__TrackedEntities__create();

/// Destroy msg/TrackedEntities message.
/**
 * It calls
 * icrane_msgs__msg__TrackedEntities__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_icrane_msgs
void
icrane_msgs__msg__TrackedEntities__destroy(icrane_msgs__msg__TrackedEntities * msg);

/// Check for msg/TrackedEntities message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_icrane_msgs
bool
icrane_msgs__msg__TrackedEntities__are_equal(const icrane_msgs__msg__TrackedEntities * lhs, const icrane_msgs__msg__TrackedEntities * rhs);

/// Copy a msg/TrackedEntities message.
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
ROSIDL_GENERATOR_C_PUBLIC_icrane_msgs
bool
icrane_msgs__msg__TrackedEntities__copy(
  const icrane_msgs__msg__TrackedEntities * input,
  icrane_msgs__msg__TrackedEntities * output);

/// Initialize array of msg/TrackedEntities messages.
/**
 * It allocates the memory for the number of elements and calls
 * icrane_msgs__msg__TrackedEntities__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_icrane_msgs
bool
icrane_msgs__msg__TrackedEntities__Sequence__init(icrane_msgs__msg__TrackedEntities__Sequence * array, size_t size);

/// Finalize array of msg/TrackedEntities messages.
/**
 * It calls
 * icrane_msgs__msg__TrackedEntities__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_icrane_msgs
void
icrane_msgs__msg__TrackedEntities__Sequence__fini(icrane_msgs__msg__TrackedEntities__Sequence * array);

/// Create array of msg/TrackedEntities messages.
/**
 * It allocates the memory for the array and calls
 * icrane_msgs__msg__TrackedEntities__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_icrane_msgs
icrane_msgs__msg__TrackedEntities__Sequence *
icrane_msgs__msg__TrackedEntities__Sequence__create(size_t size);

/// Destroy array of msg/TrackedEntities messages.
/**
 * It calls
 * icrane_msgs__msg__TrackedEntities__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_icrane_msgs
void
icrane_msgs__msg__TrackedEntities__Sequence__destroy(icrane_msgs__msg__TrackedEntities__Sequence * array);

/// Check for msg/TrackedEntities message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_icrane_msgs
bool
icrane_msgs__msg__TrackedEntities__Sequence__are_equal(const icrane_msgs__msg__TrackedEntities__Sequence * lhs, const icrane_msgs__msg__TrackedEntities__Sequence * rhs);

/// Copy an array of msg/TrackedEntities messages.
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
ROSIDL_GENERATOR_C_PUBLIC_icrane_msgs
bool
icrane_msgs__msg__TrackedEntities__Sequence__copy(
  const icrane_msgs__msg__TrackedEntities__Sequence * input,
  icrane_msgs__msg__TrackedEntities__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ICRANE_MSGS__MSG__DETAIL__TRACKED_ENTITIES__FUNCTIONS_H_
