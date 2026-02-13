// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from crtk_msgs:msg/JointServo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "crtk_msgs/msg/detail/joint_servo__rosidl_typesupport_introspection_c.h"
#include "crtk_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "crtk_msgs/msg/detail/joint_servo__functions.h"
#include "crtk_msgs/msg/detail/joint_servo__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `position`
// Member `velocity`
// Member `effort`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `mode`
#include "crtk_msgs/msg/setpoint_mode.h"
// Member `mode`
#include "crtk_msgs/msg/detail/setpoint_mode__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__JointServo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  crtk_msgs__msg__JointServo__init(message_memory);
}

void crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__JointServo_fini_function(void * message_memory)
{
  crtk_msgs__msg__JointServo__fini(message_memory);
}

size_t crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__size_function__JointServo__name(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__get_const_function__JointServo__name(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__get_function__JointServo__name(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__fetch_function__JointServo__name(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__get_const_function__JointServo__name(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__assign_function__JointServo__name(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__get_function__JointServo__name(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__resize_function__JointServo__name(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__size_function__JointServo__position(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__get_const_function__JointServo__position(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__get_function__JointServo__position(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__fetch_function__JointServo__position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__get_const_function__JointServo__position(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__assign_function__JointServo__position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__get_function__JointServo__position(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__resize_function__JointServo__position(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__size_function__JointServo__velocity(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__get_const_function__JointServo__velocity(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__get_function__JointServo__velocity(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__fetch_function__JointServo__velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__get_const_function__JointServo__velocity(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__assign_function__JointServo__velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__get_function__JointServo__velocity(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__resize_function__JointServo__velocity(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__size_function__JointServo__effort(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__get_const_function__JointServo__effort(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__get_function__JointServo__effort(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__fetch_function__JointServo__effort(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__get_const_function__JointServo__effort(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__assign_function__JointServo__effort(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__get_function__JointServo__effort(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__resize_function__JointServo__effort(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__size_function__JointServo__mode(
  const void * untyped_member)
{
  const crtk_msgs__msg__SetpointMode__Sequence * member =
    (const crtk_msgs__msg__SetpointMode__Sequence *)(untyped_member);
  return member->size;
}

const void * crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__get_const_function__JointServo__mode(
  const void * untyped_member, size_t index)
{
  const crtk_msgs__msg__SetpointMode__Sequence * member =
    (const crtk_msgs__msg__SetpointMode__Sequence *)(untyped_member);
  return &member->data[index];
}

void * crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__get_function__JointServo__mode(
  void * untyped_member, size_t index)
{
  crtk_msgs__msg__SetpointMode__Sequence * member =
    (crtk_msgs__msg__SetpointMode__Sequence *)(untyped_member);
  return &member->data[index];
}

void crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__fetch_function__JointServo__mode(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const crtk_msgs__msg__SetpointMode * item =
    ((const crtk_msgs__msg__SetpointMode *)
    crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__get_const_function__JointServo__mode(untyped_member, index));
  crtk_msgs__msg__SetpointMode * value =
    (crtk_msgs__msg__SetpointMode *)(untyped_value);
  *value = *item;
}

void crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__assign_function__JointServo__mode(
  void * untyped_member, size_t index, const void * untyped_value)
{
  crtk_msgs__msg__SetpointMode * item =
    ((crtk_msgs__msg__SetpointMode *)
    crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__get_function__JointServo__mode(untyped_member, index));
  const crtk_msgs__msg__SetpointMode * value =
    (const crtk_msgs__msg__SetpointMode *)(untyped_value);
  *item = *value;
}

bool crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__resize_function__JointServo__mode(
  void * untyped_member, size_t size)
{
  crtk_msgs__msg__SetpointMode__Sequence * member =
    (crtk_msgs__msg__SetpointMode__Sequence *)(untyped_member);
  crtk_msgs__msg__SetpointMode__Sequence__fini(member);
  return crtk_msgs__msg__SetpointMode__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__JointServo_message_member_array[6] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crtk_msgs__msg__JointServo, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crtk_msgs__msg__JointServo, name),  // bytes offset in struct
    NULL,  // default value
    crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__size_function__JointServo__name,  // size() function pointer
    crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__get_const_function__JointServo__name,  // get_const(index) function pointer
    crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__get_function__JointServo__name,  // get(index) function pointer
    crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__fetch_function__JointServo__name,  // fetch(index, &value) function pointer
    crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__assign_function__JointServo__name,  // assign(index, value) function pointer
    crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__resize_function__JointServo__name  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crtk_msgs__msg__JointServo, position),  // bytes offset in struct
    NULL,  // default value
    crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__size_function__JointServo__position,  // size() function pointer
    crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__get_const_function__JointServo__position,  // get_const(index) function pointer
    crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__get_function__JointServo__position,  // get(index) function pointer
    crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__fetch_function__JointServo__position,  // fetch(index, &value) function pointer
    crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__assign_function__JointServo__position,  // assign(index, value) function pointer
    crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__resize_function__JointServo__position  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crtk_msgs__msg__JointServo, velocity),  // bytes offset in struct
    NULL,  // default value
    crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__size_function__JointServo__velocity,  // size() function pointer
    crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__get_const_function__JointServo__velocity,  // get_const(index) function pointer
    crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__get_function__JointServo__velocity,  // get(index) function pointer
    crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__fetch_function__JointServo__velocity,  // fetch(index, &value) function pointer
    crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__assign_function__JointServo__velocity,  // assign(index, value) function pointer
    crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__resize_function__JointServo__velocity  // resize(index) function pointer
  },
  {
    "effort",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crtk_msgs__msg__JointServo, effort),  // bytes offset in struct
    NULL,  // default value
    crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__size_function__JointServo__effort,  // size() function pointer
    crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__get_const_function__JointServo__effort,  // get_const(index) function pointer
    crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__get_function__JointServo__effort,  // get(index) function pointer
    crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__fetch_function__JointServo__effort,  // fetch(index, &value) function pointer
    crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__assign_function__JointServo__effort,  // assign(index, value) function pointer
    crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__resize_function__JointServo__effort  // resize(index) function pointer
  },
  {
    "mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crtk_msgs__msg__JointServo, mode),  // bytes offset in struct
    NULL,  // default value
    crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__size_function__JointServo__mode,  // size() function pointer
    crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__get_const_function__JointServo__mode,  // get_const(index) function pointer
    crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__get_function__JointServo__mode,  // get(index) function pointer
    crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__fetch_function__JointServo__mode,  // fetch(index, &value) function pointer
    crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__assign_function__JointServo__mode,  // assign(index, value) function pointer
    crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__resize_function__JointServo__mode  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__JointServo_message_members = {
  "crtk_msgs__msg",  // message namespace
  "JointServo",  // message name
  6,  // number of fields
  sizeof(crtk_msgs__msg__JointServo),
  crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__JointServo_message_member_array,  // message members
  crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__JointServo_init_function,  // function to initialize message memory (memory has to be allocated)
  crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__JointServo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__JointServo_message_type_support_handle = {
  0,
  &crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__JointServo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_crtk_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crtk_msgs, msg, JointServo)() {
  crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__JointServo_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__JointServo_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crtk_msgs, msg, SetpointMode)();
  if (!crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__JointServo_message_type_support_handle.typesupport_identifier) {
    crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__JointServo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &crtk_msgs__msg__JointServo__rosidl_typesupport_introspection_c__JointServo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
