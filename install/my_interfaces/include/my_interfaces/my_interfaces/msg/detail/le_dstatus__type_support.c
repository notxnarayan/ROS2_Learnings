// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from my_interfaces:msg/LEDstatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "my_interfaces/msg/detail/le_dstatus__rosidl_typesupport_introspection_c.h"
#include "my_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "my_interfaces/msg/detail/le_dstatus__functions.h"
#include "my_interfaces/msg/detail/le_dstatus__struct.h"


// Include directives for member types
// Member `ledx_status`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void my_interfaces__msg__LEDstatus__rosidl_typesupport_introspection_c__LEDstatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_interfaces__msg__LEDstatus__init(message_memory);
}

void my_interfaces__msg__LEDstatus__rosidl_typesupport_introspection_c__LEDstatus_fini_function(void * message_memory)
{
  my_interfaces__msg__LEDstatus__fini(message_memory);
}

size_t my_interfaces__msg__LEDstatus__rosidl_typesupport_introspection_c__size_function__LEDstatus__ledx_status(
  const void * untyped_member)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return member->size;
}

const void * my_interfaces__msg__LEDstatus__rosidl_typesupport_introspection_c__get_const_function__LEDstatus__ledx_status(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * my_interfaces__msg__LEDstatus__rosidl_typesupport_introspection_c__get_function__LEDstatus__ledx_status(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void my_interfaces__msg__LEDstatus__rosidl_typesupport_introspection_c__fetch_function__LEDstatus__ledx_status(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int64_t * item =
    ((const int64_t *)
    my_interfaces__msg__LEDstatus__rosidl_typesupport_introspection_c__get_const_function__LEDstatus__ledx_status(untyped_member, index));
  int64_t * value =
    (int64_t *)(untyped_value);
  *value = *item;
}

void my_interfaces__msg__LEDstatus__rosidl_typesupport_introspection_c__assign_function__LEDstatus__ledx_status(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int64_t * item =
    ((int64_t *)
    my_interfaces__msg__LEDstatus__rosidl_typesupport_introspection_c__get_function__LEDstatus__ledx_status(untyped_member, index));
  const int64_t * value =
    (const int64_t *)(untyped_value);
  *item = *value;
}

bool my_interfaces__msg__LEDstatus__rosidl_typesupport_introspection_c__resize_function__LEDstatus__ledx_status(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  rosidl_runtime_c__int64__Sequence__fini(member);
  return rosidl_runtime_c__int64__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember my_interfaces__msg__LEDstatus__rosidl_typesupport_introspection_c__LEDstatus_message_member_array[1] = {
  {
    "ledx_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_interfaces__msg__LEDstatus, ledx_status),  // bytes offset in struct
    NULL,  // default value
    my_interfaces__msg__LEDstatus__rosidl_typesupport_introspection_c__size_function__LEDstatus__ledx_status,  // size() function pointer
    my_interfaces__msg__LEDstatus__rosidl_typesupport_introspection_c__get_const_function__LEDstatus__ledx_status,  // get_const(index) function pointer
    my_interfaces__msg__LEDstatus__rosidl_typesupport_introspection_c__get_function__LEDstatus__ledx_status,  // get(index) function pointer
    my_interfaces__msg__LEDstatus__rosidl_typesupport_introspection_c__fetch_function__LEDstatus__ledx_status,  // fetch(index, &value) function pointer
    my_interfaces__msg__LEDstatus__rosidl_typesupport_introspection_c__assign_function__LEDstatus__ledx_status,  // assign(index, value) function pointer
    my_interfaces__msg__LEDstatus__rosidl_typesupport_introspection_c__resize_function__LEDstatus__ledx_status  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_interfaces__msg__LEDstatus__rosidl_typesupport_introspection_c__LEDstatus_message_members = {
  "my_interfaces__msg",  // message namespace
  "LEDstatus",  // message name
  1,  // number of fields
  sizeof(my_interfaces__msg__LEDstatus),
  false,  // has_any_key_member_
  my_interfaces__msg__LEDstatus__rosidl_typesupport_introspection_c__LEDstatus_message_member_array,  // message members
  my_interfaces__msg__LEDstatus__rosidl_typesupport_introspection_c__LEDstatus_init_function,  // function to initialize message memory (memory has to be allocated)
  my_interfaces__msg__LEDstatus__rosidl_typesupport_introspection_c__LEDstatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_interfaces__msg__LEDstatus__rosidl_typesupport_introspection_c__LEDstatus_message_type_support_handle = {
  0,
  &my_interfaces__msg__LEDstatus__rosidl_typesupport_introspection_c__LEDstatus_message_members,
  get_message_typesupport_handle_function,
  &my_interfaces__msg__LEDstatus__get_type_hash,
  &my_interfaces__msg__LEDstatus__get_type_description,
  &my_interfaces__msg__LEDstatus__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_interfaces, msg, LEDstatus)() {
  if (!my_interfaces__msg__LEDstatus__rosidl_typesupport_introspection_c__LEDstatus_message_type_support_handle.typesupport_identifier) {
    my_interfaces__msg__LEDstatus__rosidl_typesupport_introspection_c__LEDstatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_interfaces__msg__LEDstatus__rosidl_typesupport_introspection_c__LEDstatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
