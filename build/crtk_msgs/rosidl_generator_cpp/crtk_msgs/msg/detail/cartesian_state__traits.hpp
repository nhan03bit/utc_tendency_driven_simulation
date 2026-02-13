// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from crtk_msgs:msg/CartesianState.idl
// generated code does not contain a copyright notice

#ifndef CRTK_MSGS__MSG__DETAIL__CARTESIAN_STATE__TRAITS_HPP_
#define CRTK_MSGS__MSG__DETAIL__CARTESIAN_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "crtk_msgs/msg/detail/cartesian_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'pose_is_valid'
// Member 'twist_is_valid'
// Member 'wrench_is_valid'
#include "std_msgs/msg/detail/bool__traits.hpp"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__traits.hpp"
// Member 'wrench'
#include "geometry_msgs/msg/detail/wrench__traits.hpp"

namespace crtk_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CartesianState & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: pose_is_valid
  {
    out << "pose_is_valid: ";
    to_flow_style_yaml(msg.pose_is_valid, out);
    out << ", ";
  }

  // member: twist
  {
    out << "twist: ";
    to_flow_style_yaml(msg.twist, out);
    out << ", ";
  }

  // member: twist_is_valid
  {
    out << "twist_is_valid: ";
    to_flow_style_yaml(msg.twist_is_valid, out);
    out << ", ";
  }

  // member: wrench
  {
    out << "wrench: ";
    to_flow_style_yaml(msg.wrench, out);
    out << ", ";
  }

  // member: wrench_is_valid
  {
    out << "wrench_is_valid: ";
    to_flow_style_yaml(msg.wrench_is_valid, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CartesianState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: pose_is_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose_is_valid:\n";
    to_block_style_yaml(msg.pose_is_valid, out, indentation + 2);
  }

  // member: twist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "twist:\n";
    to_block_style_yaml(msg.twist, out, indentation + 2);
  }

  // member: twist_is_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "twist_is_valid:\n";
    to_block_style_yaml(msg.twist_is_valid, out, indentation + 2);
  }

  // member: wrench
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wrench:\n";
    to_block_style_yaml(msg.wrench, out, indentation + 2);
  }

  // member: wrench_is_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wrench_is_valid:\n";
    to_block_style_yaml(msg.wrench_is_valid, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CartesianState & msg, bool use_flow_style = false)
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
  const crtk_msgs::msg::CartesianState & msg,
  std::ostream & out, size_t indentation = 0)
{
  crtk_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use crtk_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const crtk_msgs::msg::CartesianState & msg)
{
  return crtk_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<crtk_msgs::msg::CartesianState>()
{
  return "crtk_msgs::msg::CartesianState";
}

template<>
inline const char * name<crtk_msgs::msg::CartesianState>()
{
  return "crtk_msgs/msg/CartesianState";
}

template<>
struct has_fixed_size<crtk_msgs::msg::CartesianState>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value && has_fixed_size<geometry_msgs::msg::Twist>::value && has_fixed_size<geometry_msgs::msg::Wrench>::value && has_fixed_size<std_msgs::msg::Bool>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<crtk_msgs::msg::CartesianState>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value && has_bounded_size<geometry_msgs::msg::Twist>::value && has_bounded_size<geometry_msgs::msg::Wrench>::value && has_bounded_size<std_msgs::msg::Bool>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<crtk_msgs::msg::CartesianState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CRTK_MSGS__MSG__DETAIL__CARTESIAN_STATE__TRAITS_HPP_
