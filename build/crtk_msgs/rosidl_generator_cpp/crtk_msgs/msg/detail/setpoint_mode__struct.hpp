// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from crtk_msgs:msg/SetpointMode.idl
// generated code does not contain a copyright notice

#ifndef CRTK_MSGS__MSG__DETAIL__SETPOINT_MODE__STRUCT_HPP_
#define CRTK_MSGS__MSG__DETAIL__SETPOINT_MODE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__crtk_msgs__msg__SetpointMode __attribute__((deprecated))
#else
# define DEPRECATED__crtk_msgs__msg__SetpointMode __declspec(deprecated)
#endif

namespace crtk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SetpointMode_
{
  using Type = SetpointMode_<ContainerAllocator>;

  explicit SetpointMode_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0;
    }
  }

  explicit SetpointMode_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0;
    }
  }

  // field types and members
  using _value_type =
    uint8_t;
  _value_type value;

  // setters for named parameter idiom
  Type & set__value(
    const uint8_t & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t POSITION =
    1u;
  static constexpr uint8_t VELOCITY =
    2u;
  static constexpr uint8_t EFFORT =
    4u;
  static constexpr uint8_t NONE =
    0u;
  static constexpr uint8_t P =
    1u;
  static constexpr uint8_t V =
    2u;
  static constexpr uint8_t PV =
    3u;
  static constexpr uint8_t F =
    4u;
  static constexpr uint8_t PF =
    5u;
  static constexpr uint8_t VF =
    6u;
  static constexpr uint8_t PVF =
    7u;

  // pointer types
  using RawPtr =
    crtk_msgs::msg::SetpointMode_<ContainerAllocator> *;
  using ConstRawPtr =
    const crtk_msgs::msg::SetpointMode_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<crtk_msgs::msg::SetpointMode_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<crtk_msgs::msg::SetpointMode_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      crtk_msgs::msg::SetpointMode_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<crtk_msgs::msg::SetpointMode_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      crtk_msgs::msg::SetpointMode_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<crtk_msgs::msg::SetpointMode_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<crtk_msgs::msg::SetpointMode_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<crtk_msgs::msg::SetpointMode_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__crtk_msgs__msg__SetpointMode
    std::shared_ptr<crtk_msgs::msg::SetpointMode_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__crtk_msgs__msg__SetpointMode
    std::shared_ptr<crtk_msgs::msg::SetpointMode_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetpointMode_ & other) const
  {
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetpointMode_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetpointMode_

// alias to use template instance with default allocator
using SetpointMode =
  crtk_msgs::msg::SetpointMode_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SetpointMode_<ContainerAllocator>::POSITION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SetpointMode_<ContainerAllocator>::VELOCITY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SetpointMode_<ContainerAllocator>::EFFORT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SetpointMode_<ContainerAllocator>::NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SetpointMode_<ContainerAllocator>::P;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SetpointMode_<ContainerAllocator>::V;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SetpointMode_<ContainerAllocator>::PV;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SetpointMode_<ContainerAllocator>::F;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SetpointMode_<ContainerAllocator>::PF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SetpointMode_<ContainerAllocator>::VF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SetpointMode_<ContainerAllocator>::PVF;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace crtk_msgs

#endif  // CRTK_MSGS__MSG__DETAIL__SETPOINT_MODE__STRUCT_HPP_
