// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from crtk_msgs:msg/JointServo.idl
// generated code does not contain a copyright notice
#include "crtk_msgs/msg/detail/joint_servo__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `position`
// Member `velocity`
// Member `effort`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `mode`
#include "crtk_msgs/msg/detail/setpoint_mode__functions.h"

bool
crtk_msgs__msg__JointServo__init(crtk_msgs__msg__JointServo * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    crtk_msgs__msg__JointServo__fini(msg);
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__Sequence__init(&msg->name, 0)) {
    crtk_msgs__msg__JointServo__fini(msg);
    return false;
  }
  // position
  if (!rosidl_runtime_c__double__Sequence__init(&msg->position, 0)) {
    crtk_msgs__msg__JointServo__fini(msg);
    return false;
  }
  // velocity
  if (!rosidl_runtime_c__double__Sequence__init(&msg->velocity, 0)) {
    crtk_msgs__msg__JointServo__fini(msg);
    return false;
  }
  // effort
  if (!rosidl_runtime_c__double__Sequence__init(&msg->effort, 0)) {
    crtk_msgs__msg__JointServo__fini(msg);
    return false;
  }
  // mode
  if (!crtk_msgs__msg__SetpointMode__Sequence__init(&msg->mode, 0)) {
    crtk_msgs__msg__JointServo__fini(msg);
    return false;
  }
  return true;
}

void
crtk_msgs__msg__JointServo__fini(crtk_msgs__msg__JointServo * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // name
  rosidl_runtime_c__String__Sequence__fini(&msg->name);
  // position
  rosidl_runtime_c__double__Sequence__fini(&msg->position);
  // velocity
  rosidl_runtime_c__double__Sequence__fini(&msg->velocity);
  // effort
  rosidl_runtime_c__double__Sequence__fini(&msg->effort);
  // mode
  crtk_msgs__msg__SetpointMode__Sequence__fini(&msg->mode);
}

bool
crtk_msgs__msg__JointServo__are_equal(const crtk_msgs__msg__JointServo * lhs, const crtk_msgs__msg__JointServo * rhs)
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
  // name
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // position
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // velocity
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->velocity), &(rhs->velocity)))
  {
    return false;
  }
  // effort
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->effort), &(rhs->effort)))
  {
    return false;
  }
  // mode
  if (!crtk_msgs__msg__SetpointMode__Sequence__are_equal(
      &(lhs->mode), &(rhs->mode)))
  {
    return false;
  }
  return true;
}

bool
crtk_msgs__msg__JointServo__copy(
  const crtk_msgs__msg__JointServo * input,
  crtk_msgs__msg__JointServo * output)
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
  // name
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // position
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // velocity
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->velocity), &(output->velocity)))
  {
    return false;
  }
  // effort
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->effort), &(output->effort)))
  {
    return false;
  }
  // mode
  if (!crtk_msgs__msg__SetpointMode__Sequence__copy(
      &(input->mode), &(output->mode)))
  {
    return false;
  }
  return true;
}

crtk_msgs__msg__JointServo *
crtk_msgs__msg__JointServo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crtk_msgs__msg__JointServo * msg = (crtk_msgs__msg__JointServo *)allocator.allocate(sizeof(crtk_msgs__msg__JointServo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(crtk_msgs__msg__JointServo));
  bool success = crtk_msgs__msg__JointServo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
crtk_msgs__msg__JointServo__destroy(crtk_msgs__msg__JointServo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    crtk_msgs__msg__JointServo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
crtk_msgs__msg__JointServo__Sequence__init(crtk_msgs__msg__JointServo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crtk_msgs__msg__JointServo * data = NULL;

  if (size) {
    data = (crtk_msgs__msg__JointServo *)allocator.zero_allocate(size, sizeof(crtk_msgs__msg__JointServo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = crtk_msgs__msg__JointServo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        crtk_msgs__msg__JointServo__fini(&data[i - 1]);
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
crtk_msgs__msg__JointServo__Sequence__fini(crtk_msgs__msg__JointServo__Sequence * array)
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
      crtk_msgs__msg__JointServo__fini(&array->data[i]);
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

crtk_msgs__msg__JointServo__Sequence *
crtk_msgs__msg__JointServo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crtk_msgs__msg__JointServo__Sequence * array = (crtk_msgs__msg__JointServo__Sequence *)allocator.allocate(sizeof(crtk_msgs__msg__JointServo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = crtk_msgs__msg__JointServo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
crtk_msgs__msg__JointServo__Sequence__destroy(crtk_msgs__msg__JointServo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    crtk_msgs__msg__JointServo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
crtk_msgs__msg__JointServo__Sequence__are_equal(const crtk_msgs__msg__JointServo__Sequence * lhs, const crtk_msgs__msg__JointServo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!crtk_msgs__msg__JointServo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
crtk_msgs__msg__JointServo__Sequence__copy(
  const crtk_msgs__msg__JointServo__Sequence * input,
  crtk_msgs__msg__JointServo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(crtk_msgs__msg__JointServo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    crtk_msgs__msg__JointServo * data =
      (crtk_msgs__msg__JointServo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!crtk_msgs__msg__JointServo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          crtk_msgs__msg__JointServo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!crtk_msgs__msg__JointServo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
