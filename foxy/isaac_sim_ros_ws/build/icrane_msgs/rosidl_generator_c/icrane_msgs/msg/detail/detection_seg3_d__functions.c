// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from icrane_msgs:msg/DetectionSeg3D.idl
// generated code does not contain a copyright notice
#include "icrane_msgs/msg/detail/detection_seg3_d__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `label`
// Member `id`
#include "rosidl_runtime_c/string_functions.h"
// Member `mask_pcd`
#include "sensor_msgs/msg/detail/point_cloud2__functions.h"
// Member `bbox`
#include "vision_msgs/msg/detail/bounding_box3_d__functions.h"

bool
icrane_msgs__msg__DetectionSeg3D__init(icrane_msgs__msg__DetectionSeg3D * msg)
{
  if (!msg) {
    return false;
  }
  // class_id
  // label
  if (!rosidl_runtime_c__String__init(&msg->label)) {
    icrane_msgs__msg__DetectionSeg3D__fini(msg);
    return false;
  }
  // score
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    icrane_msgs__msg__DetectionSeg3D__fini(msg);
    return false;
  }
  // mask_pcd
  if (!sensor_msgs__msg__PointCloud2__init(&msg->mask_pcd)) {
    icrane_msgs__msg__DetectionSeg3D__fini(msg);
    return false;
  }
  // bbox
  if (!vision_msgs__msg__BoundingBox3D__init(&msg->bbox)) {
    icrane_msgs__msg__DetectionSeg3D__fini(msg);
    return false;
  }
  return true;
}

void
icrane_msgs__msg__DetectionSeg3D__fini(icrane_msgs__msg__DetectionSeg3D * msg)
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
  // mask_pcd
  sensor_msgs__msg__PointCloud2__fini(&msg->mask_pcd);
  // bbox
  vision_msgs__msg__BoundingBox3D__fini(&msg->bbox);
}

bool
icrane_msgs__msg__DetectionSeg3D__are_equal(const icrane_msgs__msg__DetectionSeg3D * lhs, const icrane_msgs__msg__DetectionSeg3D * rhs)
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
  // mask_pcd
  if (!sensor_msgs__msg__PointCloud2__are_equal(
      &(lhs->mask_pcd), &(rhs->mask_pcd)))
  {
    return false;
  }
  // bbox
  if (!vision_msgs__msg__BoundingBox3D__are_equal(
      &(lhs->bbox), &(rhs->bbox)))
  {
    return false;
  }
  return true;
}

bool
icrane_msgs__msg__DetectionSeg3D__copy(
  const icrane_msgs__msg__DetectionSeg3D * input,
  icrane_msgs__msg__DetectionSeg3D * output)
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
  // mask_pcd
  if (!sensor_msgs__msg__PointCloud2__copy(
      &(input->mask_pcd), &(output->mask_pcd)))
  {
    return false;
  }
  // bbox
  if (!vision_msgs__msg__BoundingBox3D__copy(
      &(input->bbox), &(output->bbox)))
  {
    return false;
  }
  return true;
}

icrane_msgs__msg__DetectionSeg3D *
icrane_msgs__msg__DetectionSeg3D__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  icrane_msgs__msg__DetectionSeg3D * msg = (icrane_msgs__msg__DetectionSeg3D *)allocator.allocate(sizeof(icrane_msgs__msg__DetectionSeg3D), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(icrane_msgs__msg__DetectionSeg3D));
  bool success = icrane_msgs__msg__DetectionSeg3D__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
icrane_msgs__msg__DetectionSeg3D__destroy(icrane_msgs__msg__DetectionSeg3D * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    icrane_msgs__msg__DetectionSeg3D__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
icrane_msgs__msg__DetectionSeg3D__Sequence__init(icrane_msgs__msg__DetectionSeg3D__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  icrane_msgs__msg__DetectionSeg3D * data = NULL;

  if (size) {
    data = (icrane_msgs__msg__DetectionSeg3D *)allocator.zero_allocate(size, sizeof(icrane_msgs__msg__DetectionSeg3D), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = icrane_msgs__msg__DetectionSeg3D__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        icrane_msgs__msg__DetectionSeg3D__fini(&data[i - 1]);
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
icrane_msgs__msg__DetectionSeg3D__Sequence__fini(icrane_msgs__msg__DetectionSeg3D__Sequence * array)
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
      icrane_msgs__msg__DetectionSeg3D__fini(&array->data[i]);
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

icrane_msgs__msg__DetectionSeg3D__Sequence *
icrane_msgs__msg__DetectionSeg3D__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  icrane_msgs__msg__DetectionSeg3D__Sequence * array = (icrane_msgs__msg__DetectionSeg3D__Sequence *)allocator.allocate(sizeof(icrane_msgs__msg__DetectionSeg3D__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = icrane_msgs__msg__DetectionSeg3D__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
icrane_msgs__msg__DetectionSeg3D__Sequence__destroy(icrane_msgs__msg__DetectionSeg3D__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    icrane_msgs__msg__DetectionSeg3D__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
icrane_msgs__msg__DetectionSeg3D__Sequence__are_equal(const icrane_msgs__msg__DetectionSeg3D__Sequence * lhs, const icrane_msgs__msg__DetectionSeg3D__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!icrane_msgs__msg__DetectionSeg3D__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
icrane_msgs__msg__DetectionSeg3D__Sequence__copy(
  const icrane_msgs__msg__DetectionSeg3D__Sequence * input,
  icrane_msgs__msg__DetectionSeg3D__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(icrane_msgs__msg__DetectionSeg3D);
    icrane_msgs__msg__DetectionSeg3D * data =
      (icrane_msgs__msg__DetectionSeg3D *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!icrane_msgs__msg__DetectionSeg3D__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          icrane_msgs__msg__DetectionSeg3D__fini(&data[i]);
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
    if (!icrane_msgs__msg__DetectionSeg3D__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
