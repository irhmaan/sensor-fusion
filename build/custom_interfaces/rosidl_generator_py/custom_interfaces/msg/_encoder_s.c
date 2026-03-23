// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from custom_interfaces:msg/Encoder.idl
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
#include "custom_interfaces/msg/detail/encoder__struct.h"
#include "custom_interfaces/msg/detail/encoder__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool custom_interfaces__msg__encoder__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[39];
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
    assert(strncmp("custom_interfaces.msg._encoder.Encoder", full_classname_dest, 38) == 0);
  }
  custom_interfaces__msg__Encoder * ros_message = _ros_message;
  {  // left_ticks
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_ticks");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->left_ticks = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // left_velocit
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_velocit");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->left_velocit = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // right_ticks
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_ticks");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->right_ticks = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // right_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->right_velocity = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * custom_interfaces__msg__encoder__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Encoder */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("custom_interfaces.msg._encoder");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Encoder");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  custom_interfaces__msg__Encoder * ros_message = (custom_interfaces__msg__Encoder *)raw_ros_message;
  {  // left_ticks
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->left_ticks);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_ticks", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_velocit
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->left_velocit);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_velocit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_ticks
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->right_ticks);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_ticks", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->right_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
