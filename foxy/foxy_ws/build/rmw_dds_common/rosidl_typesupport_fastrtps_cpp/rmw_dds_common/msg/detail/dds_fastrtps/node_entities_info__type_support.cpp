// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from rmw_dds_common:msg/NodeEntitiesInfo.idl
// generated code does not contain a copyright notice
#include "rmw_dds_common/msg/detail/node_entities_info__rosidl_typesupport_fastrtps_cpp.hpp"
#include "rmw_dds_common/msg/detail/node_entities_info__struct.hpp"

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
namespace rmw_dds_common
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const rmw_dds_common::msg::Gid &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  rmw_dds_common::msg::Gid &);
size_t get_serialized_size(
  const rmw_dds_common::msg::Gid &,
  size_t current_alignment);
size_t
max_serialized_size_Gid(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace rmw_dds_common

namespace rmw_dds_common
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const rmw_dds_common::msg::Gid &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  rmw_dds_common::msg::Gid &);
size_t get_serialized_size(
  const rmw_dds_common::msg::Gid &,
  size_t current_alignment);
size_t
max_serialized_size_Gid(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace rmw_dds_common


namespace rmw_dds_common
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rmw_dds_common
cdr_serialize(
  const rmw_dds_common::msg::NodeEntitiesInfo & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: node_namespace
  cdr << ros_message.node_namespace;
  // Member: node_name
  cdr << ros_message.node_name;
  // Member: reader_gid_seq
  {
    size_t size = ros_message.reader_gid_seq.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      rmw_dds_common::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.reader_gid_seq[i],
        cdr);
    }
  }
  // Member: writer_gid_seq
  {
    size_t size = ros_message.writer_gid_seq.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      rmw_dds_common::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.writer_gid_seq[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rmw_dds_common
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rmw_dds_common::msg::NodeEntitiesInfo & ros_message)
{
  // Member: node_namespace
  cdr >> ros_message.node_namespace;

  // Member: node_name
  cdr >> ros_message.node_name;

  // Member: reader_gid_seq
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.reader_gid_seq.resize(size);
    for (size_t i = 0; i < size; i++) {
      rmw_dds_common::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.reader_gid_seq[i]);
    }
  }

  // Member: writer_gid_seq
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.writer_gid_seq.resize(size);
    for (size_t i = 0; i < size; i++) {
      rmw_dds_common::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.writer_gid_seq[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rmw_dds_common
get_serialized_size(
  const rmw_dds_common::msg::NodeEntitiesInfo & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: node_namespace
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.node_namespace.size() + 1);
  // Member: node_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.node_name.size() + 1);
  // Member: reader_gid_seq
  {
    size_t array_size = ros_message.reader_gid_seq.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        rmw_dds_common::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.reader_gid_seq[index], current_alignment);
    }
  }
  // Member: writer_gid_seq
  {
    size_t array_size = ros_message.writer_gid_seq.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        rmw_dds_common::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.writer_gid_seq[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rmw_dds_common
max_serialized_size_NodeEntitiesInfo(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: node_namespace
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        256 +
        1;
    }
  }

  // Member: node_name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        256 +
        1;
    }
  }

  // Member: reader_gid_seq
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        rmw_dds_common::msg::typesupport_fastrtps_cpp::max_serialized_size_Gid(
        full_bounded, current_alignment);
    }
  }

  // Member: writer_gid_seq
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        rmw_dds_common::msg::typesupport_fastrtps_cpp::max_serialized_size_Gid(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _NodeEntitiesInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rmw_dds_common::msg::NodeEntitiesInfo *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _NodeEntitiesInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rmw_dds_common::msg::NodeEntitiesInfo *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _NodeEntitiesInfo__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rmw_dds_common::msg::NodeEntitiesInfo *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _NodeEntitiesInfo__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_NodeEntitiesInfo(full_bounded, 0);
}

static message_type_support_callbacks_t _NodeEntitiesInfo__callbacks = {
  "rmw_dds_common::msg",
  "NodeEntitiesInfo",
  _NodeEntitiesInfo__cdr_serialize,
  _NodeEntitiesInfo__cdr_deserialize,
  _NodeEntitiesInfo__get_serialized_size,
  _NodeEntitiesInfo__max_serialized_size
};

static rosidl_message_type_support_t _NodeEntitiesInfo__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_NodeEntitiesInfo__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace rmw_dds_common

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_rmw_dds_common
const rosidl_message_type_support_t *
get_message_type_support_handle<rmw_dds_common::msg::NodeEntitiesInfo>()
{
  return &rmw_dds_common::msg::typesupport_fastrtps_cpp::_NodeEntitiesInfo__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rmw_dds_common, msg, NodeEntitiesInfo)() {
  return &rmw_dds_common::msg::typesupport_fastrtps_cpp::_NodeEntitiesInfo__handle;
}

#ifdef __cplusplus
}
#endif
