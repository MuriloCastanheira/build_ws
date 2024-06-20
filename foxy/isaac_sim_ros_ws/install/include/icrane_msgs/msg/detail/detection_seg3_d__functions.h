// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from icrane_msgs:msg/DetectionSeg3D.idl
// generated code does not contain a copyright notice

#ifndef ICRANE_MSGS__MSG__DETAIL__DETECTION_SEG3_D__FUNCTIONS_H_
#define ICRANE_MSGS__MSG__DETAIL__DETECTION_SEG3_D__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "icrane_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "icrane_msgs/msg/detail/detection_seg3_d__struct.h"

/// Initialize msg/DetectionSeg3D message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * icrane_msgs__msg__DetectionSeg3D
 * )) before or use
 * icrane_msgs__msg__DetectionSeg3D__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_icrane_msgs
bool
icrane_msgs__msg__DetectionSeg3D__init(icrane_msgs__msg__DetectionSeg3D * msg);

/// Finalize msg/DetectionSeg3D message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_icrane_msgs
void
icrane_msgs__msg__DetectionSeg3D__fini(icrane_msgs__msg__DetectionSeg3D * msg);

/// Create msg/DetectionSeg3D message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * icrane_msgs__msg__DetectionSeg3D__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_icrane_msgs
icrane_msgs__msg__DetectionSeg3D *
icrane_msgs__msg__DetectionSeg3D__create();

/// Destroy msg/DetectionSeg3D message.
/**
 * It calls
 * icrane_msgs__msg__DetectionSeg3D__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_icrane_msgs
void
icrane_msgs__msg__DetectionSeg3D__destroy(icrane_msgs__msg__DetectionSeg3D * msg);

/// Check for msg/DetectionSeg3D message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_icrane_msgs
bool
icrane_msgs__msg__DetectionSeg3D__are_equal(const icrane_msgs__msg__DetectionSeg3D * lhs, const icrane_msgs__msg__DetectionSeg3D * rhs);

/// Copy a msg/DetectionSeg3D message.
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
icrane_msgs__msg__DetectionSeg3D__copy(
  const icrane_msgs__msg__DetectionSeg3D * input,
  icrane_msgs__msg__DetectionSeg3D * output);

/// Initialize array of msg/DetectionSeg3D messages.
/**
 * It allocates the memory for the number of elements and calls
 * icrane_msgs__msg__DetectionSeg3D__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_icrane_msgs
bool
icrane_msgs__msg__DetectionSeg3D__Sequence__init(icrane_msgs__msg__DetectionSeg3D__Sequence * array, size_t size);

/// Finalize array of msg/DetectionSeg3D messages.
/**
 * It calls
 * icrane_msgs__msg__DetectionSeg3D__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_icrane_msgs
void
icrane_msgs__msg__DetectionSeg3D__Sequence__fini(icrane_msgs__msg__DetectionSeg3D__Sequence * array);

/// Create array of msg/DetectionSeg3D messages.
/**
 * It allocates the memory for the array and calls
 * icrane_msgs__msg__DetectionSeg3D__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_icrane_msgs
icrane_msgs__msg__DetectionSeg3D__Sequence *
icrane_msgs__msg__DetectionSeg3D__Sequence__create(size_t size);

/// Destroy array of msg/DetectionSeg3D messages.
/**
 * It calls
 * icrane_msgs__msg__DetectionSeg3D__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_icrane_msgs
void
icrane_msgs__msg__DetectionSeg3D__Sequence__destroy(icrane_msgs__msg__DetectionSeg3D__Sequence * array);

/// Check for msg/DetectionSeg3D message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_icrane_msgs
bool
icrane_msgs__msg__DetectionSeg3D__Sequence__are_equal(const icrane_msgs__msg__DetectionSeg3D__Sequence * lhs, const icrane_msgs__msg__DetectionSeg3D__Sequence * rhs);

/// Copy an array of msg/DetectionSeg3D messages.
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
icrane_msgs__msg__DetectionSeg3D__Sequence__copy(
  const icrane_msgs__msg__DetectionSeg3D__Sequence * input,
  icrane_msgs__msg__DetectionSeg3D__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ICRANE_MSGS__MSG__DETAIL__DETECTION_SEG3_D__FUNCTIONS_H_
