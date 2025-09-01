// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from my_interfaces:msg/LEDstatus.idl
// generated code does not contain a copyright notice

#include "my_interfaces/msg/detail/le_dstatus__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_my_interfaces
const rosidl_type_hash_t *
my_interfaces__msg__LEDstatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1e, 0xb7, 0x8d, 0x83, 0x28, 0x80, 0xf5, 0x6b,
      0x58, 0xae, 0xb1, 0x0d, 0x6d, 0xf7, 0xd4, 0x68,
      0x7a, 0xdb, 0x61, 0x76, 0xf2, 0xa0, 0x59, 0x6e,
      0xda, 0x9e, 0x94, 0xaa, 0x4f, 0x28, 0xaa, 0xae,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char my_interfaces__msg__LEDstatus__TYPE_NAME[] = "my_interfaces/msg/LEDstatus";

// Define type names, field names, and default values
static char my_interfaces__msg__LEDstatus__FIELD_NAME__ledx_status[] = "ledx_status";

static rosidl_runtime_c__type_description__Field my_interfaces__msg__LEDstatus__FIELDS[] = {
  {
    {my_interfaces__msg__LEDstatus__FIELD_NAME__ledx_status, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
my_interfaces__msg__LEDstatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {my_interfaces__msg__LEDstatus__TYPE_NAME, 27, 27},
      {my_interfaces__msg__LEDstatus__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int64[] ledx_status";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
my_interfaces__msg__LEDstatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {my_interfaces__msg__LEDstatus__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 19, 19},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
my_interfaces__msg__LEDstatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *my_interfaces__msg__LEDstatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
