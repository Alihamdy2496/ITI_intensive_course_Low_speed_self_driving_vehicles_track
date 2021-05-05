// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mymsgsrv:msg/CustomMsg.idl
// generated code does not contain a copyright notice

#ifndef MYMSGSRV__MSG__DETAIL__CUSTOM_MSG__STRUCT_HPP_
#define MYMSGSRV__MSG__DETAIL__CUSTOM_MSG__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__mymsgsrv__msg__CustomMsg __attribute__((deprecated))
#else
# define DEPRECATED__mymsgsrv__msg__CustomMsg __declspec(deprecated)
#endif

namespace mymsgsrv
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CustomMsg_
{
  using Type = CustomMsg_<ContainerAllocator>;

  explicit CustomMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->text = "";
      this->value = 0ll;
    }
  }

  explicit CustomMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : text(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->text = "";
      this->value = 0ll;
    }
  }

  // field types and members
  using _text_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _text_type text;
  using _value_type =
    int64_t;
  _value_type value;

  // setters for named parameter idiom
  Type & set__text(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->text = _arg;
    return *this;
  }
  Type & set__value(
    const int64_t & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mymsgsrv::msg::CustomMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const mymsgsrv::msg::CustomMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mymsgsrv::msg::CustomMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mymsgsrv::msg::CustomMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mymsgsrv::msg::CustomMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mymsgsrv::msg::CustomMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mymsgsrv::msg::CustomMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mymsgsrv::msg::CustomMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mymsgsrv::msg::CustomMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mymsgsrv::msg::CustomMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mymsgsrv__msg__CustomMsg
    std::shared_ptr<mymsgsrv::msg::CustomMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mymsgsrv__msg__CustomMsg
    std::shared_ptr<mymsgsrv::msg::CustomMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CustomMsg_ & other) const
  {
    if (this->text != other.text) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const CustomMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CustomMsg_

// alias to use template instance with default allocator
using CustomMsg =
  mymsgsrv::msg::CustomMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mymsgsrv

#endif  // MYMSGSRV__MSG__DETAIL__CUSTOM_MSG__STRUCT_HPP_
