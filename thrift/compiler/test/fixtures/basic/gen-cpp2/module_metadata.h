/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <vector>

#include <thrift/lib/cpp2/gen/module_metadata_h.h>
#include "thrift/compiler/test/fixtures/basic/gen-cpp2/module_types.h"
#include "thrift/annotation/gen-cpp2/hack_metadata.h"

namespace cpp2 {
class MyService;
} // namespace cpp2
namespace cpp2 {
class DbMixedStackArguments;
} // namespace cpp2

namespace apache {
namespace thrift {
namespace detail {
namespace md {

template <>
class EnumMetadata<::cpp2::MyEnum> {
 public:
  static void gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::cpp2::MyDataItem> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::cpp2::MyStruct> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::cpp2::MyUnion> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>> {
 public:
  static void gen(ThriftServiceMetadataResponse& response);
 private:
  static const ThriftServiceContextRef* genRecurse(ThriftMetadata& metadata, std::vector<ThriftServiceContextRef>& services);

  template <typename T>
  friend class ServiceMetadata;

  static void gen_ping(ThriftMetadata& metadata, ThriftService& context);
  static void gen_getRandomData(ThriftMetadata& metadata, ThriftService& context);
  static void gen_sink(ThriftMetadata& metadata, ThriftService& context);
  static void gen_putDataById(ThriftMetadata& metadata, ThriftService& context);
  static void gen_hasDataById(ThriftMetadata& metadata, ThriftService& context);
  static void gen_getDataById(ThriftMetadata& metadata, ThriftService& context);
  static void gen_deleteDataById(ThriftMetadata& metadata, ThriftService& context);
  static void gen_lobDataById(ThriftMetadata& metadata, ThriftService& context);
  static void gen_invalid_return_for_hack(ThriftMetadata& metadata, ThriftService& context);
};
template <>
class ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::DbMixedStackArguments>> {
 public:
  static void gen(ThriftServiceMetadataResponse& response);
 private:
  static const ThriftServiceContextRef* genRecurse(ThriftMetadata& metadata, std::vector<ThriftServiceContextRef>& services);

  template <typename T>
  friend class ServiceMetadata;

  static void gen_getDataByKey0(ThriftMetadata& metadata, ThriftService& context);
  static void gen_getDataByKey1(ThriftMetadata& metadata, ThriftService& context);
};
} // namespace md
} // namespace detail
} // namespace thrift
} // namespace apache
