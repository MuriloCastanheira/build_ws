// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from icrane_msgs:msg/OmniverseInfo.idl
// generated code does not contain a copyright notice

#ifndef ICRANE_MSGS__MSG__DETAIL__OMNIVERSE_INFO__TRAITS_HPP_
#define ICRANE_MSGS__MSG__DETAIL__OMNIVERSE_INFO__TRAITS_HPP_

#include "icrane_msgs/msg/detail/omniverse_info__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'load_position'
#include "nav_msgs/msg/detail/path__traits.hpp"
// Member 'joint_state'
#include "sensor_msgs/msg/detail/joint_state__traits.hpp"
// Member 'points'
#include "icrane_msgs/msg/detail/modeling__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<icrane_msgs::msg::OmniverseInfo>()
{
  return "icrane_msgs::msg::OmniverseInfo";
}

template<>
inline const char * name<icrane_msgs::msg::OmniverseInfo>()
{
  return "icrane_msgs/msg/OmniverseInfo";
}

template<>
struct has_fixed_size<icrane_msgs::msg::OmniverseInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<icrane_msgs::msg::OmniverseInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<icrane_msgs::msg::OmniverseInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ICRANE_MSGS__MSG__DETAIL__OMNIVERSE_INFO__TRAITS_HPP_
