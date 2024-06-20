// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from icrane_msgs:msg/Polygon2D.idl
// generated code does not contain a copyright notice
#include "icrane_msgs/msg/detail/polygon2_d__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `polygon`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
icrane_msgs__msg__Polygon2D__init(icrane_msgs__msg__Polygon2D * msg)
{
  if (!msg) {
    return false;
  }
  // polygon
  if (!rosidl_runtime_c__double__Sequence__init(&msg->polygon, 0)) {
    icrane_msgs__msg__Polygon2D__fini(msg);
    return false;
  }
  return true;
}

void
icrane_msgs__msg__Polygon2D__fini(icrane_msgs__msg__Polygon2D * msg)
{
  if (!msg) {
    return;
  }
  // polygon
  rosidl_runtime_c__double__Sequence__fini(&msg->polygon);
}

bool
icrane_msgs__msg__Polygon2D__are_equal(const icrane_msgs__msg__Polygon2D * lhs, const icrane_msgs__msg__Polygon2D * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // polygon
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->polygon), &(rhs->polygon)))
  {
    return false;
  }
  return true;
}

bool
icrane_msgs__msg__Polygon2D__copy(
  const icrane_msgs__msg__Polygon2D * input,
  icrane_msgs__msg__Polygon2D * output)
{
  if (!input || !output) {
    return false;
  }
  // polygon
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->polygon), &(output->polygon)))
  {
    return false;
  }
  return true;
}

icrane_msgs__msg__Polygon2D *
icrane_msgs__msg__Polygon2D__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  icrane_msgs__msg__Polygon2D * msg = (icrane_msgs__msg__Polygon2D *)allocator.allocate(sizeof(icrane_msgs__msg__Polygon2D), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(icrane_msgs__msg__Polygon2D));
  bool success = icrane_msgs__msg__Polygon2D__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
icrane_msgs__msg__Polygon2D__destroy(icrane_msgs__msg__Polygon2D * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    icrane_msgs__msg__Polygon2D__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
icrane_msgs__msg__Polygon2D__Sequence__init(icrane_msgs__msg__Polygon2D__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  icrane_msgs__msg__Polygon2D * data = NULL;

  if (size) {
    data = (icrane_msgs__msg__Polygon2D *)allocator.zero_allocate(size, sizeof(icrane_msgs__msg__Polygon2D), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = icrane_msgs__msg__Polygon2D__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        icrane_msgs__msg__Polygon2D__fini(&data[i - 1]);
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
icrane_msgs__msg__Polygon2D__Sequence__fini(icrane_msgs__msg__Polygon2D__Sequence * array)
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
      icrane_msgs__msg__Polygon2D__fini(&array->data[i]);
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

icrane_msgs__msg__Polygon2D__Sequence *
icrane_msgs__msg__Polygon2D__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  icrane_msgs__msg__Polygon2D__Sequence * array = (icrane_msgs__msg__Polygon2D__Sequence *)allocator.allocate(sizeof(icrane_msgs__msg__Polygon2D__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = icrane_msgs__msg__Polygon2D__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
icrane_msgs__msg__Polygon2D__Sequence__destroy(icrane_msgs__msg__Polygon2D__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    icrane_msgs__msg__Polygon2D__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
icrane_msgs__msg__Polygon2D__Sequence__are_equal(const icrane_msgs__msg__Polygon2D__Sequence * lhs, const icrane_msgs__msg__Polygon2D__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!icrane_msgs__msg__Polygon2D__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
icrane_msgs__msg__Polygon2D__Sequence__copy(
  const icrane_msgs__msg__Polygon2D__Sequence * input,
  icrane_msgs__msg__Polygon2D__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(icrane_msgs__msg__Polygon2D);
    icrane_msgs__msg__Polygon2D * data =
      (icrane_msgs__msg__Polygon2D *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!icrane_msgs__msg__Polygon2D__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          icrane_msgs__msg__Polygon2D__fini(&data[i]);
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
    if (!icrane_msgs__msg__Polygon2D__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
