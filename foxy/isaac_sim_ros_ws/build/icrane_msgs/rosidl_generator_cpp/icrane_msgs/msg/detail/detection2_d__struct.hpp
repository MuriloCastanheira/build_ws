// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from icrane_msgs:msg/Detection2D.idl
// generated code does not contain a copyright notice

#ifndef ICRANE_MSGS__MSG__DETAIL__DETECTION2_D__STRUCT_HPP_
#define ICRANE_MSGS__MSG__DETAIL__DETECTION2_D__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'bbox'
#include "icrane_msgs/msg/detail/bounding_box2_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__icrane_msgs__msg__Detection2D __attribute__((deprecated))
#else
# define DEPRECATED__icrane_msgs__msg__Detection2D __declspec(deprecated)
#endif

namespace icrane_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Detection2D_
{
  using Type = Detection2D_<ContainerAllocator>;

  explicit Detection2D_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : bbox(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->class_id = 0l;
      this->label = "";
      this->score = 0.0;
      this->id = "";
    }
  }

  explicit Detection2D_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : label(_alloc),
    id(_alloc),
    bbox(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->class_id = 0l;
      this->label = "";
      this->score = 0.0;
      this->id = "";
    }
  }

  // field types and members
  using _class_id_type =
    int32_t;
  _class_id_type class_id;
  using _label_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _label_type label;
  using _score_type =
    double;
  _score_type score;
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _id_type id;
  using _bbox_type =
    icrane_msgs::msg::BoundingBox2D_<ContainerAllocator>;
  _bbox_type bbox;

  // setters for named parameter idiom
  Type & set__class_id(
    const int32_t & _arg)
  {
    this->class_id = _arg;
    return *this;
  }
  Type & set__label(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->label = _arg;
    return *this;
  }
  Type & set__score(
    const double & _arg)
  {
    this->score = _arg;
    return *this;
  }
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__bbox(
    const icrane_msgs::msg::BoundingBox2D_<ContainerAllocator> & _arg)
  {
    this->bbox = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    icrane_msgs::msg::Detection2D_<ContainerAllocator> *;
  using ConstRawPtr =
    const icrane_msgs::msg::Detection2D_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<icrane_msgs::msg::Detection2D_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<icrane_msgs::msg::Detection2D_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      icrane_msgs::msg::Detection2D_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<icrane_msgs::msg::Detection2D_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      icrane_msgs::msg::Detection2D_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<icrane_msgs::msg::Detection2D_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<icrane_msgs::msg::Detection2D_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<icrane_msgs::msg::Detection2D_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__icrane_msgs__msg__Detection2D
    std::shared_ptr<icrane_msgs::msg::Detection2D_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__icrane_msgs__msg__Detection2D
    std::shared_ptr<icrane_msgs::msg::Detection2D_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Detection2D_ & other) const
  {
    if (this->class_id != other.class_id) {
      return false;
    }
    if (this->label != other.label) {
      return false;
    }
    if (this->score != other.score) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->bbox != other.bbox) {
      return false;
    }
    return true;
  }
  bool operator!=(const Detection2D_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Detection2D_

// alias to use template instance with default allocator
using Detection2D =
  icrane_msgs::msg::Detection2D_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace icrane_msgs

#endif  // ICRANE_MSGS__MSG__DETAIL__DETECTION2_D__STRUCT_HPP_
