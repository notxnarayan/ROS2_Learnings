// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_interfaces:msg/LEDstatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_interfaces/msg/le_dstatus.h"


#ifndef MY_INTERFACES__MSG__DETAIL__LE_DSTATUS__STRUCT_H_
#define MY_INTERFACES__MSG__DETAIL__LE_DSTATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'ledx_status'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/LEDstatus in the package my_interfaces.
typedef struct my_interfaces__msg__LEDstatus
{
  rosidl_runtime_c__int64__Sequence ledx_status;
} my_interfaces__msg__LEDstatus;

// Struct for a sequence of my_interfaces__msg__LEDstatus.
typedef struct my_interfaces__msg__LEDstatus__Sequence
{
  my_interfaces__msg__LEDstatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_interfaces__msg__LEDstatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_INTERFACES__MSG__DETAIL__LE_DSTATUS__STRUCT_H_
