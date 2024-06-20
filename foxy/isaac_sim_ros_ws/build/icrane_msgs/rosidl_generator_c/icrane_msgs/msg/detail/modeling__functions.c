// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from icrane_msgs:msg/Modeling.idl
// generated code does not contain a copyright notice
#include "icrane_msgs/msg/detail/modeling__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `predict_alpha`
// Member `predict_beta`
// Member `predict_x`
// Member `predict_y`
// Member `predict_z`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
icrane_msgs__msg__Modeling__init(icrane_msgs__msg__Modeling * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    icrane_msgs__msg__Modeling__fini(msg);
    return false;
  }
  // alpha
  // beta
  // x
  // y
  // z
  // predict_alpha
  if (!rosidl_runtime_c__double__Sequence__init(&msg->predict_alpha, 0)) {
    icrane_msgs__msg__Modeling__fini(msg);
    return false;
  }
  // predict_beta
  if (!rosidl_runtime_c__double__Sequence__init(&msg->predict_beta, 0)) {
    icrane_msgs__msg__Modeling__fini(msg);
    return false;
  }
  // predict_x
  if (!rosidl_runtime_c__double__Sequence__init(&msg->predict_x, 0)) {
    icrane_msgs__msg__Modeling__fini(msg);
    return false;
  }
  // predict_y
  if (!rosidl_runtime_c__double__Sequence__init(&msg->predict_y, 0)) {
    icrane_msgs__msg__Modeling__fini(msg);
    return false;
  }
  // predict_z
  if (!rosidl_runtime_c__double__Sequence__init(&msg->predict_z, 0)) {
    icrane_msgs__msg__Modeling__fini(msg);
    return false;
  }
  return true;
}

void
icrane_msgs__msg__Modeling__fini(icrane_msgs__msg__Modeling * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // alpha
  // beta
  // x
  // y
  // z
  // predict_alpha
  rosidl_runtime_c__double__Sequence__fini(&msg->predict_alpha);
  // predict_beta
  rosidl_runtime_c__double__Sequence__fini(&msg->predict_beta);
  // predict_x
  rosidl_runtime_c__double__Sequence__fini(&msg->predict_x);
  // predict_y
  rosidl_runtime_c__double__Sequence__fini(&msg->predict_y);
  // predict_z
  rosidl_runtime_c__double__Sequence__fini(&msg->predict_z);
}

bool
icrane_msgs__msg__Modeling__are_equal(const icrane_msgs__msg__Modeling * lhs, const icrane_msgs__msg__Modeling * rhs)
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
  // alpha
  if (lhs->alpha != rhs->alpha) {
    return false;
  }
  // beta
  if (lhs->beta != rhs->beta) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  // predict_alpha
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->predict_alpha), &(rhs->predict_alpha)))
  {
    return false;
  }
  // predict_beta
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->predict_beta), &(rhs->predict_beta)))
  {
    return false;
  }
  // predict_x
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->predict_x), &(rhs->predict_x)))
  {
    return false;
  }
  // predict_y
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->predict_y), &(rhs->predict_y)))
  {
    return false;
  }
  // predict_z
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->predict_z), &(rhs->predict_z)))
  {
    return false;
  }
  return true;
}

bool
icrane_msgs__msg__Modeling__copy(
  const icrane_msgs__msg__Modeling * input,
  icrane_msgs__msg__Modeling * output)
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
  // alpha
  output->alpha = input->alpha;
  // beta
  output->beta = input->beta;
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  // predict_alpha
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->predict_alpha), &(output->predict_alpha)))
  {
    return false;
  }
  // predict_beta
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->predict_beta), &(output->predict_beta)))
  {
    return false;
  }
  // predict_x
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->predict_x), &(output->predict_x)))
  {
    return false;
  }
  // predict_y
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->predict_y), &(output->predict_y)))
  {
    return false;
  }
  // predict_z
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->predict_z), &(output->predict_z)))
  {
    return false;
  }
  return true;
}

icrane_msgs__msg__Modeling *
icrane_msgs__msg__Modeling__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  icrane_msgs__msg__Modeling * msg = (icrane_msgs__msg__Modeling *)allocator.allocate(sizeof(icrane_msgs__msg__Modeling), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(icrane_msgs__msg__Modeling));
  bool success = icrane_msgs__msg__Modeling__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
icrane_msgs__msg__Modeling__destroy(icrane_msgs__msg__Modeling * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    icrane_msgs__msg__Modeling__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
icrane_msgs__msg__Modeling__Sequence__init(icrane_msgs__msg__Modeling__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  icrane_msgs__msg__Modeling * data = NULL;

  if (size) {
    data = (icrane_msgs__msg__Modeling *)allocator.zero_allocate(size, sizeof(icrane_msgs__msg__Modeling), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = icrane_msgs__msg__Modeling__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        icrane_msgs__msg__Modeling__fini(&data[i - 1]);
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
icrane_msgs__msg__Modeling__Sequence__fini(icrane_msgs__msg__Modeling__Sequence * array)
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
      icrane_msgs__msg__Modeling__fini(&array->data[i]);
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

icrane_msgs__msg__Modeling__Sequence *
icrane_msgs__msg__Modeling__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  icrane_msgs__msg__Modeling__Sequence * array = (icrane_msgs__msg__Modeling__Sequence *)allocator.allocate(sizeof(icrane_msgs__msg__Modeling__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = icrane_msgs__msg__Modeling__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
icrane_msgs__msg__Modeling__Sequence__destroy(icrane_msgs__msg__Modeling__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    icrane_msgs__msg__Modeling__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
icrane_msgs__msg__Modeling__Sequence__are_equal(const icrane_msgs__msg__Modeling__Sequence * lhs, const icrane_msgs__msg__Modeling__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!icrane_msgs__msg__Modeling__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
icrane_msgs__msg__Modeling__Sequence__copy(
  const icrane_msgs__msg__Modeling__Sequence * input,
  icrane_msgs__msg__Modeling__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(icrane_msgs__msg__Modeling);
    icrane_msgs__msg__Modeling * data =
      (icrane_msgs__msg__Modeling *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!icrane_msgs__msg__Modeling__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          icrane_msgs__msg__Modeling__fini(&data[i]);
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
    if (!icrane_msgs__msg__Modeling__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
