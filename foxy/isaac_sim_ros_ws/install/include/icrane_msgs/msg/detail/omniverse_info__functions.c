// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from icrane_msgs:msg/OmniverseInfo.idl
// generated code does not contain a copyright notice
#include "icrane_msgs/msg/detail/omniverse_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `people_info`
// Member `boxes_info`
#include "icrane_msgs/msg/detail/tracked_entities__functions.h"
// Member `load_position`
#include "nav_msgs/msg/detail/path__functions.h"
// Member `joint_state`
#include "sensor_msgs/msg/detail/joint_state__functions.h"
// Member `points`
#include "icrane_msgs/msg/detail/modeling__functions.h"

bool
icrane_msgs__msg__OmniverseInfo__init(icrane_msgs__msg__OmniverseInfo * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    icrane_msgs__msg__OmniverseInfo__fini(msg);
    return false;
  }
  // people_info
  if (!icrane_msgs__msg__TrackedEntities__Sequence__init(&msg->people_info, 0)) {
    icrane_msgs__msg__OmniverseInfo__fini(msg);
    return false;
  }
  // boxes_info
  if (!icrane_msgs__msg__TrackedEntities__Sequence__init(&msg->boxes_info, 0)) {
    icrane_msgs__msg__OmniverseInfo__fini(msg);
    return false;
  }
  // load_position
  if (!nav_msgs__msg__Path__init(&msg->load_position)) {
    icrane_msgs__msg__OmniverseInfo__fini(msg);
    return false;
  }
  // joint_state
  if (!sensor_msgs__msg__JointState__init(&msg->joint_state)) {
    icrane_msgs__msg__OmniverseInfo__fini(msg);
    return false;
  }
  // points
  if (!icrane_msgs__msg__Modeling__init(&msg->points)) {
    icrane_msgs__msg__OmniverseInfo__fini(msg);
    return false;
  }
  return true;
}

void
icrane_msgs__msg__OmniverseInfo__fini(icrane_msgs__msg__OmniverseInfo * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // people_info
  icrane_msgs__msg__TrackedEntities__Sequence__fini(&msg->people_info);
  // boxes_info
  icrane_msgs__msg__TrackedEntities__Sequence__fini(&msg->boxes_info);
  // load_position
  nav_msgs__msg__Path__fini(&msg->load_position);
  // joint_state
  sensor_msgs__msg__JointState__fini(&msg->joint_state);
  // points
  icrane_msgs__msg__Modeling__fini(&msg->points);
}

bool
icrane_msgs__msg__OmniverseInfo__are_equal(const icrane_msgs__msg__OmniverseInfo * lhs, const icrane_msgs__msg__OmniverseInfo * rhs)
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
  // people_info
  if (!icrane_msgs__msg__TrackedEntities__Sequence__are_equal(
      &(lhs->people_info), &(rhs->people_info)))
  {
    return false;
  }
  // boxes_info
  if (!icrane_msgs__msg__TrackedEntities__Sequence__are_equal(
      &(lhs->boxes_info), &(rhs->boxes_info)))
  {
    return false;
  }
  // load_position
  if (!nav_msgs__msg__Path__are_equal(
      &(lhs->load_position), &(rhs->load_position)))
  {
    return false;
  }
  // joint_state
  if (!sensor_msgs__msg__JointState__are_equal(
      &(lhs->joint_state), &(rhs->joint_state)))
  {
    return false;
  }
  // points
  if (!icrane_msgs__msg__Modeling__are_equal(
      &(lhs->points), &(rhs->points)))
  {
    return false;
  }
  return true;
}

bool
icrane_msgs__msg__OmniverseInfo__copy(
  const icrane_msgs__msg__OmniverseInfo * input,
  icrane_msgs__msg__OmniverseInfo * output)
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
  // people_info
  if (!icrane_msgs__msg__TrackedEntities__Sequence__copy(
      &(input->people_info), &(output->people_info)))
  {
    return false;
  }
  // boxes_info
  if (!icrane_msgs__msg__TrackedEntities__Sequence__copy(
      &(input->boxes_info), &(output->boxes_info)))
  {
    return false;
  }
  // load_position
  if (!nav_msgs__msg__Path__copy(
      &(input->load_position), &(output->load_position)))
  {
    return false;
  }
  // joint_state
  if (!sensor_msgs__msg__JointState__copy(
      &(input->joint_state), &(output->joint_state)))
  {
    return false;
  }
  // points
  if (!icrane_msgs__msg__Modeling__copy(
      &(input->points), &(output->points)))
  {
    return false;
  }
  return true;
}

icrane_msgs__msg__OmniverseInfo *
icrane_msgs__msg__OmniverseInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  icrane_msgs__msg__OmniverseInfo * msg = (icrane_msgs__msg__OmniverseInfo *)allocator.allocate(sizeof(icrane_msgs__msg__OmniverseInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(icrane_msgs__msg__OmniverseInfo));
  bool success = icrane_msgs__msg__OmniverseInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
icrane_msgs__msg__OmniverseInfo__destroy(icrane_msgs__msg__OmniverseInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    icrane_msgs__msg__OmniverseInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
icrane_msgs__msg__OmniverseInfo__Sequence__init(icrane_msgs__msg__OmniverseInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  icrane_msgs__msg__OmniverseInfo * data = NULL;

  if (size) {
    data = (icrane_msgs__msg__OmniverseInfo *)allocator.zero_allocate(size, sizeof(icrane_msgs__msg__OmniverseInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = icrane_msgs__msg__OmniverseInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        icrane_msgs__msg__OmniverseInfo__fini(&data[i - 1]);
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
icrane_msgs__msg__OmniverseInfo__Sequence__fini(icrane_msgs__msg__OmniverseInfo__Sequence * array)
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
      icrane_msgs__msg__OmniverseInfo__fini(&array->data[i]);
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

icrane_msgs__msg__OmniverseInfo__Sequence *
icrane_msgs__msg__OmniverseInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  icrane_msgs__msg__OmniverseInfo__Sequence * array = (icrane_msgs__msg__OmniverseInfo__Sequence *)allocator.allocate(sizeof(icrane_msgs__msg__OmniverseInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = icrane_msgs__msg__OmniverseInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
icrane_msgs__msg__OmniverseInfo__Sequence__destroy(icrane_msgs__msg__OmniverseInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    icrane_msgs__msg__OmniverseInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
icrane_msgs__msg__OmniverseInfo__Sequence__are_equal(const icrane_msgs__msg__OmniverseInfo__Sequence * lhs, const icrane_msgs__msg__OmniverseInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!icrane_msgs__msg__OmniverseInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
icrane_msgs__msg__OmniverseInfo__Sequence__copy(
  const icrane_msgs__msg__OmniverseInfo__Sequence * input,
  icrane_msgs__msg__OmniverseInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(icrane_msgs__msg__OmniverseInfo);
    icrane_msgs__msg__OmniverseInfo * data =
      (icrane_msgs__msg__OmniverseInfo *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!icrane_msgs__msg__OmniverseInfo__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          icrane_msgs__msg__OmniverseInfo__fini(&data[i]);
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
    if (!icrane_msgs__msg__OmniverseInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
