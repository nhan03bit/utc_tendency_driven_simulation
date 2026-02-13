// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from crtk_msgs:msg/CartesianServo.idl
// generated code does not contain a copyright notice

#ifndef CRTK_MSGS__MSG__DETAIL__CARTESIAN_SERVO__BUILDER_HPP_
#define CRTK_MSGS__MSG__DETAIL__CARTESIAN_SERVO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "crtk_msgs/msg/detail/cartesian_servo__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace crtk_msgs
{

namespace msg
{

namespace builder
{

class Init_CartesianServo_axis_mode
{
public:
  explicit Init_CartesianServo_axis_mode(::crtk_msgs::msg::CartesianServo & msg)
  : msg_(msg)
  {}
  ::crtk_msgs::msg::CartesianServo axis_mode(::crtk_msgs::msg::CartesianServo::_axis_mode_type arg)
  {
    msg_.axis_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::crtk_msgs::msg::CartesianServo msg_;
};

class Init_CartesianServo_wrench
{
public:
  explicit Init_CartesianServo_wrench(::crtk_msgs::msg::CartesianServo & msg)
  : msg_(msg)
  {}
  Init_CartesianServo_axis_mode wrench(::crtk_msgs::msg::CartesianServo::_wrench_type arg)
  {
    msg_.wrench = std::move(arg);
    return Init_CartesianServo_axis_mode(msg_);
  }

private:
  ::crtk_msgs::msg::CartesianServo msg_;
};

class Init_CartesianServo_twist
{
public:
  explicit Init_CartesianServo_twist(::crtk_msgs::msg::CartesianServo & msg)
  : msg_(msg)
  {}
  Init_CartesianServo_wrench twist(::crtk_msgs::msg::CartesianServo::_twist_type arg)
  {
    msg_.twist = std::move(arg);
    return Init_CartesianServo_wrench(msg_);
  }

private:
  ::crtk_msgs::msg::CartesianServo msg_;
};

class Init_CartesianServo_pose
{
public:
  explicit Init_CartesianServo_pose(::crtk_msgs::msg::CartesianServo & msg)
  : msg_(msg)
  {}
  Init_CartesianServo_twist pose(::crtk_msgs::msg::CartesianServo::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_CartesianServo_twist(msg_);
  }

private:
  ::crtk_msgs::msg::CartesianServo msg_;
};

class Init_CartesianServo_task_frame
{
public:
  explicit Init_CartesianServo_task_frame(::crtk_msgs::msg::CartesianServo & msg)
  : msg_(msg)
  {}
  Init_CartesianServo_pose task_frame(::crtk_msgs::msg::CartesianServo::_task_frame_type arg)
  {
    msg_.task_frame = std::move(arg);
    return Init_CartesianServo_pose(msg_);
  }

private:
  ::crtk_msgs::msg::CartesianServo msg_;
};

class Init_CartesianServo_header
{
public:
  Init_CartesianServo_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CartesianServo_task_frame header(::crtk_msgs::msg::CartesianServo::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CartesianServo_task_frame(msg_);
  }

private:
  ::crtk_msgs::msg::CartesianServo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::crtk_msgs::msg::CartesianServo>()
{
  return crtk_msgs::msg::builder::Init_CartesianServo_header();
}

}  // namespace crtk_msgs

#endif  // CRTK_MSGS__MSG__DETAIL__CARTESIAN_SERVO__BUILDER_HPP_
