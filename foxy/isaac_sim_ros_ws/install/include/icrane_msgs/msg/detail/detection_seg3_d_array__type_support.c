// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from icrane_msgs:msg/DetectionSeg3DArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "icrane_msgs/msg/detail/detection_seg3_d_array__rosidl_typesupport_introspection_c.h"
#include "icrane_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "icrane_msgs/msg/detail/detection_seg3_d_array__functions.h"
#include "icrane_msgs/msg/detail/detection_seg3_d_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `detections`
#include "icrane_msgs/msg/detection_seg3_d.h"
// Member `detections`
#include "icrane_msgs/msg/detail/detection_seg3_d__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DetectionSeg3DArray__rosidl_typesupport_introspection_c__DetectionSeg3DArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  icrane_msgs__msg__DetectionSeg3DArray__init(message_memory);
}

void DetectionSeg3DArray__rosidl_typesupport_introspection_c__DetectionSeg3DArray_fini_function(void * message_memory)
{
  icrane_msgs__msg__DetectionSeg3DArray__fini(message_memory);
}

size_t DetectionSeg3DArray__rosidl_typesupport_introspection_c__size_function__DetectionSeg3D__detections(
  const void * untyped_member)
{
  const icrane_msgs__msg__DetectionSeg3D__Sequence * member =
    (const icrane_msgs__msg__DetectionSeg3D__Sequence *)(untyped_member);
  return member->size;
}

const void * DetectionSeg3DArray__rosidl_typesupport_introspection_c__get_const_function__DetectionSeg3D__detections(
  const void * untyped_member, size_t index)
{
  const icrane_msgs__msg__DetectionSeg3D__Sequence * member =
    (const icrane_msgs__msg__DetectionSeg3D__Sequence *)(untyped_member);
  return &member->data[index];
}

void * DetectionSeg3DArray__rosidl_typesupport_introspection_c__get_function__DetectionSeg3D__detections(
  void * untyped_member, size_t index)
{
  icrane_msgs__msg__DetectionSeg3D__Sequence * member =
    (icrane_msgs__msg__DetectionSeg3D__Sequence *)(untyped_member);
  return &member->data[index];
}

bool DetectionSeg3DArray__rosidl_typesupport_introspection_c__resize_function__DetectionSeg3D__detections(
  void * untyped_member, size_t size)
{
  icrane_msgs__msg__DetectionSeg3D__Sequence * member =
    (icrane_msgs__msg__DetectionSeg3D__Sequence *)(untyped_member);
  icrane_msgs__msg__DetectionSeg3D__Sequence__fini(member);
  return icrane_msgs__msg__DetectionSeg3D__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember DetectionSeg3DArray__rosidl_typesupport_introspection_c__DetectionSeg3DArray_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(icrane_msgs__msg__DetectionSeg3DArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "detections",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(icrane_msgs__msg__DetectionSeg3DArray, detections),  // bytes offset in struct
    NULL,  // default value
    DetectionSeg3DArray__rosidl_typesupport_introspection_c__size_function__DetectionSeg3D__detections,  // size() function pointer
    DetectionSeg3DArray__rosidl_typesupport_introspection_c__get_const_function__DetectionSeg3D__detections,  // get_const(index) function pointer
    DetectionSeg3DArray__rosidl_typesupport_introspection_c__get_function__DetectionSeg3D__detections,  // get(index) function pointer
    DetectionSeg3DArray__rosidl_typesupport_introspection_c__resize_function__DetectionSeg3D__detections  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DetectionSeg3DArray__rosidl_typesupport_introspection_c__DetectionSeg3DArray_message_members = {
  "icrane_msgs__msg",  // message namespace
  "DetectionSeg3DArray",  // message name
  2,  // number of fields
  sizeof(icrane_msgs__msg__DetectionSeg3DArray),
  DetectionSeg3DArray__rosidl_typesupport_introspection_c__DetectionSeg3DArray_message_member_array,  // message members
  DetectionSeg3DArray__rosidl_typesupport_introspection_c__DetectionSeg3DArray_init_function,  // function to initialize message memory (memory has to be allocated)
  DetectionSeg3DArray__rosidl_typesupport_introspection_c__DetectionSeg3DArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DetectionSeg3DArray__rosidl_typesupport_introspection_c__DetectionSeg3DArray_message_type_support_handle = {
  0,
  &DetectionSeg3DArray__rosidl_typesupport_introspection_c__DetectionSeg3DArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_icrane_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, icrane_msgs, msg, DetectionSeg3DArray)() {
  DetectionSeg3DArray__rosidl_typesupport_introspection_c__DetectionSeg3DArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  DetectionSeg3DArray__rosidl_typesupport_introspection_c__DetectionSeg3DArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, icrane_msgs, msg, DetectionSeg3D)();
  if (!DetectionSeg3DArray__rosidl_typesupport_introspection_c__DetectionSeg3DArray_message_type_support_handle.typesupport_identifier) {
    DetectionSeg3DArray__rosidl_typesupport_introspection_c__DetectionSeg3DArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DetectionSeg3DArray__rosidl_typesupport_introspection_c__DetectionSeg3DArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
