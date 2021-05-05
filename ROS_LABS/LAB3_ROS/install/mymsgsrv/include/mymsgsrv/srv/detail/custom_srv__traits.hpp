// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mymsgsrv:srv/CustomSrv.idl
// generated code does not contain a copyright notice

#ifndef MYMSGSRV__SRV__DETAIL__CUSTOM_SRV__TRAITS_HPP_
#define MYMSGSRV__SRV__DETAIL__CUSTOM_SRV__TRAITS_HPP_

#include "mymsgsrv/srv/detail/custom_srv__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mymsgsrv::srv::CustomSrv_Request>()
{
  return "mymsgsrv::srv::CustomSrv_Request";
}

template<>
inline const char * name<mymsgsrv::srv::CustomSrv_Request>()
{
  return "mymsgsrv/srv/CustomSrv_Request";
}

template<>
struct has_fixed_size<mymsgsrv::srv::CustomSrv_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mymsgsrv::srv::CustomSrv_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mymsgsrv::srv::CustomSrv_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mymsgsrv::srv::CustomSrv_Response>()
{
  return "mymsgsrv::srv::CustomSrv_Response";
}

template<>
inline const char * name<mymsgsrv::srv::CustomSrv_Response>()
{
  return "mymsgsrv/srv/CustomSrv_Response";
}

template<>
struct has_fixed_size<mymsgsrv::srv::CustomSrv_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mymsgsrv::srv::CustomSrv_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mymsgsrv::srv::CustomSrv_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mymsgsrv::srv::CustomSrv>()
{
  return "mymsgsrv::srv::CustomSrv";
}

template<>
inline const char * name<mymsgsrv::srv::CustomSrv>()
{
  return "mymsgsrv/srv/CustomSrv";
}

template<>
struct has_fixed_size<mymsgsrv::srv::CustomSrv>
  : std::integral_constant<
    bool,
    has_fixed_size<mymsgsrv::srv::CustomSrv_Request>::value &&
    has_fixed_size<mymsgsrv::srv::CustomSrv_Response>::value
  >
{
};

template<>
struct has_bounded_size<mymsgsrv::srv::CustomSrv>
  : std::integral_constant<
    bool,
    has_bounded_size<mymsgsrv::srv::CustomSrv_Request>::value &&
    has_bounded_size<mymsgsrv::srv::CustomSrv_Response>::value
  >
{
};

template<>
struct is_service<mymsgsrv::srv::CustomSrv>
  : std::true_type
{
};

template<>
struct is_service_request<mymsgsrv::srv::CustomSrv_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mymsgsrv::srv::CustomSrv_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MYMSGSRV__SRV__DETAIL__CUSTOM_SRV__TRAITS_HPP_
