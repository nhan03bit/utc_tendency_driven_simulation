// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from crtk_msgs:msg/CartesianServo.idl
// generated code does not contain a copyright notice

#ifndef CRTK_MSGS__MSG__DETAIL__CARTESIAN_SERVO__STRUCT_HPP_
#define CRTK_MSGS__MSG__DETAIL__CARTESIAN_SERVO__STRUCT_HPP_

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
// Member 'task_frame'
#include "geometry_msgs/msg/detail/transform__struct.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__struct.hpp"
// Member 'wrench'
#include "geometry_msgs/msg/detail/wrench__struct.hpp"
// Member 'axis_mode'
#include "crtk_msgs/msg/detail/setpoint_mode__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__crtk_msgs__msg__CartesianServo __attribute__((deprecated))
#else
# define DEPRECATED__crtk_msgs__msg__CartesianServo __declspec(deprecated)
#endif

namespace crtk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CartesianServo_
{
  using Type = CartesianServo_<ContainerAllocator>;

  explicit CartesianServo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    task_frame(_init),
    pose(_init),
    twist(_init),
    wrench(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->axis_mode.fill(crtk_msgs::msg::SetpointMode_<ContainerAllocator>{_init});
    }
  }

  explicit CartesianServo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    task_frame(_alloc, _init),
    pose(_alloc, _init),
    twist(_alloc, _init),
    wrench(_alloc, _init),
    axis_mode(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->axis_mode.fill(crtk_msgs::msg::SetpointMode_<ContainerAllocator>{_alloc, _init});
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _task_frame_type =
    geometry_msgs::msg::Transform_<ContainerAllocator>;
  _task_frame_type task_frame;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _twist_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _twist_type twist;
  using _wrench_type =
    geometry_msgs::msg::Wrench_<ContainerAllocator>;
  _wrench_type wrench;
  using _axis_mode_type =
    std::array<crtk_msgs::msg::SetpointMode_<ContainerAllocator>, 6>;
  _axis_mode_type axis_mode;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__task_frame(
    const geometry_msgs::msg::Transform_<ContainerAllocator> & _arg)
  {
    this->task_frame = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__twist(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->twist = _arg;
    return *this;
  }
  Type & set__wrench(
    const geometry_msgs::msg::Wrench_<ContainerAllocator> & _arg)
  {
    this->wrench = _arg;
    return *this;
  }
  Type & set__axis_mode(
    const std::array<crtk_msgs::msg::SetpointMode_<ContainerAllocator>, 6> & _arg)
  {
    this->axis_mode = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    crtk_msgs::msg::CartesianServo_<ContainerAllocator> *;
  using ConstRawPtr =
    const crtk_msgs::msg::CartesianServo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<crtk_msgs::msg::CartesianServo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<crtk_msgs::msg::CartesianServo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      crtk_msgs::msg::CartesianServo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<crtk_msgs::msg::CartesianServo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      crtk_msgs::msg::CartesianServo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<crtk_msgs::msg::CartesianServo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<crtk_msgs::msg::CartesianServo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<crtk_msgs::msg::CartesianServo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__crtk_msgs__msg__CartesianServo
    std::shared_ptr<crtk_msgs::msg::CartesianServo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__crtk_msgs__msg__CartesianServo
    std::shared_ptr<crtk_msgs::msg::CartesianServo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CartesianServo_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->task_frame != other.task_frame) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->twist != other.twist) {
      return false;
    }
    if (this->wrench != other.wrench) {
      return false;
    }
    if (this->axis_mode != other.axis_mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const CartesianServo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CartesianServo_

// alias to use template instance with default allocator
using CartesianServo =
  crtk_msgs::msg::CartesianServo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace crtk_msgs

#endif  // CRTK_MSGS__MSG__DETAIL__CARTESIAN_SERVO__STRUCT_HPP_
