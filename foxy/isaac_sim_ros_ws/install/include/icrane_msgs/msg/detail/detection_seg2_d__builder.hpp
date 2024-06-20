// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from icrane_msgs:msg/DetectionSeg2D.idl
// generated code does not contain a copyright notice

#ifndef ICRANE_MSGS__MSG__DETAIL__DETECTION_SEG2_D__BUILDER_HPP_
#define ICRANE_MSGS__MSG__DETAIL__DETECTION_SEG2_D__BUILDER_HPP_

#include "icrane_msgs/msg/detail/detection_seg2_d__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace icrane_msgs
{

namespace msg
{

namespace builder
{

class Init_DetectionSeg2D_mask
{
public:
  explicit Init_DetectionSeg2D_mask(::icrane_msgs::msg::DetectionSeg2D & msg)
  : msg_(msg)
  {}
  ::icrane_msgs::msg::DetectionSeg2D mask(::icrane_msgs::msg::DetectionSeg2D::_mask_type arg)
  {
    msg_.mask = std::move(arg);
    return std::move(msg_);
  }

private:
  ::icrane_msgs::msg::DetectionSeg2D msg_;
};

class Init_DetectionSeg2D_id
{
public:
  explicit Init_DetectionSeg2D_id(::icrane_msgs::msg::DetectionSeg2D & msg)
  : msg_(msg)
  {}
  Init_DetectionSeg2D_mask id(::icrane_msgs::msg::DetectionSeg2D::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_DetectionSeg2D_mask(msg_);
  }

private:
  ::icrane_msgs::msg::DetectionSeg2D msg_;
};

class Init_DetectionSeg2D_score
{
public:
  explicit Init_DetectionSeg2D_score(::icrane_msgs::msg::DetectionSeg2D & msg)
  : msg_(msg)
  {}
  Init_DetectionSeg2D_id score(::icrane_msgs::msg::DetectionSeg2D::_score_type arg)
  {
    msg_.score = std::move(arg);
    return Init_DetectionSeg2D_id(msg_);
  }

private:
  ::icrane_msgs::msg::DetectionSeg2D msg_;
};

class Init_DetectionSeg2D_label
{
public:
  explicit Init_DetectionSeg2D_label(::icrane_msgs::msg::DetectionSeg2D & msg)
  : msg_(msg)
  {}
  Init_DetectionSeg2D_score label(::icrane_msgs::msg::DetectionSeg2D::_label_type arg)
  {
    msg_.label = std::move(arg);
    return Init_DetectionSeg2D_score(msg_);
  }

private:
  ::icrane_msgs::msg::DetectionSeg2D msg_;
};

class Init_DetectionSeg2D_class_id
{
public:
  Init_DetectionSeg2D_class_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectionSeg2D_label class_id(::icrane_msgs::msg::DetectionSeg2D::_class_id_type arg)
  {
    msg_.class_id = std::move(arg);
    return Init_DetectionSeg2D_label(msg_);
  }

private:
  ::icrane_msgs::msg::DetectionSeg2D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::icrane_msgs::msg::DetectionSeg2D>()
{
  return icrane_msgs::msg::builder::Init_DetectionSeg2D_class_id();
}

}  // namespace icrane_msgs

#endif  // ICRANE_MSGS__MSG__DETAIL__DETECTION_SEG2_D__BUILDER_HPP_
