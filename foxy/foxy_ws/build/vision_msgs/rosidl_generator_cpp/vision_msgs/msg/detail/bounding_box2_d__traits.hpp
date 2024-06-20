// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from vision_msgs:msg/BoundingBox2D.idl
// generated code does not contain a copyright notice

#ifndef VISION_MSGS__MSG__DETAIL__BOUNDING_BOX2_D__TRAITS_HPP_
#define VISION_MSGS__MSG__DETAIL__BOUNDING_BOX2_D__TRAITS_HPP_

#include "vision_msgs/msg/detail/bounding_box2_d__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'center'
#include "geometry_msgs/msg/detail/pose2_d__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<vision_msgs::msg::BoundingBox2D>()
{
  return "vision_msgs::msg::BoundingBox2D";
}

template<>
inline const char * name<vision_msgs::msg::BoundingBox2D>()
{
  return "vision_msgs/msg/BoundingBox2D";
}

template<>
struct has_fixed_size<vision_msgs::msg::BoundingBox2D>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose2D>::value> {};

template<>
struct has_bounded_size<vision_msgs::msg::BoundingBox2D>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose2D>::value> {};

template<>
struct is_message<vision_msgs::msg::BoundingBox2D>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VISION_MSGS__MSG__DETAIL__BOUNDING_BOX2_D__TRAITS_HPP_
