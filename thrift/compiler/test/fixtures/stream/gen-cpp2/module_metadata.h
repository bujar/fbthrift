/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <vector>

#include <thrift/lib/cpp2/gen/module_metadata_h.h>
#include "thrift/compiler/test/fixtures/stream/gen-cpp2/module_types.h"

namespace cpp2 {
class PubSubStreamingService;
} // namespace cpp2

namespace apache {
namespace thrift {
namespace detail {
namespace md {

template <>
class StructMetadata<::cpp2::FooEx> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class ExceptionMetadata<::cpp2::FooEx> {
 public:
  static void gen(ThriftMetadata& metadata);
};
template <>
class ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::PubSubStreamingService>> {
 public:
  static void gen(ThriftServiceMetadataResponse& response);
 private:
  static const ThriftServiceContextRef* genRecurse(ThriftMetadata& metadata, std::vector<ThriftServiceContextRef>& services);

  template <typename T>
  friend class ServiceMetadata;

  static void gen_returnstream(ThriftMetadata& metadata, ThriftService& context);
  static void gen_streamthrows(ThriftMetadata& metadata, ThriftService& context);
  static void gen_boththrows(ThriftMetadata& metadata, ThriftService& context);
  static void gen_responseandstreamthrows(ThriftMetadata& metadata, ThriftService& context);
  static void gen_returnstreamFast(ThriftMetadata& metadata, ThriftService& context);
};
} // namespace md
} // namespace detail
} // namespace thrift
} // namespace apache
