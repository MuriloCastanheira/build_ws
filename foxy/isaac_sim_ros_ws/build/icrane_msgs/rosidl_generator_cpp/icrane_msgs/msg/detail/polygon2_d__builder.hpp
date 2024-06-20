// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from icrane_msgs:msg/Polygon2D.idl
// generated code does not contain a copyright notice

#ifndef ICRANE_MSGS__MSG__DETAIL__POLYGON2_D__BUILDER_HPP_
#define ICRANE_MSGS__MSG__DETAIL__POLYGON2_D__BUILDER_HPP_

#include "icrane_msgs/msg/detail/polygon2_d__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace icrane_msgs
{

namespace msg
{

namespace builder
{

class Init_Polygon2D_polygon
{
public:
  Init_Polygon2D_polygon()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::icrane_msgs::msg::Polygon2D polygon(::icrane_msgs::msg::Polygon2D::_polygon_type arg)
  {
    msg_.polygon = std::move(arg);
    return std::move(msg_);
  }

private:
  ::icrane_msgs::msg::Polygon2D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::icrane_msgs::msg::Polygon2D>()
{
  return icrane_msgs::msg::builder::Init_Polygon2D_polygon();
}

}  // namespace icrane_msgs

#endif  // ICRANE_MSGS__MSG__DETAIL__POLYGON2_D__BUILDER_HPP_
