// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rosidl_generator_py:msg/Defaults.idl
// generated code does not contain a copyright notice

#ifndef ROSIDL_GENERATOR_PY__MSG__DETAIL__DEFAULTS__TRAITS_HPP_
#define ROSIDL_GENERATOR_PY__MSG__DETAIL__DEFAULTS__TRAITS_HPP_

#include "rosidl_generator_py/msg/detail/defaults__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosidl_generator_py::msg::Defaults>()
{
  return "rosidl_generator_py::msg::Defaults";
}

template<>
inline const char * name<rosidl_generator_py::msg::Defaults>()
{
  return "rosidl_generator_py/msg/Defaults";
}

template<>
struct has_fixed_size<rosidl_generator_py::msg::Defaults>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rosidl_generator_py::msg::Defaults>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rosidl_generator_py::msg::Defaults>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROSIDL_GENERATOR_PY__MSG__DETAIL__DEFAULTS__TRAITS_HPP_
