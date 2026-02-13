// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from crtk_msgs:msg/SetpointMode.idl
// generated code does not contain a copyright notice
#include "crtk_msgs/msg/detail/setpoint_mode__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
crtk_msgs__msg__SetpointMode__init(crtk_msgs__msg__SetpointMode * msg)
{
  if (!msg) {
    return false;
  }
  // value
  return true;
}

void
crtk_msgs__msg__SetpointMode__fini(crtk_msgs__msg__SetpointMode * msg)
{
  if (!msg) {
    return;
  }
  // value
}

bool
crtk_msgs__msg__SetpointMode__are_equal(const crtk_msgs__msg__SetpointMode * lhs, const crtk_msgs__msg__SetpointMode * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // value
  if (lhs->value != rhs->value) {
    return false;
  }
  return true;
}

bool
crtk_msgs__msg__SetpointMode__copy(
  const crtk_msgs__msg__SetpointMode * input,
  crtk_msgs__msg__SetpointMode * output)
{
  if (!input || !output) {
    return false;
  }
  // value
  output->value = input->value;
  return true;
}

crtk_msgs__msg__SetpointMode *
crtk_msgs__msg__SetpointMode__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crtk_msgs__msg__SetpointMode * msg = (crtk_msgs__msg__SetpointMode *)allocator.allocate(sizeof(crtk_msgs__msg__SetpointMode), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(crtk_msgs__msg__SetpointMode));
  bool success = crtk_msgs__msg__SetpointMode__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
crtk_msgs__msg__SetpointMode__destroy(crtk_msgs__msg__SetpointMode * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    crtk_msgs__msg__SetpointMode__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
crtk_msgs__msg__SetpointMode__Sequence__init(crtk_msgs__msg__SetpointMode__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crtk_msgs__msg__SetpointMode * data = NULL;

  if (size) {
    data = (crtk_msgs__msg__SetpointMode *)allocator.zero_allocate(size, sizeof(crtk_msgs__msg__SetpointMode), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = crtk_msgs__msg__SetpointMode__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        crtk_msgs__msg__SetpointMode__fini(&data[i - 1]);
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
crtk_msgs__msg__SetpointMode__Sequence__fini(crtk_msgs__msg__SetpointMode__Sequence * array)
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
      crtk_msgs__msg__SetpointMode__fini(&array->data[i]);
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

crtk_msgs__msg__SetpointMode__Sequence *
crtk_msgs__msg__SetpointMode__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crtk_msgs__msg__SetpointMode__Sequence * array = (crtk_msgs__msg__SetpointMode__Sequence *)allocator.allocate(sizeof(crtk_msgs__msg__SetpointMode__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = crtk_msgs__msg__SetpointMode__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
crtk_msgs__msg__SetpointMode__Sequence__destroy(crtk_msgs__msg__SetpointMode__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    crtk_msgs__msg__SetpointMode__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
crtk_msgs__msg__SetpointMode__Sequence__are_equal(const crtk_msgs__msg__SetpointMode__Sequence * lhs, const crtk_msgs__msg__SetpointMode__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!crtk_msgs__msg__SetpointMode__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
crtk_msgs__msg__SetpointMode__Sequence__copy(
  const crtk_msgs__msg__SetpointMode__Sequence * input,
  crtk_msgs__msg__SetpointMode__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(crtk_msgs__msg__SetpointMode);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    crtk_msgs__msg__SetpointMode * data =
      (crtk_msgs__msg__SetpointMode *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!crtk_msgs__msg__SetpointMode__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          crtk_msgs__msg__SetpointMode__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!crtk_msgs__msg__SetpointMode__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
