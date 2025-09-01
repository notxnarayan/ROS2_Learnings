// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_interfaces:srv/SetLED.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_interfaces/srv/set_led.h"


#ifndef MY_INTERFACES__SRV__DETAIL__SET_LED__STRUCT_H_
#define MY_INTERFACES__SRV__DETAIL__SET_LED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'led_val'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/SetLED in the package my_interfaces.
typedef struct my_interfaces__srv__SetLED_Request
{
  rosidl_runtime_c__int64__Sequence led_val;
} my_interfaces__srv__SetLED_Request;

// Struct for a sequence of my_interfaces__srv__SetLED_Request.
typedef struct my_interfaces__srv__SetLED_Request__Sequence
{
  my_interfaces__srv__SetLED_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_interfaces__srv__SetLED_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/SetLED in the package my_interfaces.
typedef struct my_interfaces__srv__SetLED_Response
{
  bool success;
} my_interfaces__srv__SetLED_Response;

// Struct for a sequence of my_interfaces__srv__SetLED_Response.
typedef struct my_interfaces__srv__SetLED_Response__Sequence
{
  my_interfaces__srv__SetLED_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_interfaces__srv__SetLED_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  my_interfaces__srv__SetLED_Event__request__MAX_SIZE = 1
};
// response
enum
{
  my_interfaces__srv__SetLED_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetLED in the package my_interfaces.
typedef struct my_interfaces__srv__SetLED_Event
{
  service_msgs__msg__ServiceEventInfo info;
  my_interfaces__srv__SetLED_Request__Sequence request;
  my_interfaces__srv__SetLED_Response__Sequence response;
} my_interfaces__srv__SetLED_Event;

// Struct for a sequence of my_interfaces__srv__SetLED_Event.
typedef struct my_interfaces__srv__SetLED_Event__Sequence
{
  my_interfaces__srv__SetLED_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_interfaces__srv__SetLED_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_INTERFACES__SRV__DETAIL__SET_LED__STRUCT_H_
