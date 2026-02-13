// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from crtk_msgs:msg/SetpointMode.idl
// generated code does not contain a copyright notice

#ifndef CRTK_MSGS__MSG__DETAIL__SETPOINT_MODE__BUILDER_HPP_
#define CRTK_MSGS__MSG__DETAIL__SETPOINT_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "crtk_msgs/msg/detail/setpoint_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace crtk_msgs
{

namespace msg
{

namespace builder
{

class Init_SetpointMode_value
{
public:
  Init_SetpointMode_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::crtk_msgs::msg::SetpointMode value(::crtk_msgs::msg::SetpointMode::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::crtk_msgs::msg::SetpointMode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::crtk_msgs::msg::SetpointMode>()
{
  return crtk_msgs::msg::builder::Init_SetpointMode_value();
}

}  // namespace crtk_msgs

#endif  // CRTK_MSGS__MSG__DETAIL__SETPOINT_MODE__BUILDER_HPP_
