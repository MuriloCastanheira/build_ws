// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from vision_msgs:msg/Classification3D.idl
// generated code does not contain a copyright notice
#include "vision_msgs/msg/detail/classification3_d__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `results`
#include "vision_msgs/msg/detail/object_hypothesis__functions.h"
// Member `source_cloud`
#include "sensor_msgs/msg/detail/point_cloud2__functions.h"

bool
vision_msgs__msg__Classification3D__init(vision_msgs__msg__Classification3D * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    vision_msgs__msg__Classification3D__fini(msg);
    return false;
  }
  // results
  if (!vision_msgs__msg__ObjectHypothesis__Sequence__init(&msg->results, 0)) {
    vision_msgs__msg__Classification3D__fini(msg);
    return false;
  }
  // source_cloud
  if (!sensor_msgs__msg__PointCloud2__init(&msg->source_cloud)) {
    vision_msgs__msg__Classification3D__fini(msg);
    return false;
  }
  return true;
}

void
vision_msgs__msg__Classification3D__fini(vision_msgs__msg__Classification3D * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // results
  vision_msgs__msg__ObjectHypothesis__Sequence__fini(&msg->results);
  // source_cloud
  sensor_msgs__msg__PointCloud2__fini(&msg->source_cloud);
}

bool
vision_msgs__msg__Classification3D__are_equal(const vision_msgs__msg__Classification3D * lhs, const vision_msgs__msg__Classification3D * rhs)
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
  // results
  if (!vision_msgs__msg__ObjectHypothesis__Sequence__are_equal(
      &(lhs->results), &(rhs->results)))
  {
    return false;
  }
  // source_cloud
  if (!sensor_msgs__msg__PointCloud2__are_equal(
      &(lhs->source_cloud), &(rhs->source_cloud)))
  {
    return false;
  }
  return true;
}

bool
vision_msgs__msg__Classification3D__copy(
  const vision_msgs__msg__Classification3D * input,
  vision_msgs__msg__Classification3D * output)
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
  // results
  if (!vision_msgs__msg__ObjectHypothesis__Sequence__copy(
      &(input->results), &(output->results)))
  {
    return false;
  }
  // source_cloud
  if (!sensor_msgs__msg__PointCloud2__copy(
      &(input->source_cloud), &(output->source_cloud)))
  {
    return false;
  }
  return true;
}

vision_msgs__msg__Classification3D *
vision_msgs__msg__Classification3D__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vision_msgs__msg__Classification3D * msg = (vision_msgs__msg__Classification3D *)allocator.allocate(sizeof(vision_msgs__msg__Classification3D), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vision_msgs__msg__Classification3D));
  bool success = vision_msgs__msg__Classification3D__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
vision_msgs__msg__Classification3D__destroy(vision_msgs__msg__Classification3D * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    vision_msgs__msg__Classification3D__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
vision_msgs__msg__Classification3D__Sequence__init(vision_msgs__msg__Classification3D__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vision_msgs__msg__Classification3D * data = NULL;

  if (size) {
    data = (vision_msgs__msg__Classification3D *)allocator.zero_allocate(size, sizeof(vision_msgs__msg__Classification3D), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vision_msgs__msg__Classification3D__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vision_msgs__msg__Classification3D__fini(&data[i - 1]);
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
vision_msgs__msg__Classification3D__Sequence__fini(vision_msgs__msg__Classification3D__Sequence * array)
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
      vision_msgs__msg__Classification3D__fini(&array->data[i]);
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

vision_msgs__msg__Classification3D__Sequence *
vision_msgs__msg__Classification3D__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vision_msgs__msg__Classification3D__Sequence * array = (vision_msgs__msg__Classification3D__Sequence *)allocator.allocate(sizeof(vision_msgs__msg__Classification3D__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = vision_msgs__msg__Classification3D__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
vision_msgs__msg__Classification3D__Sequence__destroy(vision_msgs__msg__Classification3D__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    vision_msgs__msg__Classification3D__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
vision_msgs__msg__Classification3D__Sequence__are_equal(const vision_msgs__msg__Classification3D__Sequence * lhs, const vision_msgs__msg__Classification3D__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vision_msgs__msg__Classification3D__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vision_msgs__msg__Classification3D__Sequence__copy(
  const vision_msgs__msg__Classification3D__Sequence * input,
  vision_msgs__msg__Classification3D__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vision_msgs__msg__Classification3D);
    vision_msgs__msg__Classification3D * data =
      (vision_msgs__msg__Classification3D *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vision_msgs__msg__Classification3D__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          vision_msgs__msg__Classification3D__fini(&data[i]);
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
    if (!vision_msgs__msg__Classification3D__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
