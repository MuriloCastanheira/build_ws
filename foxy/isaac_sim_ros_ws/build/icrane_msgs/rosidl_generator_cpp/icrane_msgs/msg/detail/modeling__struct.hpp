// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from icrane_msgs:msg/Modeling.idl
// generated code does not contain a copyright notice

#ifndef ICRANE_MSGS__MSG__DETAIL__MODELING__STRUCT_HPP_
#define ICRANE_MSGS__MSG__DETAIL__MODELING__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__icrane_msgs__msg__Modeling __attribute__((deprecated))
#else
# define DEPRECATED__icrane_msgs__msg__Modeling __declspec(deprecated)
#endif

namespace icrane_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Modeling_
{
  using Type = Modeling_<ContainerAllocator>;

  explicit Modeling_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->alpha = 0.0;
      this->beta = 0.0;
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
    }
  }

  explicit Modeling_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->alpha = 0.0;
      this->beta = 0.0;
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _alpha_type =
    double;
  _alpha_type alpha;
  using _beta_type =
    double;
  _beta_type beta;
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _z_type =
    double;
  _z_type z;
  using _predict_alpha_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _predict_alpha_type predict_alpha;
  using _predict_beta_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _predict_beta_type predict_beta;
  using _predict_x_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _predict_x_type predict_x;
  using _predict_y_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _predict_y_type predict_y;
  using _predict_z_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _predict_z_type predict_z;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__alpha(
    const double & _arg)
  {
    this->alpha = _arg;
    return *this;
  }
  Type & set__beta(
    const double & _arg)
  {
    this->beta = _arg;
    return *this;
  }
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const double & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__predict_alpha(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->predict_alpha = _arg;
    return *this;
  }
  Type & set__predict_beta(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->predict_beta = _arg;
    return *this;
  }
  Type & set__predict_x(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->predict_x = _arg;
    return *this;
  }
  Type & set__predict_y(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->predict_y = _arg;
    return *this;
  }
  Type & set__predict_z(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->predict_z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    icrane_msgs::msg::Modeling_<ContainerAllocator> *;
  using ConstRawPtr =
    const icrane_msgs::msg::Modeling_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<icrane_msgs::msg::Modeling_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<icrane_msgs::msg::Modeling_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      icrane_msgs::msg::Modeling_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<icrane_msgs::msg::Modeling_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      icrane_msgs::msg::Modeling_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<icrane_msgs::msg::Modeling_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<icrane_msgs::msg::Modeling_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<icrane_msgs::msg::Modeling_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__icrane_msgs__msg__Modeling
    std::shared_ptr<icrane_msgs::msg::Modeling_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__icrane_msgs__msg__Modeling
    std::shared_ptr<icrane_msgs::msg::Modeling_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Modeling_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->alpha != other.alpha) {
      return false;
    }
    if (this->beta != other.beta) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->predict_alpha != other.predict_alpha) {
      return false;
    }
    if (this->predict_beta != other.predict_beta) {
      return false;
    }
    if (this->predict_x != other.predict_x) {
      return false;
    }
    if (this->predict_y != other.predict_y) {
      return false;
    }
    if (this->predict_z != other.predict_z) {
      return false;
    }
    return true;
  }
  bool operator!=(const Modeling_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Modeling_

// alias to use template instance with default allocator
using Modeling =
  icrane_msgs::msg::Modeling_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace icrane_msgs

#endif  // ICRANE_MSGS__MSG__DETAIL__MODELING__STRUCT_HPP_
