// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from crtk_msgs:msg/CartesianState.idl
// generated code does not contain a copyright notice

#ifndef CRTK_MSGS__MSG__DETAIL__CARTESIAN_STATE__BUILDER_HPP_
#define CRTK_MSGS__MSG__DETAIL__CARTESIAN_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "crtk_msgs/msg/detail/cartesian_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace crtk_msgs
{

namespace msg
{

namespace builder
{

class Init_CartesianState_wrench_is_valid
{
public:
  explicit Init_CartesianState_wrench_is_valid(::crtk_msgs::msg::CartesianState & msg)
  : msg_(msg)
  {}
  ::crtk_msgs::msg::CartesianState wrench_is_valid(::crtk_msgs::msg::CartesianState::_wrench_is_valid_type arg)
  {
    msg_.wrench_is_valid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::crtk_msgs::msg::CartesianState msg_;
};

class Init_CartesianState_wrench
{
public:
  explicit Init_CartesianState_wrench(::crtk_msgs::msg::CartesianState & msg)
  : msg_(msg)
  {}
  Init_CartesianState_wrench_is_valid wrench(::crtk_msgs::msg::CartesianState::_wrench_type arg)
  {
    msg_.wrench = std::move(arg);
    return Init_CartesianState_wrench_is_valid(msg_);
  }

private:
  ::crtk_msgs::msg::CartesianState msg_;
};

class Init_CartesianState_twist_is_valid
{
public:
  explicit Init_CartesianState_twist_is_valid(::crtk_msgs::msg::CartesianState & msg)
  : msg_(msg)
  {}
  Init_CartesianState_wrench twist_is_valid(::crtk_msgs::msg::CartesianState::_twist_is_valid_type arg)
  {
    msg_.twist_is_valid = std::move(arg);
    return Init_CartesianState_wrench(msg_);
  }

private:
  ::crtk_msgs::msg::CartesianState msg_;
};

class Init_CartesianState_twist
{
public:
  explicit Init_CartesianState_twist(::crtk_msgs::msg::CartesianState & msg)
  : msg_(msg)
  {}
  Init_CartesianState_twist_is_valid twist(::crtk_msgs::msg::CartesianState::_twist_type arg)
  {
    msg_.twist = std::move(arg);
    return Init_CartesianState_twist_is_valid(msg_);
  }

private:
  ::crtk_msgs::msg::CartesianState msg_;
};

class Init_CartesianState_pose_is_valid
{
public:
  explicit Init_CartesianState_pose_is_valid(::crtk_msgs::msg::CartesianState & msg)
  : msg_(msg)
  {}
  Init_CartesianState_twist pose_is_valid(::crtk_msgs::msg::CartesianState::_pose_is_valid_type arg)
  {
    msg_.pose_is_valid = std::move(arg);
    return Init_CartesianState_twist(msg_);
  }

private:
  ::crtk_msgs::msg::CartesianState msg_;
};

class Init_CartesianState_pose
{
public:
  explicit Init_CartesianState_pose(::crtk_msgs::msg::CartesianState & msg)
  : msg_(msg)
  {}
  Init_CartesianState_pose_is_valid pose(::crtk_msgs::msg::CartesianState::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_CartesianState_pose_is_valid(msg_);
  }

private:
  ::crtk_msgs::msg::CartesianState msg_;
};

class Init_CartesianState_header
{
public:
  Init_CartesianState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CartesianState_pose header(::crtk_msgs::msg::CartesianState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CartesianState_pose(msg_);
  }

private:
  ::crtk_msgs::msg::CartesianState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::crtk_msgs::msg::CartesianState>()
{
  return crtk_msgs::msg::builder::Init_CartesianState_header();
}

}  // namespace crtk_msgs

#endif  // CRTK_MSGS__MSG__DETAIL__CARTESIAN_STATE__BUILDER_HPP_
