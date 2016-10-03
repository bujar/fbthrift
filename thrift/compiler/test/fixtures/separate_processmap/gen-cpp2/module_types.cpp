/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/separate_processmap/gen-cpp2/module_types.h"

#include "thrift/compiler/test/fixtures/separate_processmap/gen-cpp2/module_types.tcc"


#include <algorithm>

namespace cpp2 {

MyEnum _kMyEnumValues[] = {
  MyEnum::MyValue1,
  MyEnum::MyValue2
};

const char* _kMyEnumNames[] = {
  "MyValue1",
  "MyValue2"
};

const std::map<MyEnum, const char*> _MyEnum_VALUES_TO_NAMES(apache::thrift::TEnumIterator<MyEnum>(2, _kMyEnumValues, _kMyEnumNames), apache::thrift::TEnumIterator<MyEnum>(-1, nullptr, nullptr));
const std::map<const char*, MyEnum, apache::thrift::ltstr> _MyEnum_NAMES_TO_VALUES(apache::thrift::TEnumInverseIterator<MyEnum>(2, _kMyEnumValues, _kMyEnumNames), apache::thrift::TEnumInverseIterator<MyEnum>(-1, nullptr, nullptr));

} // cpp2
namespace std {

} // std
namespace apache { namespace thrift {

template <> const char* TEnumTraitsBase< ::cpp2::MyEnum>::findName( ::cpp2::MyEnum value) {
  return findName( ::cpp2::_MyEnum_VALUES_TO_NAMES, value);
}

template <> bool TEnumTraitsBase< ::cpp2::MyEnum>::findValue(const char* name,  ::cpp2::MyEnum* outValue) {
  return findValue( ::cpp2::_MyEnum_NAMES_TO_VALUES, name, outValue);
}

}} // apache::thrift
namespace cpp2 {

void MyStruct::__clear() {
  MyIntField = 0;
  MyStringField = std::string();
  __isset.__clear();
}

bool MyStruct::operator==(const MyStruct& rhs) const {
  if (!((MyIntField == rhs.MyIntField))) {
    return false;
  }
  if (!((MyStringField == rhs.MyStringField))) {
    return false;
  }
  return true;
}

void swap(MyStruct& a, MyStruct& b) {
  using ::std::swap;
  swap(a.MyIntField, b.MyIntField);
  swap(a.MyStringField, b.MyStringField);
  swap(a.__isset, b.__isset);
}

template uint32_t MyStruct::read<>(apache::thrift::BinaryProtocolReader*);
template uint32_t MyStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t MyStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t MyStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t MyStruct::read<>(apache::thrift::CompactProtocolReader*);
template uint32_t MyStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t MyStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t MyStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

} // cpp2