// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rmw_dds_common:msg/NodeEntitiesInfo.idl
// generated code does not contain a copyright notice
#include "rmw_dds_common/msg/detail/node_entities_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rmw_dds_common/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rmw_dds_common/msg/detail/node_entities_info__struct.h"
#include "rmw_dds_common/msg/detail/node_entities_info__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rmw_dds_common/msg/detail/gid__functions.h"  // reader_gid_seq, writer_gid_seq
#include "rosidl_runtime_c/string.h"  // node_name, node_namespace
#include "rosidl_runtime_c/string_functions.h"  // node_name, node_namespace

// forward declare type support functions
size_t get_serialized_size_rmw_dds_common__msg__Gid(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rmw_dds_common__msg__Gid(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rmw_dds_common, msg, Gid)();


using _NodeEntitiesInfo__ros_msg_type = rmw_dds_common__msg__NodeEntitiesInfo;

static bool _NodeEntitiesInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NodeEntitiesInfo__ros_msg_type * ros_message = static_cast<const _NodeEntitiesInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: node_namespace
  {
    const rosidl_runtime_c__String * str = &ros_message->node_namespace;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: node_name
  {
    const rosidl_runtime_c__String * str = &ros_message->node_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: reader_gid_seq
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rmw_dds_common, msg, Gid
      )()->data);
    size_t size = ros_message->reader_gid_seq.size;
    auto array_ptr = ros_message->reader_gid_seq.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: writer_gid_seq
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rmw_dds_common, msg, Gid
      )()->data);
    size_t size = ros_message->writer_gid_seq.size;
    auto array_ptr = ros_message->writer_gid_seq.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _NodeEntitiesInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NodeEntitiesInfo__ros_msg_type * ros_message = static_cast<_NodeEntitiesInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: node_namespace
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->node_namespace.data) {
      rosidl_runtime_c__String__init(&ros_message->node_namespace);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->node_namespace,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'node_namespace'\n");
      return false;
    }
  }

  // Field name: node_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->node_name.data) {
      rosidl_runtime_c__String__init(&ros_message->node_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->node_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'node_name'\n");
      return false;
    }
  }

  // Field name: reader_gid_seq
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rmw_dds_common, msg, Gid
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->reader_gid_seq.data) {
      rmw_dds_common__msg__Gid__Sequence__fini(&ros_message->reader_gid_seq);
    }
    if (!rmw_dds_common__msg__Gid__Sequence__init(&ros_message->reader_gid_seq, size)) {
      return "failed to create array for field 'reader_gid_seq'";
    }
    auto array_ptr = ros_message->reader_gid_seq.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: writer_gid_seq
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rmw_dds_common, msg, Gid
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->writer_gid_seq.data) {
      rmw_dds_common__msg__Gid__Sequence__fini(&ros_message->writer_gid_seq);
    }
    if (!rmw_dds_common__msg__Gid__Sequence__init(&ros_message->writer_gid_seq, size)) {
      return "failed to create array for field 'writer_gid_seq'";
    }
    auto array_ptr = ros_message->writer_gid_seq.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmw_dds_common
size_t get_serialized_size_rmw_dds_common__msg__NodeEntitiesInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NodeEntitiesInfo__ros_msg_type * ros_message = static_cast<const _NodeEntitiesInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name node_namespace
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->node_namespace.size + 1);
  // field.name node_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->node_name.size + 1);
  // field.name reader_gid_seq
  {
    size_t array_size = ros_message->reader_gid_seq.size;
    auto array_ptr = ros_message->reader_gid_seq.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_rmw_dds_common__msg__Gid(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name writer_gid_seq
  {
    size_t array_size = ros_message->writer_gid_seq.size;
    auto array_ptr = ros_message->writer_gid_seq.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_rmw_dds_common__msg__Gid(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _NodeEntitiesInfo__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rmw_dds_common__msg__NodeEntitiesInfo(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmw_dds_common
size_t max_serialized_size_rmw_dds_common__msg__NodeEntitiesInfo(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: node_namespace
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
  // member: node_name
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
  // member: reader_gid_seq
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_rmw_dds_common__msg__Gid(
        full_bounded, current_alignment);
    }
  }
  // member: writer_gid_seq
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_rmw_dds_common__msg__Gid(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _NodeEntitiesInfo__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_rmw_dds_common__msg__NodeEntitiesInfo(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_NodeEntitiesInfo = {
  "rmw_dds_common::msg",
  "NodeEntitiesInfo",
  _NodeEntitiesInfo__cdr_serialize,
  _NodeEntitiesInfo__cdr_deserialize,
  _NodeEntitiesInfo__get_serialized_size,
  _NodeEntitiesInfo__max_serialized_size
};

static rosidl_message_type_support_t _NodeEntitiesInfo__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NodeEntitiesInfo,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rmw_dds_common, msg, NodeEntitiesInfo)() {
  return &_NodeEntitiesInfo__type_support;
}

#if defined(__cplusplus)
}
#endif
