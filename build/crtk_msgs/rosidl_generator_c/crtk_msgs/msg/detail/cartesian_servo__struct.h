// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from crtk_msgs:msg/CartesianServo.idl
// generated code does not contain a copyright notice

#ifndef CRTK_MSGS__MSG__DETAIL__CARTESIAN_SERVO__STRUCT_H_
#define CRTK_MSGS__MSG__DETAIL__CARTESIAN_SERVO__STRUCT_H_

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
// Member 'task_frame'
#include "geometry_msgs/msg/detail/transform__struct.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__struct.h"
// Member 'wrench'
#include "geometry_msgs/msg/detail/wrench__struct.h"
// Member 'axis_mode'
#include "crtk_msgs/msg/detail/setpoint_mode__struct.h"

/// Struct defined in msg/CartesianServo in the package crtk_msgs.
typedef struct crtk_msgs__msg__CartesianServo
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Transform task_frame;
  geometry_msgs__msg__Pose pose;
  geometry_msgs__msg__Twist twist;
  geometry_msgs__msg__Wrench wrench;
  crtk_msgs__msg__SetpointMode axis_mode[6];
} crtk_msgs__msg__CartesianServo;

// Struct for a sequence of crtk_msgs__msg__CartesianServo.
typedef struct crtk_msgs__msg__CartesianServo__Sequence
{
  crtk_msgs__msg__CartesianServo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crtk_msgs__msg__CartesianServo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CRTK_MSGS__MSG__DETAIL__CARTESIAN_SERVO__STRUCT_H_
