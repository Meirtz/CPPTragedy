// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ContactBook.proto

#ifndef PROTOBUF_ContactBook_2eproto__INCLUDED
#define PROTOBUF_ContactBook_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protobuf_ContactBook_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsContactsImpl();
void InitDefaultsContacts();
void InitDefaultsContactBookImpl();
void InitDefaultsContactBook();
inline void InitDefaults() {
  InitDefaultsContacts();
  InitDefaultsContactBook();
}
}  // namespace protobuf_ContactBook_2eproto
namespace ContactsBook {
class ContactBook;
class ContactBookDefaultTypeInternal;
extern ContactBookDefaultTypeInternal _ContactBook_default_instance_;
class Contacts;
class ContactsDefaultTypeInternal;
extern ContactsDefaultTypeInternal _Contacts_default_instance_;
}  // namespace ContactsBook
namespace ContactsBook {

// ===================================================================

class Contacts : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ContactsBook.Contacts) */ {
 public:
  Contacts();
  virtual ~Contacts();

  Contacts(const Contacts& from);

  inline Contacts& operator=(const Contacts& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Contacts(Contacts&& from) noexcept
    : Contacts() {
    *this = ::std::move(from);
  }

  inline Contacts& operator=(Contacts&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Contacts& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Contacts* internal_default_instance() {
    return reinterpret_cast<const Contacts*>(
               &_Contacts_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(Contacts* other);
  friend void swap(Contacts& a, Contacts& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Contacts* New() const PROTOBUF_FINAL { return New(NULL); }

  Contacts* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Contacts& from);
  void MergeFrom(const Contacts& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(Contacts* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string name = 2;
  bool has_name() const;
  void clear_name();
  static const int kNameFieldNumber = 2;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // required string number = 3;
  bool has_number() const;
  void clear_number();
  static const int kNumberFieldNumber = 3;
  const ::std::string& number() const;
  void set_number(const ::std::string& value);
  #if LANG_CXX11
  void set_number(::std::string&& value);
  #endif
  void set_number(const char* value);
  void set_number(const char* value, size_t size);
  ::std::string* mutable_number();
  ::std::string* release_number();
  void set_allocated_number(::std::string* number);

  // optional string address = 5;
  bool has_address() const;
  void clear_address();
  static const int kAddressFieldNumber = 5;
  const ::std::string& address() const;
  void set_address(const ::std::string& value);
  #if LANG_CXX11
  void set_address(::std::string&& value);
  #endif
  void set_address(const char* value);
  void set_address(const char* value, size_t size);
  ::std::string* mutable_address();
  ::std::string* release_address();
  void set_allocated_address(::std::string* address);

  // optional string date = 6;
  bool has_date() const;
  void clear_date();
  static const int kDateFieldNumber = 6;
  const ::std::string& date() const;
  void set_date(const ::std::string& value);
  #if LANG_CXX11
  void set_date(::std::string&& value);
  #endif
  void set_date(const char* value);
  void set_date(const char* value, size_t size);
  ::std::string* mutable_date();
  ::std::string* release_date();
  void set_allocated_date(::std::string* date);

  // optional string email = 7;
  bool has_email() const;
  void clear_email();
  static const int kEmailFieldNumber = 7;
  const ::std::string& email() const;
  void set_email(const ::std::string& value);
  #if LANG_CXX11
  void set_email(::std::string&& value);
  #endif
  void set_email(const char* value);
  void set_email(const char* value, size_t size);
  ::std::string* mutable_email();
  ::std::string* release_email();
  void set_allocated_email(::std::string* email);

  // optional int32 id = 1;
  bool has_id() const;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::int32 id() const;
  void set_id(::google::protobuf::int32 value);

  // optional bool sex = 4;
  bool has_sex() const;
  void clear_sex();
  static const int kSexFieldNumber = 4;
  bool sex() const;
  void set_sex(bool value);

  // @@protoc_insertion_point(class_scope:ContactsBook.Contacts)
 private:
  void set_has_id();
  void clear_has_id();
  void set_has_name();
  void clear_has_name();
  void set_has_number();
  void clear_has_number();
  void set_has_sex();
  void clear_has_sex();
  void set_has_address();
  void clear_has_address();
  void set_has_date();
  void clear_has_date();
  void set_has_email();
  void clear_has_email();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr number_;
  ::google::protobuf::internal::ArenaStringPtr address_;
  ::google::protobuf::internal::ArenaStringPtr date_;
  ::google::protobuf::internal::ArenaStringPtr email_;
  ::google::protobuf::int32 id_;
  bool sex_;
  friend struct ::protobuf_ContactBook_2eproto::TableStruct;
  friend void ::protobuf_ContactBook_2eproto::InitDefaultsContactsImpl();
};
// -------------------------------------------------------------------

class ContactBook : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ContactsBook.ContactBook) */ {
 public:
  ContactBook();
  virtual ~ContactBook();

  ContactBook(const ContactBook& from);

  inline ContactBook& operator=(const ContactBook& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ContactBook(ContactBook&& from) noexcept
    : ContactBook() {
    *this = ::std::move(from);
  }

  inline ContactBook& operator=(ContactBook&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ContactBook& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ContactBook* internal_default_instance() {
    return reinterpret_cast<const ContactBook*>(
               &_ContactBook_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(ContactBook* other);
  friend void swap(ContactBook& a, ContactBook& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ContactBook* New() const PROTOBUF_FINAL { return New(NULL); }

  ContactBook* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const ContactBook& from);
  void MergeFrom(const ContactBook& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(ContactBook* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .ContactsBook.Contacts people = 1;
  int people_size() const;
  void clear_people();
  static const int kPeopleFieldNumber = 1;
  const ::ContactsBook::Contacts& people(int index) const;
  ::ContactsBook::Contacts* mutable_people(int index);
  ::ContactsBook::Contacts* add_people();
  ::google::protobuf::RepeatedPtrField< ::ContactsBook::Contacts >*
      mutable_people();
  const ::google::protobuf::RepeatedPtrField< ::ContactsBook::Contacts >&
      people() const;

  // @@protoc_insertion_point(class_scope:ContactsBook.ContactBook)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::ContactsBook::Contacts > people_;
  friend struct ::protobuf_ContactBook_2eproto::TableStruct;
  friend void ::protobuf_ContactBook_2eproto::InitDefaultsContactBookImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Contacts

// optional int32 id = 1;
inline bool Contacts::has_id() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Contacts::set_has_id() {
  _has_bits_[0] |= 0x00000020u;
}
inline void Contacts::clear_has_id() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void Contacts::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 Contacts::id() const {
  // @@protoc_insertion_point(field_get:ContactsBook.Contacts.id)
  return id_;
}
inline void Contacts::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:ContactsBook.Contacts.id)
}

// required string name = 2;
inline bool Contacts::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Contacts::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Contacts::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Contacts::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_name();
}
inline const ::std::string& Contacts::name() const {
  // @@protoc_insertion_point(field_get:ContactsBook.Contacts.name)
  return name_.GetNoArena();
}
inline void Contacts::set_name(const ::std::string& value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ContactsBook.Contacts.name)
}
#if LANG_CXX11
inline void Contacts::set_name(::std::string&& value) {
  set_has_name();
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ContactsBook.Contacts.name)
}
#endif
inline void Contacts::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ContactsBook.Contacts.name)
}
inline void Contacts::set_name(const char* value, size_t size) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ContactsBook.Contacts.name)
}
inline ::std::string* Contacts::mutable_name() {
  set_has_name();
  // @@protoc_insertion_point(field_mutable:ContactsBook.Contacts.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Contacts::release_name() {
  // @@protoc_insertion_point(field_release:ContactsBook.Contacts.name)
  clear_has_name();
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Contacts::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    set_has_name();
  } else {
    clear_has_name();
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:ContactsBook.Contacts.name)
}

// required string number = 3;
inline bool Contacts::has_number() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Contacts::set_has_number() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Contacts::clear_has_number() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Contacts::clear_number() {
  number_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_number();
}
inline const ::std::string& Contacts::number() const {
  // @@protoc_insertion_point(field_get:ContactsBook.Contacts.number)
  return number_.GetNoArena();
}
inline void Contacts::set_number(const ::std::string& value) {
  set_has_number();
  number_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ContactsBook.Contacts.number)
}
#if LANG_CXX11
inline void Contacts::set_number(::std::string&& value) {
  set_has_number();
  number_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ContactsBook.Contacts.number)
}
#endif
inline void Contacts::set_number(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_number();
  number_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ContactsBook.Contacts.number)
}
inline void Contacts::set_number(const char* value, size_t size) {
  set_has_number();
  number_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ContactsBook.Contacts.number)
}
inline ::std::string* Contacts::mutable_number() {
  set_has_number();
  // @@protoc_insertion_point(field_mutable:ContactsBook.Contacts.number)
  return number_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Contacts::release_number() {
  // @@protoc_insertion_point(field_release:ContactsBook.Contacts.number)
  clear_has_number();
  return number_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Contacts::set_allocated_number(::std::string* number) {
  if (number != NULL) {
    set_has_number();
  } else {
    clear_has_number();
  }
  number_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), number);
  // @@protoc_insertion_point(field_set_allocated:ContactsBook.Contacts.number)
}

// optional bool sex = 4;
inline bool Contacts::has_sex() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void Contacts::set_has_sex() {
  _has_bits_[0] |= 0x00000040u;
}
inline void Contacts::clear_has_sex() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void Contacts::clear_sex() {
  sex_ = false;
  clear_has_sex();
}
inline bool Contacts::sex() const {
  // @@protoc_insertion_point(field_get:ContactsBook.Contacts.sex)
  return sex_;
}
inline void Contacts::set_sex(bool value) {
  set_has_sex();
  sex_ = value;
  // @@protoc_insertion_point(field_set:ContactsBook.Contacts.sex)
}

// optional string address = 5;
inline bool Contacts::has_address() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Contacts::set_has_address() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Contacts::clear_has_address() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Contacts::clear_address() {
  address_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_address();
}
inline const ::std::string& Contacts::address() const {
  // @@protoc_insertion_point(field_get:ContactsBook.Contacts.address)
  return address_.GetNoArena();
}
inline void Contacts::set_address(const ::std::string& value) {
  set_has_address();
  address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ContactsBook.Contacts.address)
}
#if LANG_CXX11
inline void Contacts::set_address(::std::string&& value) {
  set_has_address();
  address_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ContactsBook.Contacts.address)
}
#endif
inline void Contacts::set_address(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_address();
  address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ContactsBook.Contacts.address)
}
inline void Contacts::set_address(const char* value, size_t size) {
  set_has_address();
  address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ContactsBook.Contacts.address)
}
inline ::std::string* Contacts::mutable_address() {
  set_has_address();
  // @@protoc_insertion_point(field_mutable:ContactsBook.Contacts.address)
  return address_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Contacts::release_address() {
  // @@protoc_insertion_point(field_release:ContactsBook.Contacts.address)
  clear_has_address();
  return address_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Contacts::set_allocated_address(::std::string* address) {
  if (address != NULL) {
    set_has_address();
  } else {
    clear_has_address();
  }
  address_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), address);
  // @@protoc_insertion_point(field_set_allocated:ContactsBook.Contacts.address)
}

// optional string date = 6;
inline bool Contacts::has_date() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Contacts::set_has_date() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Contacts::clear_has_date() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Contacts::clear_date() {
  date_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_date();
}
inline const ::std::string& Contacts::date() const {
  // @@protoc_insertion_point(field_get:ContactsBook.Contacts.date)
  return date_.GetNoArena();
}
inline void Contacts::set_date(const ::std::string& value) {
  set_has_date();
  date_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ContactsBook.Contacts.date)
}
#if LANG_CXX11
inline void Contacts::set_date(::std::string&& value) {
  set_has_date();
  date_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ContactsBook.Contacts.date)
}
#endif
inline void Contacts::set_date(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_date();
  date_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ContactsBook.Contacts.date)
}
inline void Contacts::set_date(const char* value, size_t size) {
  set_has_date();
  date_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ContactsBook.Contacts.date)
}
inline ::std::string* Contacts::mutable_date() {
  set_has_date();
  // @@protoc_insertion_point(field_mutable:ContactsBook.Contacts.date)
  return date_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Contacts::release_date() {
  // @@protoc_insertion_point(field_release:ContactsBook.Contacts.date)
  clear_has_date();
  return date_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Contacts::set_allocated_date(::std::string* date) {
  if (date != NULL) {
    set_has_date();
  } else {
    clear_has_date();
  }
  date_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), date);
  // @@protoc_insertion_point(field_set_allocated:ContactsBook.Contacts.date)
}

// optional string email = 7;
inline bool Contacts::has_email() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Contacts::set_has_email() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Contacts::clear_has_email() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Contacts::clear_email() {
  email_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_email();
}
inline const ::std::string& Contacts::email() const {
  // @@protoc_insertion_point(field_get:ContactsBook.Contacts.email)
  return email_.GetNoArena();
}
inline void Contacts::set_email(const ::std::string& value) {
  set_has_email();
  email_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ContactsBook.Contacts.email)
}
#if LANG_CXX11
inline void Contacts::set_email(::std::string&& value) {
  set_has_email();
  email_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ContactsBook.Contacts.email)
}
#endif
inline void Contacts::set_email(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_email();
  email_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ContactsBook.Contacts.email)
}
inline void Contacts::set_email(const char* value, size_t size) {
  set_has_email();
  email_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ContactsBook.Contacts.email)
}
inline ::std::string* Contacts::mutable_email() {
  set_has_email();
  // @@protoc_insertion_point(field_mutable:ContactsBook.Contacts.email)
  return email_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Contacts::release_email() {
  // @@protoc_insertion_point(field_release:ContactsBook.Contacts.email)
  clear_has_email();
  return email_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Contacts::set_allocated_email(::std::string* email) {
  if (email != NULL) {
    set_has_email();
  } else {
    clear_has_email();
  }
  email_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), email);
  // @@protoc_insertion_point(field_set_allocated:ContactsBook.Contacts.email)
}

// -------------------------------------------------------------------

// ContactBook

// repeated .ContactsBook.Contacts people = 1;
inline int ContactBook::people_size() const {
  return people_.size();
}
inline void ContactBook::clear_people() {
  people_.Clear();
}
inline const ::ContactsBook::Contacts& ContactBook::people(int index) const {
  // @@protoc_insertion_point(field_get:ContactsBook.ContactBook.people)
  return people_.Get(index);
}
inline ::ContactsBook::Contacts* ContactBook::mutable_people(int index) {
  // @@protoc_insertion_point(field_mutable:ContactsBook.ContactBook.people)
  return people_.Mutable(index);
}
inline ::ContactsBook::Contacts* ContactBook::add_people() {
  // @@protoc_insertion_point(field_add:ContactsBook.ContactBook.people)
  return people_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::ContactsBook::Contacts >*
ContactBook::mutable_people() {
  // @@protoc_insertion_point(field_mutable_list:ContactsBook.ContactBook.people)
  return &people_;
}
inline const ::google::protobuf::RepeatedPtrField< ::ContactsBook::Contacts >&
ContactBook::people() const {
  // @@protoc_insertion_point(field_list:ContactsBook.ContactBook.people)
  return people_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace ContactsBook

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_ContactBook_2eproto__INCLUDED