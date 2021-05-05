// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mymsgsrv:msg/CustomMsg.idl
// generated code does not contain a copyright notice

#ifndef MYMSGSRV__MSG__DETAIL__CUSTOM_MSG__STRUCT_H_
#define MYMSGSRV__MSG__DETAIL__CUSTOM_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'text'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/CustomMsg in the package mymsgsrv.
typedef struct mymsgsrv__msg__CustomMsg
{
  rosidl_runtime_c__String text;
  int64_t value;
} mymsgsrv__msg__CustomMsg;

// Struct for a sequence of mymsgsrv__msg__CustomMsg.
typedef struct mymsgsrv__msg__CustomMsg__Sequence
{
  mymsgsrv__msg__CustomMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mymsgsrv__msg__CustomMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MYMSGSRV__MSG__DETAIL__CUSTOM_MSG__STRUCT_H_
