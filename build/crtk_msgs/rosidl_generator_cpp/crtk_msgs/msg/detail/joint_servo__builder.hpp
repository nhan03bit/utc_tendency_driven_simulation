// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from crtk_msgs:msg/JointServo.idl
// generated code does not contain a copyright notice

#ifndef CRTK_MSGS__MSG__DETAIL__JOINT_SERVO__BUILDER_HPP_
#define CRTK_MSGS__MSG__DETAIL__JOINT_SERVO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "crtk_msgs/msg/detail/joint_servo__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace crtk_msgs
{

namespace msg
{

namespace builder
{

class Init_JointServo_mode
{
public:
  explicit Init_JointServo_mode(::crtk_msgs::msg::JointServo & msg)
  : msg_(msg)
  {}
  ::crtk_msgs::msg::JointServo mode(::crtk_msgs::msg::JointServo::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::crtk_msgs::msg::JointServo msg_;
};

class Init_JointServo_effort
{
public:
  explicit Init_JointServo_effort(::crtk_msgs::msg::JointServo & msg)
  : msg_(msg)
  {}
  Init_JointServo_mode effort(::crtk_msgs::msg::JointServo::_effort_type arg)
  {
    msg_.effort = std::move(arg);
    return Init_JointServo_mode(msg_);
  }

private:
  ::crtk_msgs::msg::JointServo msg_;
};

class Init_JointServo_velocity
{
public:
  explicit Init_JointServo_velocity(::crtk_msgs::msg::JointServo & msg)
  : msg_(msg)
  {}
  Init_JointServo_effort velocity(::crtk_msgs::msg::JointServo::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_JointServo_effort(msg_);
  }

private:
  ::crtk_msgs::msg::JointServo msg_;
};

class Init_JointServo_position
{
public:
  explicit Init_JointServo_position(::crtk_msgs::msg::JointServo & msg)
  : msg_(msg)
  {}
  Init_JointServo_velocity position(::crtk_msgs::msg::JointServo::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_JointServo_velocity(msg_);
  }

private:
  ::crtk_msgs::msg::JointServo msg_;
};

class Init_JointServo_name
{
public:
  explicit Init_JointServo_name(::crtk_msgs::msg::JointServo & msg)
  : msg_(msg)
  {}
  Init_JointServo_position name(::crtk_msgs::msg::JointServo::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_JointServo_position(msg_);
  }

private:
  ::crtk_msgs::msg::JointServo msg_;
};

class Init_JointServo_header
{
public:
  Init_JointServo_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointServo_name header(::crtk_msgs::msg::JointServo::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_JointServo_name(msg_);
  }

private:
  ::crtk_msgs::msg::JointServo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::crtk_msgs::msg::JointServo>()
{
  return crtk_msgs::msg::builder::Init_JointServo_header();
}

}  // namespace crtk_msgs

#endif  // CRTK_MSGS__MSG__DETAIL__JOINT_SERVO__BUILDER_HPP_
