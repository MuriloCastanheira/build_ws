// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from icrane_msgs:msg/Modeling.idl
// generated code does not contain a copyright notice
#include "icrane_msgs/msg/detail/modeling__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "icrane_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "icrane_msgs/msg/detail/modeling__struct.h"
#include "icrane_msgs/msg/detail/modeling__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // predict_alpha, predict_beta, predict_x, predict_y, predict_z
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // predict_alpha, predict_beta, predict_x, predict_y, predict_z
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_icrane_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_icrane_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_icrane_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _Modeling__ros_msg_type = icrane_msgs__msg__Modeling;

static bool _Modeling__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Modeling__ros_msg_type * ros_message = static_cast<const _Modeling__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: alpha
  {
    cdr << ros_message->alpha;
  }

  // Field name: beta
  {
    cdr << ros_message->beta;
  }

  // Field name: x
  {
    cdr << ros_message->x;
  }

  // Field name: y
  {
    cdr << ros_message->y;
  }

  // Field name: z
  {
    cdr << ros_message->z;
  }

  // Field name: predict_alpha
  {
    size_t size = ros_message->predict_alpha.size;
    auto array_ptr = ros_message->predict_alpha.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: predict_beta
  {
    size_t size = ros_message->predict_beta.size;
    auto array_ptr = ros_message->predict_beta.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: predict_x
  {
    size_t size = ros_message->predict_x.size;
    auto array_ptr = ros_message->predict_x.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: predict_y
  {
    size_t size = ros_message->predict_y.size;
    auto array_ptr = ros_message->predict_y.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: predict_z
  {
    size_t size = ros_message->predict_z.size;
    auto array_ptr = ros_message->predict_z.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _Modeling__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Modeling__ros_msg_type * ros_message = static_cast<_Modeling__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: alpha
  {
    cdr >> ros_message->alpha;
  }

  // Field name: beta
  {
    cdr >> ros_message->beta;
  }

  // Field name: x
  {
    cdr >> ros_message->x;
  }

  // Field name: y
  {
    cdr >> ros_message->y;
  }

  // Field name: z
  {
    cdr >> ros_message->z;
  }

  // Field name: predict_alpha
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->predict_alpha.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->predict_alpha);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->predict_alpha, size)) {
      return "failed to create array for field 'predict_alpha'";
    }
    auto array_ptr = ros_message->predict_alpha.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: predict_beta
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->predict_beta.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->predict_beta);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->predict_beta, size)) {
      return "failed to create array for field 'predict_beta'";
    }
    auto array_ptr = ros_message->predict_beta.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: predict_x
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->predict_x.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->predict_x);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->predict_x, size)) {
      return "failed to create array for field 'predict_x'";
    }
    auto array_ptr = ros_message->predict_x.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: predict_y
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->predict_y.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->predict_y);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->predict_y, size)) {
      return "failed to create array for field 'predict_y'";
    }
    auto array_ptr = ros_message->predict_y.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: predict_z
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->predict_z.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->predict_z);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->predict_z, size)) {
      return "failed to create array for field 'predict_z'";
    }
    auto array_ptr = ros_message->predict_z.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_icrane_msgs
size_t get_serialized_size_icrane_msgs__msg__Modeling(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Modeling__ros_msg_type * ros_message = static_cast<const _Modeling__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name alpha
  {
    size_t item_size = sizeof(ros_message->alpha);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name beta
  {
    size_t item_size = sizeof(ros_message->beta);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name x
  {
    size_t item_size = sizeof(ros_message->x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y
  {
    size_t item_size = sizeof(ros_message->y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name z
  {
    size_t item_size = sizeof(ros_message->z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name predict_alpha
  {
    size_t array_size = ros_message->predict_alpha.size;
    auto array_ptr = ros_message->predict_alpha.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name predict_beta
  {
    size_t array_size = ros_message->predict_beta.size;
    auto array_ptr = ros_message->predict_beta.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name predict_x
  {
    size_t array_size = ros_message->predict_x.size;
    auto array_ptr = ros_message->predict_x.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name predict_y
  {
    size_t array_size = ros_message->predict_y.size;
    auto array_ptr = ros_message->predict_y.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name predict_z
  {
    size_t array_size = ros_message->predict_z.size;
    auto array_ptr = ros_message->predict_z.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Modeling__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_icrane_msgs__msg__Modeling(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_icrane_msgs
size_t max_serialized_size_icrane_msgs__msg__Modeling(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        full_bounded, current_alignment);
    }
  }
  // member: alpha
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: beta
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: predict_alpha
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: predict_beta
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: predict_x
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: predict_y
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: predict_z
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

static size_t _Modeling__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_icrane_msgs__msg__Modeling(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Modeling = {
  "icrane_msgs::msg",
  "Modeling",
  _Modeling__cdr_serialize,
  _Modeling__cdr_deserialize,
  _Modeling__get_serialized_size,
  _Modeling__max_serialized_size
};

static rosidl_message_type_support_t _Modeling__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Modeling,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, icrane_msgs, msg, Modeling)() {
  return &_Modeling__type_support;
}

#if defined(__cplusplus)
}
#endif
