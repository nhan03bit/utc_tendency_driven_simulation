// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from crtk_msgs:msg/CartesianState.idl
// generated code does not contain a copyright notice
#include "crtk_msgs/msg/detail/cartesian_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `pose_is_valid`
// Member `twist_is_valid`
// Member `wrench_is_valid`
#include "std_msgs/msg/detail/bool__functions.h"
// Member `twist`
#include "geometry_msgs/msg/detail/twist__functions.h"
// Member `wrench`
#include "geometry_msgs/msg/detail/wrench__functions.h"

bool
crtk_msgs__msg__CartesianState__init(crtk_msgs__msg__CartesianState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    crtk_msgs__msg__CartesianState__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    crtk_msgs__msg__CartesianState__fini(msg);
    return false;
  }
  // pose_is_valid
  if (!std_msgs__msg__Bool__init(&msg->pose_is_valid)) {
    crtk_msgs__msg__CartesianState__fini(msg);
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__init(&msg->twist)) {
    crtk_msgs__msg__CartesianState__fini(msg);
    return false;
  }
  // twist_is_valid
  if (!std_msgs__msg__Bool__init(&msg->twist_is_valid)) {
    crtk_msgs__msg__CartesianState__fini(msg);
    return false;
  }
  // wrench
  if (!geometry_msgs__msg__Wrench__init(&msg->wrench)) {
    crtk_msgs__msg__CartesianState__fini(msg);
    return false;
  }
  // wrench_is_valid
  if (!std_msgs__msg__Bool__init(&msg->wrench_is_valid)) {
    crtk_msgs__msg__CartesianState__fini(msg);
    return false;
  }
  return true;
}

void
crtk_msgs__msg__CartesianState__fini(crtk_msgs__msg__CartesianState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // pose_is_valid
  std_msgs__msg__Bool__fini(&msg->pose_is_valid);
  // twist
  geometry_msgs__msg__Twist__fini(&msg->twist);
  // twist_is_valid
  std_msgs__msg__Bool__fini(&msg->twist_is_valid);
  // wrench
  geometry_msgs__msg__Wrench__fini(&msg->wrench);
  // wrench_is_valid
  std_msgs__msg__Bool__fini(&msg->wrench_is_valid);
}

bool
crtk_msgs__msg__CartesianState__are_equal(const crtk_msgs__msg__CartesianState * lhs, const crtk_msgs__msg__CartesianState * rhs)
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
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // pose_is_valid
  if (!std_msgs__msg__Bool__are_equal(
      &(lhs->pose_is_valid), &(rhs->pose_is_valid)))
  {
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__are_equal(
      &(lhs->twist), &(rhs->twist)))
  {
    return false;
  }
  // twist_is_valid
  if (!std_msgs__msg__Bool__are_equal(
      &(lhs->twist_is_valid), &(rhs->twist_is_valid)))
  {
    return false;
  }
  // wrench
  if (!geometry_msgs__msg__Wrench__are_equal(
      &(lhs->wrench), &(rhs->wrench)))
  {
    return false;
  }
  // wrench_is_valid
  if (!std_msgs__msg__Bool__are_equal(
      &(lhs->wrench_is_valid), &(rhs->wrench_is_valid)))
  {
    return false;
  }
  return true;
}

bool
crtk_msgs__msg__CartesianState__copy(
  const crtk_msgs__msg__CartesianState * input,
  crtk_msgs__msg__CartesianState * output)
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
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // pose_is_valid
  if (!std_msgs__msg__Bool__copy(
      &(input->pose_is_valid), &(output->pose_is_valid)))
  {
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__copy(
      &(input->twist), &(output->twist)))
  {
    return false;
  }
  // twist_is_valid
  if (!std_msgs__msg__Bool__copy(
      &(input->twist_is_valid), &(output->twist_is_valid)))
  {
    return false;
  }
  // wrench
  if (!geometry_msgs__msg__Wrench__copy(
      &(input->wrench), &(output->wrench)))
  {
    return false;
  }
  // wrench_is_valid
  if (!std_msgs__msg__Bool__copy(
      &(input->wrench_is_valid), &(output->wrench_is_valid)))
  {
    return false;
  }
  return true;
}

crtk_msgs__msg__CartesianState *
crtk_msgs__msg__CartesianState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crtk_msgs__msg__CartesianState * msg = (crtk_msgs__msg__CartesianState *)allocator.allocate(sizeof(crtk_msgs__msg__CartesianState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(crtk_msgs__msg__CartesianState));
  bool success = crtk_msgs__msg__CartesianState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
crtk_msgs__msg__CartesianState__destroy(crtk_msgs__msg__CartesianState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    crtk_msgs__msg__CartesianState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
crtk_msgs__msg__CartesianState__Sequence__init(crtk_msgs__msg__CartesianState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crtk_msgs__msg__CartesianState * data = NULL;

  if (size) {
    data = (crtk_msgs__msg__CartesianState *)allocator.zero_allocate(size, sizeof(crtk_msgs__msg__CartesianState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = crtk_msgs__msg__CartesianState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        crtk_msgs__msg__CartesianState__fini(&data[i - 1]);
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
crtk_msgs__msg__CartesianState__Sequence__fini(crtk_msgs__msg__CartesianState__Sequence * array)
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
      crtk_msgs__msg__CartesianState__fini(&array->data[i]);
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

crtk_msgs__msg__CartesianState__Sequence *
crtk_msgs__msg__CartesianState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crtk_msgs__msg__CartesianState__Sequence * array = (crtk_msgs__msg__CartesianState__Sequence *)allocator.allocate(sizeof(crtk_msgs__msg__CartesianState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = crtk_msgs__msg__CartesianState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
crtk_msgs__msg__CartesianState__Sequence__destroy(crtk_msgs__msg__CartesianState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    crtk_msgs__msg__CartesianState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
crtk_msgs__msg__CartesianState__Sequence__are_equal(const crtk_msgs__msg__CartesianState__Sequence * lhs, const crtk_msgs__msg__CartesianState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!crtk_msgs__msg__CartesianState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
crtk_msgs__msg__CartesianState__Sequence__copy(
  const crtk_msgs__msg__CartesianState__Sequence * input,
  crtk_msgs__msg__CartesianState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(crtk_msgs__msg__CartesianState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    crtk_msgs__msg__CartesianState * data =
      (crtk_msgs__msg__CartesianState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!crtk_msgs__msg__CartesianState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          crtk_msgs__msg__CartesianState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!crtk_msgs__msg__CartesianState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
