// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from crtk_msgs:msg/CartesianServo.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "crtk_msgs/msg/detail/cartesian_servo__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace crtk_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void CartesianServo_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) crtk_msgs::msg::CartesianServo(_init);
}

void CartesianServo_fini_function(void * message_memory)
{
  auto typed_message = static_cast<crtk_msgs::msg::CartesianServo *>(message_memory);
  typed_message->~CartesianServo();
}

size_t size_function__CartesianServo__axis_mode(const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * get_const_function__CartesianServo__axis_mode(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<crtk_msgs::msg::SetpointMode, 6> *>(untyped_member);
  return &member[index];
}

void * get_function__CartesianServo__axis_mode(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<crtk_msgs::msg::SetpointMode, 6> *>(untyped_member);
  return &member[index];
}

void fetch_function__CartesianServo__axis_mode(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const crtk_msgs::msg::SetpointMode *>(
    get_const_function__CartesianServo__axis_mode(untyped_member, index));
  auto & value = *reinterpret_cast<crtk_msgs::msg::SetpointMode *>(untyped_value);
  value = item;
}

void assign_function__CartesianServo__axis_mode(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<crtk_msgs::msg::SetpointMode *>(
    get_function__CartesianServo__axis_mode(untyped_member, index));
  const auto & value = *reinterpret_cast<const crtk_msgs::msg::SetpointMode *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CartesianServo_message_member_array[6] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crtk_msgs::msg::CartesianServo, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "task_frame",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Transform>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crtk_msgs::msg::CartesianServo, task_frame),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pose",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crtk_msgs::msg::CartesianServo, pose),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "twist",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Twist>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crtk_msgs::msg::CartesianServo, twist),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "wrench",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Wrench>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crtk_msgs::msg::CartesianServo, wrench),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "axis_mode",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<crtk_msgs::msg::SetpointMode>(),  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(crtk_msgs::msg::CartesianServo, axis_mode),  // bytes offset in struct
    nullptr,  // default value
    size_function__CartesianServo__axis_mode,  // size() function pointer
    get_const_function__CartesianServo__axis_mode,  // get_const(index) function pointer
    get_function__CartesianServo__axis_mode,  // get(index) function pointer
    fetch_function__CartesianServo__axis_mode,  // fetch(index, &value) function pointer
    assign_function__CartesianServo__axis_mode,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CartesianServo_message_members = {
  "crtk_msgs::msg",  // message namespace
  "CartesianServo",  // message name
  6,  // number of fields
  sizeof(crtk_msgs::msg::CartesianServo),
  CartesianServo_message_member_array,  // message members
  CartesianServo_init_function,  // function to initialize message memory (memory has to be allocated)
  CartesianServo_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CartesianServo_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CartesianServo_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace crtk_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<crtk_msgs::msg::CartesianServo>()
{
  return &::crtk_msgs::msg::rosidl_typesupport_introspection_cpp::CartesianServo_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, crtk_msgs, msg, CartesianServo)() {
  return &::crtk_msgs::msg::rosidl_typesupport_introspection_cpp::CartesianServo_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
