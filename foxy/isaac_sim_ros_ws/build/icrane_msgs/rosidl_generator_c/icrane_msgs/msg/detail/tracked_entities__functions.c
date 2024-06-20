// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from icrane_msgs:msg/TrackedEntities.idl
// generated code does not contain a copyright notice
#include "icrane_msgs/msg/detail/tracked_entities__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `id`
#include "rosidl_runtime_c/string_functions.h"
// Member `position`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
icrane_msgs__msg__TrackedEntities__init(icrane_msgs__msg__TrackedEntities * msg)
{
  if (!msg) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    icrane_msgs__msg__TrackedEntities__fini(msg);
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__init(&msg->position)) {
    icrane_msgs__msg__TrackedEntities__fini(msg);
    return false;
  }
  return true;
}

void
icrane_msgs__msg__TrackedEntities__fini(icrane_msgs__msg__TrackedEntities * msg)
{
  if (!msg) {
    return;
  }
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // position
  geometry_msgs__msg__Point__fini(&msg->position);
}

bool
icrane_msgs__msg__TrackedEntities__are_equal(const icrane_msgs__msg__TrackedEntities * lhs, const icrane_msgs__msg__TrackedEntities * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  return true;
}

bool
icrane_msgs__msg__TrackedEntities__copy(
  const icrane_msgs__msg__TrackedEntities * input,
  icrane_msgs__msg__TrackedEntities * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  return true;
}

icrane_msgs__msg__TrackedEntities *
icrane_msgs__msg__TrackedEntities__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  icrane_msgs__msg__TrackedEntities * msg = (icrane_msgs__msg__TrackedEntities *)allocator.allocate(sizeof(icrane_msgs__msg__TrackedEntities), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(icrane_msgs__msg__TrackedEntities));
  bool success = icrane_msgs__msg__TrackedEntities__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
icrane_msgs__msg__TrackedEntities__destroy(icrane_msgs__msg__TrackedEntities * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    icrane_msgs__msg__TrackedEntities__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
icrane_msgs__msg__TrackedEntities__Sequence__init(icrane_msgs__msg__TrackedEntities__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  icrane_msgs__msg__TrackedEntities * data = NULL;

  if (size) {
    data = (icrane_msgs__msg__TrackedEntities *)allocator.zero_allocate(size, sizeof(icrane_msgs__msg__TrackedEntities), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = icrane_msgs__msg__TrackedEntities__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        icrane_msgs__msg__TrackedEntities__fini(&data[i - 1]);
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
icrane_msgs__msg__TrackedEntities__Sequence__fini(icrane_msgs__msg__TrackedEntities__Sequence * array)
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
      icrane_msgs__msg__TrackedEntities__fini(&array->data[i]);
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

icrane_msgs__msg__TrackedEntities__Sequence *
icrane_msgs__msg__TrackedEntities__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  icrane_msgs__msg__TrackedEntities__Sequence * array = (icrane_msgs__msg__TrackedEntities__Sequence *)allocator.allocate(sizeof(icrane_msgs__msg__TrackedEntities__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = icrane_msgs__msg__TrackedEntities__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
icrane_msgs__msg__TrackedEntities__Sequence__destroy(icrane_msgs__msg__TrackedEntities__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    icrane_msgs__msg__TrackedEntities__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
icrane_msgs__msg__TrackedEntities__Sequence__are_equal(const icrane_msgs__msg__TrackedEntities__Sequence * lhs, const icrane_msgs__msg__TrackedEntities__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!icrane_msgs__msg__TrackedEntities__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
icrane_msgs__msg__TrackedEntities__Sequence__copy(
  const icrane_msgs__msg__TrackedEntities__Sequence * input,
  icrane_msgs__msg__TrackedEntities__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(icrane_msgs__msg__TrackedEntities);
    icrane_msgs__msg__TrackedEntities * data =
      (icrane_msgs__msg__TrackedEntities *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!icrane_msgs__msg__TrackedEntities__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          icrane_msgs__msg__TrackedEntities__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!icrane_msgs__msg__TrackedEntities__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
