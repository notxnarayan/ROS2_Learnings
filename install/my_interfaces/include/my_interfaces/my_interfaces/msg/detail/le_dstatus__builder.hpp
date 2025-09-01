// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_interfaces:msg/LEDstatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_interfaces/msg/le_dstatus.hpp"


#ifndef MY_INTERFACES__MSG__DETAIL__LE_DSTATUS__BUILDER_HPP_
#define MY_INTERFACES__MSG__DETAIL__LE_DSTATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_interfaces/msg/detail/le_dstatus__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_interfaces
{

namespace msg
{

namespace builder
{

class Init_LEDstatus_ledx_status
{
public:
  Init_LEDstatus_ledx_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_interfaces::msg::LEDstatus ledx_status(::my_interfaces::msg::LEDstatus::_ledx_status_type arg)
  {
    msg_.ledx_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::msg::LEDstatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::msg::LEDstatus>()
{
  return my_interfaces::msg::builder::Init_LEDstatus_ledx_status();
}

}  // namespace my_interfaces

#endif  // MY_INTERFACES__MSG__DETAIL__LE_DSTATUS__BUILDER_HPP_
