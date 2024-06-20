// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from icrane_msgs:msg/DetectionSeg3DArray.idl
// generated code does not contain a copyright notice
#include "icrane_msgs/msg/detail/detection_seg3_d_array__rosidl_typesupport_fastrtps_cpp.hpp"
#include "icrane_msgs/msg/detail/detection_seg3_d_array__struct.hpp"

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
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

namespace icrane_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const icrane_msgs::msg::DetectionSeg3D &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  icrane_msgs::msg::DetectionSeg3D &);
size_t get_serialized_size(
  const icrane_msgs::msg::DetectionSeg3D &,
  size_t current_alignment);
size_t
max_serialized_size_DetectionSeg3D(
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
  const icrane_msgs::msg::DetectionSeg3DArray & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: detections
  {
    size_t size = ros_message.detections.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      icrane_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.detections[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_icrane_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  icrane_msgs::msg::DetectionSeg3DArray & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: detections
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.detections.resize(size);
    for (size_t i = 0; i < size; i++) {
      icrane_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.detections[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_icrane_msgs
get_serialized_size(
  const icrane_msgs::msg::DetectionSeg3DArray & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: detections
  {
    size_t array_size = ros_message.detections.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        icrane_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.detections[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_icrane_msgs
max_serialized_size_DetectionSeg3DArray(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        full_bounded, current_alignment);
    }
  }

  // Member: detections
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        icrane_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_DetectionSeg3D(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _DetectionSeg3DArray__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const icrane_msgs::msg::DetectionSeg3DArray *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _DetectionSeg3DArray__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<icrane_msgs::msg::DetectionSeg3DArray *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _DetectionSeg3DArray__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const icrane_msgs::msg::DetectionSeg3DArray *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _DetectionSeg3DArray__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_DetectionSeg3DArray(full_bounded, 0);
}

static message_type_support_callbacks_t _DetectionSeg3DArray__callbacks = {
  "icrane_msgs::msg",
  "DetectionSeg3DArray",
  _DetectionSeg3DArray__cdr_serialize,
  _DetectionSeg3DArray__cdr_deserialize,
  _DetectionSeg3DArray__get_serialized_size,
  _DetectionSeg3DArray__max_serialized_size
};

static rosidl_message_type_support_t _DetectionSeg3DArray__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_DetectionSeg3DArray__callbacks,
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
get_message_type_support_handle<icrane_msgs::msg::DetectionSeg3DArray>()
{
  return &icrane_msgs::msg::typesupport_fastrtps_cpp::_DetectionSeg3DArray__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, icrane_msgs, msg, DetectionSeg3DArray)() {
  return &icrane_msgs::msg::typesupport_fastrtps_cpp::_DetectionSeg3DArray__handle;
}

#ifdef __cplusplus
}
#endif
