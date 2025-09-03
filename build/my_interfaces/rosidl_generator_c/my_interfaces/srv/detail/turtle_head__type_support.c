// generated from rosidl_generator_c/resource/idl__type_support.c.em
// with input from my_interfaces:srv/TurtleHead.idl
// generated code does not contain a copyright notice

#include <string.h>

#include "my_interfaces/srv/detail/turtle_head__functions.h"
#include "my_interfaces/srv/detail/turtle_head__struct.h"
#include "my_interfaces/srv/detail/turtle_head__type_support.h"
#include "rosidl_typesupport_interface/macros.h"

#ifdef __cplusplus
extern "C"
{
#endif


void *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  my_interfaces,
  srv,
  TurtleHead
)(
  const rosidl_service_introspection_info_t * info,
  rcutils_allocator_t * allocator,
  const void * request_message,
  const void * response_message)
{
  if (!allocator || !info) {
    return NULL;
  }
  my_interfaces__srv__TurtleHead_Event * event_msg = (my_interfaces__srv__TurtleHead_Event *)(allocator->allocate(sizeof(my_interfaces__srv__TurtleHead_Event), allocator->state));
  if (!my_interfaces__srv__TurtleHead_Event__init(event_msg)) {
    allocator->deallocate(event_msg, allocator->state);
    return NULL;
  }

  event_msg->info.event_type = info->event_type;
  event_msg->info.sequence_number = info->sequence_number;
  event_msg->info.stamp.sec = info->stamp_sec;
  event_msg->info.stamp.nanosec = info->stamp_nanosec;
  memcpy(event_msg->info.client_gid, info->client_gid, 16);
  if (request_message) {
    my_interfaces__srv__TurtleHead_Request__Sequence__init(
      &event_msg->request,
      1);
    if (!my_interfaces__srv__TurtleHead_Request__copy((const my_interfaces__srv__TurtleHead_Request *)(request_message), event_msg->request.data)) {
      allocator->deallocate(event_msg, allocator->state);
      return NULL;
    }
  }
  if (response_message) {
    my_interfaces__srv__TurtleHead_Response__Sequence__init(
      &event_msg->response,
      1);
    if (!my_interfaces__srv__TurtleHead_Response__copy((const my_interfaces__srv__TurtleHead_Response *)(response_message), event_msg->response.data)) {
      allocator->deallocate(event_msg, allocator->state);
      return NULL;
    }
  }
  return event_msg;
}

// Forward declare the get type support functions for this type.
bool
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  my_interfaces,
  srv,
  TurtleHead
)(
  void * event_msg,
  rcutils_allocator_t * allocator)
{
  if (!allocator) {
    return false;
  }
  if (NULL == event_msg) {
    return false;
  }
  my_interfaces__srv__TurtleHead_Event * _event_msg = (my_interfaces__srv__TurtleHead_Event *)(event_msg);

  my_interfaces__srv__TurtleHead_Event__fini((my_interfaces__srv__TurtleHead_Event *)(_event_msg));
  if (_event_msg->request.data) {
    allocator->deallocate(_event_msg->request.data, allocator->state);
  }
  if (_event_msg->response.data) {
    allocator->deallocate(_event_msg->response.data, allocator->state);
  }
  allocator->deallocate(_event_msg, allocator->state);
  return true;
}

#ifdef __cplusplus
}
#endif
