// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cutomsrv:srv/CustomSrv.idl
// generated code does not contain a copyright notice

#ifndef CUTOMSRV__SRV__DETAIL__CUSTOM_SRV__BUILDER_HPP_
#define CUTOMSRV__SRV__DETAIL__CUSTOM_SRV__BUILDER_HPP_

#include "cutomsrv/srv/detail/custom_srv__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cutomsrv
{

namespace srv
{

namespace builder
{

class Init_CustomSrv_Request_y
{
public:
  explicit Init_CustomSrv_Request_y(::cutomsrv::srv::CustomSrv_Request & msg)
  : msg_(msg)
  {}
  ::cutomsrv::srv::CustomSrv_Request y(::cutomsrv::srv::CustomSrv_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cutomsrv::srv::CustomSrv_Request msg_;
};

class Init_CustomSrv_Request_x
{
public:
  Init_CustomSrv_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CustomSrv_Request_y x(::cutomsrv::srv::CustomSrv_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_CustomSrv_Request_y(msg_);
  }

private:
  ::cutomsrv::srv::CustomSrv_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cutomsrv::srv::CustomSrv_Request>()
{
  return cutomsrv::srv::builder::Init_CustomSrv_Request_x();
}

}  // namespace cutomsrv


namespace cutomsrv
{

namespace srv
{

namespace builder
{

class Init_CustomSrv_Response_ack
{
public:
  Init_CustomSrv_Response_ack()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cutomsrv::srv::CustomSrv_Response ack(::cutomsrv::srv::CustomSrv_Response::_ack_type arg)
  {
    msg_.ack = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cutomsrv::srv::CustomSrv_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cutomsrv::srv::CustomSrv_Response>()
{
  return cutomsrv::srv::builder::Init_CustomSrv_Response_ack();
}

}  // namespace cutomsrv

#endif  // CUTOMSRV__SRV__DETAIL__CUSTOM_SRV__BUILDER_HPP_
