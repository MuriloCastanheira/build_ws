// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from icrane_msgs:msg/DetectionSeg2DArray.idl
// generated code does not contain a copyright notice

#ifndef ICRANE_MSGS__MSG__DETAIL__DETECTION_SEG2_D_ARRAY__BUILDER_HPP_
#define ICRANE_MSGS__MSG__DETAIL__DETECTION_SEG2_D_ARRAY__BUILDER_HPP_

#include "icrane_msgs/msg/detail/detection_seg2_d_array__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace icrane_msgs
{

namespace msg
{

namespace builder
{

class Init_DetectionSeg2DArray_detections
{
public:
  explicit Init_DetectionSeg2DArray_detections(::icrane_msgs::msg::DetectionSeg2DArray & msg)
  : msg_(msg)
  {}
  ::icrane_msgs::msg::DetectionSeg2DArray detections(::icrane_msgs::msg::DetectionSeg2DArray::_detections_type arg)
  {
    msg_.detections = std::move(arg);
    return std::move(msg_);
  }

private:
  ::icrane_msgs::msg::DetectionSeg2DArray msg_;
};

class Init_DetectionSeg2DArray_header
{
public:
  Init_DetectionSeg2DArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectionSeg2DArray_detections header(::icrane_msgs::msg::DetectionSeg2DArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DetectionSeg2DArray_detections(msg_);
  }

private:
  ::icrane_msgs::msg::DetectionSeg2DArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::icrane_msgs::msg::DetectionSeg2DArray>()
{
  return icrane_msgs::msg::builder::Init_DetectionSeg2DArray_header();
}

}  // namespace icrane_msgs

#endif  // ICRANE_MSGS__MSG__DETAIL__DETECTION_SEG2_D_ARRAY__BUILDER_HPP_
