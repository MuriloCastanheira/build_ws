// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from icrane_msgs:msg/Detection2D.idl
// generated code does not contain a copyright notice
#include "icrane_msgs/msg/detail/detection2_d__rosidl_typesupport_fastrtps_cpp.hpp"
#include "icrane_msgs/msg/detail/detection2_d__struct.hpp"

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
bool cdr_serialize(
  const icrane_msgs::msg::BoundingBox2D &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  icrane_msgs::msg::BoundingBox2D &);
size_t get_serialized_size(
  const icrane_msgs::msg::BoundingBox2D &,
  size_t current_alignment);
size_t
max_serialized_size_BoundingBox2D(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace icrane_msgs


namespace icrane_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_icrane_msgs
cdr_serialize(
  const icrane_msgs::msg::Detection2D & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: class_id
  cdr << ros_message.class_id;
  // Member: label
  cdr << ros_message.label;
  // Member: score
  cdr << ros_message.score;
  // Member: id
  cdr << ros_message.id;
  // Member: bbox
  icrane_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.bbox,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_icrane_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  icrane_msgs::msg::Detection2D & ros_message)
{
  // Member: class_id
  cdr >> ros_message.class_id;

  // Member: label
  cdr >> ros_message.label;

  // Member: score
  cdr >> ros_message.score;

  // Member: id
  cdr >> ros_message.id;

  // Member: bbox
  icrane_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.bbox);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_icrane_msgs
get_serialized_size(
  const icrane_msgs::msg::Detection2D & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: class_id
  {
    size_t item_size = sizeof(ros_message.class_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: label
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.label.size() + 1);
  // Member: score
  {
    size_t item_size = sizeof(ros_message.score);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.id.size() + 1);
  // Member: bbox

  current_alignment +=
    icrane_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.bbox, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_icrane_msgs
max_serialized_size_Detection2D(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: class_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: label
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: score
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: id
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: bbox
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        icrane_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_BoundingBox2D(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _Detection2D__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const icrane_msgs::msg::Detection2D *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Detection2D__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<icrane_msgs::msg::Detection2D *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Detection2D__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const icrane_msgs::msg::Detection2D *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Detection2D__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Detection2D(full_bounded, 0);
}

static message_type_support_callbacks_t _Detection2D__callbacks = {
  "icrane_msgs::msg",
  "Detection2D",
  _Detection2D__cdr_serialize,
  _Detection2D__cdr_deserialize,
  _Detection2D__get_serialized_size,
  _Detection2D__max_serialized_size
};

static rosidl_message_type_support_t _Detection2D__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Detection2D__callbacks,
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
get_message_type_support_handle<icrane_msgs::msg::Detection2D>()
{
  return &icrane_msgs::msg::typesupport_fastrtps_cpp::_Detection2D__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, icrane_msgs, msg, Detection2D)() {
  return &icrane_msgs::msg::typesupport_fastrtps_cpp::_Detection2D__handle;
}

#ifdef __cplusplus
}
#endif
