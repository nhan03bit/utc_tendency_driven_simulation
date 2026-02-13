// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from crtk_msgs:msg/CartesianServo.idl
// generated code does not contain a copyright notice
#include "crtk_msgs/msg/detail/cartesian_servo__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `task_frame`
#include "geometry_msgs/msg/detail/transform__functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `twist`
#include "geometry_msgs/msg/detail/twist__functions.h"
// Member `wrench`
#include "geometry_msgs/msg/detail/wrench__functions.h"
// Member `axis_mode`
#include "crtk_msgs/msg/detail/setpoint_mode__functions.h"

bool
crtk_msgs__msg__CartesianServo__init(crtk_msgs__msg__CartesianServo * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    crtk_msgs__msg__CartesianServo__fini(msg);
    return false;
  }
  // task_frame
  if (!geometry_msgs__msg__Transform__init(&msg->task_frame)) {
    crtk_msgs__msg__CartesianServo__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    crtk_msgs__msg__CartesianServo__fini(msg);
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__init(&msg->twist)) {
    crtk_msgs__msg__CartesianServo__fini(msg);
    return false;
  }
  // wrench
  if (!geometry_msgs__msg__Wrench__init(&msg->wrench)) {
    crtk_msgs__msg__CartesianServo__fini(msg);
    return false;
  }
  // axis_mode
  for (size_t i = 0; i < 6; ++i) {
    if (!crtk_msgs__msg__SetpointMode__init(&msg->axis_mode[i])) {
      crtk_msgs__msg__CartesianServo__fini(msg);
      return false;
    }
  }
  return true;
}

void
crtk_msgs__msg__CartesianServo__fini(crtk_msgs__msg__CartesianServo * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // task_frame
  geometry_msgs__msg__Transform__fini(&msg->task_frame);
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // twist
  geometry_msgs__msg__Twist__fini(&msg->twist);
  // wrench
  geometry_msgs__msg__Wrench__fini(&msg->wrench);
  // axis_mode
  for (size_t i = 0; i < 6; ++i) {
    crtk_msgs__msg__SetpointMode__fini(&msg->axis_mode[i]);
  }
}

bool
crtk_msgs__msg__CartesianServo__are_equal(const crtk_msgs__msg__CartesianServo * lhs, const crtk_msgs__msg__CartesianServo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // task_frame
  if (!geometry_msgs__msg__Transform__are_equal(
      &(lhs->task_frame), &(rhs->task_frame)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__are_equal(
      &(lhs->twist), &(rhs->twist)))
  {
    return false;
  }
  // wrench
  if (!geometry_msgs__msg__Wrench__are_equal(
      &(lhs->wrench), &(rhs->wrench)))
  {
    return false;
  }
  // axis_mode
  for (size_t i = 0; i < 6; ++i) {
    if (!crtk_msgs__msg__SetpointMode__are_equal(
        &(lhs->axis_mode[i]), &(rhs->axis_mode[i])))
    {
      return false;
    }
  }
  return true;
}

bool
crtk_msgs__msg__CartesianServo__copy(
  const crtk_msgs__msg__CartesianServo * input,
  crtk_msgs__msg__CartesianServo * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // task_frame
  if (!geometry_msgs__msg__Transform__copy(
      &(input->task_frame), &(output->task_frame)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__copy(
      &(input->twist), &(output->twist)))
  {
    return false;
  }
  // wrench
  if (!geometry_msgs__msg__Wrench__copy(
      &(input->wrench), &(output->wrench)))
  {
    return false;
  }
  // axis_mode
  for (size_t i = 0; i < 6; ++i) {
    if (!crtk_msgs__msg__SetpointMode__copy(
        &(input->axis_mode[i]), &(output->axis_mode[i])))
    {
      return false;
    }
  }
  return true;
}

crtk_msgs__msg__CartesianServo *
crtk_msgs__msg__CartesianServo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crtk_msgs__msg__CartesianServo * msg = (crtk_msgs__msg__CartesianServo *)allocator.allocate(sizeof(crtk_msgs__msg__CartesianServo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(crtk_msgs__msg__CartesianServo));
  bool success = crtk_msgs__msg__CartesianServo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
crtk_msgs__msg__CartesianServo__destroy(crtk_msgs__msg__CartesianServo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    crtk_msgs__msg__CartesianServo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
crtk_msgs__msg__CartesianServo__Sequence__init(crtk_msgs__msg__CartesianServo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crtk_msgs__msg__CartesianServo * data = NULL;

  if (size) {
    data = (crtk_msgs__msg__CartesianServo *)allocator.zero_allocate(size, sizeof(crtk_msgs__msg__CartesianServo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = crtk_msgs__msg__CartesianServo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        crtk_msgs__msg__CartesianServo__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
crtk_msgs__msg__CartesianServo__Sequence__fini(crtk_msgs__msg__CartesianServo__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      crtk_msgs__msg__CartesianServo__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

crtk_msgs__msg__CartesianServo__Sequence *
crtk_msgs__msg__CartesianServo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crtk_msgs__msg__CartesianServo__Sequence * array = (crtk_msgs__msg__CartesianServo__Sequence *)allocator.allocate(sizeof(crtk_msgs__msg__CartesianServo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = crtk_msgs__msg__CartesianServo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
crtk_msgs__msg__CartesianServo__Sequence__destroy(crtk_msgs__msg__CartesianServo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    crtk_msgs__msg__CartesianServo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
crtk_msgs__msg__CartesianServo__Sequence__are_equal(const crtk_msgs__msg__CartesianServo__Sequence * lhs, const crtk_msgs__msg__CartesianServo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!crtk_msgs__msg__CartesianServo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
crtk_msgs__msg__CartesianServo__Sequence__copy(
  const crtk_msgs__msg__CartesianServo__Sequence * input,
  crtk_msgs__msg__CartesianServo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(crtk_msgs__msg__CartesianServo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    crtk_msgs__msg__CartesianServo * data =
      (crtk_msgs__msg__CartesianServo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!crtk_msgs__msg__CartesianServo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          crtk_msgs__msg__CartesianServo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!crtk_msgs__msg__CartesianServo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
