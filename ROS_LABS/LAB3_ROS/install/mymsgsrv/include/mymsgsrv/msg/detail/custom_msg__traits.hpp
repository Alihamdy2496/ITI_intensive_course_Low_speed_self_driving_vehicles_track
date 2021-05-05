// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mymsgsrv:msg/CustomMsg.idl
// generated code does not contain a copyright notice

#ifndef MYMSGSRV__MSG__DETAIL__CUSTOM_MSG__TRAITS_HPP_
#define MYMSGSRV__MSG__DETAIL__CUSTOM_MSG__TRAITS_HPP_

#include "mymsgsrv/msg/detail/custom_msg__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mymsgsrv::msg::CustomMsg>()
{
  return "mymsgsrv::msg::CustomMsg";
}

template<>
inline const char * name<mymsgsrv::msg::CustomMsg>()
{
  return "mymsgsrv/msg/CustomMsg";
}

template<>
struct has_fixed_size<mymsgsrv::msg::CustomMsg>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mymsgsrv::msg::CustomMsg>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mymsgsrv::msg::CustomMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MYMSGSRV__MSG__DETAIL__CUSTOM_MSG__TRAITS_HPP_
