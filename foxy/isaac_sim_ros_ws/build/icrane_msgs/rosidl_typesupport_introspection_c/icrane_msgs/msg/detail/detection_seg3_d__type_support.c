// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from icrane_msgs:msg/DetectionSeg3D.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "icrane_msgs/msg/detail/detection_seg3_d__rosidl_typesupport_introspection_c.h"
#include "icrane_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "icrane_msgs/msg/detail/detection_seg3_d__functions.h"
#include "icrane_msgs/msg/detail/detection_seg3_d__struct.h"


// Include directives for member types
// Member `label`
// Member `id`
#include "rosidl_runtime_c/string_functions.h"
// Member `mask_pcd`
#include "sensor_msgs/msg/point_cloud2.h"
// Member `mask_pcd`
#include "sensor_msgs/msg/detail/point_cloud2__rosidl_typesupport_introspection_c.h"
// Member `bbox`
#include "vision_msgs/msg/bounding_box3_d.h"
// Member `bbox`
#include "vision_msgs/msg/detail/bounding_box3_d__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DetectionSeg3D__rosidl_typesupport_introspection_c__DetectionSeg3D_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  icrane_msgs__msg__DetectionSeg3D__init(message_memory);
}

void DetectionSeg3D__rosidl_typesupport_introspection_c__DetectionSeg3D_fini_function(void * message_memory)
{
  icrane_msgs__msg__DetectionSeg3D__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DetectionSeg3D__rosidl_typesupport_introspection_c__DetectionSeg3D_message_member_array[6] = {
  {
    "class_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(icrane_msgs__msg__DetectionSeg3D, class_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "label",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(icrane_msgs__msg__DetectionSeg3D, label),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "score",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(icrane_msgs__msg__DetectionSeg3D, score),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(icrane_msgs__msg__DetectionSeg3D, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mask_pcd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(icrane_msgs__msg__DetectionSeg3D, mask_pcd),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bbox",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(icrane_msgs__msg__DetectionSeg3D, bbox),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DetectionSeg3D__rosidl_typesupport_introspection_c__DetectionSeg3D_message_members = {
  "icrane_msgs__msg",  // message namespace
  "DetectionSeg3D",  // message name
  6,  // number of fields
  sizeof(icrane_msgs__msg__DetectionSeg3D),
  DetectionSeg3D__rosidl_typesupport_introspection_c__DetectionSeg3D_message_member_array,  // message members
  DetectionSeg3D__rosidl_typesupport_introspection_c__DetectionSeg3D_init_function,  // function to initialize message memory (memory has to be allocated)
  DetectionSeg3D__rosidl_typesupport_introspection_c__DetectionSeg3D_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DetectionSeg3D__rosidl_typesupport_introspection_c__DetectionSeg3D_message_type_support_handle = {
  0,
  &DetectionSeg3D__rosidl_typesupport_introspection_c__DetectionSeg3D_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_icrane_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, icrane_msgs, msg, DetectionSeg3D)() {
  DetectionSeg3D__rosidl_typesupport_introspection_c__DetectionSeg3D_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, PointCloud2)();
  DetectionSeg3D__rosidl_typesupport_introspection_c__DetectionSeg3D_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vision_msgs, msg, BoundingBox3D)();
  if (!DetectionSeg3D__rosidl_typesupport_introspection_c__DetectionSeg3D_message_type_support_handle.typesupport_identifier) {
    DetectionSeg3D__rosidl_typesupport_introspection_c__DetectionSeg3D_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DetectionSeg3D__rosidl_typesupport_introspection_c__DetectionSeg3D_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
