// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from icrane_msgs:msg/Vector2D.idl
// generated code does not contain a copyright notice

#ifndef ICRANE_MSGS__MSG__DETAIL__VECTOR2_D__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define ICRANE_MSGS__MSG__DETAIL__VECTOR2_D__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "icrane_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "icrane_msgs/msg/detail/vector2_d__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace icrane_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_icrane_msgs
cdr_serialize(
  const icrane_msgs::msg::Vector2D & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_icrane_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  icrane_msgs::msg::Vector2D & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_icrane_msgs
get_serialized_size(
  const icrane_msgs::msg::Vector2D & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_icrane_msgs
max_serialized_size_Vector2D(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace icrane_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_icrane_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, icrane_msgs, msg, Vector2D)();

#ifdef __cplusplus
}
#endif

#endif  // ICRANE_MSGS__MSG__DETAIL__VECTOR2_D__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
