// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from icrane_msgs:msg/Polygon2D.idl
// generated code does not contain a copyright notice
#include "icrane_msgs/msg/detail/polygon2_d__rosidl_typesupport_fastrtps_cpp.hpp"
#include "icrane_msgs/msg/detail/polygon2_d__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace icrane_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_icrane_msgs
cdr_serialize(
  const icrane_msgs::msg::Polygon2D & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: polygon
  {
    cdr << ros_message.polygon;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_icrane_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  icrane_msgs::msg::Polygon2D & ros_message)
{
  // Member: polygon
  {
    cdr >> ros_message.polygon;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_icrane_msgs
get_serialized_size(
  const icrane_msgs::msg::Polygon2D & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: polygon
  {
    size_t array_size = ros_message.polygon.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.polygon[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_icrane_msgs
max_serialized_size_Polygon2D(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: polygon
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Polygon2D__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const icrane_msgs::msg::Polygon2D *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Polygon2D__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<icrane_msgs::msg::Polygon2D *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Polygon2D__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const icrane_msgs::msg::Polygon2D *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Polygon2D__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Polygon2D(full_bounded, 0);
}

static message_type_support_callbacks_t _Polygon2D__callbacks = {
  "icrane_msgs::msg",
  "Polygon2D",
  _Polygon2D__cdr_serialize,
  _Polygon2D__cdr_deserialize,
  _Polygon2D__get_serialized_size,
  _Polygon2D__max_serialized_size
};

static rosidl_message_type_support_t _Polygon2D__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Polygon2D__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace icrane_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_icrane_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<icrane_msgs::msg::Polygon2D>()
{
  return &icrane_msgs::msg::typesupport_fastrtps_cpp::_Polygon2D__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, icrane_msgs, msg, Polygon2D)() {
  return &icrane_msgs::msg::typesupport_fastrtps_cpp::_Polygon2D__handle;
}

#ifdef __cplusplus
}
#endif
