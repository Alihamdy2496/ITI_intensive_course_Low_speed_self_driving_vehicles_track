// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cutomsrv:srv/CustomSrv.idl
// generated code does not contain a copyright notice
#include "cutomsrv/srv/detail/custom_srv__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
cutomsrv__srv__CustomSrv_Request__init(cutomsrv__srv__CustomSrv_Request * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  return true;
}

void
cutomsrv__srv__CustomSrv_Request__fini(cutomsrv__srv__CustomSrv_Request * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
}

cutomsrv__srv__CustomSrv_Request *
cutomsrv__srv__CustomSrv_Request__create()
{
  cutomsrv__srv__CustomSrv_Request * msg = (cutomsrv__srv__CustomSrv_Request *)malloc(sizeof(cutomsrv__srv__CustomSrv_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cutomsrv__srv__CustomSrv_Request));
  bool success = cutomsrv__srv__CustomSrv_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cutomsrv__srv__CustomSrv_Request__destroy(cutomsrv__srv__CustomSrv_Request * msg)
{
  if (msg) {
    cutomsrv__srv__CustomSrv_Request__fini(msg);
  }
  free(msg);
}


bool
cutomsrv__srv__CustomSrv_Request__Sequence__init(cutomsrv__srv__CustomSrv_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  cutomsrv__srv__CustomSrv_Request * data = NULL;
  if (size) {
    data = (cutomsrv__srv__CustomSrv_Request *)calloc(size, sizeof(cutomsrv__srv__CustomSrv_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cutomsrv__srv__CustomSrv_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cutomsrv__srv__CustomSrv_Request__fini(&data[i - 1]);
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
cutomsrv__srv__CustomSrv_Request__Sequence__fini(cutomsrv__srv__CustomSrv_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cutomsrv__srv__CustomSrv_Request__fini(&array->data[i]);
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

cutomsrv__srv__CustomSrv_Request__Sequence *
cutomsrv__srv__CustomSrv_Request__Sequence__create(size_t size)
{
  cutomsrv__srv__CustomSrv_Request__Sequence * array = (cutomsrv__srv__CustomSrv_Request__Sequence *)malloc(sizeof(cutomsrv__srv__CustomSrv_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = cutomsrv__srv__CustomSrv_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cutomsrv__srv__CustomSrv_Request__Sequence__destroy(cutomsrv__srv__CustomSrv_Request__Sequence * array)
{
  if (array) {
    cutomsrv__srv__CustomSrv_Request__Sequence__fini(array);
  }
  free(array);
}


bool
cutomsrv__srv__CustomSrv_Response__init(cutomsrv__srv__CustomSrv_Response * msg)
{
  if (!msg) {
    return false;
  }
  // ack
  return true;
}

void
cutomsrv__srv__CustomSrv_Response__fini(cutomsrv__srv__CustomSrv_Response * msg)
{
  if (!msg) {
    return;
  }
  // ack
}

cutomsrv__srv__CustomSrv_Response *
cutomsrv__srv__CustomSrv_Response__create()
{
  cutomsrv__srv__CustomSrv_Response * msg = (cutomsrv__srv__CustomSrv_Response *)malloc(sizeof(cutomsrv__srv__CustomSrv_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cutomsrv__srv__CustomSrv_Response));
  bool success = cutomsrv__srv__CustomSrv_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cutomsrv__srv__CustomSrv_Response__destroy(cutomsrv__srv__CustomSrv_Response * msg)
{
  if (msg) {
    cutomsrv__srv__CustomSrv_Response__fini(msg);
  }
  free(msg);
}


bool
cutomsrv__srv__CustomSrv_Response__Sequence__init(cutomsrv__srv__CustomSrv_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  cutomsrv__srv__CustomSrv_Response * data = NULL;
  if (size) {
    data = (cutomsrv__srv__CustomSrv_Response *)calloc(size, sizeof(cutomsrv__srv__CustomSrv_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cutomsrv__srv__CustomSrv_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cutomsrv__srv__CustomSrv_Response__fini(&data[i - 1]);
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
cutomsrv__srv__CustomSrv_Response__Sequence__fini(cutomsrv__srv__CustomSrv_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cutomsrv__srv__CustomSrv_Response__fini(&array->data[i]);
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

cutomsrv__srv__CustomSrv_Response__Sequence *
cutomsrv__srv__CustomSrv_Response__Sequence__create(size_t size)
{
  cutomsrv__srv__CustomSrv_Response__Sequence * array = (cutomsrv__srv__CustomSrv_Response__Sequence *)malloc(sizeof(cutomsrv__srv__CustomSrv_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = cutomsrv__srv__CustomSrv_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cutomsrv__srv__CustomSrv_Response__Sequence__destroy(cutomsrv__srv__CustomSrv_Response__Sequence * array)
{
  if (array) {
    cutomsrv__srv__CustomSrv_Response__Sequence__fini(array);
  }
  free(array);
}
