// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mymsgsrv:srv/CustomSrv.idl
// generated code does not contain a copyright notice

#ifndef MYMSGSRV__SRV__DETAIL__CUSTOM_SRV__STRUCT_HPP_
#define MYMSGSRV__SRV__DETAIL__CUSTOM_SRV__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__mymsgsrv__srv__CustomSrv_Request __attribute__((deprecated))
#else
# define DEPRECATED__mymsgsrv__srv__CustomSrv_Request __declspec(deprecated)
#endif

namespace mymsgsrv
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CustomSrv_Request_
{
  using Type = CustomSrv_Request_<ContainerAllocator>;

  explicit CustomSrv_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reqq = false;
    }
  }

  explicit CustomSrv_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reqq = false;
    }
  }

  // field types and members
  using _reqq_type =
    bool;
  _reqq_type reqq;

  // setters for named parameter idiom
  Type & set__reqq(
    const bool & _arg)
  {
    this->reqq = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mymsgsrv::srv::CustomSrv_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mymsgsrv::srv::CustomSrv_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mymsgsrv::srv::CustomSrv_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mymsgsrv::srv::CustomSrv_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mymsgsrv::srv::CustomSrv_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mymsgsrv::srv::CustomSrv_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mymsgsrv::srv::CustomSrv_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mymsgsrv::srv::CustomSrv_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mymsgsrv::srv::CustomSrv_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mymsgsrv::srv::CustomSrv_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mymsgsrv__srv__CustomSrv_Request
    std::shared_ptr<mymsgsrv::srv::CustomSrv_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mymsgsrv__srv__CustomSrv_Request
    std::shared_ptr<mymsgsrv::srv::CustomSrv_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CustomSrv_Request_ & other) const
  {
    if (this->reqq != other.reqq) {
      return false;
    }
    return true;
  }
  bool operator!=(const CustomSrv_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CustomSrv_Request_

// alias to use template instance with default allocator
using CustomSrv_Request =
  mymsgsrv::srv::CustomSrv_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mymsgsrv


#ifndef _WIN32
# define DEPRECATED__mymsgsrv__srv__CustomSrv_Response __attribute__((deprecated))
#else
# define DEPRECATED__mymsgsrv__srv__CustomSrv_Response __declspec(deprecated)
#endif

namespace mymsgsrv
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CustomSrv_Response_
{
  using Type = CustomSrv_Response_<ContainerAllocator>;

  explicit CustomSrv_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rspp = "";
    }
  }

  explicit CustomSrv_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : rspp(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rspp = "";
    }
  }

  // field types and members
  using _rspp_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _rspp_type rspp;

  // setters for named parameter idiom
  Type & set__rspp(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->rspp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mymsgsrv::srv::CustomSrv_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mymsgsrv::srv::CustomSrv_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mymsgsrv::srv::CustomSrv_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mymsgsrv::srv::CustomSrv_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mymsgsrv::srv::CustomSrv_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mymsgsrv::srv::CustomSrv_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mymsgsrv::srv::CustomSrv_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mymsgsrv::srv::CustomSrv_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mymsgsrv::srv::CustomSrv_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mymsgsrv::srv::CustomSrv_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mymsgsrv__srv__CustomSrv_Response
    std::shared_ptr<mymsgsrv::srv::CustomSrv_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mymsgsrv__srv__CustomSrv_Response
    std::shared_ptr<mymsgsrv::srv::CustomSrv_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CustomSrv_Response_ & other) const
  {
    if (this->rspp != other.rspp) {
      return false;
    }
    return true;
  }
  bool operator!=(const CustomSrv_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CustomSrv_Response_

// alias to use template instance with default allocator
using CustomSrv_Response =
  mymsgsrv::srv::CustomSrv_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mymsgsrv

namespace mymsgsrv
{

namespace srv
{

struct CustomSrv
{
  using Request = mymsgsrv::srv::CustomSrv_Request;
  using Response = mymsgsrv::srv::CustomSrv_Response;
};

}  // namespace srv

}  // namespace mymsgsrv

#endif  // MYMSGSRV__SRV__DETAIL__CUSTOM_SRV__STRUCT_HPP_
