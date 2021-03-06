// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ContactBook.proto

#ifndef PROTOBUF_ContactBook_2eproto__INCLUDED
#define PROTOBUF_ContactBook_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace ContactsBook {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_ContactBook_2eproto();
void protobuf_AssignDesc_ContactBook_2eproto();
void protobuf_ShutdownFile_ContactBook_2eproto();

class Contacts;
class ContactBook;

// ===================================================================

class Contacts : public ::google::protobuf::Message {
 public:
  Contacts();
  virtual ~Contacts();

  Contacts(const Contacts& from);

  inline Contacts& operator=(const Contacts& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Contacts& default_instance();

  void Swap(Contacts* other);

  // implements Message ----------------------------------------------

  Contacts* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Contacts& from);
  void MergeFrom(const Contacts& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);

  // required string name = 2;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 2;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // required string number = 3;
  inline bool has_number() const;
  inline void clear_number();
  static const int kNumberFieldNumber = 3;
  inline const ::std::string& number() const;
  inline void set_number(const ::std::string& value);
  inline void set_number(const char* value);
  inline void set_number(const char* value, size_t size);
  inline ::std::string* mutable_number();
  inline ::std::string* release_number();
  inline void set_allocated_number(::std::string* number);

  // optional bool sex = 4;
  inline bool has_sex() const;
  inline void clear_sex();
  static const int kSexFieldNumber = 4;
  inline bool sex() const;
  inline void set_sex(bool value);

  // optional string address = 5;
  inline bool has_address() const;
  inline void clear_address();
  static const int kAddressFieldNumber = 5;
  inline const ::std::string& address() const;
  inline void set_address(const ::std::string& value);
  inline void set_address(const char* value);
  inline void set_address(const char* value, size_t size);
  inline ::std::string* mutable_address();
  inline ::std::string* release_address();
  inline void set_allocated_address(::std::string* address);

  // optional string date = 6;
  inline bool has_date() const;
  inline void clear_date();
  static const int kDateFieldNumber = 6;
  inline const ::std::string& date() const;
  inline void set_date(const ::std::string& value);
  inline void set_date(const char* value);
  inline void set_date(const char* value, size_t size);
  inline ::std::string* mutable_date();
  inline ::std::string* release_date();
  inline void set_allocated_date(::std::string* date);

  // optional string email = 7;
  inline bool has_email() const;
  inline void clear_email();
  static const int kEmailFieldNumber = 7;
  inline const ::std::string& email() const;
  inline void set_email(const ::std::string& value);
  inline void set_email(const char* value);
  inline void set_email(const char* value, size_t size);
  inline ::std::string* mutable_email();
  inline ::std::string* release_email();
  inline void set_allocated_email(::std::string* email);

  // @@protoc_insertion_point(class_scope:ContactsBook.Contacts)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_number();
  inline void clear_has_number();
  inline void set_has_sex();
  inline void clear_has_sex();
  inline void set_has_address();
  inline void clear_has_address();
  inline void set_has_date();
  inline void clear_has_date();
  inline void set_has_email();
  inline void clear_has_email();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* name_;
  ::google::protobuf::int32 id_;
  bool sex_;
  ::std::string* number_;
  ::std::string* address_;
  ::std::string* date_;
  ::std::string* email_;
  friend void  protobuf_AddDesc_ContactBook_2eproto();
  friend void protobuf_AssignDesc_ContactBook_2eproto();
  friend void protobuf_ShutdownFile_ContactBook_2eproto();

  void InitAsDefaultInstance();
  static Contacts* default_instance_;
};
// -------------------------------------------------------------------

class ContactBook : public ::google::protobuf::Message {
 public:
  ContactBook();
  virtual ~ContactBook();

  ContactBook(const ContactBook& from);

  inline ContactBook& operator=(const ContactBook& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ContactBook& default_instance();

  void Swap(ContactBook* other);

  // implements Message ----------------------------------------------

  ContactBook* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ContactBook& from);
  void MergeFrom(const ContactBook& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .ContactsBook.Contacts people = 1;
  inline int people_size() const;
  inline void clear_people();
  static const int kPeopleFieldNumber = 1;
  inline const ::ContactsBook::Contacts& people(int index) const;
  inline ::ContactsBook::Contacts* mutable_people(int index);
  inline ::ContactsBook::Contacts* add_people();
  inline const ::google::protobuf::RepeatedPtrField< ::ContactsBook::Contacts >&
      people() const;
  inline ::google::protobuf::RepeatedPtrField< ::ContactsBook::Contacts >*
      mutable_people();

  // @@protoc_insertion_point(class_scope:ContactsBook.ContactBook)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::ContactsBook::Contacts > people_;
  friend void  protobuf_AddDesc_ContactBook_2eproto();
  friend void protobuf_AssignDesc_ContactBook_2eproto();
  friend void protobuf_ShutdownFile_ContactBook_2eproto();

  void InitAsDefaultInstance();
  static ContactBook* default_instance_;
};
// ===================================================================


// ===================================================================

// Contacts

// optional int32 id = 1;
inline bool Contacts::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Contacts::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Contacts::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
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
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Contacts::set_has_name() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Contacts::clear_has_name() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Contacts::clear_name() {
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& Contacts::name() const {
  // @@protoc_insertion_point(field_get:ContactsBook.Contacts.name)
  return *name_;
}
inline void Contacts::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(value);
  // @@protoc_insertion_point(field_set:ContactsBook.Contacts.name)
}
inline void Contacts::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(value);
  // @@protoc_insertion_point(field_set_char:ContactsBook.Contacts.name)
}
inline void Contacts::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:ContactsBook.Contacts.name)
}
inline ::std::string* Contacts::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:ContactsBook.Contacts.name)
  return name_;
}
inline ::std::string* Contacts::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Contacts::set_allocated_name(::std::string* name) {
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete name_;
  }
  if (name) {
    set_has_name();
    name_ = name;
  } else {
    clear_has_name();
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:ContactsBook.Contacts.name)
}

// required string number = 3;
inline bool Contacts::has_number() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Contacts::set_has_number() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Contacts::clear_has_number() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Contacts::clear_number() {
  if (number_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    number_->clear();
  }
  clear_has_number();
}
inline const ::std::string& Contacts::number() const {
  // @@protoc_insertion_point(field_get:ContactsBook.Contacts.number)
  return *number_;
}
inline void Contacts::set_number(const ::std::string& value) {
  set_has_number();
  if (number_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    number_ = new ::std::string;
  }
  number_->assign(value);
  // @@protoc_insertion_point(field_set:ContactsBook.Contacts.number)
}
inline void Contacts::set_number(const char* value) {
  set_has_number();
  if (number_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    number_ = new ::std::string;
  }
  number_->assign(value);
  // @@protoc_insertion_point(field_set_char:ContactsBook.Contacts.number)
}
inline void Contacts::set_number(const char* value, size_t size) {
  set_has_number();
  if (number_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    number_ = new ::std::string;
  }
  number_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:ContactsBook.Contacts.number)
}
inline ::std::string* Contacts::mutable_number() {
  set_has_number();
  if (number_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    number_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:ContactsBook.Contacts.number)
  return number_;
}
inline ::std::string* Contacts::release_number() {
  clear_has_number();
  if (number_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = number_;
    number_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Contacts::set_allocated_number(::std::string* number) {
  if (number_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete number_;
  }
  if (number) {
    set_has_number();
    number_ = number;
  } else {
    clear_has_number();
    number_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:ContactsBook.Contacts.number)
}

// optional bool sex = 4;
inline bool Contacts::has_sex() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Contacts::set_has_sex() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Contacts::clear_has_sex() {
  _has_bits_[0] &= ~0x00000008u;
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
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Contacts::set_has_address() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Contacts::clear_has_address() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Contacts::clear_address() {
  if (address_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    address_->clear();
  }
  clear_has_address();
}
inline const ::std::string& Contacts::address() const {
  // @@protoc_insertion_point(field_get:ContactsBook.Contacts.address)
  return *address_;
}
inline void Contacts::set_address(const ::std::string& value) {
  set_has_address();
  if (address_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    address_ = new ::std::string;
  }
  address_->assign(value);
  // @@protoc_insertion_point(field_set:ContactsBook.Contacts.address)
}
inline void Contacts::set_address(const char* value) {
  set_has_address();
  if (address_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    address_ = new ::std::string;
  }
  address_->assign(value);
  // @@protoc_insertion_point(field_set_char:ContactsBook.Contacts.address)
}
inline void Contacts::set_address(const char* value, size_t size) {
  set_has_address();
  if (address_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    address_ = new ::std::string;
  }
  address_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:ContactsBook.Contacts.address)
}
inline ::std::string* Contacts::mutable_address() {
  set_has_address();
  if (address_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    address_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:ContactsBook.Contacts.address)
  return address_;
}
inline ::std::string* Contacts::release_address() {
  clear_has_address();
  if (address_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = address_;
    address_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Contacts::set_allocated_address(::std::string* address) {
  if (address_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete address_;
  }
  if (address) {
    set_has_address();
    address_ = address;
  } else {
    clear_has_address();
    address_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:ContactsBook.Contacts.address)
}

// optional string date = 6;
inline bool Contacts::has_date() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Contacts::set_has_date() {
  _has_bits_[0] |= 0x00000020u;
}
inline void Contacts::clear_has_date() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void Contacts::clear_date() {
  if (date_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    date_->clear();
  }
  clear_has_date();
}
inline const ::std::string& Contacts::date() const {
  // @@protoc_insertion_point(field_get:ContactsBook.Contacts.date)
  return *date_;
}
inline void Contacts::set_date(const ::std::string& value) {
  set_has_date();
  if (date_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    date_ = new ::std::string;
  }
  date_->assign(value);
  // @@protoc_insertion_point(field_set:ContactsBook.Contacts.date)
}
inline void Contacts::set_date(const char* value) {
  set_has_date();
  if (date_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    date_ = new ::std::string;
  }
  date_->assign(value);
  // @@protoc_insertion_point(field_set_char:ContactsBook.Contacts.date)
}
inline void Contacts::set_date(const char* value, size_t size) {
  set_has_date();
  if (date_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    date_ = new ::std::string;
  }
  date_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:ContactsBook.Contacts.date)
}
inline ::std::string* Contacts::mutable_date() {
  set_has_date();
  if (date_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    date_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:ContactsBook.Contacts.date)
  return date_;
}
inline ::std::string* Contacts::release_date() {
  clear_has_date();
  if (date_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = date_;
    date_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Contacts::set_allocated_date(::std::string* date) {
  if (date_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete date_;
  }
  if (date) {
    set_has_date();
    date_ = date;
  } else {
    clear_has_date();
    date_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:ContactsBook.Contacts.date)
}

// optional string email = 7;
inline bool Contacts::has_email() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void Contacts::set_has_email() {
  _has_bits_[0] |= 0x00000040u;
}
inline void Contacts::clear_has_email() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void Contacts::clear_email() {
  if (email_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    email_->clear();
  }
  clear_has_email();
}
inline const ::std::string& Contacts::email() const {
  // @@protoc_insertion_point(field_get:ContactsBook.Contacts.email)
  return *email_;
}
inline void Contacts::set_email(const ::std::string& value) {
  set_has_email();
  if (email_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    email_ = new ::std::string;
  }
  email_->assign(value);
  // @@protoc_insertion_point(field_set:ContactsBook.Contacts.email)
}
inline void Contacts::set_email(const char* value) {
  set_has_email();
  if (email_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    email_ = new ::std::string;
  }
  email_->assign(value);
  // @@protoc_insertion_point(field_set_char:ContactsBook.Contacts.email)
}
inline void Contacts::set_email(const char* value, size_t size) {
  set_has_email();
  if (email_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    email_ = new ::std::string;
  }
  email_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:ContactsBook.Contacts.email)
}
inline ::std::string* Contacts::mutable_email() {
  set_has_email();
  if (email_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    email_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:ContactsBook.Contacts.email)
  return email_;
}
inline ::std::string* Contacts::release_email() {
  clear_has_email();
  if (email_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = email_;
    email_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Contacts::set_allocated_email(::std::string* email) {
  if (email_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete email_;
  }
  if (email) {
    set_has_email();
    email_ = email;
  } else {
    clear_has_email();
    email_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
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
inline const ::google::protobuf::RepeatedPtrField< ::ContactsBook::Contacts >&
ContactBook::people() const {
  // @@protoc_insertion_point(field_list:ContactsBook.ContactBook.people)
  return people_;
}
inline ::google::protobuf::RepeatedPtrField< ::ContactsBook::Contacts >*
ContactBook::mutable_people() {
  // @@protoc_insertion_point(field_mutable_list:ContactsBook.ContactBook.people)
  return &people_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace ContactsBook

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_ContactBook_2eproto__INCLUDED
