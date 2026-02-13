// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from crtk_msgs:msg/JointServo.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "crtk_msgs/msg/detail/joint_servo__struct.hpp"
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

void JointServo_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) crtk_msgs::msg::JointServo(_init);
}

void JointServo_fini_function(void * message_memory)
{
  auto typed_message = static_cast<crtk_msgs::msg::JointServo *>(message_memory);
  typed_message->~JointServo();
}

size_t size_function__JointServo__name(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__JointServo__name(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__JointServo__name(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__JointServo__name(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__JointServo__name(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__JointServo__name(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__JointServo__name(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__JointServo__name(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__JointServo__position(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__JointServo__position(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__JointServo__position(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__JointServo__position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__JointServo__position(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__JointServo__position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__JointServo__position(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__JointServo__position(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__JointServo__velocity(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__JointServo__velocity(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__JointServo__velocity(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__JointServo__velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__JointServo__velocity(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__JointServo__velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__JointServo__velocity(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__JointServo__velocity(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__JointServo__effort(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__JointServo__effort(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__JointServo__effort(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__JointServo__effort(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__JointServo__effort(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__JointServo__effort(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__JointServo__effort(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__JointServo__effort(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__JointServo__mode(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<crtk_msgs::msg::SetpointMode> *>(untyped_member);
  return member->size();
}

const void * get_const_function__JointServo__mode(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<crtk_msgs::msg::SetpointMode> *>(untyped_member);
  return &member[index];
}

void * get_function__JointServo__mode(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<crtk_msgs::msg::SetpointMode> *>(untyped_member);
  return &member[index];
}

void fetch_function__JointServo__mode(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const crtk_msgs::msg::SetpointMode *>(
    get_const_function__JointServo__mode(untyped_member, index));
  auto & value = *reinterpret_cast<crtk_msgs::msg::SetpointMode *>(untyped_value);
  value = item;
}

void assign_function__JointServo__mode(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<crtk_msgs::msg::SetpointMode *>(
    get_function__JointServo__mode(untyped_member, index));
  const auto & value = *reinterpret_cast<const crtk_msgs::msg::SetpointMode *>(untyped_value);
  item = value;
}

void resize_function__JointServo__mode(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<crtk_msgs::msg::SetpointMode> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember JointServo_message_member_array[6] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crtk_msgs::msg::JointServo, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crtk_msgs::msg::JointServo, name),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointServo__name,  // size() function pointer
    get_const_function__JointServo__name,  // get_const(index) function pointer
    get_function__JointServo__name,  // get(index) function pointer
    fetch_function__JointServo__name,  // fetch(index, &value) function pointer
    assign_function__JointServo__name,  // assign(index, value) function pointer
    resize_function__JointServo__name  // resize(index) function pointer
  },
  {
    "position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crtk_msgs::msg::JointServo, position),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointServo__position,  // size() function pointer
    get_const_function__JointServo__position,  // get_const(index) function pointer
    get_function__JointServo__position,  // get(index) function pointer
    fetch_function__JointServo__position,  // fetch(index, &value) function pointer
    assign_function__JointServo__position,  // assign(index, value) function pointer
    resize_function__JointServo__position  // resize(index) function pointer
  },
  {
    "velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crtk_msgs::msg::JointServo, velocity),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointServo__velocity,  // size() function pointer
    get_const_function__JointServo__velocity,  // get_const(index) function pointer
    get_function__JointServo__velocity,  // get(index) function pointer
    fetch_function__JointServo__velocity,  // fetch(index, &value) function pointer
    assign_function__JointServo__velocity,  // assign(index, value) function pointer
    resize_function__JointServo__velocity  // resize(index) function pointer
  },
  {
    "effort",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crtk_msgs::msg::JointServo, effort),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointServo__effort,  // size() function pointer
    get_const_function__JointServo__effort,  // get_const(index) function pointer
    get_function__JointServo__effort,  // get(index) function pointer
    fetch_function__JointServo__effort,  // fetch(index, &value) function pointer
    assign_function__JointServo__effort,  // assign(index, value) function pointer
    resize_function__JointServo__effort  // resize(index) function pointer
  },
  {
    "mode",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<crtk_msgs::msg::SetpointMode>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crtk_msgs::msg::JointServo, mode),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointServo__mode,  // size() function pointer
    get_const_function__JointServo__mode,  // get_const(index) function pointer
    get_function__JointServo__mode,  // get(index) function pointer
    fetch_function__JointServo__mode,  // fetch(index, &value) function pointer
    assign_function__JointServo__mode,  // assign(index, value) function pointer
    resize_function__JointServo__mode  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers JointServo_message_members = {
  "crtk_msgs::msg",  // message namespace
  "JointServo",  // message name
  6,  // number of fields
  sizeof(crtk_msgs::msg::JointServo),
  JointServo_message_member_array,  // message members
  JointServo_init_function,  // function to initialize message memory (memory has to be allocated)
  JointServo_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t JointServo_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &JointServo_message_members,
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
get_message_type_support_handle<crtk_msgs::msg::JointServo>()
{
  return &::crtk_msgs::msg::rosidl_typesupport_introspection_cpp::JointServo_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, crtk_msgs, msg, JointServo)() {
  return &::crtk_msgs::msg::rosidl_typesupport_introspection_cpp::JointServo_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
