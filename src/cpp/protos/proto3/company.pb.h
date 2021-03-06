// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto3/company.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_proto3_2fcompany_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_proto3_2fcompany_2eproto

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
#include <google/protobuf/timestamp.pb.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_proto3_2fcompany_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_proto3_2fcompany_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_proto3_2fcompany_2eproto;
class Company;
class CompanyDefaultTypeInternal;
extern CompanyDefaultTypeInternal _Company_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::Company* Arena::CreateMaybeMessage<::Company>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

enum Company_CompanyCategory : int {
  Company_CompanyCategory_AGRICULTURE = 0,
  Company_CompanyCategory_ARTS = 1,
  Company_CompanyCategory_CONSTRUCTION = 2,
  Company_CompanyCategory_EDUCATIONAL = 3,
  Company_CompanyCategory_FINANCE = 4,
  Company_CompanyCategory_HIGHTECH = 5,
  Company_CompanyCategory_LEGAL = 6,
  Company_CompanyCategory_MANUFACTURING = 7,
  Company_CompanyCategory_MEDICAL = 8,
  Company_CompanyCategory_NON_PROFIT = 9,
  Company_CompanyCategory_Company_CompanyCategory_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  Company_CompanyCategory_Company_CompanyCategory_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool Company_CompanyCategory_IsValid(int value);
constexpr Company_CompanyCategory Company_CompanyCategory_CompanyCategory_MIN = Company_CompanyCategory_AGRICULTURE;
constexpr Company_CompanyCategory Company_CompanyCategory_CompanyCategory_MAX = Company_CompanyCategory_NON_PROFIT;
constexpr int Company_CompanyCategory_CompanyCategory_ARRAYSIZE = Company_CompanyCategory_CompanyCategory_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Company_CompanyCategory_descriptor();
template<typename T>
inline const std::string& Company_CompanyCategory_Name(T enum_t_value) {
  static_assert(::std::is_same<T, Company_CompanyCategory>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function Company_CompanyCategory_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    Company_CompanyCategory_descriptor(), enum_t_value);
}
inline bool Company_CompanyCategory_Parse(
    const std::string& name, Company_CompanyCategory* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<Company_CompanyCategory>(
    Company_CompanyCategory_descriptor(), name, value);
}
// ===================================================================

class Company :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Company) */ {
 public:
  Company();
  virtual ~Company();

  Company(const Company& from);
  Company(Company&& from) noexcept
    : Company() {
    *this = ::std::move(from);
  }

  inline Company& operator=(const Company& from) {
    CopyFrom(from);
    return *this;
  }
  inline Company& operator=(Company&& from) noexcept {
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
  static const Company& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Company* internal_default_instance() {
    return reinterpret_cast<const Company*>(
               &_Company_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Company& a, Company& b) {
    a.Swap(&b);
  }
  inline void Swap(Company* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Company* New() const final {
    return CreateMaybeMessage<Company>(nullptr);
  }

  Company* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Company>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Company& from);
  void MergeFrom(const Company& from);
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
  void InternalSwap(Company* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Company";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_proto3_2fcompany_2eproto);
    return ::descriptor_table_proto3_2fcompany_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef Company_CompanyCategory CompanyCategory;
  static constexpr CompanyCategory AGRICULTURE =
    Company_CompanyCategory_AGRICULTURE;
  static constexpr CompanyCategory ARTS =
    Company_CompanyCategory_ARTS;
  static constexpr CompanyCategory CONSTRUCTION =
    Company_CompanyCategory_CONSTRUCTION;
  static constexpr CompanyCategory EDUCATIONAL =
    Company_CompanyCategory_EDUCATIONAL;
  static constexpr CompanyCategory FINANCE =
    Company_CompanyCategory_FINANCE;
  static constexpr CompanyCategory HIGHTECH =
    Company_CompanyCategory_HIGHTECH;
  static constexpr CompanyCategory LEGAL =
    Company_CompanyCategory_LEGAL;
  static constexpr CompanyCategory MANUFACTURING =
    Company_CompanyCategory_MANUFACTURING;
  static constexpr CompanyCategory MEDICAL =
    Company_CompanyCategory_MEDICAL;
  static constexpr CompanyCategory NON_PROFIT =
    Company_CompanyCategory_NON_PROFIT;
  static inline bool CompanyCategory_IsValid(int value) {
    return Company_CompanyCategory_IsValid(value);
  }
  static constexpr CompanyCategory CompanyCategory_MIN =
    Company_CompanyCategory_CompanyCategory_MIN;
  static constexpr CompanyCategory CompanyCategory_MAX =
    Company_CompanyCategory_CompanyCategory_MAX;
  static constexpr int CompanyCategory_ARRAYSIZE =
    Company_CompanyCategory_CompanyCategory_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  CompanyCategory_descriptor() {
    return Company_CompanyCategory_descriptor();
  }
  template<typename T>
  static inline const std::string& CompanyCategory_Name(T enum_t_value) {
    static_assert(::std::is_same<T, CompanyCategory>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function CompanyCategory_Name.");
    return Company_CompanyCategory_Name(enum_t_value);
  }
  static inline bool CompanyCategory_Parse(const std::string& name,
      CompanyCategory* value) {
    return Company_CompanyCategory_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 2,
    kDescriptionFieldNumber = 3,
    kLogoFieldNumber = 7,
    kCreatedFieldNumber = 8,
    kIdFieldNumber = 1,
    kCategoryFieldNumber = 4,
    kEmployeesFieldNumber = 5,
    kActiveFieldNumber = 6,
  };
  // string name = 2;
  void clear_name();
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // string description = 3;
  void clear_description();
  const std::string& description() const;
  void set_description(const std::string& value);
  void set_description(std::string&& value);
  void set_description(const char* value);
  void set_description(const char* value, size_t size);
  std::string* mutable_description();
  std::string* release_description();
  void set_allocated_description(std::string* description);
  private:
  const std::string& _internal_description() const;
  void _internal_set_description(const std::string& value);
  std::string* _internal_mutable_description();
  public:

  // bytes logo = 7;
  void clear_logo();
  const std::string& logo() const;
  void set_logo(const std::string& value);
  void set_logo(std::string&& value);
  void set_logo(const char* value);
  void set_logo(const void* value, size_t size);
  std::string* mutable_logo();
  std::string* release_logo();
  void set_allocated_logo(std::string* logo);
  private:
  const std::string& _internal_logo() const;
  void _internal_set_logo(const std::string& value);
  std::string* _internal_mutable_logo();
  public:

  // .google.protobuf.Timestamp created = 8;
  bool has_created() const;
  private:
  bool _internal_has_created() const;
  public:
  void clear_created();
  const PROTOBUF_NAMESPACE_ID::Timestamp& created() const;
  PROTOBUF_NAMESPACE_ID::Timestamp* release_created();
  PROTOBUF_NAMESPACE_ID::Timestamp* mutable_created();
  void set_allocated_created(PROTOBUF_NAMESPACE_ID::Timestamp* created);
  private:
  const PROTOBUF_NAMESPACE_ID::Timestamp& _internal_created() const;
  PROTOBUF_NAMESPACE_ID::Timestamp* _internal_mutable_created();
  public:

  // uint32 id = 1;
  void clear_id();
  ::PROTOBUF_NAMESPACE_ID::uint32 id() const;
  void set_id(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_id() const;
  void _internal_set_id(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // .Company.CompanyCategory category = 4;
  void clear_category();
  ::Company_CompanyCategory category() const;
  void set_category(::Company_CompanyCategory value);
  private:
  ::Company_CompanyCategory _internal_category() const;
  void _internal_set_category(::Company_CompanyCategory value);
  public:

  // uint32 employees = 5;
  void clear_employees();
  ::PROTOBUF_NAMESPACE_ID::uint32 employees() const;
  void set_employees(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_employees() const;
  void _internal_set_employees(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // bool active = 6;
  void clear_active();
  bool active() const;
  void set_active(bool value);
  private:
  bool _internal_active() const;
  void _internal_set_active(bool value);
  public:

  // @@protoc_insertion_point(class_scope:Company)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr description_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr logo_;
  PROTOBUF_NAMESPACE_ID::Timestamp* created_;
  ::PROTOBUF_NAMESPACE_ID::uint32 id_;
  int category_;
  ::PROTOBUF_NAMESPACE_ID::uint32 employees_;
  bool active_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_proto3_2fcompany_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Company

// uint32 id = 1;
inline void Company::clear_id() {
  id_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Company::_internal_id() const {
  return id_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Company::id() const {
  // @@protoc_insertion_point(field_get:Company.id)
  return _internal_id();
}
inline void Company::_internal_set_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  id_ = value;
}
inline void Company::set_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:Company.id)
}

// string name = 2;
inline void Company::clear_name() {
  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Company::name() const {
  // @@protoc_insertion_point(field_get:Company.name)
  return _internal_name();
}
inline void Company::set_name(const std::string& value) {
  _internal_set_name(value);
  // @@protoc_insertion_point(field_set:Company.name)
}
inline std::string* Company::mutable_name() {
  // @@protoc_insertion_point(field_mutable:Company.name)
  return _internal_mutable_name();
}
inline const std::string& Company::_internal_name() const {
  return name_.GetNoArena();
}
inline void Company::_internal_set_name(const std::string& value) {
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Company::set_name(std::string&& value) {
  
  name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Company.name)
}
inline void Company::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Company.name)
}
inline void Company::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Company.name)
}
inline std::string* Company::_internal_mutable_name() {
  
  return name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Company::release_name() {
  // @@protoc_insertion_point(field_release:Company.name)
  
  return name_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Company::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:Company.name)
}

// string description = 3;
inline void Company::clear_description() {
  description_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Company::description() const {
  // @@protoc_insertion_point(field_get:Company.description)
  return _internal_description();
}
inline void Company::set_description(const std::string& value) {
  _internal_set_description(value);
  // @@protoc_insertion_point(field_set:Company.description)
}
inline std::string* Company::mutable_description() {
  // @@protoc_insertion_point(field_mutable:Company.description)
  return _internal_mutable_description();
}
inline const std::string& Company::_internal_description() const {
  return description_.GetNoArena();
}
inline void Company::_internal_set_description(const std::string& value) {
  
  description_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Company::set_description(std::string&& value) {
  
  description_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Company.description)
}
inline void Company::set_description(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  description_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Company.description)
}
inline void Company::set_description(const char* value, size_t size) {
  
  description_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Company.description)
}
inline std::string* Company::_internal_mutable_description() {
  
  return description_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Company::release_description() {
  // @@protoc_insertion_point(field_release:Company.description)
  
  return description_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Company::set_allocated_description(std::string* description) {
  if (description != nullptr) {
    
  } else {
    
  }
  description_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), description);
  // @@protoc_insertion_point(field_set_allocated:Company.description)
}

// .Company.CompanyCategory category = 4;
inline void Company::clear_category() {
  category_ = 0;
}
inline ::Company_CompanyCategory Company::_internal_category() const {
  return static_cast< ::Company_CompanyCategory >(category_);
}
inline ::Company_CompanyCategory Company::category() const {
  // @@protoc_insertion_point(field_get:Company.category)
  return _internal_category();
}
inline void Company::_internal_set_category(::Company_CompanyCategory value) {
  
  category_ = value;
}
inline void Company::set_category(::Company_CompanyCategory value) {
  _internal_set_category(value);
  // @@protoc_insertion_point(field_set:Company.category)
}

// uint32 employees = 5;
inline void Company::clear_employees() {
  employees_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Company::_internal_employees() const {
  return employees_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Company::employees() const {
  // @@protoc_insertion_point(field_get:Company.employees)
  return _internal_employees();
}
inline void Company::_internal_set_employees(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  employees_ = value;
}
inline void Company::set_employees(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_employees(value);
  // @@protoc_insertion_point(field_set:Company.employees)
}

// bool active = 6;
inline void Company::clear_active() {
  active_ = false;
}
inline bool Company::_internal_active() const {
  return active_;
}
inline bool Company::active() const {
  // @@protoc_insertion_point(field_get:Company.active)
  return _internal_active();
}
inline void Company::_internal_set_active(bool value) {
  
  active_ = value;
}
inline void Company::set_active(bool value) {
  _internal_set_active(value);
  // @@protoc_insertion_point(field_set:Company.active)
}

// bytes logo = 7;
inline void Company::clear_logo() {
  logo_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Company::logo() const {
  // @@protoc_insertion_point(field_get:Company.logo)
  return _internal_logo();
}
inline void Company::set_logo(const std::string& value) {
  _internal_set_logo(value);
  // @@protoc_insertion_point(field_set:Company.logo)
}
inline std::string* Company::mutable_logo() {
  // @@protoc_insertion_point(field_mutable:Company.logo)
  return _internal_mutable_logo();
}
inline const std::string& Company::_internal_logo() const {
  return logo_.GetNoArena();
}
inline void Company::_internal_set_logo(const std::string& value) {
  
  logo_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Company::set_logo(std::string&& value) {
  
  logo_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Company.logo)
}
inline void Company::set_logo(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  logo_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Company.logo)
}
inline void Company::set_logo(const void* value, size_t size) {
  
  logo_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Company.logo)
}
inline std::string* Company::_internal_mutable_logo() {
  
  return logo_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Company::release_logo() {
  // @@protoc_insertion_point(field_release:Company.logo)
  
  return logo_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Company::set_allocated_logo(std::string* logo) {
  if (logo != nullptr) {
    
  } else {
    
  }
  logo_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), logo);
  // @@protoc_insertion_point(field_set_allocated:Company.logo)
}

// .google.protobuf.Timestamp created = 8;
inline bool Company::_internal_has_created() const {
  return this != internal_default_instance() && created_ != nullptr;
}
inline bool Company::has_created() const {
  return _internal_has_created();
}
inline const PROTOBUF_NAMESPACE_ID::Timestamp& Company::_internal_created() const {
  const PROTOBUF_NAMESPACE_ID::Timestamp* p = created_;
  return p != nullptr ? *p : *reinterpret_cast<const PROTOBUF_NAMESPACE_ID::Timestamp*>(
      &PROTOBUF_NAMESPACE_ID::_Timestamp_default_instance_);
}
inline const PROTOBUF_NAMESPACE_ID::Timestamp& Company::created() const {
  // @@protoc_insertion_point(field_get:Company.created)
  return _internal_created();
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* Company::release_created() {
  // @@protoc_insertion_point(field_release:Company.created)
  
  PROTOBUF_NAMESPACE_ID::Timestamp* temp = created_;
  created_ = nullptr;
  return temp;
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* Company::_internal_mutable_created() {
  
  if (created_ == nullptr) {
    auto* p = CreateMaybeMessage<PROTOBUF_NAMESPACE_ID::Timestamp>(GetArenaNoVirtual());
    created_ = p;
  }
  return created_;
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* Company::mutable_created() {
  // @@protoc_insertion_point(field_mutable:Company.created)
  return _internal_mutable_created();
}
inline void Company::set_allocated_created(PROTOBUF_NAMESPACE_ID::Timestamp* created) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(created_);
  }
  if (created) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(created)->GetArena();
    if (message_arena != submessage_arena) {
      created = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, created, submessage_arena);
    }
    
  } else {
    
  }
  created_ = created;
  // @@protoc_insertion_point(field_set_allocated:Company.created)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::Company_CompanyCategory> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Company_CompanyCategory>() {
  return ::Company_CompanyCategory_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_proto3_2fcompany_2eproto
