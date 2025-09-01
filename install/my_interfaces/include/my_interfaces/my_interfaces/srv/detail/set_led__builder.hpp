// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_interfaces:srv/SetLED.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_interfaces/srv/set_led.hpp"


#ifndef MY_INTERFACES__SRV__DETAIL__SET_LED__BUILDER_HPP_
#define MY_INTERFACES__SRV__DETAIL__SET_LED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_interfaces/srv/detail/set_led__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetLED_Request_led_val
{
public:
  Init_SetLED_Request_led_val()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_interfaces::srv::SetLED_Request led_val(::my_interfaces::srv::SetLED_Request::_led_val_type arg)
  {
    msg_.led_val = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::srv::SetLED_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::srv::SetLED_Request>()
{
  return my_interfaces::srv::builder::Init_SetLED_Request_led_val();
}

}  // namespace my_interfaces


namespace my_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetLED_Response_success
{
public:
  Init_SetLED_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_interfaces::srv::SetLED_Response success(::my_interfaces::srv::SetLED_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::srv::SetLED_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::srv::SetLED_Response>()
{
  return my_interfaces::srv::builder::Init_SetLED_Response_success();
}

}  // namespace my_interfaces


namespace my_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetLED_Event_response
{
public:
  explicit Init_SetLED_Event_response(::my_interfaces::srv::SetLED_Event & msg)
  : msg_(msg)
  {}
  ::my_interfaces::srv::SetLED_Event response(::my_interfaces::srv::SetLED_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::srv::SetLED_Event msg_;
};

class Init_SetLED_Event_request
{
public:
  explicit Init_SetLED_Event_request(::my_interfaces::srv::SetLED_Event & msg)
  : msg_(msg)
  {}
  Init_SetLED_Event_response request(::my_interfaces::srv::SetLED_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetLED_Event_response(msg_);
  }

private:
  ::my_interfaces::srv::SetLED_Event msg_;
};

class Init_SetLED_Event_info
{
public:
  Init_SetLED_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetLED_Event_request info(::my_interfaces::srv::SetLED_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetLED_Event_request(msg_);
  }

private:
  ::my_interfaces::srv::SetLED_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::srv::SetLED_Event>()
{
  return my_interfaces::srv::builder::Init_SetLED_Event_info();
}

}  // namespace my_interfaces

#endif  // MY_INTERFACES__SRV__DETAIL__SET_LED__BUILDER_HPP_
