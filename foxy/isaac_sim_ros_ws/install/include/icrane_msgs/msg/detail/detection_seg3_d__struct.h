// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from icrane_msgs:msg/DetectionSeg3D.idl
// generated code does not contain a copyright notice

#ifndef ICRANE_MSGS__MSG__DETAIL__DETECTION_SEG3_D__STRUCT_H_
#define ICRANE_MSGS__MSG__DETAIL__DETECTION_SEG3_D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'label'
// Member 'id'
#include "rosidl_runtime_c/string.h"
// Member 'mask_pcd'
#include "sensor_msgs/msg/detail/point_cloud2__struct.h"
// Member 'bbox'
#include "vision_msgs/msg/detail/bounding_box3_d__struct.h"

// Struct defined in msg/DetectionSeg3D in the package icrane_msgs.
typedef struct icrane_msgs__msg__DetectionSeg3D
{
  int32_t class_id;
  rosidl_runtime_c__String label;
  double score;
  rosidl_runtime_c__String id;
  sensor_msgs__msg__PointCloud2 mask_pcd;
  vision_msgs__msg__BoundingBox3D bbox;
} icrane_msgs__msg__DetectionSeg3D;

// Struct for a sequence of icrane_msgs__msg__DetectionSeg3D.
typedef struct icrane_msgs__msg__DetectionSeg3D__Sequence
{
  icrane_msgs__msg__DetectionSeg3D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} icrane_msgs__msg__DetectionSeg3D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ICRANE_MSGS__MSG__DETAIL__DETECTION_SEG3_D__STRUCT_H_
