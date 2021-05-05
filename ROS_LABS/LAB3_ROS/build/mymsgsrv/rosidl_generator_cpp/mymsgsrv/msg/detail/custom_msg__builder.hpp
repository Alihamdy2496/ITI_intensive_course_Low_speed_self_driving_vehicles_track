// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mymsgsrv:msg/CustomMsg.idl
// generated code does not contain a copyright notice

#ifndef MYMSGSRV__MSG__DETAIL__CUSTOM_MSG__BUILDER_HPP_
#define MYMSGSRV__MSG__DETAIL__CUSTOM_MSG__BUILDER_HPP_

#include "mymsgsrv/msg/detail/custom_msg__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mymsgsrv
{

namespace msg
{

namespace builder
{

class Init_CustomMsg_value
{
public:
  explicit Init_CustomMsg_value(::mymsgsrv::msg::CustomMsg & msg)
  : msg_(msg)
  {}
  ::mymsgsrv::msg::CustomMsg value(::mymsgsrv::msg::CustomMsg::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mymsgsrv::msg::CustomMsg msg_;
};

class Init_CustomMsg_text
{
public:
  Init_CustomMsg_text()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CustomMsg_value text(::mymsgsrv::msg::CustomMsg::_text_type arg)
  {
    msg_.text = std::move(arg);
    return Init_CustomMsg_value(msg_);
  }

private:
  ::mymsgsrv::msg::CustomMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mymsgsrv::msg::CustomMsg>()
{
  return mymsgsrv::msg::builder::Init_CustomMsg_text();
}

}  // namespace mymsgsrv

#endif  // MYMSGSRV__MSG__DETAIL__CUSTOM_MSG__BUILDER_HPP_
