// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from icrane_msgs:msg/OmniverseInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "icrane_msgs/msg/detail/omniverse_info__rosidl_typesupport_introspection_c.h"
#include "icrane_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "icrane_msgs/msg/detail/omniverse_info__functions.h"
#include "icrane_msgs/msg/detail/omniverse_info__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `people_info`
// Member `boxes_info`
#include "icrane_msgs/msg/tracked_entities.h"
// Member `people_info`
// Member `boxes_info`
#include "icrane_msgs/msg/detail/tracked_entities__rosidl_typesupport_introspection_c.h"
// Member `load_position`
#include "nav_msgs/msg/path.h"
// Member `load_position`
#include "nav_msgs/msg/detail/path__rosidl_typesupport_introspection_c.h"
// Member `joint_state`
#include "sensor_msgs/msg/joint_state.h"
// Member `joint_state`
#include "sensor_msgs/msg/detail/joint_state__rosidl_typesupport_introspection_c.h"
// Member `points`
#include "icrane_msgs/msg/modeling.h"
// Member `points`
#include "icrane_msgs/msg/detail/modeling__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void OmniverseInfo__rosidl_typesupport_introspection_c__OmniverseInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  icrane_msgs__msg__OmniverseInfo__init(message_memory);
}

void OmniverseInfo__rosidl_typesupport_introspection_c__OmniverseInfo_fini_function(void * message_memory)
{
  icrane_msgs__msg__OmniverseInfo__fini(message_memory);
}

size_t OmniverseInfo__rosidl_typesupport_introspection_c__size_function__TrackedEntities__people_info(
  const void * untyped_member)
{
  const icrane_msgs__msg__TrackedEntities__Sequence * member =
    (const icrane_msgs__msg__TrackedEntities__Sequence *)(untyped_member);
  return member->size;
}

const void * OmniverseInfo__rosidl_typesupport_introspection_c__get_const_function__TrackedEntities__people_info(
  const void * untyped_member, size_t index)
{
  const icrane_msgs__msg__TrackedEntities__Sequence * member =
    (const icrane_msgs__msg__TrackedEntities__Sequence *)(untyped_member);
  return &member->data[index];
}

void * OmniverseInfo__rosidl_typesupport_introspection_c__get_function__TrackedEntities__people_info(
  void * untyped_member, size_t index)
{
  icrane_msgs__msg__TrackedEntities__Sequence * member =
    (icrane_msgs__msg__TrackedEntities__Sequence *)(untyped_member);
  return &member->data[index];
}

bool OmniverseInfo__rosidl_typesupport_introspection_c__resize_function__TrackedEntities__people_info(
  void * untyped_member, size_t size)
{
  icrane_msgs__msg__TrackedEntities__Sequence * member =
    (icrane_msgs__msg__TrackedEntities__Sequence *)(untyped_member);
  icrane_msgs__msg__TrackedEntities__Sequence__fini(member);
  return icrane_msgs__msg__TrackedEntities__Sequence__init(member, size);
}

size_t OmniverseInfo__rosidl_typesupport_introspection_c__size_function__TrackedEntities__boxes_info(
  const void * untyped_member)
{
  const icrane_msgs__msg__TrackedEntities__Sequence * member =
    (const icrane_msgs__msg__TrackedEntities__Sequence *)(untyped_member);
  return member->size;
}

const void * OmniverseInfo__rosidl_typesupport_introspection_c__get_const_function__TrackedEntities__boxes_info(
  const void * untyped_member, size_t index)
{
  const icrane_msgs__msg__TrackedEntities__Sequence * member =
    (const icrane_msgs__msg__TrackedEntities__Sequence *)(untyped_member);
  return &member->data[index];
}

void * OmniverseInfo__rosidl_typesupport_introspection_c__get_function__TrackedEntities__boxes_info(
  void * untyped_member, size_t index)
{
  icrane_msgs__msg__TrackedEntities__Sequence * member =
    (icrane_msgs__msg__TrackedEntities__Sequence *)(untyped_member);
  return &member->data[index];
}

bool OmniverseInfo__rosidl_typesupport_introspection_c__resize_function__TrackedEntities__boxes_info(
  void * untyped_member, size_t size)
{
  icrane_msgs__msg__TrackedEntities__Sequence * member =
    (icrane_msgs__msg__TrackedEntities__Sequence *)(untyped_member);
  icrane_msgs__msg__TrackedEntities__Sequence__fini(member);
  return icrane_msgs__msg__TrackedEntities__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember OmniverseInfo__rosidl_typesupport_introspection_c__OmniverseInfo_message_member_array[6] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(icrane_msgs__msg__OmniverseInfo, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "people_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(icrane_msgs__msg__OmniverseInfo, people_info),  // bytes offset in struct
    NULL,  // default value
    OmniverseInfo__rosidl_typesupport_introspection_c__size_function__TrackedEntities__people_info,  // size() function pointer
    OmniverseInfo__rosidl_typesupport_introspection_c__get_const_function__TrackedEntities__people_info,  // get_const(index) function pointer
    OmniverseInfo__rosidl_typesupport_introspection_c__get_function__TrackedEntities__people_info,  // get(index) function pointer
    OmniverseInfo__rosidl_typesupport_introspection_c__resize_function__TrackedEntities__people_info  // resize(index) function pointer
  },
  {
    "boxes_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(icrane_msgs__msg__OmniverseInfo, boxes_info),  // bytes offset in struct
    NULL,  // default value
    OmniverseInfo__rosidl_typesupport_introspection_c__size_function__TrackedEntities__boxes_info,  // size() function pointer
    OmniverseInfo__rosidl_typesupport_introspection_c__get_const_function__TrackedEntities__boxes_info,  // get_const(index) function pointer
    OmniverseInfo__rosidl_typesupport_introspection_c__get_function__TrackedEntities__boxes_info,  // get(index) function pointer
    OmniverseInfo__rosidl_typesupport_introspection_c__resize_function__TrackedEntities__boxes_info  // resize(index) function pointer
  },
  {
    "load_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(icrane_msgs__msg__OmniverseInfo, load_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(icrane_msgs__msg__OmniverseInfo, joint_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(icrane_msgs__msg__OmniverseInfo, points),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers OmniverseInfo__rosidl_typesupport_introspection_c__OmniverseInfo_message_members = {
  "icrane_msgs__msg",  // message namespace
  "OmniverseInfo",  // message name
  6,  // number of fields
  sizeof(icrane_msgs__msg__OmniverseInfo),
  OmniverseInfo__rosidl_typesupport_introspection_c__OmniverseInfo_message_member_array,  // message members
  OmniverseInfo__rosidl_typesupport_introspection_c__OmniverseInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  OmniverseInfo__rosidl_typesupport_introspection_c__OmniverseInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t OmniverseInfo__rosidl_typesupport_introspection_c__OmniverseInfo_message_type_support_handle = {
  0,
  &OmniverseInfo__rosidl_typesupport_introspection_c__OmniverseInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_icrane_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, icrane_msgs, msg, OmniverseInfo)() {
  OmniverseInfo__rosidl_typesupport_introspection_c__OmniverseInfo_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  OmniverseInfo__rosidl_typesupport_introspection_c__OmniverseInfo_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, icrane_msgs, msg, TrackedEntities)();
  OmniverseInfo__rosidl_typesupport_introspection_c__OmniverseInfo_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, icrane_msgs, msg, TrackedEntities)();
  OmniverseInfo__rosidl_typesupport_introspection_c__OmniverseInfo_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav_msgs, msg, Path)();
  OmniverseInfo__rosidl_typesupport_introspection_c__OmniverseInfo_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, JointState)();
  OmniverseInfo__rosidl_typesupport_introspection_c__OmniverseInfo_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, icrane_msgs, msg, Modeling)();
  if (!OmniverseInfo__rosidl_typesupport_introspection_c__OmniverseInfo_message_type_support_handle.typesupport_identifier) {
    OmniverseInfo__rosidl_typesupport_introspection_c__OmniverseInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &OmniverseInfo__rosidl_typesupport_introspection_c__OmniverseInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
