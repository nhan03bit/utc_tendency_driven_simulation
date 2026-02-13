// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from crtk_msgs:msg/CartesianServo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "crtk_msgs/msg/detail/cartesian_servo__rosidl_typesupport_introspection_c.h"
#include "crtk_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "crtk_msgs/msg/detail/cartesian_servo__functions.h"
#include "crtk_msgs/msg/detail/cartesian_servo__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `task_frame`
#include "geometry_msgs/msg/transform.h"
// Member `task_frame`
#include "geometry_msgs/msg/detail/transform__rosidl_typesupport_introspection_c.h"
// Member `pose`
#include "geometry_msgs/msg/pose.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `twist`
#include "geometry_msgs/msg/twist.h"
// Member `twist`
#include "geometry_msgs/msg/detail/twist__rosidl_typesupport_introspection_c.h"
// Member `wrench`
#include "geometry_msgs/msg/wrench.h"
// Member `wrench`
#include "geometry_msgs/msg/detail/wrench__rosidl_typesupport_introspection_c.h"
// Member `axis_mode`
#include "crtk_msgs/msg/setpoint_mode.h"
// Member `axis_mode`
#include "crtk_msgs/msg/detail/setpoint_mode__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void crtk_msgs__msg__CartesianServo__rosidl_typesupport_introspection_c__CartesianServo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  crtk_msgs__msg__CartesianServo__init(message_memory);
}

void crtk_msgs__msg__CartesianServo__rosidl_typesupport_introspection_c__CartesianServo_fini_function(void * message_memory)
{
  crtk_msgs__msg__CartesianServo__fini(message_memory);
}

size_t crtk_msgs__msg__CartesianServo__rosidl_typesupport_introspection_c__size_function__CartesianServo__axis_mode(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * crtk_msgs__msg__CartesianServo__rosidl_typesupport_introspection_c__get_const_function__CartesianServo__axis_mode(
  const void * untyped_member, size_t index)
{
  const crtk_msgs__msg__SetpointMode * member =
    (const crtk_msgs__msg__SetpointMode *)(untyped_member);
  return &member[index];
}

void * crtk_msgs__msg__CartesianServo__rosidl_typesupport_introspection_c__get_function__CartesianServo__axis_mode(
  void * untyped_member, size_t index)
{
  crtk_msgs__msg__SetpointMode * member =
    (crtk_msgs__msg__SetpointMode *)(untyped_member);
  return &member[index];
}

void crtk_msgs__msg__CartesianServo__rosidl_typesupport_introspection_c__fetch_function__CartesianServo__axis_mode(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const crtk_msgs__msg__SetpointMode * item =
    ((const crtk_msgs__msg__SetpointMode *)
    crtk_msgs__msg__CartesianServo__rosidl_typesupport_introspection_c__get_const_function__CartesianServo__axis_mode(untyped_member, index));
  crtk_msgs__msg__SetpointMode * value =
    (crtk_msgs__msg__SetpointMode *)(untyped_value);
  *value = *item;
}

void crtk_msgs__msg__CartesianServo__rosidl_typesupport_introspection_c__assign_function__CartesianServo__axis_mode(
  void * untyped_member, size_t index, const void * untyped_value)
{
  crtk_msgs__msg__SetpointMode * item =
    ((crtk_msgs__msg__SetpointMode *)
    crtk_msgs__msg__CartesianServo__rosidl_typesupport_introspection_c__get_function__CartesianServo__axis_mode(untyped_member, index));
  const crtk_msgs__msg__SetpointMode * value =
    (const crtk_msgs__msg__SetpointMode *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember crtk_msgs__msg__CartesianServo__rosidl_typesupport_introspection_c__CartesianServo_message_member_array[6] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crtk_msgs__msg__CartesianServo, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "task_frame",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crtk_msgs__msg__CartesianServo, task_frame),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crtk_msgs__msg__CartesianServo, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "twist",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crtk_msgs__msg__CartesianServo, twist),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wrench",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crtk_msgs__msg__CartesianServo, wrench),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "axis_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(crtk_msgs__msg__CartesianServo, axis_mode),  // bytes offset in struct
    NULL,  // default value
    crtk_msgs__msg__CartesianServo__rosidl_typesupport_introspection_c__size_function__CartesianServo__axis_mode,  // size() function pointer
    crtk_msgs__msg__CartesianServo__rosidl_typesupport_introspection_c__get_const_function__CartesianServo__axis_mode,  // get_const(index) function pointer
    crtk_msgs__msg__CartesianServo__rosidl_typesupport_introspection_c__get_function__CartesianServo__axis_mode,  // get(index) function pointer
    crtk_msgs__msg__CartesianServo__rosidl_typesupport_introspection_c__fetch_function__CartesianServo__axis_mode,  // fetch(index, &value) function pointer
    crtk_msgs__msg__CartesianServo__rosidl_typesupport_introspection_c__assign_function__CartesianServo__axis_mode,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers crtk_msgs__msg__CartesianServo__rosidl_typesupport_introspection_c__CartesianServo_message_members = {
  "crtk_msgs__msg",  // message namespace
  "CartesianServo",  // message name
  6,  // number of fields
  sizeof(crtk_msgs__msg__CartesianServo),
  crtk_msgs__msg__CartesianServo__rosidl_typesupport_introspection_c__CartesianServo_message_member_array,  // message members
  crtk_msgs__msg__CartesianServo__rosidl_typesupport_introspection_c__CartesianServo_init_function,  // function to initialize message memory (memory has to be allocated)
  crtk_msgs__msg__CartesianServo__rosidl_typesupport_introspection_c__CartesianServo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t crtk_msgs__msg__CartesianServo__rosidl_typesupport_introspection_c__CartesianServo_message_type_support_handle = {
  0,
  &crtk_msgs__msg__CartesianServo__rosidl_typesupport_introspection_c__CartesianServo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_crtk_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crtk_msgs, msg, CartesianServo)() {
  crtk_msgs__msg__CartesianServo__rosidl_typesupport_introspection_c__CartesianServo_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  crtk_msgs__msg__CartesianServo__rosidl_typesupport_introspection_c__CartesianServo_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Transform)();
  crtk_msgs__msg__CartesianServo__rosidl_typesupport_introspection_c__CartesianServo_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  crtk_msgs__msg__CartesianServo__rosidl_typesupport_introspection_c__CartesianServo_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Twist)();
  crtk_msgs__msg__CartesianServo__rosidl_typesupport_introspection_c__CartesianServo_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Wrench)();
  crtk_msgs__msg__CartesianServo__rosidl_typesupport_introspection_c__CartesianServo_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crtk_msgs, msg, SetpointMode)();
  if (!crtk_msgs__msg__CartesianServo__rosidl_typesupport_introspection_c__CartesianServo_message_type_support_handle.typesupport_identifier) {
    crtk_msgs__msg__CartesianServo__rosidl_typesupport_introspection_c__CartesianServo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &crtk_msgs__msg__CartesianServo__rosidl_typesupport_introspection_c__CartesianServo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
