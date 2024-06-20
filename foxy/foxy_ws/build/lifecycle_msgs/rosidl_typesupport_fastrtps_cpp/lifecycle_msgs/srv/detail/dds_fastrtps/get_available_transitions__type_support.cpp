// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from lifecycle_msgs:srv/GetAvailableTransitions.idl
// generated code does not contain a copyright notice
#include "lifecycle_msgs/srv/detail/get_available_transitions__rosidl_typesupport_fastrtps_cpp.hpp"
#include "lifecycle_msgs/srv/detail/get_available_transitions__struct.hpp"

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

namespace lifecycle_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lifecycle_msgs
cdr_serialize(
  const lifecycle_msgs::srv::GetAvailableTransitions_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: structure_needs_at_least_one_member
  cdr << ros_message.structure_needs_at_least_one_member;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lifecycle_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  lifecycle_msgs::srv::GetAvailableTransitions_Request & ros_message)
{
  // Member: structure_needs_at_least_one_member
  cdr >> ros_message.structure_needs_at_least_one_member;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lifecycle_msgs
get_serialized_size(
  const lifecycle_msgs::srv::GetAvailableTransitions_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message.structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lifecycle_msgs
max_serialized_size_GetAvailableTransitions_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _GetAvailableTransitions_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const lifecycle_msgs::srv::GetAvailableTransitions_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetAvailableTransitions_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<lifecycle_msgs::srv::GetAvailableTransitions_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetAvailableTransitions_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const lifecycle_msgs::srv::GetAvailableTransitions_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetAvailableTransitions_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_GetAvailableTransitions_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _GetAvailableTransitions_Request__callbacks = {
  "lifecycle_msgs::srv",
  "GetAvailableTransitions_Request",
  _GetAvailableTransitions_Request__cdr_serialize,
  _GetAvailableTransitions_Request__cdr_deserialize,
  _GetAvailableTransitions_Request__get_serialized_size,
  _GetAvailableTransitions_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetAvailableTransitions_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetAvailableTransitions_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace lifecycle_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_lifecycle_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<lifecycle_msgs::srv::GetAvailableTransitions_Request>()
{
  return &lifecycle_msgs::srv::typesupport_fastrtps_cpp::_GetAvailableTransitions_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, lifecycle_msgs, srv, GetAvailableTransitions_Request)() {
  return &lifecycle_msgs::srv::typesupport_fastrtps_cpp::_GetAvailableTransitions_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace lifecycle_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const lifecycle_msgs::msg::TransitionDescription &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  lifecycle_msgs::msg::TransitionDescription &);
size_t get_serialized_size(
  const lifecycle_msgs::msg::TransitionDescription &,
  size_t current_alignment);
size_t
max_serialized_size_TransitionDescription(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace lifecycle_msgs


namespace lifecycle_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lifecycle_msgs
cdr_serialize(
  const lifecycle_msgs::srv::GetAvailableTransitions_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: available_transitions
  {
    size_t size = ros_message.available_transitions.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      lifecycle_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.available_transitions[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lifecycle_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  lifecycle_msgs::srv::GetAvailableTransitions_Response & ros_message)
{
  // Member: available_transitions
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.available_transitions.resize(size);
    for (size_t i = 0; i < size; i++) {
      lifecycle_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.available_transitions[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lifecycle_msgs
get_serialized_size(
  const lifecycle_msgs::srv::GetAvailableTransitions_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: available_transitions
  {
    size_t array_size = ros_message.available_transitions.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        lifecycle_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.available_transitions[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lifecycle_msgs
max_serialized_size_GetAvailableTransitions_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: available_transitions
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        lifecycle_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_TransitionDescription(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _GetAvailableTransitions_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const lifecycle_msgs::srv::GetAvailableTransitions_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetAvailableTransitions_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<lifecycle_msgs::srv::GetAvailableTransitions_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetAvailableTransitions_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const lifecycle_msgs::srv::GetAvailableTransitions_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetAvailableTransitions_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_GetAvailableTransitions_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _GetAvailableTransitions_Response__callbacks = {
  "lifecycle_msgs::srv",
  "GetAvailableTransitions_Response",
  _GetAvailableTransitions_Response__cdr_serialize,
  _GetAvailableTransitions_Response__cdr_deserialize,
  _GetAvailableTransitions_Response__get_serialized_size,
  _GetAvailableTransitions_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetAvailableTransitions_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetAvailableTransitions_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace lifecycle_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_lifecycle_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<lifecycle_msgs::srv::GetAvailableTransitions_Response>()
{
  return &lifecycle_msgs::srv::typesupport_fastrtps_cpp::_GetAvailableTransitions_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, lifecycle_msgs, srv, GetAvailableTransitions_Response)() {
  return &lifecycle_msgs::srv::typesupport_fastrtps_cpp::_GetAvailableTransitions_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace lifecycle_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _GetAvailableTransitions__callbacks = {
  "lifecycle_msgs::srv",
  "GetAvailableTransitions",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, lifecycle_msgs, srv, GetAvailableTransitions_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, lifecycle_msgs, srv, GetAvailableTransitions_Response)(),
};

static rosidl_service_type_support_t _GetAvailableTransitions__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetAvailableTransitions__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace lifecycle_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_lifecycle_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<lifecycle_msgs::srv::GetAvailableTransitions>()
{
  return &lifecycle_msgs::srv::typesupport_fastrtps_cpp::_GetAvailableTransitions__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, lifecycle_msgs, srv, GetAvailableTransitions)() {
  return &lifecycle_msgs::srv::typesupport_fastrtps_cpp::_GetAvailableTransitions__handle;
}

#ifdef __cplusplus
}
#endif
