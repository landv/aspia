// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: authorization.proto

#include "authorization.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
namespace aspia {
namespace proto {
namespace auth {
class RequestDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Request>
      _instance;
} _Request_default_instance_;
class ResponseDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Response>
      _instance;
} _Response_default_instance_;
class ResultDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Result>
      _instance;
} _Result_default_instance_;
}  // namespace auth
}  // namespace proto
}  // namespace aspia
namespace protobuf_authorization_2eproto {
void InitDefaultsRequestImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::aspia::proto::auth::_Request_default_instance_;
    new (ptr) ::aspia::proto::auth::Request();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::aspia::proto::auth::Request::InitAsDefaultInstance();
}

void InitDefaultsRequest() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsRequestImpl);
}

void InitDefaultsResponseImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::aspia::proto::auth::_Response_default_instance_;
    new (ptr) ::aspia::proto::auth::Response();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::aspia::proto::auth::Response::InitAsDefaultInstance();
}

void InitDefaultsResponse() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsResponseImpl);
}

void InitDefaultsResultImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::aspia::proto::auth::_Result_default_instance_;
    new (ptr) ::aspia::proto::auth::Result();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::aspia::proto::auth::Result::InitAsDefaultInstance();
}

void InitDefaultsResult() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsResultImpl);
}

}  // namespace protobuf_authorization_2eproto
namespace aspia {
namespace proto {
namespace auth {
bool SessionType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 4:
      return true;
    default:
      return false;
  }
}

bool Status_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}


// ===================================================================

void Request::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Request::kVersionFieldNumber;
const int Request::kNonceFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Request::Request()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_authorization_2eproto::InitDefaultsRequest();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:aspia.proto.auth.Request)
}
Request::Request(const Request& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  nonce_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.nonce().size() > 0) {
    nonce_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.nonce_);
  }
  version_ = from.version_;
  // @@protoc_insertion_point(copy_constructor:aspia.proto.auth.Request)
}

void Request::SharedCtor() {
  nonce_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  version_ = 0u;
  _cached_size_ = 0;
}

Request::~Request() {
  // @@protoc_insertion_point(destructor:aspia.proto.auth.Request)
  SharedDtor();
}

void Request::SharedDtor() {
  nonce_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Request::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const Request& Request::default_instance() {
  ::protobuf_authorization_2eproto::InitDefaultsRequest();
  return *internal_default_instance();
}

Request* Request::New(::google::protobuf::Arena* arena) const {
  Request* n = new Request;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Request::Clear() {
// @@protoc_insertion_point(message_clear_start:aspia.proto.auth.Request)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  nonce_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  version_ = 0u;
  _internal_metadata_.Clear();
}

bool Request::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:aspia.proto.auth.Request)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 version = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &version_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bytes nonce = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_nonce()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:aspia.proto.auth.Request)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:aspia.proto.auth.Request)
  return false;
#undef DO_
}

void Request::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:aspia.proto.auth.Request)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 version = 1;
  if (this->version() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->version(), output);
  }

  // bytes nonce = 2;
  if (this->nonce().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      2, this->nonce(), output);
  }

  output->WriteRaw((::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).data(),
                   static_cast<int>((::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).size()));
  // @@protoc_insertion_point(serialize_end:aspia.proto.auth.Request)
}

size_t Request::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:aspia.proto.auth.Request)
  size_t total_size = 0;

  total_size += (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).size();

  // bytes nonce = 2;
  if (this->nonce().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->nonce());
  }

  // uint32 version = 1;
  if (this->version() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->version());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Request::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const Request*>(&from));
}

void Request::MergeFrom(const Request& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:aspia.proto.auth.Request)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.nonce().size() > 0) {

    nonce_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.nonce_);
  }
  if (from.version() != 0) {
    set_version(from.version());
  }
}

void Request::CopyFrom(const Request& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:aspia.proto.auth.Request)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Request::IsInitialized() const {
  return true;
}

void Request::Swap(Request* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Request::InternalSwap(Request* other) {
  using std::swap;
  nonce_.Swap(&other->nonce_);
  swap(version_, other->version_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::std::string Request::GetTypeName() const {
  return "aspia.proto.auth.Request";
}


// ===================================================================

void Response::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Response::kSessionTypeFieldNumber;
const int Response::kUsernameFieldNumber;
const int Response::kKeyFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Response::Response()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_authorization_2eproto::InitDefaultsResponse();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:aspia.proto.auth.Response)
}
Response::Response(const Response& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  username_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.username().size() > 0) {
    username_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.username_);
  }
  key_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.key().size() > 0) {
    key_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.key_);
  }
  session_type_ = from.session_type_;
  // @@protoc_insertion_point(copy_constructor:aspia.proto.auth.Response)
}

void Response::SharedCtor() {
  username_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  key_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  session_type_ = 0;
  _cached_size_ = 0;
}

Response::~Response() {
  // @@protoc_insertion_point(destructor:aspia.proto.auth.Response)
  SharedDtor();
}

void Response::SharedDtor() {
  username_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  key_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Response::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const Response& Response::default_instance() {
  ::protobuf_authorization_2eproto::InitDefaultsResponse();
  return *internal_default_instance();
}

Response* Response::New(::google::protobuf::Arena* arena) const {
  Response* n = new Response;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Response::Clear() {
// @@protoc_insertion_point(message_clear_start:aspia.proto.auth.Response)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  username_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  session_type_ = 0;
  _internal_metadata_.Clear();
}

bool Response::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:aspia.proto.auth.Response)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .aspia.proto.auth.SessionType session_type = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_session_type(static_cast< ::aspia::proto::auth::SessionType >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string username = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_username()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->username().data(), static_cast<int>(this->username().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "aspia.proto.auth.Response.username"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bytes key = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_key()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:aspia.proto.auth.Response)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:aspia.proto.auth.Response)
  return false;
#undef DO_
}

void Response::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:aspia.proto.auth.Response)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .aspia.proto.auth.SessionType session_type = 1;
  if (this->session_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->session_type(), output);
  }

  // string username = 2;
  if (this->username().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->username().data(), static_cast<int>(this->username().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "aspia.proto.auth.Response.username");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->username(), output);
  }

  // bytes key = 3;
  if (this->key().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      3, this->key(), output);
  }

  output->WriteRaw((::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).data(),
                   static_cast<int>((::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).size()));
  // @@protoc_insertion_point(serialize_end:aspia.proto.auth.Response)
}

size_t Response::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:aspia.proto.auth.Response)
  size_t total_size = 0;

  total_size += (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).size();

  // string username = 2;
  if (this->username().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->username());
  }

  // bytes key = 3;
  if (this->key().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->key());
  }

  // .aspia.proto.auth.SessionType session_type = 1;
  if (this->session_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->session_type());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Response::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const Response*>(&from));
}

void Response::MergeFrom(const Response& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:aspia.proto.auth.Response)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.username().size() > 0) {

    username_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.username_);
  }
  if (from.key().size() > 0) {

    key_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.key_);
  }
  if (from.session_type() != 0) {
    set_session_type(from.session_type());
  }
}

void Response::CopyFrom(const Response& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:aspia.proto.auth.Response)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Response::IsInitialized() const {
  return true;
}

void Response::Swap(Response* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Response::InternalSwap(Response* other) {
  using std::swap;
  username_.Swap(&other->username_);
  key_.Swap(&other->key_);
  swap(session_type_, other->session_type_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::std::string Response::GetTypeName() const {
  return "aspia.proto.auth.Response";
}


// ===================================================================

void Result::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Result::kStatusFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Result::Result()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_authorization_2eproto::InitDefaultsResult();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:aspia.proto.auth.Result)
}
Result::Result(const Result& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  status_ = from.status_;
  // @@protoc_insertion_point(copy_constructor:aspia.proto.auth.Result)
}

void Result::SharedCtor() {
  status_ = 0;
  _cached_size_ = 0;
}

Result::~Result() {
  // @@protoc_insertion_point(destructor:aspia.proto.auth.Result)
  SharedDtor();
}

void Result::SharedDtor() {
}

void Result::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const Result& Result::default_instance() {
  ::protobuf_authorization_2eproto::InitDefaultsResult();
  return *internal_default_instance();
}

Result* Result::New(::google::protobuf::Arena* arena) const {
  Result* n = new Result;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Result::Clear() {
// @@protoc_insertion_point(message_clear_start:aspia.proto.auth.Result)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  status_ = 0;
  _internal_metadata_.Clear();
}

bool Result::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:aspia.proto.auth.Result)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .aspia.proto.auth.Status status = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_status(static_cast< ::aspia::proto::auth::Status >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:aspia.proto.auth.Result)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:aspia.proto.auth.Result)
  return false;
#undef DO_
}

void Result::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:aspia.proto.auth.Result)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .aspia.proto.auth.Status status = 1;
  if (this->status() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->status(), output);
  }

  output->WriteRaw((::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).data(),
                   static_cast<int>((::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).size()));
  // @@protoc_insertion_point(serialize_end:aspia.proto.auth.Result)
}

size_t Result::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:aspia.proto.auth.Result)
  size_t total_size = 0;

  total_size += (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).size();

  // .aspia.proto.auth.Status status = 1;
  if (this->status() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->status());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Result::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const Result*>(&from));
}

void Result::MergeFrom(const Result& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:aspia.proto.auth.Result)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.status() != 0) {
    set_status(from.status());
  }
}

void Result::CopyFrom(const Result& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:aspia.proto.auth.Result)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Result::IsInitialized() const {
  return true;
}

void Result::Swap(Result* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Result::InternalSwap(Result* other) {
  using std::swap;
  swap(status_, other->status_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::std::string Result::GetTypeName() const {
  return "aspia.proto.auth.Result";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace auth
}  // namespace proto
}  // namespace aspia

// @@protoc_insertion_point(global_scope)
