/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "thrift/compiler/test/fixtures/optionals/gen-cpp2/module_types.h"

#include <thrift/lib/cpp2/gen/module_types_tcc.h>

namespace cpp2 {

} // cpp2
namespace std {

} // std
namespace apache { namespace thrift {

}} // apache::thrift

namespace apache {
namespace thrift {
namespace detail {

template <>
struct TccStructTraits<::cpp2::Color> {
  static void translateFieldName(
      folly::StringPiece _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype);
};
template <>
struct TccStructTraits<::cpp2::Vehicle> {
  static void translateFieldName(
      folly::StringPiece _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype);
};
template <>
struct TccStructTraits<::cpp2::Person> {
  static void translateFieldName(
      folly::StringPiece _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype);
};

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {

template <class Protocol_>
void Color::readNoXfer(Protocol_* iprot) {
  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;

  _readState.readStructBegin(iprot);

  using apache::thrift::TProtocolException;


  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          0,
          1,
          apache::thrift::protocol::T_DOUBLE))) {
    goto _loop;
  }
_readField_red:
  {
    iprot->readDouble(this->red);
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          1,
          2,
          apache::thrift::protocol::T_DOUBLE))) {
    goto _loop;
  }
_readField_green:
  {
    iprot->readDouble(this->green);
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          2,
          3,
          apache::thrift::protocol::T_DOUBLE))) {
    goto _loop;
  }
_readField_blue:
  {
    iprot->readDouble(this->blue);
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          3,
          4,
          apache::thrift::protocol::T_DOUBLE))) {
    goto _loop;
  }
_readField_alpha:
  {
    iprot->readDouble(this->alpha);
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          4,
          0,
          apache::thrift::protocol::T_STOP))) {
    goto _loop;
  }

_end:
  _readState.readStructEnd(iprot);

  return;

_loop:
  _readState.afterAdvanceFailure(iprot);
  if (_readState.atStop()) {
    goto _end;
  }
  if (iprot->kUsesFieldNames()) {
    _readState.template fillFieldTraitsFromName<apache::thrift::detail::TccStructTraits<Color>>();
  }

  switch (_readState.fieldId) {
    case 1:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_DOUBLE))) {
        goto _readField_red;
      } else {
        goto _skip;
      }
    }
    case 2:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_DOUBLE))) {
        goto _readField_green;
      } else {
        goto _skip;
      }
    }
    case 3:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_DOUBLE))) {
        goto _readField_blue;
      } else {
        goto _skip;
      }
    }
    case 4:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_DOUBLE))) {
        goto _readField_alpha;
      } else {
        goto _skip;
      }
    }
    default:
    {
_skip:
      _readState.skip(iprot);
      _readState.readFieldEnd(iprot);
      _readState.readFieldBeginNoInline(iprot);
      goto _loop;
    }
  }
}

template <class Protocol_>
uint32_t Color::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Color");
  xfer += prot_->serializedFieldSize("red", apache::thrift::protocol::T_DOUBLE, 1);
  xfer += prot_->serializedSizeDouble(this->red);
  xfer += prot_->serializedFieldSize("green", apache::thrift::protocol::T_DOUBLE, 2);
  xfer += prot_->serializedSizeDouble(this->green);
  xfer += prot_->serializedFieldSize("blue", apache::thrift::protocol::T_DOUBLE, 3);
  xfer += prot_->serializedSizeDouble(this->blue);
  xfer += prot_->serializedFieldSize("alpha", apache::thrift::protocol::T_DOUBLE, 4);
  xfer += prot_->serializedSizeDouble(this->alpha);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Color::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Color");
  xfer += prot_->serializedFieldSize("red", apache::thrift::protocol::T_DOUBLE, 1);
  xfer += prot_->serializedSizeDouble(this->red);
  xfer += prot_->serializedFieldSize("green", apache::thrift::protocol::T_DOUBLE, 2);
  xfer += prot_->serializedSizeDouble(this->green);
  xfer += prot_->serializedFieldSize("blue", apache::thrift::protocol::T_DOUBLE, 3);
  xfer += prot_->serializedSizeDouble(this->blue);
  xfer += prot_->serializedFieldSize("alpha", apache::thrift::protocol::T_DOUBLE, 4);
  xfer += prot_->serializedSizeDouble(this->alpha);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Color::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("Color");
  xfer += prot_->writeFieldBegin("red", apache::thrift::protocol::T_DOUBLE, 1);
  xfer += prot_->writeDouble(this->red);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("green", apache::thrift::protocol::T_DOUBLE, 2);
  xfer += prot_->writeDouble(this->green);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("blue", apache::thrift::protocol::T_DOUBLE, 3);
  xfer += prot_->writeDouble(this->blue);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("alpha", apache::thrift::protocol::T_DOUBLE, 4);
  xfer += prot_->writeDouble(this->alpha);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

extern template void Color::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t Color::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t Color::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t Color::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void Color::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t Color::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t Color::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t Color::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
namespace cpp2 {

template <class Protocol_>
void Vehicle::readNoXfer(Protocol_* iprot) {
  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;

  _readState.readStructBegin(iprot);

  using apache::thrift::TProtocolException;


  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          0,
          1,
          apache::thrift::protocol::T_STRUCT))) {
    goto _loop;
  }
_readField_color:
  {
    _readState.beforeSubobject(iprot);
    ::apache::thrift::Cpp2Ops<  ::cpp2::Color>::read(iprot, &this->color);
    _readState.afterSubobject(iprot);
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          1,
          2,
          apache::thrift::protocol::T_STRING))) {
    goto _loop;
  }
_readField_licensePlate:
  {
    this->licensePlate = ::std::string();
    iprot->readString(this->licensePlate.value());
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          2,
          3,
          apache::thrift::protocol::T_STRING))) {
    goto _loop;
  }
_readField_description:
  {
    this->description = ::std::string();
    iprot->readString(this->description.value());
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          3,
          4,
          apache::thrift::protocol::T_STRING))) {
    goto _loop;
  }
_readField_name:
  {
    this->name = ::std::string();
    iprot->readString(this->name.value());
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          4,
          5,
          apache::thrift::protocol::T_BOOL))) {
    goto _loop;
  }
_readField_hasAC:
  {
    this->hasAC = bool();
    iprot->readBool(this->hasAC.value());
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          5,
          0,
          apache::thrift::protocol::T_STOP))) {
    goto _loop;
  }

_end:
  _readState.readStructEnd(iprot);

  return;

_loop:
  _readState.afterAdvanceFailure(iprot);
  if (_readState.atStop()) {
    goto _end;
  }
  if (iprot->kUsesFieldNames()) {
    _readState.template fillFieldTraitsFromName<apache::thrift::detail::TccStructTraits<Vehicle>>();
  }

  switch (_readState.fieldId) {
    case 1:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRUCT))) {
        goto _readField_color;
      } else {
        goto _skip;
      }
    }
    case 2:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRING))) {
        goto _readField_licensePlate;
      } else {
        goto _skip;
      }
    }
    case 3:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRING))) {
        goto _readField_description;
      } else {
        goto _skip;
      }
    }
    case 4:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRING))) {
        goto _readField_name;
      } else {
        goto _skip;
      }
    }
    case 5:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_BOOL))) {
        goto _readField_hasAC;
      } else {
        goto _skip;
      }
    }
    default:
    {
_skip:
      _readState.skip(iprot);
      _readState.readFieldEnd(iprot);
      _readState.readFieldBeginNoInline(iprot);
      goto _loop;
    }
  }
}

template <class Protocol_>
uint32_t Vehicle::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Vehicle");
  xfer += prot_->serializedFieldSize("color", apache::thrift::protocol::T_STRUCT, 1);
  xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::Color>::serializedSize(prot_, &this->color);
  if (this->licensePlate.hasValue()) {
    xfer += prot_->serializedFieldSize("licensePlate", apache::thrift::protocol::T_STRING, 2);
    xfer += prot_->serializedSizeString(this->licensePlate.value());
  }
  if (this->description.hasValue()) {
    xfer += prot_->serializedFieldSize("description", apache::thrift::protocol::T_STRING, 3);
    xfer += prot_->serializedSizeString(this->description.value());
  }
  if (this->name.hasValue()) {
    xfer += prot_->serializedFieldSize("name", apache::thrift::protocol::T_STRING, 4);
    xfer += prot_->serializedSizeString(this->name.value());
  }
  if (this->hasAC.hasValue()) {
    xfer += prot_->serializedFieldSize("hasAC", apache::thrift::protocol::T_BOOL, 5);
    xfer += prot_->serializedSizeBool(this->hasAC.value());
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Vehicle::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Vehicle");
  xfer += prot_->serializedFieldSize("color", apache::thrift::protocol::T_STRUCT, 1);
  xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::Color>::serializedSizeZC(prot_, &this->color);
  if (this->licensePlate.hasValue()) {
    xfer += prot_->serializedFieldSize("licensePlate", apache::thrift::protocol::T_STRING, 2);
    xfer += prot_->serializedSizeString(this->licensePlate.value());
  }
  if (this->description.hasValue()) {
    xfer += prot_->serializedFieldSize("description", apache::thrift::protocol::T_STRING, 3);
    xfer += prot_->serializedSizeString(this->description.value());
  }
  if (this->name.hasValue()) {
    xfer += prot_->serializedFieldSize("name", apache::thrift::protocol::T_STRING, 4);
    xfer += prot_->serializedSizeString(this->name.value());
  }
  if (this->hasAC.hasValue()) {
    xfer += prot_->serializedFieldSize("hasAC", apache::thrift::protocol::T_BOOL, 5);
    xfer += prot_->serializedSizeBool(this->hasAC.value());
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Vehicle::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("Vehicle");
  xfer += prot_->writeFieldBegin("color", apache::thrift::protocol::T_STRUCT, 1);
  xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::Color>::write(prot_, &this->color);
  xfer += prot_->writeFieldEnd();
  if (this->licensePlate.hasValue()) {
    xfer += prot_->writeFieldBegin("licensePlate", apache::thrift::protocol::T_STRING, 2);
    xfer += prot_->writeString(this->licensePlate.value());
    xfer += prot_->writeFieldEnd();
  }
  if (this->description.hasValue()) {
    xfer += prot_->writeFieldBegin("description", apache::thrift::protocol::T_STRING, 3);
    xfer += prot_->writeString(this->description.value());
    xfer += prot_->writeFieldEnd();
  }
  if (this->name.hasValue()) {
    xfer += prot_->writeFieldBegin("name", apache::thrift::protocol::T_STRING, 4);
    xfer += prot_->writeString(this->name.value());
    xfer += prot_->writeFieldEnd();
  }
  if (this->hasAC.hasValue()) {
    xfer += prot_->writeFieldBegin("hasAC", apache::thrift::protocol::T_BOOL, 5);
    xfer += prot_->writeBool(this->hasAC.value());
    xfer += prot_->writeFieldEnd();
  }
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

extern template void Vehicle::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t Vehicle::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t Vehicle::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t Vehicle::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void Vehicle::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t Vehicle::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t Vehicle::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t Vehicle::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
namespace cpp2 {

template <class Protocol_>
void Person::readNoXfer(Protocol_* iprot) {
  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;

  _readState.readStructBegin(iprot);

  using apache::thrift::TProtocolException;


  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          0,
          1,
          apache::thrift::protocol::T_I64))) {
    goto _loop;
  }
_readField_id:
  {
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral,  ::cpp2::PersonID>::read(*iprot, this->id);
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          1,
          2,
          apache::thrift::protocol::T_STRING))) {
    goto _loop;
  }
_readField_name:
  {
    iprot->readString(this->name);
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          2,
          3,
          apache::thrift::protocol::T_I16))) {
    goto _loop;
  }
_readField_age:
  {
    this->age = int16_t();
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral, int16_t>::read(*iprot, this->age.value());
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          3,
          4,
          apache::thrift::protocol::T_STRING))) {
    goto _loop;
  }
_readField_address:
  {
    this->address = ::std::string();
    iprot->readString(this->address.value());
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          4,
          5,
          apache::thrift::protocol::T_STRUCT))) {
    goto _loop;
  }
_readField_favoriteColor:
  {
    _readState.beforeSubobject(iprot);
    this->favoriteColor =  ::cpp2::Color();
    ::apache::thrift::Cpp2Ops<  ::cpp2::Color>::read(iprot, &this->favoriteColor.value());
    _readState.afterSubobject(iprot);
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          5,
          6,
          apache::thrift::protocol::T_SET))) {
    goto _loop;
  }
_readField_friends:
  {
    _readState.beforeSubobject(iprot);
    this->friends = ::std::set< ::cpp2::PersonID>();
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::set<::apache::thrift::type_class::integral>, ::std::set< ::cpp2::PersonID>>::read(*iprot, this->friends.value());
    _readState.afterSubobject(iprot);
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          6,
          7,
          apache::thrift::protocol::T_I64))) {
    goto _loop;
  }
_readField_bestFriend:
  {
    this->bestFriend =  ::cpp2::PersonID();
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral,  ::cpp2::PersonID>::read(*iprot, this->bestFriend.value());
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          7,
          8,
          apache::thrift::protocol::T_MAP))) {
    goto _loop;
  }
_readField_petNames:
  {
    _readState.beforeSubobject(iprot);
    this->petNames = ::std::map< ::cpp2::Animal, ::std::string>();
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::enumeration, ::apache::thrift::type_class::string>, ::std::map< ::cpp2::Animal, ::std::string>>::read(*iprot, this->petNames.value());
    _readState.afterSubobject(iprot);
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          8,
          9,
          apache::thrift::protocol::T_I32))) {
    goto _loop;
  }
_readField_afraidOfAnimal:
  {
    this->afraidOfAnimal =  ::cpp2::Animal();
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::enumeration,  ::cpp2::Animal>::read(*iprot, this->afraidOfAnimal.value());
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          9,
          10,
          apache::thrift::protocol::T_LIST))) {
    goto _loop;
  }
_readField_vehicles:
  {
    _readState.beforeSubobject(iprot);
    this->vehicles = ::std::vector< ::cpp2::Vehicle>();
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::list<::apache::thrift::type_class::structure>, ::std::vector< ::cpp2::Vehicle>>::read(*iprot, this->vehicles.value());
    _readState.afterSubobject(iprot);
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          10,
          0,
          apache::thrift::protocol::T_STOP))) {
    goto _loop;
  }

_end:
  _readState.readStructEnd(iprot);

  return;

_loop:
  _readState.afterAdvanceFailure(iprot);
  if (_readState.atStop()) {
    goto _end;
  }
  if (iprot->kUsesFieldNames()) {
    _readState.template fillFieldTraitsFromName<apache::thrift::detail::TccStructTraits<Person>>();
  }

  switch (_readState.fieldId) {
    case 1:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_I64))) {
        goto _readField_id;
      } else {
        goto _skip;
      }
    }
    case 2:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRING))) {
        goto _readField_name;
      } else {
        goto _skip;
      }
    }
    case 3:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_I16))) {
        goto _readField_age;
      } else {
        goto _skip;
      }
    }
    case 4:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRING))) {
        goto _readField_address;
      } else {
        goto _skip;
      }
    }
    case 5:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRUCT))) {
        goto _readField_favoriteColor;
      } else {
        goto _skip;
      }
    }
    case 6:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_SET))) {
        goto _readField_friends;
      } else {
        goto _skip;
      }
    }
    case 7:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_I64))) {
        goto _readField_bestFriend;
      } else {
        goto _skip;
      }
    }
    case 8:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_MAP))) {
        goto _readField_petNames;
      } else {
        goto _skip;
      }
    }
    case 9:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_I32))) {
        goto _readField_afraidOfAnimal;
      } else {
        goto _skip;
      }
    }
    case 10:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_LIST))) {
        goto _readField_vehicles;
      } else {
        goto _skip;
      }
    }
    default:
    {
_skip:
      _readState.skip(iprot);
      _readState.readFieldEnd(iprot);
      _readState.readFieldBeginNoInline(iprot);
      goto _loop;
    }
  }
}

template <class Protocol_>
uint32_t Person::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Person");
  xfer += prot_->serializedFieldSize("id", apache::thrift::protocol::T_I64, 1);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral,  ::cpp2::PersonID>::serializedSize<false>(*prot_, this->id);
  xfer += prot_->serializedFieldSize("name", apache::thrift::protocol::T_STRING, 2);
  xfer += prot_->serializedSizeString(this->name);
  if (this->age.hasValue()) {
    xfer += prot_->serializedFieldSize("age", apache::thrift::protocol::T_I16, 3);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral, int16_t>::serializedSize<false>(*prot_, this->age.value());
  }
  if (this->address.hasValue()) {
    xfer += prot_->serializedFieldSize("address", apache::thrift::protocol::T_STRING, 4);
    xfer += prot_->serializedSizeString(this->address.value());
  }
  if (this->favoriteColor.hasValue()) {
    xfer += prot_->serializedFieldSize("favoriteColor", apache::thrift::protocol::T_STRUCT, 5);
    xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::Color>::serializedSize(prot_, &this->favoriteColor.value());
  }
  if (this->friends.hasValue()) {
    xfer += prot_->serializedFieldSize("friends", apache::thrift::protocol::T_SET, 6);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::set<::apache::thrift::type_class::integral>, ::std::set< ::cpp2::PersonID>>::serializedSize<false>(*prot_, this->friends.value());
  }
  if (this->bestFriend.hasValue()) {
    xfer += prot_->serializedFieldSize("bestFriend", apache::thrift::protocol::T_I64, 7);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral,  ::cpp2::PersonID>::serializedSize<false>(*prot_, this->bestFriend.value());
  }
  if (this->petNames.hasValue()) {
    xfer += prot_->serializedFieldSize("petNames", apache::thrift::protocol::T_MAP, 8);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::enumeration, ::apache::thrift::type_class::string>, ::std::map< ::cpp2::Animal, ::std::string>>::serializedSize<false>(*prot_, this->petNames.value());
  }
  if (this->afraidOfAnimal.hasValue()) {
    xfer += prot_->serializedFieldSize("afraidOfAnimal", apache::thrift::protocol::T_I32, 9);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::enumeration,  ::cpp2::Animal>::serializedSize<false>(*prot_, this->afraidOfAnimal.value());
  }
  if (this->vehicles.hasValue()) {
    xfer += prot_->serializedFieldSize("vehicles", apache::thrift::protocol::T_LIST, 10);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::list<::apache::thrift::type_class::structure>, ::std::vector< ::cpp2::Vehicle>>::serializedSize<false>(*prot_, this->vehicles.value());
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Person::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Person");
  xfer += prot_->serializedFieldSize("id", apache::thrift::protocol::T_I64, 1);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral,  ::cpp2::PersonID>::serializedSize<false>(*prot_, this->id);
  xfer += prot_->serializedFieldSize("name", apache::thrift::protocol::T_STRING, 2);
  xfer += prot_->serializedSizeString(this->name);
  if (this->age.hasValue()) {
    xfer += prot_->serializedFieldSize("age", apache::thrift::protocol::T_I16, 3);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral, int16_t>::serializedSize<false>(*prot_, this->age.value());
  }
  if (this->address.hasValue()) {
    xfer += prot_->serializedFieldSize("address", apache::thrift::protocol::T_STRING, 4);
    xfer += prot_->serializedSizeString(this->address.value());
  }
  if (this->favoriteColor.hasValue()) {
    xfer += prot_->serializedFieldSize("favoriteColor", apache::thrift::protocol::T_STRUCT, 5);
    xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::Color>::serializedSizeZC(prot_, &this->favoriteColor.value());
  }
  if (this->friends.hasValue()) {
    xfer += prot_->serializedFieldSize("friends", apache::thrift::protocol::T_SET, 6);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::set<::apache::thrift::type_class::integral>, ::std::set< ::cpp2::PersonID>>::serializedSize<false>(*prot_, this->friends.value());
  }
  if (this->bestFriend.hasValue()) {
    xfer += prot_->serializedFieldSize("bestFriend", apache::thrift::protocol::T_I64, 7);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral,  ::cpp2::PersonID>::serializedSize<false>(*prot_, this->bestFriend.value());
  }
  if (this->petNames.hasValue()) {
    xfer += prot_->serializedFieldSize("petNames", apache::thrift::protocol::T_MAP, 8);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::enumeration, ::apache::thrift::type_class::string>, ::std::map< ::cpp2::Animal, ::std::string>>::serializedSize<false>(*prot_, this->petNames.value());
  }
  if (this->afraidOfAnimal.hasValue()) {
    xfer += prot_->serializedFieldSize("afraidOfAnimal", apache::thrift::protocol::T_I32, 9);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::enumeration,  ::cpp2::Animal>::serializedSize<false>(*prot_, this->afraidOfAnimal.value());
  }
  if (this->vehicles.hasValue()) {
    xfer += prot_->serializedFieldSize("vehicles", apache::thrift::protocol::T_LIST, 10);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::list<::apache::thrift::type_class::structure>, ::std::vector< ::cpp2::Vehicle>>::serializedSize<false>(*prot_, this->vehicles.value());
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Person::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("Person");
  xfer += prot_->writeFieldBegin("id", apache::thrift::protocol::T_I64, 1);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral,  ::cpp2::PersonID>::write(*prot_, this->id);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("name", apache::thrift::protocol::T_STRING, 2);
  xfer += prot_->writeString(this->name);
  xfer += prot_->writeFieldEnd();
  if (this->age.hasValue()) {
    xfer += prot_->writeFieldBegin("age", apache::thrift::protocol::T_I16, 3);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral, int16_t>::write(*prot_, this->age.value());
    xfer += prot_->writeFieldEnd();
  }
  if (this->address.hasValue()) {
    xfer += prot_->writeFieldBegin("address", apache::thrift::protocol::T_STRING, 4);
    xfer += prot_->writeString(this->address.value());
    xfer += prot_->writeFieldEnd();
  }
  if (this->favoriteColor.hasValue()) {
    xfer += prot_->writeFieldBegin("favoriteColor", apache::thrift::protocol::T_STRUCT, 5);
    xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::Color>::write(prot_, &this->favoriteColor.value());
    xfer += prot_->writeFieldEnd();
  }
  if (this->friends.hasValue()) {
    xfer += prot_->writeFieldBegin("friends", apache::thrift::protocol::T_SET, 6);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::set<::apache::thrift::type_class::integral>, ::std::set< ::cpp2::PersonID>>::write(*prot_, this->friends.value());
    xfer += prot_->writeFieldEnd();
  }
  if (this->bestFriend.hasValue()) {
    xfer += prot_->writeFieldBegin("bestFriend", apache::thrift::protocol::T_I64, 7);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral,  ::cpp2::PersonID>::write(*prot_, this->bestFriend.value());
    xfer += prot_->writeFieldEnd();
  }
  if (this->petNames.hasValue()) {
    xfer += prot_->writeFieldBegin("petNames", apache::thrift::protocol::T_MAP, 8);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::enumeration, ::apache::thrift::type_class::string>, ::std::map< ::cpp2::Animal, ::std::string>>::write(*prot_, this->petNames.value());
    xfer += prot_->writeFieldEnd();
  }
  if (this->afraidOfAnimal.hasValue()) {
    xfer += prot_->writeFieldBegin("afraidOfAnimal", apache::thrift::protocol::T_I32, 9);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::enumeration,  ::cpp2::Animal>::write(*prot_, this->afraidOfAnimal.value());
    xfer += prot_->writeFieldEnd();
  }
  if (this->vehicles.hasValue()) {
    xfer += prot_->writeFieldBegin("vehicles", apache::thrift::protocol::T_LIST, 10);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::list<::apache::thrift::type_class::structure>, ::std::vector< ::cpp2::Vehicle>>::write(*prot_, this->vehicles.value());
    xfer += prot_->writeFieldEnd();
  }
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

extern template void Person::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t Person::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t Person::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t Person::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void Person::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t Person::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t Person::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t Person::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
