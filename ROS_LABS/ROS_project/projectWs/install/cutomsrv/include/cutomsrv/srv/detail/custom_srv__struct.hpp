// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cutomsrv:srv/CustomSrv.idl
// generated code does not contain a copyright notice

#ifndef CUTOMSRV__SRV__DETAIL__CUSTOM_SRV__STRUCT_HPP_
#define CUTOMSRV__SRV__DETAIL__CUSTOM_SRV__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__cutomsrv__srv__CustomSrv_Request __attribute__((deprecated))
#else
# define DEPRECATED__cutomsrv__srv__CustomSrv_Request __declspec(deprecated)
#endif

namespace cutomsrv
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
      this->x = 0.0;
      this->y = 0.0;
    }
  }

  explicit CustomSrv_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;

  // setters for named parameter idiom
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cutomsrv::srv::CustomSrv_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const cutomsrv::srv::CustomSrv_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cutomsrv::srv::CustomSrv_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cutomsrv::srv::CustomSrv_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cutomsrv::srv::CustomSrv_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cutomsrv::srv::CustomSrv_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cutomsrv::srv::CustomSrv_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cutomsrv::srv::CustomSrv_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cutomsrv::srv::CustomSrv_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cutomsrv::srv::CustomSrv_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cutomsrv__srv__CustomSrv_Request
    std::shared_ptr<cutomsrv::srv::CustomSrv_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cutomsrv__srv__CustomSrv_Request
    std::shared_ptr<cutomsrv::srv::CustomSrv_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CustomSrv_Request_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
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
  cutomsrv::srv::CustomSrv_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace cutomsrv


#ifndef _WIN32
# define DEPRECATED__cutomsrv__srv__CustomSrv_Response __attribute__((deprecated))
#else
# define DEPRECATED__cutomsrv__srv__CustomSrv_Response __declspec(deprecated)
#endif

namespace cutomsrv
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
      this->ack = false;
    }
  }

  explicit CustomSrv_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ack = false;
    }
  }

  // field types and members
  using _ack_type =
    bool;
  _ack_type ack;

  // setters for named parameter idiom
  Type & set__ack(
    const bool & _arg)
  {
    this->ack = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cutomsrv::srv::CustomSrv_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const cutomsrv::srv::CustomSrv_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cutomsrv::srv::CustomSrv_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cutomsrv::srv::CustomSrv_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cutomsrv::srv::CustomSrv_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cutomsrv::srv::CustomSrv_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cutomsrv::srv::CustomSrv_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cutomsrv::srv::CustomSrv_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cutomsrv::srv::CustomSrv_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cutomsrv::srv::CustomSrv_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cutomsrv__srv__CustomSrv_Response
    std::shared_ptr<cutomsrv::srv::CustomSrv_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cutomsrv__srv__CustomSrv_Response
    std::shared_ptr<cutomsrv::srv::CustomSrv_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CustomSrv_Response_ & other) const
  {
    if (this->ack != other.ack) {
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
  cutomsrv::srv::CustomSrv_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace cutomsrv

namespace cutomsrv
{

namespace srv
{

struct CustomSrv
{
  using Request = cutomsrv::srv::CustomSrv_Request;
  using Response = cutomsrv::srv::CustomSrv_Response;
};

}  // namespace srv

}  // namespace cutomsrv

#endif  // CUTOMSRV__SRV__DETAIL__CUSTOM_SRV__STRUCT_HPP_
