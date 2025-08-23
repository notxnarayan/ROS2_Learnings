// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from my_interfaces:msg/HdStatus.idl
// generated code does not contain a copyright notice

#include "my_interfaces/msg/detail/hd_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_my_interfaces
const rosidl_type_hash_t *
my_interfaces__msg__HdStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x24, 0xbf, 0x53, 0xcc, 0x35, 0x93, 0x92, 0xa6,
      0x30, 0x7a, 0x9c, 0x25, 0xa4, 0x96, 0xb2, 0x8f,
      0xbc, 0x3b, 0x69, 0x00, 0xea, 0x72, 0x6c, 0xa1,
      0x51, 0x1f, 0xf2, 0x06, 0xaf, 0x67, 0xdf, 0x16,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char my_interfaces__msg__HdStatus__TYPE_NAME[] = "my_interfaces/msg/HdStatus";

// Define type names, field names, and default values
static char my_interfaces__msg__HdStatus__FIELD_NAME__temperature[] = "temperature";
static char my_interfaces__msg__HdStatus__FIELD_NAME__are_motors_ready[] = "are_motors_ready";
static char my_interfaces__msg__HdStatus__FIELD_NAME__debug[] = "debug";

static rosidl_runtime_c__type_description__Field my_interfaces__msg__HdStatus__FIELDS[] = {
  {
    {my_interfaces__msg__HdStatus__FIELD_NAME__temperature, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {my_interfaces__msg__HdStatus__FIELD_NAME__are_motors_ready, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {my_interfaces__msg__HdStatus__FIELD_NAME__debug, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
my_interfaces__msg__HdStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {my_interfaces__msg__HdStatus__TYPE_NAME, 26, 26},
      {my_interfaces__msg__HdStatus__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 temperature\n"
  "bool are_motors_ready\n"
  "string debug";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
my_interfaces__msg__HdStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {my_interfaces__msg__HdStatus__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 54, 54},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
my_interfaces__msg__HdStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *my_interfaces__msg__HdStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
