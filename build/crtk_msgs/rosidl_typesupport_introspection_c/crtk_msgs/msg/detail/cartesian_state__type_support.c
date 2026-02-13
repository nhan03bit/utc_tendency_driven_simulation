// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from crtk_msgs:msg/CartesianState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "crtk_msgs/msg/detail/cartesian_state__rosidl_typesupport_introspection_c.h"
#include "crtk_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "crtk_msgs/msg/detail/cartesian_state__functions.h"
#include "crtk_msgs/msg/detail/cartesian_state__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `pose`
#include "geometry_msgs/msg/pose.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `pose_is_valid`
// Member `twist_is_valid`
// Member `wrench_is_valid`
#include "std_msgs/msg/bool.h"
// Member `pose_is_valid`
// Member `twist_is_valid`
// Member `wrench_is_valid`
#include "std_msgs/msg/detail/bool__rosidl_typesupport_introspection_c.h"
// Member `twist`
#include "geometry_msgs/msg/twist.h"
// Member `twist`
#include "geometry_msgs/msg/detail/twist__rosidl_typesupport_introspection_c.h"
// Member `wrench`
#include "geometry_msgs/msg/wrench.h"
// Member `wrench`
#include "geometry_msgs/msg/detail/wrench__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void crtk_msgs__msg__CartesianState__rosidl_typesupport_introspection_c__CartesianState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  crtk_msgs__msg__CartesianState__init(message_memory);
}

void crtk_msgs__msg__CartesianState__rosidl_typesupport_introspection_c__CartesianState_fini_function(void * message_memory)
{
  crtk_msgs__msg__CartesianState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember crtk_msgs__msg__CartesianState__rosidl_typesupport_introspection_c__CartesianState_message_member_array[7] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crtk_msgs__msg__CartesianState, header),  // bytes offset in struct
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
    offsetof(crtk_msgs__msg__CartesianState, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose_is_valid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crtk_msgs__msg__CartesianState, pose_is_valid),  // bytes offset in struct
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
    offsetof(crtk_msgs__msg__CartesianState, twist),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "twist_is_valid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crtk_msgs__msg__CartesianState, twist_is_valid),  // bytes offset in struct
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
    offsetof(crtk_msgs__msg__CartesianState, wrench),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wrench_is_valid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crtk_msgs__msg__CartesianState, wrench_is_valid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers crtk_msgs__msg__CartesianState__rosidl_typesupport_introspection_c__CartesianState_message_members = {
  "crtk_msgs__msg",  // message namespace
  "CartesianState",  // message name
  7,  // number of fields
  sizeof(crtk_msgs__msg__CartesianState),
  crtk_msgs__msg__CartesianState__rosidl_typesupport_introspection_c__CartesianState_message_member_array,  // message members
  crtk_msgs__msg__CartesianState__rosidl_typesupport_introspection_c__CartesianState_init_function,  // function to initialize message memory (memory has to be allocated)
  crtk_msgs__msg__CartesianState__rosidl_typesupport_introspection_c__CartesianState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t crtk_msgs__msg__CartesianState__rosidl_typesupport_introspection_c__CartesianState_message_type_support_handle = {
  0,
  &crtk_msgs__msg__CartesianState__rosidl_typesupport_introspection_c__CartesianState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_crtk_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crtk_msgs, msg, CartesianState)() {
  crtk_msgs__msg__CartesianState__rosidl_typesupport_introspection_c__CartesianState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  crtk_msgs__msg__CartesianState__rosidl_typesupport_introspection_c__CartesianState_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  crtk_msgs__msg__CartesianState__rosidl_typesupport_introspection_c__CartesianState_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Bool)();
  crtk_msgs__msg__CartesianState__rosidl_typesupport_introspection_c__CartesianState_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Twist)();
  crtk_msgs__msg__CartesianState__rosidl_typesupport_introspection_c__CartesianState_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Bool)();
  crtk_msgs__msg__CartesianState__rosidl_typesupport_introspection_c__CartesianState_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Wrench)();
  crtk_msgs__msg__CartesianState__rosidl_typesupport_introspection_c__CartesianState_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Bool)();
  if (!crtk_msgs__msg__CartesianState__rosidl_typesupport_introspection_c__CartesianState_message_type_support_handle.typesupport_identifier) {
    crtk_msgs__msg__CartesianState__rosidl_typesupport_introspection_c__CartesianState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &crtk_msgs__msg__CartesianState__rosidl_typesupport_introspection_c__CartesianState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
