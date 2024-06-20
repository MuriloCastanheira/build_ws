// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from icrane_msgs:msg/Vector2D.idl
// generated code does not contain a copyright notice

#ifndef ICRANE_MSGS__MSG__DETAIL__VECTOR2_D__BUILDER_HPP_
#define ICRANE_MSGS__MSG__DETAIL__VECTOR2_D__BUILDER_HPP_

#include "icrane_msgs/msg/detail/vector2_d__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace icrane_msgs
{

namespace msg
{

namespace builder
{

class Init_Vector2D_y
{
public:
  explicit Init_Vector2D_y(::icrane_msgs::msg::Vector2D & msg)
  : msg_(msg)
  {}
  ::icrane_msgs::msg::Vector2D y(::icrane_msgs::msg::Vector2D::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::icrane_msgs::msg::Vector2D msg_;
};

class Init_Vector2D_x
{
public:
  Init_Vector2D_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Vector2D_y x(::icrane_msgs::msg::Vector2D::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Vector2D_y(msg_);
  }

private:
  ::icrane_msgs::msg::Vector2D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::icrane_msgs::msg::Vector2D>()
{
  return icrane_msgs::msg::builder::Init_Vector2D_x();
}

}  // namespace icrane_msgs

#endif  // ICRANE_MSGS__MSG__DETAIL__VECTOR2_D__BUILDER_HPP_
