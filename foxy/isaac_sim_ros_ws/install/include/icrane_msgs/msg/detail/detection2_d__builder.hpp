// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from icrane_msgs:msg/Detection2D.idl
// generated code does not contain a copyright notice

#ifndef ICRANE_MSGS__MSG__DETAIL__DETECTION2_D__BUILDER_HPP_
#define ICRANE_MSGS__MSG__DETAIL__DETECTION2_D__BUILDER_HPP_

#include "icrane_msgs/msg/detail/detection2_d__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace icrane_msgs
{

namespace msg
{

namespace builder
{

class Init_Detection2D_bbox
{
public:
  explicit Init_Detection2D_bbox(::icrane_msgs::msg::Detection2D & msg)
  : msg_(msg)
  {}
  ::icrane_msgs::msg::Detection2D bbox(::icrane_msgs::msg::Detection2D::_bbox_type arg)
  {
    msg_.bbox = std::move(arg);
    return std::move(msg_);
  }

private:
  ::icrane_msgs::msg::Detection2D msg_;
};

class Init_Detection2D_id
{
public:
  explicit Init_Detection2D_id(::icrane_msgs::msg::Detection2D & msg)
  : msg_(msg)
  {}
  Init_Detection2D_bbox id(::icrane_msgs::msg::Detection2D::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Detection2D_bbox(msg_);
  }

private:
  ::icrane_msgs::msg::Detection2D msg_;
};

class Init_Detection2D_score
{
public:
  explicit Init_Detection2D_score(::icrane_msgs::msg::Detection2D & msg)
  : msg_(msg)
  {}
  Init_Detection2D_id score(::icrane_msgs::msg::Detection2D::_score_type arg)
  {
    msg_.score = std::move(arg);
    return Init_Detection2D_id(msg_);
  }

private:
  ::icrane_msgs::msg::Detection2D msg_;
};

class Init_Detection2D_label
{
public:
  explicit Init_Detection2D_label(::icrane_msgs::msg::Detection2D & msg)
  : msg_(msg)
  {}
  Init_Detection2D_score label(::icrane_msgs::msg::Detection2D::_label_type arg)
  {
    msg_.label = std::move(arg);
    return Init_Detection2D_score(msg_);
  }

private:
  ::icrane_msgs::msg::Detection2D msg_;
};

class Init_Detection2D_class_id
{
public:
  Init_Detection2D_class_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Detection2D_label class_id(::icrane_msgs::msg::Detection2D::_class_id_type arg)
  {
    msg_.class_id = std::move(arg);
    return Init_Detection2D_label(msg_);
  }

private:
  ::icrane_msgs::msg::Detection2D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::icrane_msgs::msg::Detection2D>()
{
  return icrane_msgs::msg::builder::Init_Detection2D_class_id();
}

}  // namespace icrane_msgs

#endif  // ICRANE_MSGS__MSG__DETAIL__DETECTION2_D__BUILDER_HPP_
