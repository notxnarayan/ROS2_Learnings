// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from my_interfaces:msg/LEDstatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "my_interfaces/msg/detail/le_dstatus__functions.h"
#include "my_interfaces/msg/detail/le_dstatus__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace my_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void LEDstatus_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) my_interfaces::msg::LEDstatus(_init);
}

void LEDstatus_fini_function(void * message_memory)
{
  auto typed_message = static_cast<my_interfaces::msg::LEDstatus *>(message_memory);
  typed_message->~LEDstatus();
}

size_t size_function__LEDstatus__ledx_status(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LEDstatus__ledx_status(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void * get_function__LEDstatus__ledx_status(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__LEDstatus__ledx_status(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int64_t *>(
    get_const_function__LEDstatus__ledx_status(untyped_member, index));
  auto & value = *reinterpret_cast<int64_t *>(untyped_value);
  value = item;
}

void assign_function__LEDstatus__ledx_status(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int64_t *>(
    get_function__LEDstatus__ledx_status(untyped_member, index));
  const auto & value = *reinterpret_cast<const int64_t *>(untyped_value);
  item = value;
}

void resize_function__LEDstatus__ledx_status(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LEDstatus_message_member_array[1] = {
  {
    "ledx_status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_interfaces::msg::LEDstatus, ledx_status),  // bytes offset in struct
    nullptr,  // default value
    size_function__LEDstatus__ledx_status,  // size() function pointer
    get_const_function__LEDstatus__ledx_status,  // get_const(index) function pointer
    get_function__LEDstatus__ledx_status,  // get(index) function pointer
    fetch_function__LEDstatus__ledx_status,  // fetch(index, &value) function pointer
    assign_function__LEDstatus__ledx_status,  // assign(index, value) function pointer
    resize_function__LEDstatus__ledx_status  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LEDstatus_message_members = {
  "my_interfaces::msg",  // message namespace
  "LEDstatus",  // message name
  1,  // number of fields
  sizeof(my_interfaces::msg::LEDstatus),
  false,  // has_any_key_member_
  LEDstatus_message_member_array,  // message members
  LEDstatus_init_function,  // function to initialize message memory (memory has to be allocated)
  LEDstatus_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LEDstatus_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LEDstatus_message_members,
  get_message_typesupport_handle_function,
  &my_interfaces__msg__LEDstatus__get_type_hash,
  &my_interfaces__msg__LEDstatus__get_type_description,
  &my_interfaces__msg__LEDstatus__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace my_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_interfaces::msg::LEDstatus>()
{
  return &::my_interfaces::msg::rosidl_typesupport_introspection_cpp::LEDstatus_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_interfaces, msg, LEDstatus)() {
  return &::my_interfaces::msg::rosidl_typesupport_introspection_cpp::LEDstatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
