// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from crtk_msgs:msg/SetpointMode.idl
// generated code does not contain a copyright notice

#ifndef CRTK_MSGS__MSG__DETAIL__SETPOINT_MODE__TRAITS_HPP_
#define CRTK_MSGS__MSG__DETAIL__SETPOINT_MODE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "crtk_msgs/msg/detail/setpoint_mode__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace crtk_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SetpointMode & msg,
  std::ostream & out)
{
  out << "{";
  // member: value
  {
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetpointMode & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetpointMode & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace crtk_msgs

namespace rosidl_generator_traits
{

[[deprecated("use crtk_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const crtk_msgs::msg::SetpointMode & msg,
  std::ostream & out, size_t indentation = 0)
{
  crtk_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use crtk_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const crtk_msgs::msg::SetpointMode & msg)
{
  return crtk_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<crtk_msgs::msg::SetpointMode>()
{
  return "crtk_msgs::msg::SetpointMode";
}

template<>
inline const char * name<crtk_msgs::msg::SetpointMode>()
{
  return "crtk_msgs/msg/SetpointMode";
}

template<>
struct has_fixed_size<crtk_msgs::msg::SetpointMode>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<crtk_msgs::msg::SetpointMode>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<crtk_msgs::msg::SetpointMode>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CRTK_MSGS__MSG__DETAIL__SETPOINT_MODE__TRAITS_HPP_
