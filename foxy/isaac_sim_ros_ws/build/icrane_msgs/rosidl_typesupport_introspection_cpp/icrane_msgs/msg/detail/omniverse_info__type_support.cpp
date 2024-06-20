// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from icrane_msgs:msg/OmniverseInfo.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "icrane_msgs/msg/detail/omniverse_info__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace icrane_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void OmniverseInfo_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) icrane_msgs::msg::OmniverseInfo(_init);
}

void OmniverseInfo_fini_function(void * message_memory)
{
  auto typed_message = static_cast<icrane_msgs::msg::OmniverseInfo *>(message_memory);
  typed_message->~OmniverseInfo();
}

size_t size_function__OmniverseInfo__people_info(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<icrane_msgs::msg::TrackedEntities> *>(untyped_member);
  return member->size();
}

const void * get_const_function__OmniverseInfo__people_info(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<icrane_msgs::msg::TrackedEntities> *>(untyped_member);
  return &member[index];
}

void * get_function__OmniverseInfo__people_info(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<icrane_msgs::msg::TrackedEntities> *>(untyped_member);
  return &member[index];
}

void resize_function__OmniverseInfo__people_info(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<icrane_msgs::msg::TrackedEntities> *>(untyped_member);
  member->resize(size);
}

size_t size_function__OmniverseInfo__boxes_info(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<icrane_msgs::msg::TrackedEntities> *>(untyped_member);
  return member->size();
}

const void * get_const_function__OmniverseInfo__boxes_info(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<icrane_msgs::msg::TrackedEntities> *>(untyped_member);
  return &member[index];
}

void * get_function__OmniverseInfo__boxes_info(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<icrane_msgs::msg::TrackedEntities> *>(untyped_member);
  return &member[index];
}

void resize_function__OmniverseInfo__boxes_info(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<icrane_msgs::msg::TrackedEntities> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember OmniverseInfo_message_member_array[6] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(icrane_msgs::msg::OmniverseInfo, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "people_info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<icrane_msgs::msg::TrackedEntities>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(icrane_msgs::msg::OmniverseInfo, people_info),  // bytes offset in struct
    nullptr,  // default value
    size_function__OmniverseInfo__people_info,  // size() function pointer
    get_const_function__OmniverseInfo__people_info,  // get_const(index) function pointer
    get_function__OmniverseInfo__people_info,  // get(index) function pointer
    resize_function__OmniverseInfo__people_info  // resize(index) function pointer
  },
  {
    "boxes_info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<icrane_msgs::msg::TrackedEntities>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(icrane_msgs::msg::OmniverseInfo, boxes_info),  // bytes offset in struct
    nullptr,  // default value
    size_function__OmniverseInfo__boxes_info,  // size() function pointer
    get_const_function__OmniverseInfo__boxes_info,  // get_const(index) function pointer
    get_function__OmniverseInfo__boxes_info,  // get(index) function pointer
    resize_function__OmniverseInfo__boxes_info  // resize(index) function pointer
  },
  {
    "load_position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<nav_msgs::msg::Path>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(icrane_msgs::msg::OmniverseInfo, load_position),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "joint_state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::JointState>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(icrane_msgs::msg::OmniverseInfo, joint_state),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "points",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<icrane_msgs::msg::Modeling>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(icrane_msgs::msg::OmniverseInfo, points),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers OmniverseInfo_message_members = {
  "icrane_msgs::msg",  // message namespace
  "OmniverseInfo",  // message name
  6,  // number of fields
  sizeof(icrane_msgs::msg::OmniverseInfo),
  OmniverseInfo_message_member_array,  // message members
  OmniverseInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  OmniverseInfo_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t OmniverseInfo_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &OmniverseInfo_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace icrane_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<icrane_msgs::msg::OmniverseInfo>()
{
  return &::icrane_msgs::msg::rosidl_typesupport_introspection_cpp::OmniverseInfo_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, icrane_msgs, msg, OmniverseInfo)() {
  return &::icrane_msgs::msg::rosidl_typesupport_introspection_cpp::OmniverseInfo_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
