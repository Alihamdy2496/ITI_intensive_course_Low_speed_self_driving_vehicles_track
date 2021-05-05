// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mymsgsrv:srv/CustomSrv.idl
// generated code does not contain a copyright notice

#ifndef MYMSGSRV__SRV__DETAIL__CUSTOM_SRV__STRUCT_H_
#define MYMSGSRV__SRV__DETAIL__CUSTOM_SRV__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/CustomSrv in the package mymsgsrv.
typedef struct mymsgsrv__srv__CustomSrv_Request
{
  bool reqq;
} mymsgsrv__srv__CustomSrv_Request;

// Struct for a sequence of mymsgsrv__srv__CustomSrv_Request.
typedef struct mymsgsrv__srv__CustomSrv_Request__Sequence
{
  mymsgsrv__srv__CustomSrv_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mymsgsrv__srv__CustomSrv_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'rspp'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/CustomSrv in the package mymsgsrv.
typedef struct mymsgsrv__srv__CustomSrv_Response
{
  rosidl_runtime_c__String rspp;
} mymsgsrv__srv__CustomSrv_Response;

// Struct for a sequence of mymsgsrv__srv__CustomSrv_Response.
typedef struct mymsgsrv__srv__CustomSrv_Response__Sequence
{
  mymsgsrv__srv__CustomSrv_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mymsgsrv__srv__CustomSrv_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MYMSGSRV__SRV__DETAIL__CUSTOM_SRV__STRUCT_H_
