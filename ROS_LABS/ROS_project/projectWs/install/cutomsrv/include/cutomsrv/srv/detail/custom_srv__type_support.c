// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cutomsrv:srv/CustomSrv.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cutomsrv/srv/detail/custom_srv__rosidl_typesupport_introspection_c.h"
#include "cutomsrv/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cutomsrv/srv/detail/custom_srv__functions.h"
#include "cutomsrv/srv/detail/custom_srv__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void CustomSrv_Request__rosidl_typesupport_introspection_c__CustomSrv_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cutomsrv__srv__CustomSrv_Request__init(message_memory);
}

void CustomSrv_Request__rosidl_typesupport_introspection_c__CustomSrv_Request_fini_function(void * message_memory)
{
  cutomsrv__srv__CustomSrv_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CustomSrv_Request__rosidl_typesupport_introspection_c__CustomSrv_Request_message_member_array[2] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cutomsrv__srv__CustomSrv_Request, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cutomsrv__srv__CustomSrv_Request, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CustomSrv_Request__rosidl_typesupport_introspection_c__CustomSrv_Request_message_members = {
  "cutomsrv__srv",  // message namespace
  "CustomSrv_Request",  // message name
  2,  // number of fields
  sizeof(cutomsrv__srv__CustomSrv_Request),
  CustomSrv_Request__rosidl_typesupport_introspection_c__CustomSrv_Request_message_member_array,  // message members
  CustomSrv_Request__rosidl_typesupport_introspection_c__CustomSrv_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  CustomSrv_Request__rosidl_typesupport_introspection_c__CustomSrv_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CustomSrv_Request__rosidl_typesupport_introspection_c__CustomSrv_Request_message_type_support_handle = {
  0,
  &CustomSrv_Request__rosidl_typesupport_introspection_c__CustomSrv_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cutomsrv
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cutomsrv, srv, CustomSrv_Request)() {
  if (!CustomSrv_Request__rosidl_typesupport_introspection_c__CustomSrv_Request_message_type_support_handle.typesupport_identifier) {
    CustomSrv_Request__rosidl_typesupport_introspection_c__CustomSrv_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CustomSrv_Request__rosidl_typesupport_introspection_c__CustomSrv_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "cutomsrv/srv/detail/custom_srv__rosidl_typesupport_introspection_c.h"
// already included above
// #include "cutomsrv/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "cutomsrv/srv/detail/custom_srv__functions.h"
// already included above
// #include "cutomsrv/srv/detail/custom_srv__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void CustomSrv_Response__rosidl_typesupport_introspection_c__CustomSrv_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cutomsrv__srv__CustomSrv_Response__init(message_memory);
}

void CustomSrv_Response__rosidl_typesupport_introspection_c__CustomSrv_Response_fini_function(void * message_memory)
{
  cutomsrv__srv__CustomSrv_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CustomSrv_Response__rosidl_typesupport_introspection_c__CustomSrv_Response_message_member_array[1] = {
  {
    "ack",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cutomsrv__srv__CustomSrv_Response, ack),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CustomSrv_Response__rosidl_typesupport_introspection_c__CustomSrv_Response_message_members = {
  "cutomsrv__srv",  // message namespace
  "CustomSrv_Response",  // message name
  1,  // number of fields
  sizeof(cutomsrv__srv__CustomSrv_Response),
  CustomSrv_Response__rosidl_typesupport_introspection_c__CustomSrv_Response_message_member_array,  // message members
  CustomSrv_Response__rosidl_typesupport_introspection_c__CustomSrv_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  CustomSrv_Response__rosidl_typesupport_introspection_c__CustomSrv_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CustomSrv_Response__rosidl_typesupport_introspection_c__CustomSrv_Response_message_type_support_handle = {
  0,
  &CustomSrv_Response__rosidl_typesupport_introspection_c__CustomSrv_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cutomsrv
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cutomsrv, srv, CustomSrv_Response)() {
  if (!CustomSrv_Response__rosidl_typesupport_introspection_c__CustomSrv_Response_message_type_support_handle.typesupport_identifier) {
    CustomSrv_Response__rosidl_typesupport_introspection_c__CustomSrv_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CustomSrv_Response__rosidl_typesupport_introspection_c__CustomSrv_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "cutomsrv/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "cutomsrv/srv/detail/custom_srv__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers cutomsrv__srv__detail__custom_srv__rosidl_typesupport_introspection_c__CustomSrv_service_members = {
  "cutomsrv__srv",  // service namespace
  "CustomSrv",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // cutomsrv__srv__detail__custom_srv__rosidl_typesupport_introspection_c__CustomSrv_Request_message_type_support_handle,
  NULL  // response message
  // cutomsrv__srv__detail__custom_srv__rosidl_typesupport_introspection_c__CustomSrv_Response_message_type_support_handle
};

static rosidl_service_type_support_t cutomsrv__srv__detail__custom_srv__rosidl_typesupport_introspection_c__CustomSrv_service_type_support_handle = {
  0,
  &cutomsrv__srv__detail__custom_srv__rosidl_typesupport_introspection_c__CustomSrv_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cutomsrv, srv, CustomSrv_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cutomsrv, srv, CustomSrv_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cutomsrv
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cutomsrv, srv, CustomSrv)() {
  if (!cutomsrv__srv__detail__custom_srv__rosidl_typesupport_introspection_c__CustomSrv_service_type_support_handle.typesupport_identifier) {
    cutomsrv__srv__detail__custom_srv__rosidl_typesupport_introspection_c__CustomSrv_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)cutomsrv__srv__detail__custom_srv__rosidl_typesupport_introspection_c__CustomSrv_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cutomsrv, srv, CustomSrv_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cutomsrv, srv, CustomSrv_Response)()->data;
  }

  return &cutomsrv__srv__detail__custom_srv__rosidl_typesupport_introspection_c__CustomSrv_service_type_support_handle;
}
