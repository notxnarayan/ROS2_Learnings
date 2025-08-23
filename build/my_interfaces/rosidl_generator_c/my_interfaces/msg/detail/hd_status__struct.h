// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_interfaces:msg/HdStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_interfaces/msg/hd_status.h"


#ifndef MY_INTERFACES__MSG__DETAIL__HD_STATUS__STRUCT_H_
#define MY_INTERFACES__MSG__DETAIL__HD_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'debug'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/HdStatus in the package my_interfaces.
typedef struct my_interfaces__msg__HdStatus
{
  double temperature;
  bool are_motors_ready;
  rosidl_runtime_c__String debug;
} my_interfaces__msg__HdStatus;

// Struct for a sequence of my_interfaces__msg__HdStatus.
typedef struct my_interfaces__msg__HdStatus__Sequence
{
  my_interfaces__msg__HdStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_interfaces__msg__HdStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_INTERFACES__MSG__DETAIL__HD_STATUS__STRUCT_H_
