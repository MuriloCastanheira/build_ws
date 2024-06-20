// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from icrane_msgs:msg/OmniverseInfo.idl
// generated code does not contain a copyright notice

#ifndef ICRANE_MSGS__MSG__DETAIL__OMNIVERSE_INFO__STRUCT_HPP_
#define ICRANE_MSGS__MSG__DETAIL__OMNIVERSE_INFO__STRUCT_HPP_

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
// Member 'people_info'
// Member 'boxes_info'
#include "icrane_msgs/msg/detail/tracked_entities__struct.hpp"
// Member 'load_position'
#include "nav_msgs/msg/detail/path__struct.hpp"
// Member 'joint_state'
#include "sensor_msgs/msg/detail/joint_state__struct.hpp"
// Member 'points'
#include "icrane_msgs/msg/detail/modeling__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__icrane_msgs__msg__OmniverseInfo __attribute__((deprecated))
#else
# define DEPRECATED__icrane_msgs__msg__OmniverseInfo __declspec(deprecated)
#endif

namespace icrane_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OmniverseInfo_
{
  using Type = OmniverseInfo_<ContainerAllocator>;

  explicit OmniverseInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    load_position(_init),
    joint_state(_init),
    points(_init)
  {
    (void)_init;
  }

  explicit OmniverseInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    load_position(_alloc, _init),
    joint_state(_alloc, _init),
    points(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _people_info_type =
    std::vector<icrane_msgs::msg::TrackedEntities_<ContainerAllocator>, typename ContainerAllocator::template rebind<icrane_msgs::msg::TrackedEntities_<ContainerAllocator>>::other>;
  _people_info_type people_info;
  using _boxes_info_type =
    std::vector<icrane_msgs::msg::TrackedEntities_<ContainerAllocator>, typename ContainerAllocator::template rebind<icrane_msgs::msg::TrackedEntities_<ContainerAllocator>>::other>;
  _boxes_info_type boxes_info;
  using _load_position_type =
    nav_msgs::msg::Path_<ContainerAllocator>;
  _load_position_type load_position;
  using _joint_state_type =
    sensor_msgs::msg::JointState_<ContainerAllocator>;
  _joint_state_type joint_state;
  using _points_type =
    icrane_msgs::msg::Modeling_<ContainerAllocator>;
  _points_type points;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__people_info(
    const std::vector<icrane_msgs::msg::TrackedEntities_<ContainerAllocator>, typename ContainerAllocator::template rebind<icrane_msgs::msg::TrackedEntities_<ContainerAllocator>>::other> & _arg)
  {
    this->people_info = _arg;
    return *this;
  }
  Type & set__boxes_info(
    const std::vector<icrane_msgs::msg::TrackedEntities_<ContainerAllocator>, typename ContainerAllocator::template rebind<icrane_msgs::msg::TrackedEntities_<ContainerAllocator>>::other> & _arg)
  {
    this->boxes_info = _arg;
    return *this;
  }
  Type & set__load_position(
    const nav_msgs::msg::Path_<ContainerAllocator> & _arg)
  {
    this->load_position = _arg;
    return *this;
  }
  Type & set__joint_state(
    const sensor_msgs::msg::JointState_<ContainerAllocator> & _arg)
  {
    this->joint_state = _arg;
    return *this;
  }
  Type & set__points(
    const icrane_msgs::msg::Modeling_<ContainerAllocator> & _arg)
  {
    this->points = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    icrane_msgs::msg::OmniverseInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const icrane_msgs::msg::OmniverseInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<icrane_msgs::msg::OmniverseInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<icrane_msgs::msg::OmniverseInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      icrane_msgs::msg::OmniverseInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<icrane_msgs::msg::OmniverseInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      icrane_msgs::msg::OmniverseInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<icrane_msgs::msg::OmniverseInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<icrane_msgs::msg::OmniverseInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<icrane_msgs::msg::OmniverseInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__icrane_msgs__msg__OmniverseInfo
    std::shared_ptr<icrane_msgs::msg::OmniverseInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__icrane_msgs__msg__OmniverseInfo
    std::shared_ptr<icrane_msgs::msg::OmniverseInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OmniverseInfo_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->people_info != other.people_info) {
      return false;
    }
    if (this->boxes_info != other.boxes_info) {
      return false;
    }
    if (this->load_position != other.load_position) {
      return false;
    }
    if (this->joint_state != other.joint_state) {
      return false;
    }
    if (this->points != other.points) {
      return false;
    }
    return true;
  }
  bool operator!=(const OmniverseInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OmniverseInfo_

// alias to use template instance with default allocator
using OmniverseInfo =
  icrane_msgs::msg::OmniverseInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace icrane_msgs

#endif  // ICRANE_MSGS__MSG__DETAIL__OMNIVERSE_INFO__STRUCT_HPP_
