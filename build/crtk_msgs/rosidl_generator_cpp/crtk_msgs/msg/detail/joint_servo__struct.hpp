// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from crtk_msgs:msg/JointServo.idl
// generated code does not contain a copyright notice

#ifndef CRTK_MSGS__MSG__DETAIL__JOINT_SERVO__STRUCT_HPP_
#define CRTK_MSGS__MSG__DETAIL__JOINT_SERVO__STRUCT_HPP_

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
// Member 'mode'
#include "crtk_msgs/msg/detail/setpoint_mode__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__crtk_msgs__msg__JointServo __attribute__((deprecated))
#else
# define DEPRECATED__crtk_msgs__msg__JointServo __declspec(deprecated)
#endif

namespace crtk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JointServo_
{
  using Type = JointServo_<ContainerAllocator>;

  explicit JointServo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit JointServo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _name_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _name_type name;
  using _position_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _position_type position;
  using _velocity_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _velocity_type velocity;
  using _effort_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _effort_type effort;
  using _mode_type =
    std::vector<crtk_msgs::msg::SetpointMode_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<crtk_msgs::msg::SetpointMode_<ContainerAllocator>>>;
  _mode_type mode;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__name(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__position(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__velocity(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__effort(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->effort = _arg;
    return *this;
  }
  Type & set__mode(
    const std::vector<crtk_msgs::msg::SetpointMode_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<crtk_msgs::msg::SetpointMode_<ContainerAllocator>>> & _arg)
  {
    this->mode = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    crtk_msgs::msg::JointServo_<ContainerAllocator> *;
  using ConstRawPtr =
    const crtk_msgs::msg::JointServo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<crtk_msgs::msg::JointServo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<crtk_msgs::msg::JointServo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      crtk_msgs::msg::JointServo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<crtk_msgs::msg::JointServo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      crtk_msgs::msg::JointServo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<crtk_msgs::msg::JointServo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<crtk_msgs::msg::JointServo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<crtk_msgs::msg::JointServo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__crtk_msgs__msg__JointServo
    std::shared_ptr<crtk_msgs::msg::JointServo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__crtk_msgs__msg__JointServo
    std::shared_ptr<crtk_msgs::msg::JointServo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointServo_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->effort != other.effort) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointServo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointServo_

// alias to use template instance with default allocator
using JointServo =
  crtk_msgs::msg::JointServo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace crtk_msgs

#endif  // CRTK_MSGS__MSG__DETAIL__JOINT_SERVO__STRUCT_HPP_
