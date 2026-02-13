// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from crtk_msgs:msg/JointServo.idl
// generated code does not contain a copyright notice

#ifndef CRTK_MSGS__MSG__DETAIL__JOINT_SERVO__STRUCT_H_
#define CRTK_MSGS__MSG__DETAIL__JOINT_SERVO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'position'
// Member 'velocity'
// Member 'effort'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'mode'
#include "crtk_msgs/msg/detail/setpoint_mode__struct.h"

/// Struct defined in msg/JointServo in the package crtk_msgs.
typedef struct crtk_msgs__msg__JointServo
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String__Sequence name;
  rosidl_runtime_c__double__Sequence position;
  rosidl_runtime_c__double__Sequence velocity;
  rosidl_runtime_c__double__Sequence effort;
  crtk_msgs__msg__SetpointMode__Sequence mode;
} crtk_msgs__msg__JointServo;

// Struct for a sequence of crtk_msgs__msg__JointServo.
typedef struct crtk_msgs__msg__JointServo__Sequence
{
  crtk_msgs__msg__JointServo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crtk_msgs__msg__JointServo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CRTK_MSGS__MSG__DETAIL__JOINT_SERVO__STRUCT_H_
