// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rosidl_generator_py:msg/BuiltinTypeSequencesIdl.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rosidl_generator_py/msg/detail/builtin_type_sequences_idl__rosidl_typesupport_introspection_c.h"
#include "rosidl_generator_py/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rosidl_generator_py/msg/detail/builtin_type_sequences_idl__functions.h"
#include "rosidl_generator_py/msg/detail/builtin_type_sequences_idl__struct.h"


// Include directives for member types
// Member `char_sequence_unbounded`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void BuiltinTypeSequencesIdl__rosidl_typesupport_introspection_c__BuiltinTypeSequencesIdl_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rosidl_generator_py__msg__BuiltinTypeSequencesIdl__init(message_memory);
}

void BuiltinTypeSequencesIdl__rosidl_typesupport_introspection_c__BuiltinTypeSequencesIdl_fini_function(void * message_memory)
{
  rosidl_generator_py__msg__BuiltinTypeSequencesIdl__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember BuiltinTypeSequencesIdl__rosidl_typesupport_introspection_c__BuiltinTypeSequencesIdl_message_member_array[1] = {
  {
    "char_sequence_unbounded",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_CHAR,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_generator_py__msg__BuiltinTypeSequencesIdl, char_sequence_unbounded),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers BuiltinTypeSequencesIdl__rosidl_typesupport_introspection_c__BuiltinTypeSequencesIdl_message_members = {
  "rosidl_generator_py__msg",  // message namespace
  "BuiltinTypeSequencesIdl",  // message name
  1,  // number of fields
  sizeof(rosidl_generator_py__msg__BuiltinTypeSequencesIdl),
  BuiltinTypeSequencesIdl__rosidl_typesupport_introspection_c__BuiltinTypeSequencesIdl_message_member_array,  // message members
  BuiltinTypeSequencesIdl__rosidl_typesupport_introspection_c__BuiltinTypeSequencesIdl_init_function,  // function to initialize message memory (memory has to be allocated)
  BuiltinTypeSequencesIdl__rosidl_typesupport_introspection_c__BuiltinTypeSequencesIdl_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t BuiltinTypeSequencesIdl__rosidl_typesupport_introspection_c__BuiltinTypeSequencesIdl_message_type_support_handle = {
  0,
  &BuiltinTypeSequencesIdl__rosidl_typesupport_introspection_c__BuiltinTypeSequencesIdl_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rosidl_generator_py
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosidl_generator_py, msg, BuiltinTypeSequencesIdl)() {
  if (!BuiltinTypeSequencesIdl__rosidl_typesupport_introspection_c__BuiltinTypeSequencesIdl_message_type_support_handle.typesupport_identifier) {
    BuiltinTypeSequencesIdl__rosidl_typesupport_introspection_c__BuiltinTypeSequencesIdl_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &BuiltinTypeSequencesIdl__rosidl_typesupport_introspection_c__BuiltinTypeSequencesIdl_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
