// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_interfaces:msg/HdStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_interfaces/msg/hd_status.hpp"


#ifndef MY_INTERFACES__MSG__DETAIL__HD_STATUS__TRAITS_HPP_
#define MY_INTERFACES__MSG__DETAIL__HD_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_interfaces/msg/detail/hd_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const HdStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: temperature
  {
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << ", ";
  }

  // member: are_motors_ready
  {
    out << "are_motors_ready: ";
    rosidl_generator_traits::value_to_yaml(msg.are_motors_ready, out);
    out << ", ";
  }

  // member: debug
  {
    out << "debug: ";
    rosidl_generator_traits::value_to_yaml(msg.debug, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HdStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << "\n";
  }

  // member: are_motors_ready
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "are_motors_ready: ";
    rosidl_generator_traits::value_to_yaml(msg.are_motors_ready, out);
    out << "\n";
  }

  // member: debug
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "debug: ";
    rosidl_generator_traits::value_to_yaml(msg.debug, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HdStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace my_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_interfaces::msg::HdStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const my_interfaces::msg::HdStatus & msg)
{
  return my_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<my_interfaces::msg::HdStatus>()
{
  return "my_interfaces::msg::HdStatus";
}

template<>
inline const char * name<my_interfaces::msg::HdStatus>()
{
  return "my_interfaces/msg/HdStatus";
}

template<>
struct has_fixed_size<my_interfaces::msg::HdStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_interfaces::msg::HdStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_interfaces::msg::HdStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_INTERFACES__MSG__DETAIL__HD_STATUS__TRAITS_HPP_
