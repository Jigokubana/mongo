// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: login.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_login_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_login_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3011000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3011004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_login_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_login_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_login_2eproto;
namespace mongo {
class LoginCS;
class LoginCSDefaultTypeInternal;
extern LoginCSDefaultTypeInternal _LoginCS_default_instance_;
class LoginSC;
class LoginSCDefaultTypeInternal;
extern LoginSCDefaultTypeInternal _LoginSC_default_instance_;
}  // namespace mongo
PROTOBUF_NAMESPACE_OPEN
template<> ::mongo::LoginCS* Arena::CreateMaybeMessage<::mongo::LoginCS>(Arena*);
template<> ::mongo::LoginSC* Arena::CreateMaybeMessage<::mongo::LoginSC>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace mongo {

enum LoginResult : int {
  SUCCESS = 0,
  USERNAME_NOT_EXIST = 1,
  PASSWORD_NOT_CORRECT = 2,
  LoginResult_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  LoginResult_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool LoginResult_IsValid(int value);
constexpr LoginResult LoginResult_MIN = SUCCESS;
constexpr LoginResult LoginResult_MAX = PASSWORD_NOT_CORRECT;
constexpr int LoginResult_ARRAYSIZE = LoginResult_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* LoginResult_descriptor();
template<typename T>
inline const std::string& LoginResult_Name(T enum_t_value) {
  static_assert(::std::is_same<T, LoginResult>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function LoginResult_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    LoginResult_descriptor(), enum_t_value);
}
inline bool LoginResult_Parse(
    const std::string& name, LoginResult* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<LoginResult>(
    LoginResult_descriptor(), name, value);
}
// ===================================================================

class LoginCS :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:mongo.LoginCS) */ {
 public:
  LoginCS();
  virtual ~LoginCS();

  LoginCS(const LoginCS& from);
  LoginCS(LoginCS&& from) noexcept
    : LoginCS() {
    *this = ::std::move(from);
  }

  inline LoginCS& operator=(const LoginCS& from) {
    CopyFrom(from);
    return *this;
  }
  inline LoginCS& operator=(LoginCS&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const LoginCS& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const LoginCS* internal_default_instance() {
    return reinterpret_cast<const LoginCS*>(
               &_LoginCS_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(LoginCS& a, LoginCS& b) {
    a.Swap(&b);
  }
  inline void Swap(LoginCS* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline LoginCS* New() const final {
    return CreateMaybeMessage<LoginCS>(nullptr);
  }

  LoginCS* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<LoginCS>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const LoginCS& from);
  void MergeFrom(const LoginCS& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(LoginCS* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "mongo.LoginCS";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_login_2eproto);
    return ::descriptor_table_login_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kUsernameFieldNumber = 1,
    kPasswordFieldNumber = 2,
    kTimestampFieldNumber = 3,
  };
  // string username = 1;
  void clear_username();
  const std::string& username() const;
  void set_username(const std::string& value);
  void set_username(std::string&& value);
  void set_username(const char* value);
  void set_username(const char* value, size_t size);
  std::string* mutable_username();
  std::string* release_username();
  void set_allocated_username(std::string* username);
  private:
  const std::string& _internal_username() const;
  void _internal_set_username(const std::string& value);
  std::string* _internal_mutable_username();
  public:

  // string password = 2;
  void clear_password();
  const std::string& password() const;
  void set_password(const std::string& value);
  void set_password(std::string&& value);
  void set_password(const char* value);
  void set_password(const char* value, size_t size);
  std::string* mutable_password();
  std::string* release_password();
  void set_allocated_password(std::string* password);
  private:
  const std::string& _internal_password() const;
  void _internal_set_password(const std::string& value);
  std::string* _internal_mutable_password();
  public:

  // int64 timestamp = 3;
  void clear_timestamp();
  ::PROTOBUF_NAMESPACE_ID::int64 timestamp() const;
  void set_timestamp(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_timestamp() const;
  void _internal_set_timestamp(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // @@protoc_insertion_point(class_scope:mongo.LoginCS)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr username_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr password_;
  ::PROTOBUF_NAMESPACE_ID::int64 timestamp_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_login_2eproto;
};
// -------------------------------------------------------------------

class LoginSC :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:mongo.LoginSC) */ {
 public:
  LoginSC();
  virtual ~LoginSC();

  LoginSC(const LoginSC& from);
  LoginSC(LoginSC&& from) noexcept
    : LoginSC() {
    *this = ::std::move(from);
  }

  inline LoginSC& operator=(const LoginSC& from) {
    CopyFrom(from);
    return *this;
  }
  inline LoginSC& operator=(LoginSC&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const LoginSC& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const LoginSC* internal_default_instance() {
    return reinterpret_cast<const LoginSC*>(
               &_LoginSC_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(LoginSC& a, LoginSC& b) {
    a.Swap(&b);
  }
  inline void Swap(LoginSC* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline LoginSC* New() const final {
    return CreateMaybeMessage<LoginSC>(nullptr);
  }

  LoginSC* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<LoginSC>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const LoginSC& from);
  void MergeFrom(const LoginSC& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(LoginSC* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "mongo.LoginSC";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_login_2eproto);
    return ::descriptor_table_login_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kResultFieldNumber = 1,
  };
  // .mongo.LoginResult result = 1;
  void clear_result();
  ::mongo::LoginResult result() const;
  void set_result(::mongo::LoginResult value);
  private:
  ::mongo::LoginResult _internal_result() const;
  void _internal_set_result(::mongo::LoginResult value);
  public:

  // @@protoc_insertion_point(class_scope:mongo.LoginSC)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  int result_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_login_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// LoginCS

// string username = 1;
inline void LoginCS::clear_username() {
  username_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& LoginCS::username() const {
  // @@protoc_insertion_point(field_get:mongo.LoginCS.username)
  return _internal_username();
}
inline void LoginCS::set_username(const std::string& value) {
  _internal_set_username(value);
  // @@protoc_insertion_point(field_set:mongo.LoginCS.username)
}
inline std::string* LoginCS::mutable_username() {
  // @@protoc_insertion_point(field_mutable:mongo.LoginCS.username)
  return _internal_mutable_username();
}
inline const std::string& LoginCS::_internal_username() const {
  return username_.GetNoArena();
}
inline void LoginCS::_internal_set_username(const std::string& value) {
  
  username_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void LoginCS::set_username(std::string&& value) {
  
  username_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:mongo.LoginCS.username)
}
inline void LoginCS::set_username(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  username_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:mongo.LoginCS.username)
}
inline void LoginCS::set_username(const char* value, size_t size) {
  
  username_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:mongo.LoginCS.username)
}
inline std::string* LoginCS::_internal_mutable_username() {
  
  return username_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* LoginCS::release_username() {
  // @@protoc_insertion_point(field_release:mongo.LoginCS.username)
  
  return username_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void LoginCS::set_allocated_username(std::string* username) {
  if (username != nullptr) {
    
  } else {
    
  }
  username_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), username);
  // @@protoc_insertion_point(field_set_allocated:mongo.LoginCS.username)
}

// string password = 2;
inline void LoginCS::clear_password() {
  password_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& LoginCS::password() const {
  // @@protoc_insertion_point(field_get:mongo.LoginCS.password)
  return _internal_password();
}
inline void LoginCS::set_password(const std::string& value) {
  _internal_set_password(value);
  // @@protoc_insertion_point(field_set:mongo.LoginCS.password)
}
inline std::string* LoginCS::mutable_password() {
  // @@protoc_insertion_point(field_mutable:mongo.LoginCS.password)
  return _internal_mutable_password();
}
inline const std::string& LoginCS::_internal_password() const {
  return password_.GetNoArena();
}
inline void LoginCS::_internal_set_password(const std::string& value) {
  
  password_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void LoginCS::set_password(std::string&& value) {
  
  password_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:mongo.LoginCS.password)
}
inline void LoginCS::set_password(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  password_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:mongo.LoginCS.password)
}
inline void LoginCS::set_password(const char* value, size_t size) {
  
  password_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:mongo.LoginCS.password)
}
inline std::string* LoginCS::_internal_mutable_password() {
  
  return password_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* LoginCS::release_password() {
  // @@protoc_insertion_point(field_release:mongo.LoginCS.password)
  
  return password_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void LoginCS::set_allocated_password(std::string* password) {
  if (password != nullptr) {
    
  } else {
    
  }
  password_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), password);
  // @@protoc_insertion_point(field_set_allocated:mongo.LoginCS.password)
}

// int64 timestamp = 3;
inline void LoginCS::clear_timestamp() {
  timestamp_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 LoginCS::_internal_timestamp() const {
  return timestamp_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 LoginCS::timestamp() const {
  // @@protoc_insertion_point(field_get:mongo.LoginCS.timestamp)
  return _internal_timestamp();
}
inline void LoginCS::_internal_set_timestamp(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  timestamp_ = value;
}
inline void LoginCS::set_timestamp(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_timestamp(value);
  // @@protoc_insertion_point(field_set:mongo.LoginCS.timestamp)
}

// -------------------------------------------------------------------

// LoginSC

// .mongo.LoginResult result = 1;
inline void LoginSC::clear_result() {
  result_ = 0;
}
inline ::mongo::LoginResult LoginSC::_internal_result() const {
  return static_cast< ::mongo::LoginResult >(result_);
}
inline ::mongo::LoginResult LoginSC::result() const {
  // @@protoc_insertion_point(field_get:mongo.LoginSC.result)
  return _internal_result();
}
inline void LoginSC::_internal_set_result(::mongo::LoginResult value) {
  
  result_ = value;
}
inline void LoginSC::set_result(::mongo::LoginResult value) {
  _internal_set_result(value);
  // @@protoc_insertion_point(field_set:mongo.LoginSC.result)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace mongo

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::mongo::LoginResult> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::mongo::LoginResult>() {
  return ::mongo::LoginResult_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_login_2eproto