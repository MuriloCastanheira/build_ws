// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from icrane_msgs:msg/OmniverseInfo.idl
// generated code does not contain a copyright notice

#ifndef ICRANE_MSGS__MSG__DETAIL__OMNIVERSE_INFO__STRUCT_H_
#define ICRANE_MSGS__MSG__DETAIL__OMNIVERSE_INFO__STRUCT_H_

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
// Member 'people_info'
// Member 'boxes_info'
#include "icrane_msgs/msg/detail/tracked_entities__struct.h"
// Member 'load_position'
#include "nav_msgs/msg/detail/path__struct.h"
// Member 'joint_state'
#include "sensor_msgs/msg/detail/joint_state__struct.h"
// Member 'points'
#include "icrane_msgs/msg/detail/modeling__struct.h"

// Struct defined in msg/OmniverseInfo in the package icrane_msgs.
typedef struct icrane_msgs__msg__OmniverseInfo
{
  std_msgs__msg__Header header;
  icrane_msgs__msg__TrackedEntities__Sequence people_info;
  icrane_msgs__msg__TrackedEntities__Sequence boxes_info;
  nav_msgs__msg__Path load_position;
  sensor_msgs__msg__JointState joint_state;
  icrane_msgs__msg__Modeling points;
} icrane_msgs__msg__OmniverseInfo;

// Struct for a sequence of icrane_msgs__msg__OmniverseInfo.
typedef struct icrane_msgs__msg__OmniverseInfo__Sequence
{
  icrane_msgs__msg__OmniverseInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} icrane_msgs__msg__OmniverseInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ICRANE_MSGS__MSG__DETAIL__OMNIVERSE_INFO__STRUCT_H_
