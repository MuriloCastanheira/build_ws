// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from icrane_msgs:msg/Detection2DArray.idl
// generated code does not contain a copyright notice

#ifndef ICRANE_MSGS__MSG__DETAIL__DETECTION2_D_ARRAY__STRUCT_HPP_
#define ICRANE_MSGS__MSG__DETAIL__DETECTION2_D_ARRAY__STRUCT_HPP_

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
// Member 'detections'
#include "icrane_msgs/msg/detail/detection2_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__icrane_msgs__msg__Detection2DArray __attribute__((deprecated))
#else
# define DEPRECATED__icrane_msgs__msg__Detection2DArray __declspec(deprecated)
#endif

namespace icrane_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Detection2DArray_
{
  using Type = Detection2DArray_<ContainerAllocator>;

  explicit Detection2DArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit Detection2DArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _detections_type =
    std::vector<icrane_msgs::msg::Detection2D_<ContainerAllocator>, typename ContainerAllocator::template rebind<icrane_msgs::msg::Detection2D_<ContainerAllocator>>::other>;
  _detections_type detections;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__detections(
    const std::vector<icrane_msgs::msg::Detection2D_<ContainerAllocator>, typename ContainerAllocator::template rebind<icrane_msgs::msg::Detection2D_<ContainerAllocator>>::other> & _arg)
  {
    this->detections = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    icrane_msgs::msg::Detection2DArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const icrane_msgs::msg::Detection2DArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<icrane_msgs::msg::Detection2DArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<icrane_msgs::msg::Detection2DArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      icrane_msgs::msg::Detection2DArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<icrane_msgs::msg::Detection2DArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      icrane_msgs::msg::Detection2DArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<icrane_msgs::msg::Detection2DArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<icrane_msgs::msg::Detection2DArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<icrane_msgs::msg::Detection2DArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__icrane_msgs__msg__Detection2DArray
    std::shared_ptr<icrane_msgs::msg::Detection2DArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__icrane_msgs__msg__Detection2DArray
    std::shared_ptr<icrane_msgs::msg::Detection2DArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Detection2DArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->detections != other.detections) {
      return false;
    }
    return true;
  }
  bool operator!=(const Detection2DArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Detection2DArray_

// alias to use template instance with default allocator
using Detection2DArray =
  icrane_msgs::msg::Detection2DArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace icrane_msgs

#endif  // ICRANE_MSGS__MSG__DETAIL__DETECTION2_D_ARRAY__STRUCT_HPP_
