// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mymsgsrv:msg/CustomMsg.idl
// generated code does not contain a copyright notice
#include "mymsgsrv/msg/detail/custom_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `text`
#include "rosidl_runtime_c/string_functions.h"

bool
mymsgsrv__msg__CustomMsg__init(mymsgsrv__msg__CustomMsg * msg)
{
  if (!msg) {
    return false;
  }
  // text
  if (!rosidl_runtime_c__String__init(&msg->text)) {
    mymsgsrv__msg__CustomMsg__fini(msg);
    return false;
  }
  // value
  return true;
}

void
mymsgsrv__msg__CustomMsg__fini(mymsgsrv__msg__CustomMsg * msg)
{
  if (!msg) {
    return;
  }
  // text
  rosidl_runtime_c__String__fini(&msg->text);
  // value
}

mymsgsrv__msg__CustomMsg *
mymsgsrv__msg__CustomMsg__create()
{
  mymsgsrv__msg__CustomMsg * msg = (mymsgsrv__msg__CustomMsg *)malloc(sizeof(mymsgsrv__msg__CustomMsg));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mymsgsrv__msg__CustomMsg));
  bool success = mymsgsrv__msg__CustomMsg__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
mymsgsrv__msg__CustomMsg__destroy(mymsgsrv__msg__CustomMsg * msg)
{
  if (msg) {
    mymsgsrv__msg__CustomMsg__fini(msg);
  }
  free(msg);
}


bool
mymsgsrv__msg__CustomMsg__Sequence__init(mymsgsrv__msg__CustomMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  mymsgsrv__msg__CustomMsg * data = NULL;
  if (size) {
    data = (mymsgsrv__msg__CustomMsg *)calloc(size, sizeof(mymsgsrv__msg__CustomMsg));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mymsgsrv__msg__CustomMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mymsgsrv__msg__CustomMsg__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
mymsgsrv__msg__CustomMsg__Sequence__fini(mymsgsrv__msg__CustomMsg__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mymsgsrv__msg__CustomMsg__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

mymsgsrv__msg__CustomMsg__Sequence *
mymsgsrv__msg__CustomMsg__Sequence__create(size_t size)
{
  mymsgsrv__msg__CustomMsg__Sequence * array = (mymsgsrv__msg__CustomMsg__Sequence *)malloc(sizeof(mymsgsrv__msg__CustomMsg__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = mymsgsrv__msg__CustomMsg__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
mymsgsrv__msg__CustomMsg__Sequence__destroy(mymsgsrv__msg__CustomMsg__Sequence * array)
{
  if (array) {
    mymsgsrv__msg__CustomMsg__Sequence__fini(array);
  }
  free(array);
}
