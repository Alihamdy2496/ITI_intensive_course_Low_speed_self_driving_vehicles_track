// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cutomsrv:srv/CustomSrv.idl
// generated code does not contain a copyright notice

#ifndef CUTOMSRV__SRV__DETAIL__CUSTOM_SRV__STRUCT_H_
#define CUTOMSRV__SRV__DETAIL__CUSTOM_SRV__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/CustomSrv in the package cutomsrv.
typedef struct cutomsrv__srv__CustomSrv_Request
{
  double x;
  double y;
} cutomsrv__srv__CustomSrv_Request;

// Struct for a sequence of cutomsrv__srv__CustomSrv_Request.
typedef struct cutomsrv__srv__CustomSrv_Request__Sequence
{
  cutomsrv__srv__CustomSrv_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cutomsrv__srv__CustomSrv_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/CustomSrv in the package cutomsrv.
typedef struct cutomsrv__srv__CustomSrv_Response
{
  bool ack;
} cutomsrv__srv__CustomSrv_Response;

// Struct for a sequence of cutomsrv__srv__CustomSrv_Response.
typedef struct cutomsrv__srv__CustomSrv_Response__Sequence
{
  cutomsrv__srv__CustomSrv_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cutomsrv__srv__CustomSrv_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUTOMSRV__SRV__DETAIL__CUSTOM_SRV__STRUCT_H_
