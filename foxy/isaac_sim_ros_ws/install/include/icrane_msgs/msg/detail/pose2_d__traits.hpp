// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from icrane_msgs:msg/Pose2D.idl
// generated code does not contain a copyright notice

#ifndef ICRANE_MSGS__MSG__DETAIL__POSE2_D__TRAITS_HPP_
#define ICRANE_MSGS__MSG__DETAIL__POSE2_D__TRAITS_HPP_

#include "icrane_msgs/msg/detail/pose2_d__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<icrane_msgs::msg::Pose2D>()
{
  return "icrane_msgs::msg::Pose2D";
}

template<>
inline const char * name<icrane_msgs::msg::Pose2D>()
{
  return "icrane_msgs/msg/Pose2D";
}

template<>
struct has_fixed_size<icrane_msgs::msg::Pose2D>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<icrane_msgs::msg::Pose2D>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<icrane_msgs::msg::Pose2D>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ICRANE_MSGS__MSG__DETAIL__POSE2_D__TRAITS_HPP_
