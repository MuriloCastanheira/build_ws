// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from icrane_msgs:msg/Detection2D.idl
// generated code does not contain a copyright notice
#include "icrane_msgs/msg/detail/detection2_d__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `label`
// Member `id`
#include "rosidl_runtime_c/string_functions.h"
// Member `bbox`
#include "icrane_msgs/msg/detail/bounding_box2_d__functions.h"

bool
icrane_msgs__msg__Detection2D__init(icrane_msgs__msg__Detection2D * msg)
{
  if (!msg) {
    return false;
  }
  // class_id
  // label
  if (!rosidl_runtime_c__String__init(&msg->label)) {
    icrane_msgs__msg__Detection2D__fini(msg);
    return false;
  }
  // score
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    icrane_msgs__msg__Detection2D__fini(msg);
    return false;
  }
  // bbox
  if (!icrane_msgs__msg__BoundingBox2D__init(&msg->bbox)) {
    icrane_msgs__msg__Detection2D__fini(msg);
    return false;
  }
  return true;
}

void
icrane_msgs__msg__Detection2D__fini(icrane_msgs__msg__Detection2D * msg)
{
  if (!msg) {
    return;
  }
  // class_id
  // label
  rosidl_runtime_c__String__fini(&msg->label);
  // score
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // bbox
  icrane_msgs__msg__BoundingBox2D__fini(&msg->bbox);
}

bool
icrane_msgs__msg__Detection2D__are_equal(const icrane_msgs__msg__Detection2D * lhs, const icrane_msgs__msg__Detection2D * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // class_id
  if (lhs->class_id != rhs->class_id) {
    return false;
  }
  // label
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->label), &(rhs->label)))
  {
    return false;
  }
  // score
  if (lhs->score != rhs->score) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // bbox
  if (!icrane_msgs__msg__BoundingBox2D__are_equal(
      &(lhs->bbox), &(rhs->bbox)))
  {
    return false;
  }
  return true;
}

bool
icrane_msgs__msg__Detection2D__copy(
  const icrane_msgs__msg__Detection2D * input,
  icrane_msgs__msg__Detection2D * output)
{
  if (!input || !output) {
    return false;
  }
  // class_id
  output->class_id = input->class_id;
  // label
  if (!rosidl_runtime_c__String__copy(
      &(input->label), &(output->label)))
  {
    return false;
  }
  // score
  output->score = input->score;
  // id
  if (!rosidl_runtime_c__String__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // bbox
  if (!icrane_msgs__msg__BoundingBox2D__copy(
      &(input->bbox), &(output->bbox)))
  {
    return false;
  }
  return true;
}

icrane_msgs__msg__Detection2D *
icrane_msgs__msg__Detection2D__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  icrane_msgs__msg__Detection2D * msg = (icrane_msgs__msg__Detection2D *)allocator.allocate(sizeof(icrane_msgs__msg__Detection2D), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(icrane_msgs__msg__Detection2D));
  bool success = icrane_msgs__msg__Detection2D__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
icrane_msgs__msg__Detection2D__destroy(icrane_msgs__msg__Detection2D * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    icrane_msgs__msg__Detection2D__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
icrane_msgs__msg__Detection2D__Sequence__init(icrane_msgs__msg__Detection2D__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  icrane_msgs__msg__Detection2D * data = NULL;

  if (size) {
    data = (icrane_msgs__msg__Detection2D *)allocator.zero_allocate(size, sizeof(icrane_msgs__msg__Detection2D), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = icrane_msgs__msg__Detection2D__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        icrane_msgs__msg__Detection2D__fini(&data[i - 1]);
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
icrane_msgs__msg__Detection2D__Sequence__fini(icrane_msgs__msg__Detection2D__Sequence * array)
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
      icrane_msgs__msg__Detection2D__fini(&array->data[i]);
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

icrane_msgs__msg__Detection2D__Sequence *
icrane_msgs__msg__Detection2D__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  icrane_msgs__msg__Detection2D__Sequence * array = (icrane_msgs__msg__Detection2D__Sequence *)allocator.allocate(sizeof(icrane_msgs__msg__Detection2D__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = icrane_msgs__msg__Detection2D__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
icrane_msgs__msg__Detection2D__Sequence__destroy(icrane_msgs__msg__Detection2D__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    icrane_msgs__msg__Detection2D__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
icrane_msgs__msg__Detection2D__Sequence__are_equal(const icrane_msgs__msg__Detection2D__Sequence * lhs, const icrane_msgs__msg__Detection2D__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!icrane_msgs__msg__Detection2D__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
icrane_msgs__msg__Detection2D__Sequence__copy(
  const icrane_msgs__msg__Detection2D__Sequence * input,
  icrane_msgs__msg__Detection2D__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(icrane_msgs__msg__Detection2D);
    icrane_msgs__msg__Detection2D * data =
      (icrane_msgs__msg__Detection2D *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!icrane_msgs__msg__Detection2D__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          icrane_msgs__msg__Detection2D__fini(&data[i]);
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
    if (!icrane_msgs__msg__Detection2D__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
