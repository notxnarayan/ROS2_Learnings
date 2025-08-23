// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_interfaces:msg/HdStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_interfaces/msg/hd_status.hpp"


#ifndef MY_INTERFACES__MSG__DETAIL__HD_STATUS__BUILDER_HPP_
#define MY_INTERFACES__MSG__DETAIL__HD_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_interfaces/msg/detail/hd_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_interfaces
{

namespace msg
{

namespace builder
{

class Init_HdStatus_debug
{
public:
  explicit Init_HdStatus_debug(::my_interfaces::msg::HdStatus & msg)
  : msg_(msg)
  {}
  ::my_interfaces::msg::HdStatus debug(::my_interfaces::msg::HdStatus::_debug_type arg)
  {
    msg_.debug = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::msg::HdStatus msg_;
};

class Init_HdStatus_are_motors_ready
{
public:
  explicit Init_HdStatus_are_motors_ready(::my_interfaces::msg::HdStatus & msg)
  : msg_(msg)
  {}
  Init_HdStatus_debug are_motors_ready(::my_interfaces::msg::HdStatus::_are_motors_ready_type arg)
  {
    msg_.are_motors_ready = std::move(arg);
    return Init_HdStatus_debug(msg_);
  }

private:
  ::my_interfaces::msg::HdStatus msg_;
};

class Init_HdStatus_temperature
{
public:
  Init_HdStatus_temperature()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HdStatus_are_motors_ready temperature(::my_interfaces::msg::HdStatus::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_HdStatus_are_motors_ready(msg_);
  }

private:
  ::my_interfaces::msg::HdStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::msg::HdStatus>()
{
  return my_interfaces::msg::builder::Init_HdStatus_temperature();
}

}  // namespace my_interfaces

#endif  // MY_INTERFACES__MSG__DETAIL__HD_STATUS__BUILDER_HPP_
