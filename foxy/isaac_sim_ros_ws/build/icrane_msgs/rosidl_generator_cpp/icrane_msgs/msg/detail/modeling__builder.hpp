// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from icrane_msgs:msg/Modeling.idl
// generated code does not contain a copyright notice

#ifndef ICRANE_MSGS__MSG__DETAIL__MODELING__BUILDER_HPP_
#define ICRANE_MSGS__MSG__DETAIL__MODELING__BUILDER_HPP_

#include "icrane_msgs/msg/detail/modeling__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace icrane_msgs
{

namespace msg
{

namespace builder
{

class Init_Modeling_predict_z
{
public:
  explicit Init_Modeling_predict_z(::icrane_msgs::msg::Modeling & msg)
  : msg_(msg)
  {}
  ::icrane_msgs::msg::Modeling predict_z(::icrane_msgs::msg::Modeling::_predict_z_type arg)
  {
    msg_.predict_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::icrane_msgs::msg::Modeling msg_;
};

class Init_Modeling_predict_y
{
public:
  explicit Init_Modeling_predict_y(::icrane_msgs::msg::Modeling & msg)
  : msg_(msg)
  {}
  Init_Modeling_predict_z predict_y(::icrane_msgs::msg::Modeling::_predict_y_type arg)
  {
    msg_.predict_y = std::move(arg);
    return Init_Modeling_predict_z(msg_);
  }

private:
  ::icrane_msgs::msg::Modeling msg_;
};

class Init_Modeling_predict_x
{
public:
  explicit Init_Modeling_predict_x(::icrane_msgs::msg::Modeling & msg)
  : msg_(msg)
  {}
  Init_Modeling_predict_y predict_x(::icrane_msgs::msg::Modeling::_predict_x_type arg)
  {
    msg_.predict_x = std::move(arg);
    return Init_Modeling_predict_y(msg_);
  }

private:
  ::icrane_msgs::msg::Modeling msg_;
};

class Init_Modeling_predict_beta
{
public:
  explicit Init_Modeling_predict_beta(::icrane_msgs::msg::Modeling & msg)
  : msg_(msg)
  {}
  Init_Modeling_predict_x predict_beta(::icrane_msgs::msg::Modeling::_predict_beta_type arg)
  {
    msg_.predict_beta = std::move(arg);
    return Init_Modeling_predict_x(msg_);
  }

private:
  ::icrane_msgs::msg::Modeling msg_;
};

class Init_Modeling_predict_alpha
{
public:
  explicit Init_Modeling_predict_alpha(::icrane_msgs::msg::Modeling & msg)
  : msg_(msg)
  {}
  Init_Modeling_predict_beta predict_alpha(::icrane_msgs::msg::Modeling::_predict_alpha_type arg)
  {
    msg_.predict_alpha = std::move(arg);
    return Init_Modeling_predict_beta(msg_);
  }

private:
  ::icrane_msgs::msg::Modeling msg_;
};

class Init_Modeling_z
{
public:
  explicit Init_Modeling_z(::icrane_msgs::msg::Modeling & msg)
  : msg_(msg)
  {}
  Init_Modeling_predict_alpha z(::icrane_msgs::msg::Modeling::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_Modeling_predict_alpha(msg_);
  }

private:
  ::icrane_msgs::msg::Modeling msg_;
};

class Init_Modeling_y
{
public:
  explicit Init_Modeling_y(::icrane_msgs::msg::Modeling & msg)
  : msg_(msg)
  {}
  Init_Modeling_z y(::icrane_msgs::msg::Modeling::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Modeling_z(msg_);
  }

private:
  ::icrane_msgs::msg::Modeling msg_;
};

class Init_Modeling_x
{
public:
  explicit Init_Modeling_x(::icrane_msgs::msg::Modeling & msg)
  : msg_(msg)
  {}
  Init_Modeling_y x(::icrane_msgs::msg::Modeling::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Modeling_y(msg_);
  }

private:
  ::icrane_msgs::msg::Modeling msg_;
};

class Init_Modeling_beta
{
public:
  explicit Init_Modeling_beta(::icrane_msgs::msg::Modeling & msg)
  : msg_(msg)
  {}
  Init_Modeling_x beta(::icrane_msgs::msg::Modeling::_beta_type arg)
  {
    msg_.beta = std::move(arg);
    return Init_Modeling_x(msg_);
  }

private:
  ::icrane_msgs::msg::Modeling msg_;
};

class Init_Modeling_alpha
{
public:
  explicit Init_Modeling_alpha(::icrane_msgs::msg::Modeling & msg)
  : msg_(msg)
  {}
  Init_Modeling_beta alpha(::icrane_msgs::msg::Modeling::_alpha_type arg)
  {
    msg_.alpha = std::move(arg);
    return Init_Modeling_beta(msg_);
  }

private:
  ::icrane_msgs::msg::Modeling msg_;
};

class Init_Modeling_header
{
public:
  Init_Modeling_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Modeling_alpha header(::icrane_msgs::msg::Modeling::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Modeling_alpha(msg_);
  }

private:
  ::icrane_msgs::msg::Modeling msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::icrane_msgs::msg::Modeling>()
{
  return icrane_msgs::msg::builder::Init_Modeling_header();
}

}  // namespace icrane_msgs

#endif  // ICRANE_MSGS__MSG__DETAIL__MODELING__BUILDER_HPP_
