/* Generated by the protocol buffer compiler.  DO NOT EDIT! */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C_NO_DEPRECATED
#define PROTOBUF_C_NO_DEPRECATED
#endif

#include "structures.pb-c.h"
void   log__init
                     (Log         *message)
{
  static Log init_value = LOG__INIT;
  *message = init_value;
}
size_t log__get_packed_size
                     (const Log *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &log__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t log__pack
                     (const Log *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &log__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t log__pack_to_buffer
                     (const Log *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &log__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Log *
       log__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Log *)
     protobuf_c_message_unpack (&log__descriptor,
                                allocator, len, data);
}
void   log__free_unpacked
                     (Log *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &log__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   contract__init
                     (Contract         *message)
{
  static Contract init_value = CONTRACT__INIT;
  *message = init_value;
}
size_t contract__get_packed_size
                     (const Contract *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &contract__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t contract__pack
                     (const Contract *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &contract__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t contract__pack_to_buffer
                     (const Contract *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &contract__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Contract *
       contract__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Contract *)
     protobuf_c_message_unpack (&contract__descriptor,
                                allocator, len, data);
}
void   contract__free_unpacked
                     (Contract *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &contract__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   block_range__init
                     (BlockRange         *message)
{
  static BlockRange init_value = BLOCK_RANGE__INIT;
  *message = init_value;
}
size_t block_range__get_packed_size
                     (const BlockRange *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &block_range__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t block_range__pack
                     (const BlockRange *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &block_range__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t block_range__pack_to_buffer
                     (const BlockRange *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &block_range__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
BlockRange *
       block_range__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (BlockRange *)
     protobuf_c_message_unpack (&block_range__descriptor,
                                allocator, len, data);
}
void   block_range__free_unpacked
                     (BlockRange *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &block_range__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   result__init
                     (Result         *message)
{
  static Result init_value = RESULT__INIT;
  *message = init_value;
}
size_t result__get_packed_size
                     (const Result *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &result__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t result__pack
                     (const Result *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &result__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t result__pack_to_buffer
                     (const Result *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &result__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Result *
       result__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Result *)
     protobuf_c_message_unpack (&result__descriptor,
                                allocator, len, data);
}
void   result__free_unpacked
                     (Result *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &result__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   report__init
                     (Report         *message)
{
  static Report init_value = REPORT__INIT;
  *message = init_value;
}
size_t report__get_packed_size
                     (const Report *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &report__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t report__pack
                     (const Report *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &report__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t report__pack_to_buffer
                     (const Report *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &report__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Report *
       report__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Report *)
     protobuf_c_message_unpack (&report__descriptor,
                                allocator, len, data);
}
void   report__free_unpacked
                     (Report *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &report__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor log__field_descriptors[6] =
{
  {
    "magic",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    PROTOBUF_C_OFFSETOF(Log, has_magic),
    PROTOBUF_C_OFFSETOF(Log, magic),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "sender_id",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Log, sender_id),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "severity",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    PROTOBUF_C_OFFSETOF(Log, has_severity),
    PROTOBUF_C_OFFSETOF(Log, severity),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "timestamp_sec",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    PROTOBUF_C_OFFSETOF(Log, has_timestamp_sec),
    PROTOBUF_C_OFFSETOF(Log, timestamp_sec),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "timestamp_usec",
    5,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    PROTOBUF_C_OFFSETOF(Log, has_timestamp_usec),
    PROTOBUF_C_OFFSETOF(Log, timestamp_usec),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "message",
    6,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Log, message),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned log__field_indices_by_name[] = {
  0,   /* field[0] = magic */
  5,   /* field[5] = message */
  1,   /* field[1] = sender_id */
  2,   /* field[2] = severity */
  3,   /* field[3] = timestamp_sec */
  4,   /* field[4] = timestamp_usec */
};
static const ProtobufCIntRange log__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 6 }
};
const ProtobufCMessageDescriptor log__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "log",
  "Log",
  "Log",
  "",
  sizeof(Log),
  6,
  log__field_descriptors,
  log__field_indices_by_name,
  1,  log__number_ranges,
  (ProtobufCMessageInit) log__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor contract__field_descriptors[6] =
{
  {
    "magic",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    PROTOBUF_C_OFFSETOF(Contract, has_magic),
    PROTOBUF_C_OFFSETOF(Contract, magic),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "path",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Contract, path),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "types",
    3,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_UINT32,
    PROTOBUF_C_OFFSETOF(Contract, n_types),
    PROTOBUF_C_OFFSETOF(Contract, types),
    NULL,
    NULL,
    1,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "is_contiguous",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    PROTOBUF_C_OFFSETOF(Contract, has_is_contiguous),
    PROTOBUF_C_OFFSETOF(Contract, is_contiguous),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "absolute_offset",
    5,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_SINT64,
    PROTOBUF_C_OFFSETOF(Contract, has_absolute_offset),
    PROTOBUF_C_OFFSETOF(Contract, absolute_offset),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "sleep",
    6,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_SINT32,
    PROTOBUF_C_OFFSETOF(Contract, has_sleep),
    PROTOBUF_C_OFFSETOF(Contract, sleep),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned contract__field_indices_by_name[] = {
  4,   /* field[4] = absolute_offset */
  3,   /* field[3] = is_contiguous */
  0,   /* field[0] = magic */
  1,   /* field[1] = path */
  5,   /* field[5] = sleep */
  2,   /* field[2] = types */
};
static const ProtobufCIntRange contract__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 6 }
};
const ProtobufCMessageDescriptor contract__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "contract",
  "Contract",
  "Contract",
  "",
  sizeof(Contract),
  6,
  contract__field_descriptors,
  contract__field_indices_by_name,
  1,  contract__number_ranges,
  (ProtobufCMessageInit) contract__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor block_range__field_descriptors[3] =
{
  {
    "magic",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    PROTOBUF_C_OFFSETOF(BlockRange, has_magic),
    PROTOBUF_C_OFFSETOF(BlockRange, magic),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "offset",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT64,
    PROTOBUF_C_OFFSETOF(BlockRange, has_offset),
    PROTOBUF_C_OFFSETOF(BlockRange, offset),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "length",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT64,
    PROTOBUF_C_OFFSETOF(BlockRange, has_length),
    PROTOBUF_C_OFFSETOF(BlockRange, length),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned block_range__field_indices_by_name[] = {
  2,   /* field[2] = length */
  0,   /* field[0] = magic */
  1,   /* field[1] = offset */
};
static const ProtobufCIntRange block_range__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor block_range__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "block_range",
  "BlockRange",
  "BlockRange",
  "",
  sizeof(BlockRange),
  3,
  block_range__field_descriptors,
  block_range__field_indices_by_name,
  1,  block_range__number_ranges,
  (ProtobufCMessageInit) block_range__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor result__field_descriptors[7] =
{
  {
    "magic",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    PROTOBUF_C_OFFSETOF(Result, has_magic),
    PROTOBUF_C_OFFSETOF(Result, magic),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "block_ranges",
    2,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    PROTOBUF_C_OFFSETOF(Result, n_block_ranges),
    PROTOBUF_C_OFFSETOF(Result, block_ranges),
    &block_range__descriptor,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "data_description",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Result, data_description),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "brief_data_description",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Result, brief_data_description),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "confidence",
    5,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_SINT32,
    PROTOBUF_C_OFFSETOF(Result, has_confidence),
    PROTOBUF_C_OFFSETOF(Result, confidence),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "subcontractor_name",
    6,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Result, subcontractor_name),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "new_contracts",
    7,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    PROTOBUF_C_OFFSETOF(Result, n_new_contracts),
    PROTOBUF_C_OFFSETOF(Result, new_contracts),
    &contract__descriptor,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned result__field_indices_by_name[] = {
  1,   /* field[1] = block_ranges */
  3,   /* field[3] = brief_data_description */
  4,   /* field[4] = confidence */
  2,   /* field[2] = data_description */
  0,   /* field[0] = magic */
  6,   /* field[6] = new_contracts */
  5,   /* field[5] = subcontractor_name */
};
static const ProtobufCIntRange result__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 7 }
};
const ProtobufCMessageDescriptor result__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "result",
  "Result",
  "Result",
  "",
  sizeof(Result),
  7,
  result__field_descriptors,
  result__field_indices_by_name,
  1,  result__number_ranges,
  (ProtobufCMessageInit) result__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor report__field_descriptors[3] =
{
  {
    "magic",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    PROTOBUF_C_OFFSETOF(Report, has_magic),
    PROTOBUF_C_OFFSETOF(Report, magic),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "original_contract",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Report, original_contract),
    &contract__descriptor,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "results",
    3,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    PROTOBUF_C_OFFSETOF(Report, n_results),
    PROTOBUF_C_OFFSETOF(Report, results),
    &result__descriptor,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned report__field_indices_by_name[] = {
  0,   /* field[0] = magic */
  1,   /* field[1] = original_contract */
  2,   /* field[2] = results */
};
static const ProtobufCIntRange report__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor report__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "report",
  "Report",
  "Report",
  "",
  sizeof(Report),
  3,
  report__field_descriptors,
  report__field_indices_by_name,
  1,  report__number_ranges,
  (ProtobufCMessageInit) report__init,
  NULL,NULL,NULL    /* reserved[123] */
};
