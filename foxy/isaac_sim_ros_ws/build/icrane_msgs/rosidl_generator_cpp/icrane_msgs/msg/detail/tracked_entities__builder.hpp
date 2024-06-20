// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from icrane_msgs:msg/TrackedEntities.idl
// generated code does not contain a copyright notice

#ifndef ICRANE_MSGS__MSG__DETAIL__TRACKED_ENTITIES__BUILDER_HPP_
#define ICRANE_MSGS__MSG__DETAIL__TRACKED_ENTITIES__BUILDER_HPP_

#include "icrane_msgs/msg/detail/tracked_entities__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace icrane_msgs
{

namespace msg
{

namespace builder
{

class Init_TrackedEntities_position
{
public:
  explicit Init_TrackedEntities_position(::icrane_msgs::msg::TrackedEntities & msg)
  : msg_(msg)
  {}
  ::icrane_msgs::msg::TrackedEntities position(::icrane_msgs::msg::TrackedEntities::_position_type arg)
  {
    msg_.position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::icrane_msgs::msg::TrackedEntities msg_;
};

class Init_TrackedEntities_id
{
public:
  Init_TrackedEntities_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrackedEntities_position id(::icrane_msgs::msg::TrackedEntities::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_TrackedEntities_position(msg_);
  }

private:
  ::icrane_msgs::msg::TrackedEntities msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::icrane_msgs::msg::TrackedEntities>()
{
  return icrane_msgs::msg::builder::Init_TrackedEntities_id();
}

}  // namespace icrane_msgs

#endif  // ICRANE_MSGS__MSG__DETAIL__TRACKED_ENTITIES__BUILDER_HPP_
