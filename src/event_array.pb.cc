// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: event_array.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "event_array.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace event_array {
namespace protobuf {

namespace {

const ::google::protobuf::Descriptor* Event_Array_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Event_Array_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_event_5farray_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_event_5farray_2eproto() {
  protobuf_AddDesc_event_5farray_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "event_array.proto");
  GOOGLE_CHECK(file != NULL);
  Event_Array_descriptor_ = file->message_type(0);
  static const int Event_Array_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Event_Array, timestamp_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Event_Array, x_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Event_Array, y_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Event_Array, polarity_),
  };
  Event_Array_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Event_Array_descriptor_,
      Event_Array::default_instance_,
      Event_Array_offsets_,
      -1,
      -1,
      -1,
      sizeof(Event_Array),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Event_Array, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Event_Array, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_event_5farray_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Event_Array_descriptor_, &Event_Array::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_event_5farray_2eproto() {
  delete Event_Array::default_instance_;
  delete Event_Array_reflection_;
}

void protobuf_AddDesc_event_5farray_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_event_5farray_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\021event_array.proto\022\024event_array.protobu"
    "f\"H\n\013Event_Array\022\021\n\ttimestamp\030\001 \003(\001\022\t\n\001x"
    "\030\002 \003(\005\022\t\n\001y\030\003 \003(\005\022\020\n\010polarity\030\004 \003(\005B\002H\001b"
    "\006proto3", 127);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "event_array.proto", &protobuf_RegisterTypes);
  Event_Array::default_instance_ = new Event_Array();
  Event_Array::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_event_5farray_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_event_5farray_2eproto {
  StaticDescriptorInitializer_event_5farray_2eproto() {
    protobuf_AddDesc_event_5farray_2eproto();
  }
} static_descriptor_initializer_event_5farray_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Event_Array::kTimestampFieldNumber;
const int Event_Array::kXFieldNumber;
const int Event_Array::kYFieldNumber;
const int Event_Array::kPolarityFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Event_Array::Event_Array()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:event_array.protobuf.Event_Array)
}

void Event_Array::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

Event_Array::Event_Array(const Event_Array& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:event_array.protobuf.Event_Array)
}

void Event_Array::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
}

Event_Array::~Event_Array() {
  // @@protoc_insertion_point(destructor:event_array.protobuf.Event_Array)
  SharedDtor();
}

void Event_Array::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Event_Array::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Event_Array::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Event_Array_descriptor_;
}

const Event_Array& Event_Array::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_event_5farray_2eproto();
  return *default_instance_;
}

Event_Array* Event_Array::default_instance_ = NULL;

Event_Array* Event_Array::New(::google::protobuf::Arena* arena) const {
  Event_Array* n = new Event_Array;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Event_Array::Clear() {
// @@protoc_insertion_point(message_clear_start:event_array.protobuf.Event_Array)
  timestamp_.Clear();
  x_.Clear();
  y_.Clear();
  polarity_.Clear();
}

bool Event_Array::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:event_array.protobuf.Event_Array)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated double timestamp = 1;
      case 1: {
        if (tag == 10) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, this->mutable_timestamp())));
        } else if (tag == 9) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 1, 10, input, this->mutable_timestamp())));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_x;
        break;
      }

      // repeated int32 x = 2;
      case 2: {
        if (tag == 18) {
         parse_x:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_x())));
        } else if (tag == 16) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 18, input, this->mutable_x())));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_y;
        break;
      }

      // repeated int32 y = 3;
      case 3: {
        if (tag == 26) {
         parse_y:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_y())));
        } else if (tag == 24) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 26, input, this->mutable_y())));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_polarity;
        break;
      }

      // repeated int32 polarity = 4;
      case 4: {
        if (tag == 34) {
         parse_polarity:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_polarity())));
        } else if (tag == 32) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 34, input, this->mutable_polarity())));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:event_array.protobuf.Event_Array)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:event_array.protobuf.Event_Array)
  return false;
#undef DO_
}

void Event_Array::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:event_array.protobuf.Event_Array)
  // repeated double timestamp = 1;
  if (this->timestamp_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(1, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_timestamp_cached_byte_size_);
  }
  for (int i = 0; i < this->timestamp_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteDoubleNoTag(
      this->timestamp(i), output);
  }

  // repeated int32 x = 2;
  if (this->x_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(2, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_x_cached_byte_size_);
  }
  for (int i = 0; i < this->x_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32NoTag(
      this->x(i), output);
  }

  // repeated int32 y = 3;
  if (this->y_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(3, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_y_cached_byte_size_);
  }
  for (int i = 0; i < this->y_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32NoTag(
      this->y(i), output);
  }

  // repeated int32 polarity = 4;
  if (this->polarity_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(4, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_polarity_cached_byte_size_);
  }
  for (int i = 0; i < this->polarity_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32NoTag(
      this->polarity(i), output);
  }

  // @@protoc_insertion_point(serialize_end:event_array.protobuf.Event_Array)
}

::google::protobuf::uint8* Event_Array::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:event_array.protobuf.Event_Array)
  // repeated double timestamp = 1;
  if (this->timestamp_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      1,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
      _timestamp_cached_byte_size_, target);
  }
  for (int i = 0; i < this->timestamp_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteDoubleNoTagToArray(this->timestamp(i), target);
  }

  // repeated int32 x = 2;
  if (this->x_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      2,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
      _x_cached_byte_size_, target);
  }
  for (int i = 0; i < this->x_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32NoTagToArray(this->x(i), target);
  }

  // repeated int32 y = 3;
  if (this->y_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      3,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
      _y_cached_byte_size_, target);
  }
  for (int i = 0; i < this->y_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32NoTagToArray(this->y(i), target);
  }

  // repeated int32 polarity = 4;
  if (this->polarity_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      4,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
      _polarity_cached_byte_size_, target);
  }
  for (int i = 0; i < this->polarity_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32NoTagToArray(this->polarity(i), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:event_array.protobuf.Event_Array)
  return target;
}

int Event_Array::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:event_array.protobuf.Event_Array)
  int total_size = 0;

  // repeated double timestamp = 1;
  {
    int data_size = 0;
    data_size = 8 * this->timestamp_size();
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _timestamp_cached_byte_size_ = data_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // repeated int32 x = 2;
  {
    int data_size = 0;
    for (int i = 0; i < this->x_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int32Size(this->x(i));
    }
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _x_cached_byte_size_ = data_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // repeated int32 y = 3;
  {
    int data_size = 0;
    for (int i = 0; i < this->y_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int32Size(this->y(i));
    }
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _y_cached_byte_size_ = data_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // repeated int32 polarity = 4;
  {
    int data_size = 0;
    for (int i = 0; i < this->polarity_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int32Size(this->polarity(i));
    }
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _polarity_cached_byte_size_ = data_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Event_Array::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:event_array.protobuf.Event_Array)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Event_Array* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Event_Array>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:event_array.protobuf.Event_Array)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:event_array.protobuf.Event_Array)
    MergeFrom(*source);
  }
}

void Event_Array::MergeFrom(const Event_Array& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:event_array.protobuf.Event_Array)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  timestamp_.MergeFrom(from.timestamp_);
  x_.MergeFrom(from.x_);
  y_.MergeFrom(from.y_);
  polarity_.MergeFrom(from.polarity_);
}

void Event_Array::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:event_array.protobuf.Event_Array)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Event_Array::CopyFrom(const Event_Array& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:event_array.protobuf.Event_Array)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Event_Array::IsInitialized() const {

  return true;
}

void Event_Array::Swap(Event_Array* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Event_Array::InternalSwap(Event_Array* other) {
  timestamp_.UnsafeArenaSwap(&other->timestamp_);
  x_.UnsafeArenaSwap(&other->x_);
  y_.UnsafeArenaSwap(&other->y_);
  polarity_.UnsafeArenaSwap(&other->polarity_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Event_Array::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Event_Array_descriptor_;
  metadata.reflection = Event_Array_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Event_Array

// repeated double timestamp = 1;
int Event_Array::timestamp_size() const {
  return timestamp_.size();
}
void Event_Array::clear_timestamp() {
  timestamp_.Clear();
}
 double Event_Array::timestamp(int index) const {
  // @@protoc_insertion_point(field_get:event_array.protobuf.Event_Array.timestamp)
  return timestamp_.Get(index);
}
 void Event_Array::set_timestamp(int index, double value) {
  timestamp_.Set(index, value);
  // @@protoc_insertion_point(field_set:event_array.protobuf.Event_Array.timestamp)
}
 void Event_Array::add_timestamp(double value) {
  timestamp_.Add(value);
  // @@protoc_insertion_point(field_add:event_array.protobuf.Event_Array.timestamp)
}
 const ::google::protobuf::RepeatedField< double >&
Event_Array::timestamp() const {
  // @@protoc_insertion_point(field_list:event_array.protobuf.Event_Array.timestamp)
  return timestamp_;
}
 ::google::protobuf::RepeatedField< double >*
Event_Array::mutable_timestamp() {
  // @@protoc_insertion_point(field_mutable_list:event_array.protobuf.Event_Array.timestamp)
  return &timestamp_;
}

// repeated int32 x = 2;
int Event_Array::x_size() const {
  return x_.size();
}
void Event_Array::clear_x() {
  x_.Clear();
}
 ::google::protobuf::int32 Event_Array::x(int index) const {
  // @@protoc_insertion_point(field_get:event_array.protobuf.Event_Array.x)
  return x_.Get(index);
}
 void Event_Array::set_x(int index, ::google::protobuf::int32 value) {
  x_.Set(index, value);
  // @@protoc_insertion_point(field_set:event_array.protobuf.Event_Array.x)
}
 void Event_Array::add_x(::google::protobuf::int32 value) {
  x_.Add(value);
  // @@protoc_insertion_point(field_add:event_array.protobuf.Event_Array.x)
}
 const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
Event_Array::x() const {
  // @@protoc_insertion_point(field_list:event_array.protobuf.Event_Array.x)
  return x_;
}
 ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
Event_Array::mutable_x() {
  // @@protoc_insertion_point(field_mutable_list:event_array.protobuf.Event_Array.x)
  return &x_;
}

// repeated int32 y = 3;
int Event_Array::y_size() const {
  return y_.size();
}
void Event_Array::clear_y() {
  y_.Clear();
}
 ::google::protobuf::int32 Event_Array::y(int index) const {
  // @@protoc_insertion_point(field_get:event_array.protobuf.Event_Array.y)
  return y_.Get(index);
}
 void Event_Array::set_y(int index, ::google::protobuf::int32 value) {
  y_.Set(index, value);
  // @@protoc_insertion_point(field_set:event_array.protobuf.Event_Array.y)
}
 void Event_Array::add_y(::google::protobuf::int32 value) {
  y_.Add(value);
  // @@protoc_insertion_point(field_add:event_array.protobuf.Event_Array.y)
}
 const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
Event_Array::y() const {
  // @@protoc_insertion_point(field_list:event_array.protobuf.Event_Array.y)
  return y_;
}
 ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
Event_Array::mutable_y() {
  // @@protoc_insertion_point(field_mutable_list:event_array.protobuf.Event_Array.y)
  return &y_;
}

// repeated int32 polarity = 4;
int Event_Array::polarity_size() const {
  return polarity_.size();
}
void Event_Array::clear_polarity() {
  polarity_.Clear();
}
 ::google::protobuf::int32 Event_Array::polarity(int index) const {
  // @@protoc_insertion_point(field_get:event_array.protobuf.Event_Array.polarity)
  return polarity_.Get(index);
}
 void Event_Array::set_polarity(int index, ::google::protobuf::int32 value) {
  polarity_.Set(index, value);
  // @@protoc_insertion_point(field_set:event_array.protobuf.Event_Array.polarity)
}
 void Event_Array::add_polarity(::google::protobuf::int32 value) {
  polarity_.Add(value);
  // @@protoc_insertion_point(field_add:event_array.protobuf.Event_Array.polarity)
}
 const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
Event_Array::polarity() const {
  // @@protoc_insertion_point(field_list:event_array.protobuf.Event_Array.polarity)
  return polarity_;
}
 ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
Event_Array::mutable_polarity() {
  // @@protoc_insertion_point(field_mutable_list:event_array.protobuf.Event_Array.polarity)
  return &polarity_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf
}  // namespace event_array

// @@protoc_insertion_point(global_scope)
