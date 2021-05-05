// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mymsgsrv:srv/CustomSrv.idl
// generated code does not contain a copyright notice
#include "mymsgsrv/srv/detail/custom_srv__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
mymsgsrv__srv__CustomSrv_Request__init(mymsgsrv__srv__CustomSrv_Request * msg)
{
  if (!msg) {
    return false;
  }
  // reqq
  return true;
}

void
mymsgsrv__srv__CustomSrv_Request__fini(mymsgsrv__srv__CustomSrv_Request * msg)
{
  if (!msg) {
    return;
  }
  // reqq
}

mymsgsrv__srv__CustomSrv_Request *
mymsgsrv__srv__CustomSrv_Request__create()
{
  mymsgsrv__srv__CustomSrv_Request * msg = (mymsgsrv__srv__CustomSrv_Request *)malloc(sizeof(mymsgsrv__srv__CustomSrv_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mymsgsrv__srv__CustomSrv_Request));
  bool success = mymsgsrv__srv__CustomSrv_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
mymsgsrv__srv__CustomSrv_Request__destroy(mymsgsrv__srv__CustomSrv_Request * msg)
{
  if (msg) {
    mymsgsrv__srv__CustomSrv_Request__fini(msg);
  }
  free(msg);
}


bool
mymsgsrv__srv__CustomSrv_Request__Sequence__init(mymsgsrv__srv__CustomSrv_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  mymsgsrv__srv__CustomSrv_Request * data = NULL;
  if (size) {
    data = (mymsgsrv__srv__CustomSrv_Request *)calloc(size, sizeof(mymsgsrv__srv__CustomSrv_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mymsgsrv__srv__CustomSrv_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mymsgsrv__srv__CustomSrv_Request__fini(&data[i - 1]);
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
mymsgsrv__srv__CustomSrv_Request__Sequence__fini(mymsgsrv__srv__CustomSrv_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mymsgsrv__srv__CustomSrv_Request__fini(&array->data[i]);
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

mymsgsrv__srv__CustomSrv_Request__Sequence *
mymsgsrv__srv__CustomSrv_Request__Sequence__create(size_t size)
{
  mymsgsrv__srv__CustomSrv_Request__Sequence * array = (mymsgsrv__srv__CustomSrv_Request__Sequence *)malloc(sizeof(mymsgsrv__srv__CustomSrv_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = mymsgsrv__srv__CustomSrv_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
mymsgsrv__srv__CustomSrv_Request__Sequence__destroy(mymsgsrv__srv__CustomSrv_Request__Sequence * array)
{
  if (array) {
    mymsgsrv__srv__CustomSrv_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `rspp`
#include "rosidl_runtime_c/string_functions.h"

bool
mymsgsrv__srv__CustomSrv_Response__init(mymsgsrv__srv__CustomSrv_Response * msg)
{
  if (!msg) {
    return false;
  }
  // rspp
  if (!rosidl_runtime_c__String__init(&msg->rspp)) {
    mymsgsrv__srv__CustomSrv_Response__fini(msg);
    return false;
  }
  return true;
}

void
mymsgsrv__srv__CustomSrv_Response__fini(mymsgsrv__srv__CustomSrv_Response * msg)
{
  if (!msg) {
    return;
  }
  // rspp
  rosidl_runtime_c__String__fini(&msg->rspp);
}

mymsgsrv__srv__CustomSrv_Response *
mymsgsrv__srv__CustomSrv_Response__create()
{
  mymsgsrv__srv__CustomSrv_Response * msg = (mymsgsrv__srv__CustomSrv_Response *)malloc(sizeof(mymsgsrv__srv__CustomSrv_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mymsgsrv__srv__CustomSrv_Response));
  bool success = mymsgsrv__srv__CustomSrv_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
mymsgsrv__srv__CustomSrv_Response__destroy(mymsgsrv__srv__CustomSrv_Response * msg)
{
  if (msg) {
    mymsgsrv__srv__CustomSrv_Response__fini(msg);
  }
  free(msg);
}


bool
mymsgsrv__srv__CustomSrv_Response__Sequence__init(mymsgsrv__srv__CustomSrv_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  mymsgsrv__srv__CustomSrv_Response * data = NULL;
  if (size) {
    data = (mymsgsrv__srv__CustomSrv_Response *)calloc(size, sizeof(mymsgsrv__srv__CustomSrv_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mymsgsrv__srv__CustomSrv_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mymsgsrv__srv__CustomSrv_Response__fini(&data[i - 1]);
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
mymsgsrv__srv__CustomSrv_Response__Sequence__fini(mymsgsrv__srv__CustomSrv_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mymsgsrv__srv__CustomSrv_Response__fini(&array->data[i]);
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

mymsgsrv__srv__CustomSrv_Response__Sequence *
mymsgsrv__srv__CustomSrv_Response__Sequence__create(size_t size)
{
  mymsgsrv__srv__CustomSrv_Response__Sequence * array = (mymsgsrv__srv__CustomSrv_Response__Sequence *)malloc(sizeof(mymsgsrv__srv__CustomSrv_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = mymsgsrv__srv__CustomSrv_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
mymsgsrv__srv__CustomSrv_Response__Sequence__destroy(mymsgsrv__srv__CustomSrv_Response__Sequence * array)
{
  if (array) {
    mymsgsrv__srv__CustomSrv_Response__Sequence__fini(array);
  }
  free(array);
}
