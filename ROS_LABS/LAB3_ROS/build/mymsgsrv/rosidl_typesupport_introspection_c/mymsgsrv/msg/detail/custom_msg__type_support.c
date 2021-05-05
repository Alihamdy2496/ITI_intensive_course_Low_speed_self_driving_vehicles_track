// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mymsgsrv:msg/CustomMsg.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mymsgsrv/msg/detail/custom_msg__rosidl_typesupport_introspection_c.h"
#include "mymsgsrv/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mymsgsrv/msg/detail/custom_msg__functions.h"
#include "mymsgsrv/msg/detail/custom_msg__struct.h"


// Include directives for member types
// Member `text`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CustomMsg__rosidl_typesupport_introspection_c__CustomMsg_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mymsgsrv__msg__CustomMsg__init(message_memory);
}

void CustomMsg__rosidl_typesupport_introspection_c__CustomMsg_fini_function(void * message_memory)
{
  mymsgsrv__msg__CustomMsg__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CustomMsg__rosidl_typesupport_introspection_c__CustomMsg_message_member_array[2] = {
  {
    "text",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mymsgsrv__msg__CustomMsg, text),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mymsgsrv__msg__CustomMsg, value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CustomMsg__rosidl_typesupport_introspection_c__CustomMsg_message_members = {
  "mymsgsrv__msg",  // message namespace
  "CustomMsg",  // message name
  2,  // number of fields
  sizeof(mymsgsrv__msg__CustomMsg),
  CustomMsg__rosidl_typesupport_introspection_c__CustomMsg_message_member_array,  // message members
  CustomMsg__rosidl_typesupport_introspection_c__CustomMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  CustomMsg__rosidl_typesupport_introspection_c__CustomMsg_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CustomMsg__rosidl_typesupport_introspection_c__CustomMsg_message_type_support_handle = {
  0,
  &CustomMsg__rosidl_typesupport_introspection_c__CustomMsg_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mymsgsrv
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mymsgsrv, msg, CustomMsg)() {
  if (!CustomMsg__rosidl_typesupport_introspection_c__CustomMsg_message_type_support_handle.typesupport_identifier) {
    CustomMsg__rosidl_typesupport_introspection_c__CustomMsg_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CustomMsg__rosidl_typesupport_introspection_c__CustomMsg_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
