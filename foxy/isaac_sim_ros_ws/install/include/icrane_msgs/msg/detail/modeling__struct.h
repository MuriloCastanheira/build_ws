// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from icrane_msgs:msg/Modeling.idl
// generated code does not contain a copyright notice

#ifndef ICRANE_MSGS__MSG__DETAIL__MODELING__STRUCT_H_
#define ICRANE_MSGS__MSG__DETAIL__MODELING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'predict_alpha'
// Member 'predict_beta'
// Member 'predict_x'
// Member 'predict_y'
// Member 'predict_z'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/Modeling in the package icrane_msgs.
typedef struct icrane_msgs__msg__Modeling
{
  std_msgs__msg__Header header;
  double alpha;
  double beta;
  double x;
  double y;
  double z;
  rosidl_runtime_c__double__Sequence predict_alpha;
  rosidl_runtime_c__double__Sequence predict_beta;
  rosidl_runtime_c__double__Sequence predict_x;
  rosidl_runtime_c__double__Sequence predict_y;
  rosidl_runtime_c__double__Sequence predict_z;
} icrane_msgs__msg__Modeling;

// Struct for a sequence of icrane_msgs__msg__Modeling.
typedef struct icrane_msgs__msg__Modeling__Sequence
{
  icrane_msgs__msg__Modeling * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} icrane_msgs__msg__Modeling__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ICRANE_MSGS__MSG__DETAIL__MODELING__STRUCT_H_
