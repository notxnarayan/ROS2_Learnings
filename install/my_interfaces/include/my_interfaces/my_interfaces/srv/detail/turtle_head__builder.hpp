// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_interfaces:srv/TurtleHead.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_interfaces/srv/turtle_head.hpp"


#ifndef MY_INTERFACES__SRV__DETAIL__TURTLE_HEAD__BUILDER_HPP_
#define MY_INTERFACES__SRV__DETAIL__TURTLE_HEAD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_interfaces/srv/detail/turtle_head__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_interfaces
{

namespace srv
{

namespace builder
{

class Init_TurtleHead_Request_y
{
public:
  explicit Init_TurtleHead_Request_y(::my_interfaces::srv::TurtleHead_Request & msg)
  : msg_(msg)
  {}
  ::my_interfaces::srv::TurtleHead_Request y(::my_interfaces::srv::TurtleHead_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::srv::TurtleHead_Request msg_;
};

class Init_TurtleHead_Request_x
{
public:
  explicit Init_TurtleHead_Request_x(::my_interfaces::srv::TurtleHead_Request & msg)
  : msg_(msg)
  {}
  Init_TurtleHead_Request_y x(::my_interfaces::srv::TurtleHead_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_TurtleHead_Request_y(msg_);
  }

private:
  ::my_interfaces::srv::TurtleHead_Request msg_;
};

class Init_TurtleHead_Request_name
{
public:
  Init_TurtleHead_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TurtleHead_Request_x name(::my_interfaces::srv::TurtleHead_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_TurtleHead_Request_x(msg_);
  }

private:
  ::my_interfaces::srv::TurtleHead_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::srv::TurtleHead_Request>()
{
  return my_interfaces::srv::builder::Init_TurtleHead_Request_name();
}

}  // namespace my_interfaces


namespace my_interfaces
{

namespace srv
{

namespace builder
{

class Init_TurtleHead_Response_nearest
{
public:
  explicit Init_TurtleHead_Response_nearest(::my_interfaces::srv::TurtleHead_Response & msg)
  : msg_(msg)
  {}
  ::my_interfaces::srv::TurtleHead_Response nearest(::my_interfaces::srv::TurtleHead_Response::_nearest_type arg)
  {
    msg_.nearest = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::srv::TurtleHead_Response msg_;
};

class Init_TurtleHead_Response_success
{
public:
  Init_TurtleHead_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TurtleHead_Response_nearest success(::my_interfaces::srv::TurtleHead_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_TurtleHead_Response_nearest(msg_);
  }

private:
  ::my_interfaces::srv::TurtleHead_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::srv::TurtleHead_Response>()
{
  return my_interfaces::srv::builder::Init_TurtleHead_Response_success();
}

}  // namespace my_interfaces


namespace my_interfaces
{

namespace srv
{

namespace builder
{

class Init_TurtleHead_Event_response
{
public:
  explicit Init_TurtleHead_Event_response(::my_interfaces::srv::TurtleHead_Event & msg)
  : msg_(msg)
  {}
  ::my_interfaces::srv::TurtleHead_Event response(::my_interfaces::srv::TurtleHead_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::srv::TurtleHead_Event msg_;
};

class Init_TurtleHead_Event_request
{
public:
  explicit Init_TurtleHead_Event_request(::my_interfaces::srv::TurtleHead_Event & msg)
  : msg_(msg)
  {}
  Init_TurtleHead_Event_response request(::my_interfaces::srv::TurtleHead_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_TurtleHead_Event_response(msg_);
  }

private:
  ::my_interfaces::srv::TurtleHead_Event msg_;
};

class Init_TurtleHead_Event_info
{
public:
  Init_TurtleHead_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TurtleHead_Event_request info(::my_interfaces::srv::TurtleHead_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_TurtleHead_Event_request(msg_);
  }

private:
  ::my_interfaces::srv::TurtleHead_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::srv::TurtleHead_Event>()
{
  return my_interfaces::srv::builder::Init_TurtleHead_Event_info();
}

}  // namespace my_interfaces

#endif  // MY_INTERFACES__SRV__DETAIL__TURTLE_HEAD__BUILDER_HPP_
