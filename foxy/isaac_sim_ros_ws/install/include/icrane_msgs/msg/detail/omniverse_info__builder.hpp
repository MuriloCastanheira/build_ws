// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from icrane_msgs:msg/OmniverseInfo.idl
// generated code does not contain a copyright notice

#ifndef ICRANE_MSGS__MSG__DETAIL__OMNIVERSE_INFO__BUILDER_HPP_
#define ICRANE_MSGS__MSG__DETAIL__OMNIVERSE_INFO__BUILDER_HPP_

#include "icrane_msgs/msg/detail/omniverse_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace icrane_msgs
{

namespace msg
{

namespace builder
{

class Init_OmniverseInfo_points
{
public:
  explicit Init_OmniverseInfo_points(::icrane_msgs::msg::OmniverseInfo & msg)
  : msg_(msg)
  {}
  ::icrane_msgs::msg::OmniverseInfo points(::icrane_msgs::msg::OmniverseInfo::_points_type arg)
  {
    msg_.points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::icrane_msgs::msg::OmniverseInfo msg_;
};

class Init_OmniverseInfo_joint_state
{
public:
  explicit Init_OmniverseInfo_joint_state(::icrane_msgs::msg::OmniverseInfo & msg)
  : msg_(msg)
  {}
  Init_OmniverseInfo_points joint_state(::icrane_msgs::msg::OmniverseInfo::_joint_state_type arg)
  {
    msg_.joint_state = std::move(arg);
    return Init_OmniverseInfo_points(msg_);
  }

private:
  ::icrane_msgs::msg::OmniverseInfo msg_;
};

class Init_OmniverseInfo_load_position
{
public:
  explicit Init_OmniverseInfo_load_position(::icrane_msgs::msg::OmniverseInfo & msg)
  : msg_(msg)
  {}
  Init_OmniverseInfo_joint_state load_position(::icrane_msgs::msg::OmniverseInfo::_load_position_type arg)
  {
    msg_.load_position = std::move(arg);
    return Init_OmniverseInfo_joint_state(msg_);
  }

private:
  ::icrane_msgs::msg::OmniverseInfo msg_;
};

class Init_OmniverseInfo_boxes_info
{
public:
  explicit Init_OmniverseInfo_boxes_info(::icrane_msgs::msg::OmniverseInfo & msg)
  : msg_(msg)
  {}
  Init_OmniverseInfo_load_position boxes_info(::icrane_msgs::msg::OmniverseInfo::_boxes_info_type arg)
  {
    msg_.boxes_info = std::move(arg);
    return Init_OmniverseInfo_load_position(msg_);
  }

private:
  ::icrane_msgs::msg::OmniverseInfo msg_;
};

class Init_OmniverseInfo_people_info
{
public:
  explicit Init_OmniverseInfo_people_info(::icrane_msgs::msg::OmniverseInfo & msg)
  : msg_(msg)
  {}
  Init_OmniverseInfo_boxes_info people_info(::icrane_msgs::msg::OmniverseInfo::_people_info_type arg)
  {
    msg_.people_info = std::move(arg);
    return Init_OmniverseInfo_boxes_info(msg_);
  }

private:
  ::icrane_msgs::msg::OmniverseInfo msg_;
};

class Init_OmniverseInfo_header
{
public:
  Init_OmniverseInfo_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OmniverseInfo_people_info header(::icrane_msgs::msg::OmniverseInfo::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_OmniverseInfo_people_info(msg_);
  }

private:
  ::icrane_msgs::msg::OmniverseInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::icrane_msgs::msg::OmniverseInfo>()
{
  return icrane_msgs::msg::builder::Init_OmniverseInfo_header();
}

}  // namespace icrane_msgs

#endif  // ICRANE_MSGS__MSG__DETAIL__OMNIVERSE_INFO__BUILDER_HPP_
