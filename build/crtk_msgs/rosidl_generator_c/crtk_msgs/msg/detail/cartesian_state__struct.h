// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from crtk_msgs:msg/CartesianState.idl
// generated code does not contain a copyright notice

#ifndef CRTK_MSGS__MSG__DETAIL__CARTESIAN_STATE__STRUCT_H_
#define CRTK_MSGS__MSG__DETAIL__CARTESIAN_STATE__STRUCT_H_

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
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'pose_is_valid'
// Member 'twist_is_valid'
// Member 'wrench_is_valid'
#include "std_msgs/msg/detail/bool__struct.h"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__struct.h"
// Member 'wrench'
#include "geometry_msgs/msg/detail/wrench__struct.h"

/// Struct defined in msg/CartesianState in the package crtk_msgs.
typedef struct crtk_msgs__msg__CartesianState
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Pose pose;
  std_msgs__msg__Bool pose_is_valid;
  geometry_msgs__msg__Twist twist;
  std_msgs__msg__Bool twist_is_valid;
  geometry_msgs__msg__Wrench wrench;
  std_msgs__msg__Bool wrench_is_valid;
} crtk_msgs__msg__CartesianState;

// Struct for a sequence of crtk_msgs__msg__CartesianState.
typedef struct crtk_msgs__msg__CartesianState__Sequence
{
  crtk_msgs__msg__CartesianState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crtk_msgs__msg__CartesianState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CRTK_MSGS__MSG__DETAIL__CARTESIAN_STATE__STRUCT_H_
