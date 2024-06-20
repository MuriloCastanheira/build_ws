// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from icrane_msgs:msg/TrackedEntities.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "icrane_msgs/msg/detail/tracked_entities__struct.hpp"
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

void TrackedEntities_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) icrane_msgs::msg::TrackedEntities(_init);
}

void TrackedEntities_fini_function(void * message_memory)
{
  auto typed_message = static_cast<icrane_msgs::msg::TrackedEntities *>(message_memory);
  typed_message->~TrackedEntities();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TrackedEntities_message_member_array[2] = {
  {
    "id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(icrane_msgs::msg::TrackedEntities, id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Point>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(icrane_msgs::msg::TrackedEntities, position),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TrackedEntities_message_members = {
  "icrane_msgs::msg",  // message namespace
  "TrackedEntities",  // message name
  2,  // number of fields
  sizeof(icrane_msgs::msg::TrackedEntities),
  TrackedEntities_message_member_array,  // message members
  TrackedEntities_init_function,  // function to initialize message memory (memory has to be allocated)
  TrackedEntities_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TrackedEntities_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TrackedEntities_message_members,
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
get_message_type_support_handle<icrane_msgs::msg::TrackedEntities>()
{
  return &::icrane_msgs::msg::rosidl_typesupport_introspection_cpp::TrackedEntities_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, icrane_msgs, msg, TrackedEntities)() {
  return &::icrane_msgs::msg::rosidl_typesupport_introspection_cpp::TrackedEntities_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
