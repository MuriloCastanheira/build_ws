// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from icrane_msgs:msg/DetectionSeg3D.idl
// generated code does not contain a copyright notice

#ifndef ICRANE_MSGS__MSG__DETAIL__DETECTION_SEG3_D__BUILDER_HPP_
#define ICRANE_MSGS__MSG__DETAIL__DETECTION_SEG3_D__BUILDER_HPP_

#include "icrane_msgs/msg/detail/detection_seg3_d__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace icrane_msgs
{

namespace msg
{

namespace builder
{

class Init_DetectionSeg3D_bbox
{
public:
  explicit Init_DetectionSeg3D_bbox(::icrane_msgs::msg::DetectionSeg3D & msg)
  : msg_(msg)
  {}
  ::icrane_msgs::msg::DetectionSeg3D bbox(::icrane_msgs::msg::DetectionSeg3D::_bbox_type arg)
  {
    msg_.bbox = std::move(arg);
    return std::move(msg_);
  }

private:
  ::icrane_msgs::msg::DetectionSeg3D msg_;
};

class Init_DetectionSeg3D_mask_pcd
{
public:
  explicit Init_DetectionSeg3D_mask_pcd(::icrane_msgs::msg::DetectionSeg3D & msg)
  : msg_(msg)
  {}
  Init_DetectionSeg3D_bbox mask_pcd(::icrane_msgs::msg::DetectionSeg3D::_mask_pcd_type arg)
  {
    msg_.mask_pcd = std::move(arg);
    return Init_DetectionSeg3D_bbox(msg_);
  }

private:
  ::icrane_msgs::msg::DetectionSeg3D msg_;
};

class Init_DetectionSeg3D_id
{
public:
  explicit Init_DetectionSeg3D_id(::icrane_msgs::msg::DetectionSeg3D & msg)
  : msg_(msg)
  {}
  Init_DetectionSeg3D_mask_pcd id(::icrane_msgs::msg::DetectionSeg3D::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_DetectionSeg3D_mask_pcd(msg_);
  }

private:
  ::icrane_msgs::msg::DetectionSeg3D msg_;
};

class Init_DetectionSeg3D_score
{
public:
  explicit Init_DetectionSeg3D_score(::icrane_msgs::msg::DetectionSeg3D & msg)
  : msg_(msg)
  {}
  Init_DetectionSeg3D_id score(::icrane_msgs::msg::DetectionSeg3D::_score_type arg)
  {
    msg_.score = std::move(arg);
    return Init_DetectionSeg3D_id(msg_);
  }

private:
  ::icrane_msgs::msg::DetectionSeg3D msg_;
};

class Init_DetectionSeg3D_label
{
public:
  explicit Init_DetectionSeg3D_label(::icrane_msgs::msg::DetectionSeg3D & msg)
  : msg_(msg)
  {}
  Init_DetectionSeg3D_score label(::icrane_msgs::msg::DetectionSeg3D::_label_type arg)
  {
    msg_.label = std::move(arg);
    return Init_DetectionSeg3D_score(msg_);
  }

private:
  ::icrane_msgs::msg::DetectionSeg3D msg_;
};

class Init_DetectionSeg3D_class_id
{
public:
  Init_DetectionSeg3D_class_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectionSeg3D_label class_id(::icrane_msgs::msg::DetectionSeg3D::_class_id_type arg)
  {
    msg_.class_id = std::move(arg);
    return Init_DetectionSeg3D_label(msg_);
  }

private:
  ::icrane_msgs::msg::DetectionSeg3D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::icrane_msgs::msg::DetectionSeg3D>()
{
  return icrane_msgs::msg::builder::Init_DetectionSeg3D_class_id();
}

}  // namespace icrane_msgs

#endif  // ICRANE_MSGS__MSG__DETAIL__DETECTION_SEG3_D__BUILDER_HPP_
