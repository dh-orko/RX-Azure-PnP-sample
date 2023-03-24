#ifndef PROCESS_READER_H
#define PROCESS_READER_H

/* Generated by flatcc 0.6.1-dev FlatBuffers schema compiler for C by dvide.com */

#ifndef FLATBUFFERS_COMMON_READER_H
#include "flatbuffers_common_reader.h"
#endif
#ifndef PROCESS_EVENT_TYPE_READER_H
#include "process_event_type_reader.h"
#endif
#include "flatcc/flatcc_flatbuffers.h"
#ifndef __alignas_is_defined
#include <stdalign.h>
#endif
#include "flatcc/flatcc_prologue.h"
#ifndef flatbuffers_identifier
#define flatbuffers_identifier 0
#endif
#ifndef flatbuffers_extension
#define flatbuffers_extension ".bin"
#endif


typedef const struct AzureIoTSecurity_Process_table *AzureIoTSecurity_Process_table_t;
typedef struct AzureIoTSecurity_Process_table *AzureIoTSecurity_Process_mutable_table_t;
typedef const flatbuffers_uoffset_t *AzureIoTSecurity_Process_vec_t;
typedef flatbuffers_uoffset_t *AzureIoTSecurity_Process_mutable_vec_t;
#ifndef AzureIoTSecurity_Process_file_identifier
#define AzureIoTSecurity_Process_file_identifier flatbuffers_identifier
#endif
/* deprecated, use AzureIoTSecurity_Process_file_identifier */
#ifndef AzureIoTSecurity_Process_identifier
#define AzureIoTSecurity_Process_identifier flatbuffers_identifier
#endif
#define AzureIoTSecurity_Process_type_hash ((flatbuffers_thash_t)0x9577302d)
#define AzureIoTSecurity_Process_type_identifier "\x2d\x30\x77\x95"



struct AzureIoTSecurity_Process_table { uint8_t unused__; };

static inline size_t AzureIoTSecurity_Process_vec_len(AzureIoTSecurity_Process_vec_t vec)
__flatbuffers_vec_len(vec)
static inline AzureIoTSecurity_Process_table_t AzureIoTSecurity_Process_vec_at(AzureIoTSecurity_Process_vec_t vec, size_t i)
__flatbuffers_offset_vec_at(AzureIoTSecurity_Process_table_t, vec, i, 0)
__flatbuffers_table_as_root(AzureIoTSecurity_Process)

__flatbuffers_define_string_field(0, AzureIoTSecurity_Process, executable, 0)
__flatbuffers_define_scalar_field(1, AzureIoTSecurity_Process, process_id, flatbuffers_uint32, uint32_t, UINT32_C(0))
__flatbuffers_define_scalar_field(2, AzureIoTSecurity_Process, parent_process_id, flatbuffers_uint32, uint32_t, UINT32_C(0))
__flatbuffers_define_scalar_field(3, AzureIoTSecurity_Process, user_id, flatbuffers_uint32, uint32_t, UINT32_C(0))
__flatbuffers_define_string_field(4, AzureIoTSecurity_Process, user_name, 0)
__flatbuffers_define_string_field(5, AzureIoTSecurity_Process, commandline, 0)
__flatbuffers_define_scalar_field(6, AzureIoTSecurity_Process, event_type, AzureIoTSecurity_ProcessEventType, AzureIoTSecurity_ProcessEventType_enum_t, INT8_C(0))
__flatbuffers_define_scalar_field(7, AzureIoTSecurity_Process, hit_count, flatbuffers_uint32, uint32_t, UINT32_C(1))


#include "flatcc/flatcc_epilogue.h"
#endif /* PROCESS_READER_H */