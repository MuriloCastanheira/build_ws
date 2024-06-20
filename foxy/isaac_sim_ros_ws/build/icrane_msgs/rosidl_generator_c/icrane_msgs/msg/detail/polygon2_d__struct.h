// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from icrane_msgs:msg/Polygon2D.idl
// generated code does not contain a copyright notice

#ifndef ICRANE_MSGS__MSG__DETAIL__POLYGON2_D__STRUCT_H_
#define ICRANE_MSGS__MSG__DETAIL__POLYGON2_D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'polygon'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/Polygon2D in the package icrane_msgs.
typedef struct icrane_msgs__msg__Polygon2D
{
  rosidl_runtime_c__double__Sequence polygon;
} icrane_msgs__msg__Polygon2D;

// Struct for a sequence of icrane_msgs__msg__Polygon2D.
typedef struct icrane_msgs__msg__Polygon2D__Sequence
{
  icrane_msgs__msg__Polygon2D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} icrane_msgs__msg__Polygon2D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ICRANE_MSGS__MSG__DETAIL__POLYGON2_D__STRUCT_H_
