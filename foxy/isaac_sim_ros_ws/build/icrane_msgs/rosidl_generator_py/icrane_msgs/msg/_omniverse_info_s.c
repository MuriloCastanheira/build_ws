// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from icrane_msgs:msg/OmniverseInfo.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "icrane_msgs/msg/detail/omniverse_info__struct.h"
#include "icrane_msgs/msg/detail/omniverse_info__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "icrane_msgs/msg/detail/tracked_entities__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool icrane_msgs__msg__tracked_entities__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * icrane_msgs__msg__tracked_entities__convert_to_py(void * raw_ros_message);
bool icrane_msgs__msg__tracked_entities__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * icrane_msgs__msg__tracked_entities__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool nav_msgs__msg__path__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * nav_msgs__msg__path__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool sensor_msgs__msg__joint_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * sensor_msgs__msg__joint_state__convert_to_py(void * raw_ros_message);
bool icrane_msgs__msg__modeling__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * icrane_msgs__msg__modeling__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool icrane_msgs__msg__omniverse_info__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[46];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("icrane_msgs.msg._omniverse_info.OmniverseInfo", full_classname_dest, 45) == 0);
  }
  icrane_msgs__msg__OmniverseInfo * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // people_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "people_info");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'people_info'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!icrane_msgs__msg__TrackedEntities__Sequence__init(&(ros_message->people_info), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create icrane_msgs__msg__TrackedEntities__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    icrane_msgs__msg__TrackedEntities * dest = ros_message->people_info.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!icrane_msgs__msg__tracked_entities__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // boxes_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "boxes_info");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'boxes_info'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!icrane_msgs__msg__TrackedEntities__Sequence__init(&(ros_message->boxes_info), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create icrane_msgs__msg__TrackedEntities__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    icrane_msgs__msg__TrackedEntities * dest = ros_message->boxes_info.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!icrane_msgs__msg__tracked_entities__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // load_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "load_position");
    if (!field) {
      return false;
    }
    if (!nav_msgs__msg__path__convert_from_py(field, &ros_message->load_position)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // joint_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "joint_state");
    if (!field) {
      return false;
    }
    if (!sensor_msgs__msg__joint_state__convert_from_py(field, &ros_message->joint_state)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // points
    PyObject * field = PyObject_GetAttrString(_pymsg, "points");
    if (!field) {
      return false;
    }
    if (!icrane_msgs__msg__modeling__convert_from_py(field, &ros_message->points)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * icrane_msgs__msg__omniverse_info__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of OmniverseInfo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("icrane_msgs.msg._omniverse_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "OmniverseInfo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  icrane_msgs__msg__OmniverseInfo * ros_message = (icrane_msgs__msg__OmniverseInfo *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // people_info
    PyObject * field = NULL;
    size_t size = ros_message->people_info.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    icrane_msgs__msg__TrackedEntities * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->people_info.data[i]);
      PyObject * pyitem = icrane_msgs__msg__tracked_entities__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "people_info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // boxes_info
    PyObject * field = NULL;
    size_t size = ros_message->boxes_info.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    icrane_msgs__msg__TrackedEntities * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->boxes_info.data[i]);
      PyObject * pyitem = icrane_msgs__msg__tracked_entities__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "boxes_info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // load_position
    PyObject * field = NULL;
    field = nav_msgs__msg__path__convert_to_py(&ros_message->load_position);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "load_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // joint_state
    PyObject * field = NULL;
    field = sensor_msgs__msg__joint_state__convert_to_py(&ros_message->joint_state);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "joint_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // points
    PyObject * field = NULL;
    field = icrane_msgs__msg__modeling__convert_to_py(&ros_message->points);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "points", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
