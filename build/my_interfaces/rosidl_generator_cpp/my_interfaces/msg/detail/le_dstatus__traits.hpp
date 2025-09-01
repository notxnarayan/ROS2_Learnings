// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_interfaces:msg/LEDstatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_interfaces/msg/le_dstatus.hpp"


#ifndef MY_INTERFACES__MSG__DETAIL__LE_DSTATUS__TRAITS_HPP_
#define MY_INTERFACES__MSG__DETAIL__LE_DSTATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_interfaces/msg/detail/le_dstatus__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const LEDstatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: ledx_status
  {
    if (msg.ledx_status.size() == 0) {
      out << "ledx_status: []";
    } else {
      out << "ledx_status: [";
      size_t pending_items = msg.ledx_status.size();
      for (auto item : msg.ledx_status) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LEDstatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ledx_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ledx_status.size() == 0) {
      out << "ledx_status: []\n";
    } else {
      out << "ledx_status:\n";
      for (auto item : msg.ledx_status) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LEDstatus & msg, bool use_flow_style = false)
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
  const my_interfaces::msg::LEDstatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const my_interfaces::msg::LEDstatus & msg)
{
  return my_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<my_interfaces::msg::LEDstatus>()
{
  return "my_interfaces::msg::LEDstatus";
}

template<>
inline const char * name<my_interfaces::msg::LEDstatus>()
{
  return "my_interfaces/msg/LEDstatus";
}

template<>
struct has_fixed_size<my_interfaces::msg::LEDstatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_interfaces::msg::LEDstatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_interfaces::msg::LEDstatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_INTERFACES__MSG__DETAIL__LE_DSTATUS__TRAITS_HPP_
