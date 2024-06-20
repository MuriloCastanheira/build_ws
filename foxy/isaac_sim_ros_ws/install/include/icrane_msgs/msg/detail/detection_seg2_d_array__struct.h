// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from icrane_msgs:msg/DetectionSeg2DArray.idl
// generated code does not contain a copyright notice

#ifndef ICRANE_MSGS__MSG__DETAIL__DETECTION_SEG2_D_ARRAY__STRUCT_H_
#define ICRANE_MSGS__MSG__DETAIL__DETECTION_SEG2_D_ARRAY__STRUCT_H_

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
// Member 'detections'
#include "icrane_msgs/msg/detail/detection_seg2_d__struct.h"

// Struct defined in msg/DetectionSeg2DArray in the package icrane_msgs.
typedef struct icrane_msgs__msg__DetectionSeg2DArray
{
  std_msgs__msg__Header header;
  icrane_msgs__msg__DetectionSeg2D__Sequence detections;
} icrane_msgs__msg__DetectionSeg2DArray;

// Struct for a sequence of icrane_msgs__msg__DetectionSeg2DArray.
typedef struct icrane_msgs__msg__DetectionSeg2DArray__Sequence
{
  icrane_msgs__msg__DetectionSeg2DArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} icrane_msgs__msg__DetectionSeg2DArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ICRANE_MSGS__MSG__DETAIL__DETECTION_SEG2_D_ARRAY__STRUCT_H_
