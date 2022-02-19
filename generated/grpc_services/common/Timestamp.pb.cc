// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: grpc_services/common/Timestamp.proto

#include "grpc_services/common/Timestamp.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace grpc_services {
namespace common {
constexpr Timestamp::Timestamp(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : seconds_(int64_t{0})
  , nanos_(0){}
struct TimestampDefaultTypeInternal {
  constexpr TimestampDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~TimestampDefaultTypeInternal() {}
  union {
    Timestamp _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT TimestampDefaultTypeInternal _Timestamp_default_instance_;
}  // namespace common
}  // namespace grpc_services
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_grpc_5fservices_2fcommon_2fTimestamp_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_grpc_5fservices_2fcommon_2fTimestamp_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_grpc_5fservices_2fcommon_2fTimestamp_2eproto = nullptr;

const uint32_t TableStruct_grpc_5fservices_2fcommon_2fTimestamp_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::grpc_services::common::Timestamp, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::grpc_services::common::Timestamp, seconds_),
  PROTOBUF_FIELD_OFFSET(::grpc_services::common::Timestamp, nanos_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::grpc_services::common::Timestamp)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::grpc_services::common::_Timestamp_default_instance_),
};

const char descriptor_table_protodef_grpc_5fservices_2fcommon_2fTimestamp_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n$grpc_services/common/Timestamp.proto\022\024"
  "grpc_services.common\"+\n\tTimestamp\022\017\n\007sec"
  "onds\030\001 \001(\003\022\r\n\005nanos\030\002 \001(\005b\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_grpc_5fservices_2fcommon_2fTimestamp_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_grpc_5fservices_2fcommon_2fTimestamp_2eproto = {
  false, false, 113, descriptor_table_protodef_grpc_5fservices_2fcommon_2fTimestamp_2eproto, "grpc_services/common/Timestamp.proto", 
  &descriptor_table_grpc_5fservices_2fcommon_2fTimestamp_2eproto_once, nullptr, 0, 1,
  schemas, file_default_instances, TableStruct_grpc_5fservices_2fcommon_2fTimestamp_2eproto::offsets,
  file_level_metadata_grpc_5fservices_2fcommon_2fTimestamp_2eproto, file_level_enum_descriptors_grpc_5fservices_2fcommon_2fTimestamp_2eproto, file_level_service_descriptors_grpc_5fservices_2fcommon_2fTimestamp_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_grpc_5fservices_2fcommon_2fTimestamp_2eproto_getter() {
  return &descriptor_table_grpc_5fservices_2fcommon_2fTimestamp_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_grpc_5fservices_2fcommon_2fTimestamp_2eproto(&descriptor_table_grpc_5fservices_2fcommon_2fTimestamp_2eproto);
namespace grpc_services {
namespace common {

// ===================================================================

class Timestamp::_Internal {
 public:
};

Timestamp::Timestamp(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:grpc_services.common.Timestamp)
}
Timestamp::Timestamp(const Timestamp& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&seconds_, &from.seconds_,
    static_cast<size_t>(reinterpret_cast<char*>(&nanos_) -
    reinterpret_cast<char*>(&seconds_)) + sizeof(nanos_));
  // @@protoc_insertion_point(copy_constructor:grpc_services.common.Timestamp)
}

inline void Timestamp::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&seconds_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&nanos_) -
    reinterpret_cast<char*>(&seconds_)) + sizeof(nanos_));
}

Timestamp::~Timestamp() {
  // @@protoc_insertion_point(destructor:grpc_services.common.Timestamp)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void Timestamp::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void Timestamp::ArenaDtor(void* object) {
  Timestamp* _this = reinterpret_cast< Timestamp* >(object);
  (void)_this;
}
void Timestamp::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Timestamp::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Timestamp::Clear() {
// @@protoc_insertion_point(message_clear_start:grpc_services.common.Timestamp)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&seconds_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&nanos_) -
      reinterpret_cast<char*>(&seconds_)) + sizeof(nanos_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Timestamp::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int64 seconds = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          seconds_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 nanos = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          nanos_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Timestamp::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:grpc_services.common.Timestamp)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 seconds = 1;
  if (this->_internal_seconds() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(1, this->_internal_seconds(), target);
  }

  // int32 nanos = 2;
  if (this->_internal_nanos() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_nanos(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:grpc_services.common.Timestamp)
  return target;
}

size_t Timestamp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:grpc_services.common.Timestamp)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int64 seconds = 1;
  if (this->_internal_seconds() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64SizePlusOne(this->_internal_seconds());
  }

  // int32 nanos = 2;
  if (this->_internal_nanos() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_nanos());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Timestamp::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    Timestamp::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Timestamp::GetClassData() const { return &_class_data_; }

void Timestamp::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<Timestamp *>(to)->MergeFrom(
      static_cast<const Timestamp &>(from));
}


void Timestamp::MergeFrom(const Timestamp& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:grpc_services.common.Timestamp)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_seconds() != 0) {
    _internal_set_seconds(from._internal_seconds());
  }
  if (from._internal_nanos() != 0) {
    _internal_set_nanos(from._internal_nanos());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Timestamp::CopyFrom(const Timestamp& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:grpc_services.common.Timestamp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Timestamp::IsInitialized() const {
  return true;
}

void Timestamp::InternalSwap(Timestamp* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Timestamp, nanos_)
      + sizeof(Timestamp::nanos_)
      - PROTOBUF_FIELD_OFFSET(Timestamp, seconds_)>(
          reinterpret_cast<char*>(&seconds_),
          reinterpret_cast<char*>(&other->seconds_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Timestamp::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_grpc_5fservices_2fcommon_2fTimestamp_2eproto_getter, &descriptor_table_grpc_5fservices_2fcommon_2fTimestamp_2eproto_once,
      file_level_metadata_grpc_5fservices_2fcommon_2fTimestamp_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace common
}  // namespace grpc_services
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::grpc_services::common::Timestamp* Arena::CreateMaybeMessage< ::grpc_services::common::Timestamp >(Arena* arena) {
  return Arena::CreateMessageInternal< ::grpc_services::common::Timestamp >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
