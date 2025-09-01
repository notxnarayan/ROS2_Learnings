// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_interfaces:msg/LEDstatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_interfaces/msg/le_dstatus.hpp"


#ifndef MY_INTERFACES__MSG__DETAIL__LE_DSTATUS__STRUCT_HPP_
#define MY_INTERFACES__MSG__DETAIL__LE_DSTATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_interfaces__msg__LEDstatus __attribute__((deprecated))
#else
# define DEPRECATED__my_interfaces__msg__LEDstatus __declspec(deprecated)
#endif

namespace my_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LEDstatus_
{
  using Type = LEDstatus_<ContainerAllocator>;

  explicit LEDstatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit LEDstatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _ledx_status_type =
    std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>>;
  _ledx_status_type ledx_status;

  // setters for named parameter idiom
  Type & set__ledx_status(
    const std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>> & _arg)
  {
    this->ledx_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_interfaces::msg::LEDstatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_interfaces::msg::LEDstatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_interfaces::msg::LEDstatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_interfaces::msg::LEDstatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_interfaces::msg::LEDstatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::msg::LEDstatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_interfaces::msg::LEDstatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::msg::LEDstatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_interfaces::msg::LEDstatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_interfaces::msg::LEDstatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_interfaces__msg__LEDstatus
    std::shared_ptr<my_interfaces::msg::LEDstatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_interfaces__msg__LEDstatus
    std::shared_ptr<my_interfaces::msg::LEDstatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LEDstatus_ & other) const
  {
    if (this->ledx_status != other.ledx_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const LEDstatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LEDstatus_

// alias to use template instance with default allocator
using LEDstatus =
  my_interfaces::msg::LEDstatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace my_interfaces

#endif  // MY_INTERFACES__MSG__DETAIL__LE_DSTATUS__STRUCT_HPP_
