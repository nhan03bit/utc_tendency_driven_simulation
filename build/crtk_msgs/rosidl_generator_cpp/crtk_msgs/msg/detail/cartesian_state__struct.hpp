// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from crtk_msgs:msg/CartesianState.idl
// generated code does not contain a copyright notice

#ifndef CRTK_MSGS__MSG__DETAIL__CARTESIAN_STATE__STRUCT_HPP_
#define CRTK_MSGS__MSG__DETAIL__CARTESIAN_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'pose_is_valid'
// Member 'twist_is_valid'
// Member 'wrench_is_valid'
#include "std_msgs/msg/detail/bool__struct.hpp"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__struct.hpp"
// Member 'wrench'
#include "geometry_msgs/msg/detail/wrench__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__crtk_msgs__msg__CartesianState __attribute__((deprecated))
#else
# define DEPRECATED__crtk_msgs__msg__CartesianState __declspec(deprecated)
#endif

namespace crtk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CartesianState_
{
  using Type = CartesianState_<ContainerAllocator>;

  explicit CartesianState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    pose(_init),
    pose_is_valid(_init),
    twist(_init),
    twist_is_valid(_init),
    wrench(_init),
    wrench_is_valid(_init)
  {
    (void)_init;
  }

  explicit CartesianState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    pose(_alloc, _init),
    pose_is_valid(_alloc, _init),
    twist(_alloc, _init),
    twist_is_valid(_alloc, _init),
    wrench(_alloc, _init),
    wrench_is_valid(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _pose_is_valid_type =
    std_msgs::msg::Bool_<ContainerAllocator>;
  _pose_is_valid_type pose_is_valid;
  using _twist_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _twist_type twist;
  using _twist_is_valid_type =
    std_msgs::msg::Bool_<ContainerAllocator>;
  _twist_is_valid_type twist_is_valid;
  using _wrench_type =
    geometry_msgs::msg::Wrench_<ContainerAllocator>;
  _wrench_type wrench;
  using _wrench_is_valid_type =
    std_msgs::msg::Bool_<ContainerAllocator>;
  _wrench_is_valid_type wrench_is_valid;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__pose_is_valid(
    const std_msgs::msg::Bool_<ContainerAllocator> & _arg)
  {
    this->pose_is_valid = _arg;
    return *this;
  }
  Type & set__twist(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->twist = _arg;
    return *this;
  }
  Type & set__twist_is_valid(
    const std_msgs::msg::Bool_<ContainerAllocator> & _arg)
  {
    this->twist_is_valid = _arg;
    return *this;
  }
  Type & set__wrench(
    const geometry_msgs::msg::Wrench_<ContainerAllocator> & _arg)
  {
    this->wrench = _arg;
    return *this;
  }
  Type & set__wrench_is_valid(
    const std_msgs::msg::Bool_<ContainerAllocator> & _arg)
  {
    this->wrench_is_valid = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    crtk_msgs::msg::CartesianState_<ContainerAllocator> *;
  using ConstRawPtr =
    const crtk_msgs::msg::CartesianState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<crtk_msgs::msg::CartesianState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<crtk_msgs::msg::CartesianState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      crtk_msgs::msg::CartesianState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<crtk_msgs::msg::CartesianState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      crtk_msgs::msg::CartesianState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<crtk_msgs::msg::CartesianState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<crtk_msgs::msg::CartesianState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<crtk_msgs::msg::CartesianState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__crtk_msgs__msg__CartesianState
    std::shared_ptr<crtk_msgs::msg::CartesianState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__crtk_msgs__msg__CartesianState
    std::shared_ptr<crtk_msgs::msg::CartesianState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CartesianState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->pose_is_valid != other.pose_is_valid) {
      return false;
    }
    if (this->twist != other.twist) {
      return false;
    }
    if (this->twist_is_valid != other.twist_is_valid) {
      return false;
    }
    if (this->wrench != other.wrench) {
      return false;
    }
    if (this->wrench_is_valid != other.wrench_is_valid) {
      return false;
    }
    return true;
  }
  bool operator!=(const CartesianState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CartesianState_

// alias to use template instance with default allocator
using CartesianState =
  crtk_msgs::msg::CartesianState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace crtk_msgs

#endif  // CRTK_MSGS__MSG__DETAIL__CARTESIAN_STATE__STRUCT_HPP_
