// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from my_interfaces:srv/TurtleHead.idl
// generated code does not contain a copyright notice

#include "my_interfaces/srv/detail/turtle_head__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_my_interfaces
const rosidl_type_hash_t *
my_interfaces__srv__TurtleHead__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1a, 0x99, 0x85, 0x94, 0xed, 0x4f, 0x30, 0xdc,
      0x89, 0xdb, 0xfb, 0xa6, 0x89, 0x91, 0x1b, 0xde,
      0xa2, 0x2e, 0x52, 0x69, 0x6a, 0xf3, 0xb3, 0x78,
      0x3b, 0x86, 0x73, 0xcd, 0x6e, 0x50, 0x24, 0xe0,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_my_interfaces
const rosidl_type_hash_t *
my_interfaces__srv__TurtleHead_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xda, 0x81, 0xd3, 0x16, 0xc5, 0xe4, 0xbd, 0x1a,
      0x1d, 0x1e, 0xfe, 0xf3, 0x54, 0x61, 0x21, 0x2d,
      0x45, 0xec, 0x54, 0x2e, 0x61, 0xa4, 0x83, 0x68,
      0x7d, 0x63, 0xa0, 0xe6, 0x22, 0xb6, 0x59, 0xc1,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_my_interfaces
const rosidl_type_hash_t *
my_interfaces__srv__TurtleHead_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe5, 0xf8, 0x04, 0xd2, 0x4e, 0x09, 0x58, 0x41,
      0x10, 0xb7, 0x19, 0x99, 0xb9, 0x97, 0x6d, 0x7f,
      0xde, 0x9a, 0x6b, 0x8f, 0x88, 0xe7, 0x1c, 0x1b,
      0xae, 0xf6, 0xca, 0x6c, 0x84, 0x41, 0xe4, 0x56,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_my_interfaces
const rosidl_type_hash_t *
my_interfaces__srv__TurtleHead_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x67, 0xfc, 0xdd, 0x96, 0x3c, 0x0d, 0x14, 0xca,
      0xdb, 0xd4, 0x2f, 0x49, 0x8c, 0xce, 0xf2, 0xc9,
      0xac, 0x45, 0x18, 0x4b, 0xb7, 0xfd, 0x0a, 0x03,
      0x10, 0x7a, 0x58, 0xfc, 0x73, 0x66, 0xfc, 0x93,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char my_interfaces__srv__TurtleHead__TYPE_NAME[] = "my_interfaces/srv/TurtleHead";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char my_interfaces__srv__TurtleHead_Event__TYPE_NAME[] = "my_interfaces/srv/TurtleHead_Event";
static char my_interfaces__srv__TurtleHead_Request__TYPE_NAME[] = "my_interfaces/srv/TurtleHead_Request";
static char my_interfaces__srv__TurtleHead_Response__TYPE_NAME[] = "my_interfaces/srv/TurtleHead_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char my_interfaces__srv__TurtleHead__FIELD_NAME__request_message[] = "request_message";
static char my_interfaces__srv__TurtleHead__FIELD_NAME__response_message[] = "response_message";
static char my_interfaces__srv__TurtleHead__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field my_interfaces__srv__TurtleHead__FIELDS[] = {
  {
    {my_interfaces__srv__TurtleHead__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {my_interfaces__srv__TurtleHead_Request__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {my_interfaces__srv__TurtleHead__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {my_interfaces__srv__TurtleHead_Response__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {my_interfaces__srv__TurtleHead__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {my_interfaces__srv__TurtleHead_Event__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription my_interfaces__srv__TurtleHead__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {my_interfaces__srv__TurtleHead_Event__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {my_interfaces__srv__TurtleHead_Request__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {my_interfaces__srv__TurtleHead_Response__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
my_interfaces__srv__TurtleHead__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {my_interfaces__srv__TurtleHead__TYPE_NAME, 28, 28},
      {my_interfaces__srv__TurtleHead__FIELDS, 3, 3},
    },
    {my_interfaces__srv__TurtleHead__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = my_interfaces__srv__TurtleHead_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = my_interfaces__srv__TurtleHead_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = my_interfaces__srv__TurtleHead_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char my_interfaces__srv__TurtleHead_Request__FIELD_NAME__name[] = "name";
static char my_interfaces__srv__TurtleHead_Request__FIELD_NAME__x[] = "x";
static char my_interfaces__srv__TurtleHead_Request__FIELD_NAME__y[] = "y";

static rosidl_runtime_c__type_description__Field my_interfaces__srv__TurtleHead_Request__FIELDS[] = {
  {
    {my_interfaces__srv__TurtleHead_Request__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {my_interfaces__srv__TurtleHead_Request__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {my_interfaces__srv__TurtleHead_Request__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
my_interfaces__srv__TurtleHead_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {my_interfaces__srv__TurtleHead_Request__TYPE_NAME, 36, 36},
      {my_interfaces__srv__TurtleHead_Request__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char my_interfaces__srv__TurtleHead_Response__FIELD_NAME__success[] = "success";
static char my_interfaces__srv__TurtleHead_Response__FIELD_NAME__nearest[] = "nearest";

static rosidl_runtime_c__type_description__Field my_interfaces__srv__TurtleHead_Response__FIELDS[] = {
  {
    {my_interfaces__srv__TurtleHead_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {my_interfaces__srv__TurtleHead_Response__FIELD_NAME__nearest, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
my_interfaces__srv__TurtleHead_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {my_interfaces__srv__TurtleHead_Response__TYPE_NAME, 37, 37},
      {my_interfaces__srv__TurtleHead_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char my_interfaces__srv__TurtleHead_Event__FIELD_NAME__info[] = "info";
static char my_interfaces__srv__TurtleHead_Event__FIELD_NAME__request[] = "request";
static char my_interfaces__srv__TurtleHead_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field my_interfaces__srv__TurtleHead_Event__FIELDS[] = {
  {
    {my_interfaces__srv__TurtleHead_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {my_interfaces__srv__TurtleHead_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {my_interfaces__srv__TurtleHead_Request__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {my_interfaces__srv__TurtleHead_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {my_interfaces__srv__TurtleHead_Response__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription my_interfaces__srv__TurtleHead_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {my_interfaces__srv__TurtleHead_Request__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {my_interfaces__srv__TurtleHead_Response__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
my_interfaces__srv__TurtleHead_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {my_interfaces__srv__TurtleHead_Event__TYPE_NAME, 34, 34},
      {my_interfaces__srv__TurtleHead_Event__FIELDS, 3, 3},
    },
    {my_interfaces__srv__TurtleHead_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = my_interfaces__srv__TurtleHead_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = my_interfaces__srv__TurtleHead_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string name\n"
  "float64 x\n"
  "float64 y\n"
  "---\n"
  "bool success\n"
  "string[] nearest";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
my_interfaces__srv__TurtleHead__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {my_interfaces__srv__TurtleHead__TYPE_NAME, 28, 28},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 65, 65},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
my_interfaces__srv__TurtleHead_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {my_interfaces__srv__TurtleHead_Request__TYPE_NAME, 36, 36},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
my_interfaces__srv__TurtleHead_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {my_interfaces__srv__TurtleHead_Response__TYPE_NAME, 37, 37},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
my_interfaces__srv__TurtleHead_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {my_interfaces__srv__TurtleHead_Event__TYPE_NAME, 34, 34},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
my_interfaces__srv__TurtleHead__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *my_interfaces__srv__TurtleHead__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *my_interfaces__srv__TurtleHead_Event__get_individual_type_description_source(NULL);
    sources[3] = *my_interfaces__srv__TurtleHead_Request__get_individual_type_description_source(NULL);
    sources[4] = *my_interfaces__srv__TurtleHead_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
my_interfaces__srv__TurtleHead_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *my_interfaces__srv__TurtleHead_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
my_interfaces__srv__TurtleHead_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *my_interfaces__srv__TurtleHead_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
my_interfaces__srv__TurtleHead_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *my_interfaces__srv__TurtleHead_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *my_interfaces__srv__TurtleHead_Request__get_individual_type_description_source(NULL);
    sources[3] = *my_interfaces__srv__TurtleHead_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
