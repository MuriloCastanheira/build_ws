// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from icrane_msgs:msg/DetectionSeg2D.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "icrane_msgs/msg/detail/detection_seg2_d__rosidl_typesupport_introspection_c.h"
#include "icrane_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "icrane_msgs/msg/detail/detection_seg2_d__functions.h"
#include "icrane_msgs/msg/detail/detection_seg2_d__struct.h"


// Include directives for member types
// Member `label`
// Member `id`
#include "rosidl_runtime_c/string_functions.h"
// Member `mask`
#include "sensor_msgs/msg/image.h"
// Member `mask`
#include "sensor_msgs/msg/detail/image__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DetectionSeg2D__rosidl_typesupport_introspection_c__DetectionSeg2D_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  icrane_msgs__msg__DetectionSeg2D__init(message_memory);
}

void DetectionSeg2D__rosidl_typesupport_introspection_c__DetectionSeg2D_fini_function(void * message_memory)
{
  icrane_msgs__msg__DetectionSeg2D__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DetectionSeg2D__rosidl_typesupport_introspection_c__DetectionSeg2D_message_member_array[5] = {
  {
    "class_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(icrane_msgs__msg__DetectionSeg2D, class_id),  // bytes offset in struct
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
    offsetof(icrane_msgs__msg__DetectionSeg2D, label),  // bytes offset in struct
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
    offsetof(icrane_msgs__msg__DetectionSeg2D, score),  // bytes offset in struct
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
    offsetof(icrane_msgs__msg__DetectionSeg2D, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mask",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(icrane_msgs__msg__DetectionSeg2D, mask),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DetectionSeg2D__rosidl_typesupport_introspection_c__DetectionSeg2D_message_members = {
  "icrane_msgs__msg",  // message namespace
  "DetectionSeg2D",  // message name
  5,  // number of fields
  sizeof(icrane_msgs__msg__DetectionSeg2D),
  DetectionSeg2D__rosidl_typesupport_introspection_c__DetectionSeg2D_message_member_array,  // message members
  DetectionSeg2D__rosidl_typesupport_introspection_c__DetectionSeg2D_init_function,  // function to initialize message memory (memory has to be allocated)
  DetectionSeg2D__rosidl_typesupport_introspection_c__DetectionSeg2D_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DetectionSeg2D__rosidl_typesupport_introspection_c__DetectionSeg2D_message_type_support_handle = {
  0,
  &DetectionSeg2D__rosidl_typesupport_introspection_c__DetectionSeg2D_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_icrane_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, icrane_msgs, msg, DetectionSeg2D)() {
  DetectionSeg2D__rosidl_typesupport_introspection_c__DetectionSeg2D_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  if (!DetectionSeg2D__rosidl_typesupport_introspection_c__DetectionSeg2D_message_type_support_handle.typesupport_identifier) {
    DetectionSeg2D__rosidl_typesupport_introspection_c__DetectionSeg2D_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DetectionSeg2D__rosidl_typesupport_introspection_c__DetectionSeg2D_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
