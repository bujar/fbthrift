/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/fatal/gen-cpp2/module_metadata.h"

namespace apache {
namespace thrift {
namespace detail {
namespace md {
using ThriftMetadata = ::apache::thrift::metadata::ThriftMetadata;

void EnumMetadata<::test_cpp2::cpp_reflection::enum1>::gen(ThriftMetadata& metadata) {
  auto res = metadata.enums.emplace("module.enum1", ::apache::thrift::metadata::ThriftEnum{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftEnum& enum_metadata = res.first->second;
  enum_metadata.name = "module.enum1";
  for (const auto& p : ::test_cpp2::cpp_reflection::_enum1_VALUES_TO_NAMES) {
    enum_metadata.elements.emplace(static_cast<int32_t>(p.first), p.second) ;
  }
}
void EnumMetadata<::test_cpp2::cpp_reflection::enum2>::gen(ThriftMetadata& metadata) {
  auto res = metadata.enums.emplace("module.enum2", ::apache::thrift::metadata::ThriftEnum{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftEnum& enum_metadata = res.first->second;
  enum_metadata.name = "module.enum2";
  for (const auto& p : ::test_cpp2::cpp_reflection::_enum2_VALUES_TO_NAMES) {
    enum_metadata.elements.emplace(static_cast<int32_t>(p.first), p.second) ;
  }
}
void EnumMetadata<::test_cpp2::cpp_reflection::enum3>::gen(ThriftMetadata& metadata) {
  auto res = metadata.enums.emplace("module.enum3", ::apache::thrift::metadata::ThriftEnum{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftEnum& enum_metadata = res.first->second;
  enum_metadata.name = "module.enum3";
  for (const auto& p : ::test_cpp2::cpp_reflection::_enum3_VALUES_TO_NAMES) {
    enum_metadata.elements.emplace(static_cast<int32_t>(p.first), p.second) ;
  }
}
void EnumMetadata<::test_cpp2::cpp_reflection::enum_with_special_names>::gen(ThriftMetadata& metadata) {
  auto res = metadata.enums.emplace("module.enum_with_special_names", ::apache::thrift::metadata::ThriftEnum{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftEnum& enum_metadata = res.first->second;
  enum_metadata.name = "module.enum_with_special_names";
  for (const auto& p : ::test_cpp2::cpp_reflection::_enum_with_special_names_VALUES_TO_NAMES) {
    enum_metadata.elements.emplace(static_cast<int32_t>(p.first), p.second) ;
  }
}

} // namespace md
} // namespace detail
} // namespace thrift
} // namespace apache
