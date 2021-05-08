// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cutomsrv:srv/CustomSrv.idl
// generated code does not contain a copyright notice

#ifndef CUTOMSRV__SRV__DETAIL__CUSTOM_SRV__TRAITS_HPP_
#define CUTOMSRV__SRV__DETAIL__CUSTOM_SRV__TRAITS_HPP_

#include "cutomsrv/srv/detail/custom_srv__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cutomsrv::srv::CustomSrv_Request>()
{
  return "cutomsrv::srv::CustomSrv_Request";
}

template<>
inline const char * name<cutomsrv::srv::CustomSrv_Request>()
{
  return "cutomsrv/srv/CustomSrv_Request";
}

template<>
struct has_fixed_size<cutomsrv::srv::CustomSrv_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<cutomsrv::srv::CustomSrv_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<cutomsrv::srv::CustomSrv_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cutomsrv::srv::CustomSrv_Response>()
{
  return "cutomsrv::srv::CustomSrv_Response";
}

template<>
inline const char * name<cutomsrv::srv::CustomSrv_Response>()
{
  return "cutomsrv/srv/CustomSrv_Response";
}

template<>
struct has_fixed_size<cutomsrv::srv::CustomSrv_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<cutomsrv::srv::CustomSrv_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<cutomsrv::srv::CustomSrv_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cutomsrv::srv::CustomSrv>()
{
  return "cutomsrv::srv::CustomSrv";
}

template<>
inline const char * name<cutomsrv::srv::CustomSrv>()
{
  return "cutomsrv/srv/CustomSrv";
}

template<>
struct has_fixed_size<cutomsrv::srv::CustomSrv>
  : std::integral_constant<
    bool,
    has_fixed_size<cutomsrv::srv::CustomSrv_Request>::value &&
    has_fixed_size<cutomsrv::srv::CustomSrv_Response>::value
  >
{
};

template<>
struct has_bounded_size<cutomsrv::srv::CustomSrv>
  : std::integral_constant<
    bool,
    has_bounded_size<cutomsrv::srv::CustomSrv_Request>::value &&
    has_bounded_size<cutomsrv::srv::CustomSrv_Response>::value
  >
{
};

template<>
struct is_service<cutomsrv::srv::CustomSrv>
  : std::true_type
{
};

template<>
struct is_service_request<cutomsrv::srv::CustomSrv_Request>
  : std::true_type
{
};

template<>
struct is_service_response<cutomsrv::srv::CustomSrv_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CUTOMSRV__SRV__DETAIL__CUSTOM_SRV__TRAITS_HPP_
