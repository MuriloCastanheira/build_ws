// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from icrane_msgs:msg/Pose2D.idl
// generated code does not contain a copyright notice

#ifndef ICRANE_MSGS__MSG__DETAIL__POSE2_D__STRUCT_H_
#define ICRANE_MSGS__MSG__DETAIL__POSE2_D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Pose2D in the package icrane_msgs.
typedef struct icrane_msgs__msg__Pose2D
{
  double x;
  double y;
  double theta;
} icrane_msgs__msg__Pose2D;

// Struct for a sequence of icrane_msgs__msg__Pose2D.
typedef struct icrane_msgs__msg__Pose2D__Sequence
{
  icrane_msgs__msg__Pose2D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} icrane_msgs__msg__Pose2D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ICRANE_MSGS__MSG__DETAIL__POSE2_D__STRUCT_H_
