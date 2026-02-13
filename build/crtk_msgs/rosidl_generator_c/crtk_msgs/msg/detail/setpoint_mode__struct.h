// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from crtk_msgs:msg/SetpointMode.idl
// generated code does not contain a copyright notice

#ifndef CRTK_MSGS__MSG__DETAIL__SETPOINT_MODE__STRUCT_H_
#define CRTK_MSGS__MSG__DETAIL__SETPOINT_MODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'POSITION'.
enum
{
  crtk_msgs__msg__SetpointMode__POSITION = 1
};

/// Constant 'VELOCITY'.
enum
{
  crtk_msgs__msg__SetpointMode__VELOCITY = 2
};

/// Constant 'EFFORT'.
enum
{
  crtk_msgs__msg__SetpointMode__EFFORT = 4
};

/// Constant 'NONE'.
enum
{
  crtk_msgs__msg__SetpointMode__NONE = 0
};

/// Constant 'P'.
enum
{
  crtk_msgs__msg__SetpointMode__P = 1
};

/// Constant 'V'.
enum
{
  crtk_msgs__msg__SetpointMode__V = 2
};

/// Constant 'PV'.
enum
{
  crtk_msgs__msg__SetpointMode__PV = 3
};

/// Constant 'F'.
enum
{
  crtk_msgs__msg__SetpointMode__F = 4
};

/// Constant 'PF'.
enum
{
  crtk_msgs__msg__SetpointMode__PF = 5
};

/// Constant 'VF'.
enum
{
  crtk_msgs__msg__SetpointMode__VF = 6
};

/// Constant 'PVF'.
enum
{
  crtk_msgs__msg__SetpointMode__PVF = 7
};

/// Struct defined in msg/SetpointMode in the package crtk_msgs.
typedef struct crtk_msgs__msg__SetpointMode
{
  uint8_t value;
} crtk_msgs__msg__SetpointMode;

// Struct for a sequence of crtk_msgs__msg__SetpointMode.
typedef struct crtk_msgs__msg__SetpointMode__Sequence
{
  crtk_msgs__msg__SetpointMode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crtk_msgs__msg__SetpointMode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CRTK_MSGS__MSG__DETAIL__SETPOINT_MODE__STRUCT_H_
