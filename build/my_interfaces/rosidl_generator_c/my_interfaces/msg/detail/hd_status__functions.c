// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from my_interfaces:msg/HdStatus.idl
// generated code does not contain a copyright notice
#include "my_interfaces/msg/detail/hd_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `debug`
#include "rosidl_runtime_c/string_functions.h"

bool
my_interfaces__msg__HdStatus__init(my_interfaces__msg__HdStatus * msg)
{
  if (!msg) {
    return false;
  }
  // temperature
  // are_motors_ready
  // debug
  if (!rosidl_runtime_c__String__init(&msg->debug)) {
    my_interfaces__msg__HdStatus__fini(msg);
    return false;
  }
  return true;
}

void
my_interfaces__msg__HdStatus__fini(my_interfaces__msg__HdStatus * msg)
{
  if (!msg) {
    return;
  }
  // temperature
  // are_motors_ready
  // debug
  rosidl_runtime_c__String__fini(&msg->debug);
}

bool
my_interfaces__msg__HdStatus__are_equal(const my_interfaces__msg__HdStatus * lhs, const my_interfaces__msg__HdStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // temperature
  if (lhs->temperature != rhs->temperature) {
    return false;
  }
  // are_motors_ready
  if (lhs->are_motors_ready != rhs->are_motors_ready) {
    return false;
  }
  // debug
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->debug), &(rhs->debug)))
  {
    return false;
  }
  return true;
}

bool
my_interfaces__msg__HdStatus__copy(
  const my_interfaces__msg__HdStatus * input,
  my_interfaces__msg__HdStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // temperature
  output->temperature = input->temperature;
  // are_motors_ready
  output->are_motors_ready = input->are_motors_ready;
  // debug
  if (!rosidl_runtime_c__String__copy(
      &(input->debug), &(output->debug)))
  {
    return false;
  }
  return true;
}

my_interfaces__msg__HdStatus *
my_interfaces__msg__HdStatus__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_interfaces__msg__HdStatus * msg = (my_interfaces__msg__HdStatus *)allocator.allocate(sizeof(my_interfaces__msg__HdStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_interfaces__msg__HdStatus));
  bool success = my_interfaces__msg__HdStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_interfaces__msg__HdStatus__destroy(my_interfaces__msg__HdStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_interfaces__msg__HdStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_interfaces__msg__HdStatus__Sequence__init(my_interfaces__msg__HdStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_interfaces__msg__HdStatus * data = NULL;

  if (size) {
    data = (my_interfaces__msg__HdStatus *)allocator.zero_allocate(size, sizeof(my_interfaces__msg__HdStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_interfaces__msg__HdStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_interfaces__msg__HdStatus__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
my_interfaces__msg__HdStatus__Sequence__fini(my_interfaces__msg__HdStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      my_interfaces__msg__HdStatus__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

my_interfaces__msg__HdStatus__Sequence *
my_interfaces__msg__HdStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_interfaces__msg__HdStatus__Sequence * array = (my_interfaces__msg__HdStatus__Sequence *)allocator.allocate(sizeof(my_interfaces__msg__HdStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_interfaces__msg__HdStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_interfaces__msg__HdStatus__Sequence__destroy(my_interfaces__msg__HdStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_interfaces__msg__HdStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_interfaces__msg__HdStatus__Sequence__are_equal(const my_interfaces__msg__HdStatus__Sequence * lhs, const my_interfaces__msg__HdStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_interfaces__msg__HdStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_interfaces__msg__HdStatus__Sequence__copy(
  const my_interfaces__msg__HdStatus__Sequence * input,
  my_interfaces__msg__HdStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_interfaces__msg__HdStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_interfaces__msg__HdStatus * data =
      (my_interfaces__msg__HdStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_interfaces__msg__HdStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_interfaces__msg__HdStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_interfaces__msg__HdStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
