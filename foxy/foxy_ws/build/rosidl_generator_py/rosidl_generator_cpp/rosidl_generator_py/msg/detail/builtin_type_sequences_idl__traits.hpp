// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rosidl_generator_py:msg/BuiltinTypeSequencesIdl.idl
// generated code does not contain a copyright notice

#ifndef ROSIDL_GENERATOR_PY__MSG__DETAIL__BUILTIN_TYPE_SEQUENCES_IDL__TRAITS_HPP_
#define ROSIDL_GENERATOR_PY__MSG__DETAIL__BUILTIN_TYPE_SEQUENCES_IDL__TRAITS_HPP_

#include "rosidl_generator_py/msg/detail/builtin_type_sequences_idl__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosidl_generator_py::msg::BuiltinTypeSequencesIdl>()
{
  return "rosidl_generator_py::msg::BuiltinTypeSequencesIdl";
}

template<>
inline const char * name<rosidl_generator_py::msg::BuiltinTypeSequencesIdl>()
{
  return "rosidl_generator_py/msg/BuiltinTypeSequencesIdl";
}

template<>
struct has_fixed_size<rosidl_generator_py::msg::BuiltinTypeSequencesIdl>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rosidl_generator_py::msg::BuiltinTypeSequencesIdl>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rosidl_generator_py::msg::BuiltinTypeSequencesIdl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROSIDL_GENERATOR_PY__MSG__DETAIL__BUILTIN_TYPE_SEQUENCES_IDL__TRAITS_HPP_
