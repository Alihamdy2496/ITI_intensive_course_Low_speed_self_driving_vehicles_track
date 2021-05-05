// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mymsgsrv:srv/CustomSrv.idl
// generated code does not contain a copyright notice

#ifndef MYMSGSRV__SRV__DETAIL__CUSTOM_SRV__BUILDER_HPP_
#define MYMSGSRV__SRV__DETAIL__CUSTOM_SRV__BUILDER_HPP_

#include "mymsgsrv/srv/detail/custom_srv__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mymsgsrv
{

namespace srv
{

namespace builder
{

class Init_CustomSrv_Request_reqq
{
public:
  Init_CustomSrv_Request_reqq()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mymsgsrv::srv::CustomSrv_Request reqq(::mymsgsrv::srv::CustomSrv_Request::_reqq_type arg)
  {
    msg_.reqq = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mymsgsrv::srv::CustomSrv_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mymsgsrv::srv::CustomSrv_Request>()
{
  return mymsgsrv::srv::builder::Init_CustomSrv_Request_reqq();
}

}  // namespace mymsgsrv


namespace mymsgsrv
{

namespace srv
{

namespace builder
{

class Init_CustomSrv_Response_rspp
{
public:
  Init_CustomSrv_Response_rspp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mymsgsrv::srv::CustomSrv_Response rspp(::mymsgsrv::srv::CustomSrv_Response::_rspp_type arg)
  {
    msg_.rspp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mymsgsrv::srv::CustomSrv_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mymsgsrv::srv::CustomSrv_Response>()
{
  return mymsgsrv::srv::builder::Init_CustomSrv_Response_rspp();
}

}  // namespace mymsgsrv

#endif  // MYMSGSRV__SRV__DETAIL__CUSTOM_SRV__BUILDER_HPP_
