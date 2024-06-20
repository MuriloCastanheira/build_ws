// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from icrane_msgs:msg/TrackedEntities.idl
// generated code does not contain a copyright notice

#ifndef ICRANE_MSGS__MSG__DETAIL__TRACKED_ENTITIES__STRUCT_H_
#define ICRANE_MSGS__MSG__DETAIL__TRACKED_ENTITIES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'id'
#include "rosidl_runtime_c/string.h"
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.h"

// Struct defined in msg/TrackedEntities in the package icrane_msgs.
typedef struct icrane_msgs__msg__TrackedEntities
{
  rosidl_runtime_c__String id;
  geometry_msgs__msg__Point position;
} icrane_msgs__msg__TrackedEntities;

// Struct for a sequence of icrane_msgs__msg__TrackedEntities.
typedef struct icrane_msgs__msg__TrackedEntities__Sequence
{
  icrane_msgs__msg__TrackedEntities * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} icrane_msgs__msg__TrackedEntities__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ICRANE_MSGS__MSG__DETAIL__TRACKED_ENTITIES__STRUCT_H_
