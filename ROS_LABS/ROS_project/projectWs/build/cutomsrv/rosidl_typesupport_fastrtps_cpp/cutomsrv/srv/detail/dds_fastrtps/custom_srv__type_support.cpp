// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from cutomsrv:srv/CustomSrv.idl
// generated code does not contain a copyright notice
#include "cutomsrv/srv/detail/custom_srv__rosidl_typesupport_fastrtps_cpp.hpp"
#include "cutomsrv/srv/detail/custom_srv__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace cutomsrv
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cutomsrv
cdr_serialize(
  const cutomsrv::srv::CustomSrv_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: x
  cdr << ros_message.x;
  // Member: y
  cdr << ros_message.y;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cutomsrv
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  cutomsrv::srv::CustomSrv_Request & ros_message)
{
  // Member: x
  cdr >> ros_message.x;

  // Member: y
  cdr >> ros_message.y;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cutomsrv
get_serialized_size(
  const cutomsrv::srv::CustomSrv_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: x
  {
    size_t item_size = sizeof(ros_message.x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: y
  {
    size_t item_size = sizeof(ros_message.y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cutomsrv
max_serialized_size_CustomSrv_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _CustomSrv_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const cutomsrv::srv::CustomSrv_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CustomSrv_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<cutomsrv::srv::CustomSrv_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CustomSrv_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const cutomsrv::srv::CustomSrv_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CustomSrv_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_CustomSrv_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _CustomSrv_Request__callbacks = {
  "cutomsrv::srv",
  "CustomSrv_Request",
  _CustomSrv_Request__cdr_serialize,
  _CustomSrv_Request__cdr_deserialize,
  _CustomSrv_Request__get_serialized_size,
  _CustomSrv_Request__max_serialized_size
};

static rosidl_message_type_support_t _CustomSrv_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CustomSrv_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace cutomsrv

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_cutomsrv
const rosidl_message_type_support_t *
get_message_type_support_handle<cutomsrv::srv::CustomSrv_Request>()
{
  return &cutomsrv::srv::typesupport_fastrtps_cpp::_CustomSrv_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cutomsrv, srv, CustomSrv_Request)() {
  return &cutomsrv::srv::typesupport_fastrtps_cpp::_CustomSrv_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace cutomsrv
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cutomsrv
cdr_serialize(
  const cutomsrv::srv::CustomSrv_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: ack
  cdr << (ros_message.ack ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cutomsrv
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  cutomsrv::srv::CustomSrv_Response & ros_message)
{
  // Member: ack
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.ack = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cutomsrv
get_serialized_size(
  const cutomsrv::srv::CustomSrv_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: ack
  {
    size_t item_size = sizeof(ros_message.ack);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cutomsrv
max_serialized_size_CustomSrv_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: ack
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _CustomSrv_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const cutomsrv::srv::CustomSrv_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CustomSrv_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<cutomsrv::srv::CustomSrv_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CustomSrv_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const cutomsrv::srv::CustomSrv_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CustomSrv_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_CustomSrv_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _CustomSrv_Response__callbacks = {
  "cutomsrv::srv",
  "CustomSrv_Response",
  _CustomSrv_Response__cdr_serialize,
  _CustomSrv_Response__cdr_deserialize,
  _CustomSrv_Response__get_serialized_size,
  _CustomSrv_Response__max_serialized_size
};

static rosidl_message_type_support_t _CustomSrv_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CustomSrv_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace cutomsrv

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_cutomsrv
const rosidl_message_type_support_t *
get_message_type_support_handle<cutomsrv::srv::CustomSrv_Response>()
{
  return &cutomsrv::srv::typesupport_fastrtps_cpp::_CustomSrv_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cutomsrv, srv, CustomSrv_Response)() {
  return &cutomsrv::srv::typesupport_fastrtps_cpp::_CustomSrv_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace cutomsrv
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _CustomSrv__callbacks = {
  "cutomsrv::srv",
  "CustomSrv",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cutomsrv, srv, CustomSrv_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cutomsrv, srv, CustomSrv_Response)(),
};

static rosidl_service_type_support_t _CustomSrv__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CustomSrv__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace cutomsrv

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_cutomsrv
const rosidl_service_type_support_t *
get_service_type_support_handle<cutomsrv::srv::CustomSrv>()
{
  return &cutomsrv::srv::typesupport_fastrtps_cpp::_CustomSrv__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cutomsrv, srv, CustomSrv)() {
  return &cutomsrv::srv::typesupport_fastrtps_cpp::_CustomSrv__handle;
}

#ifdef __cplusplus
}
#endif
