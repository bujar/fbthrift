/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_metadata_h.h>
#include <thrift/lib/thrift/gen-cpp2/metadata_types.h>
#include <thrift/compiler/test/fixtures/fatal/gen-cpp2/module_types.h>
#include "thrift/compiler/test/fixtures/fatal/gen-cpp2/reflection_dep_B_metadata.h"
#include "thrift/compiler/test/fixtures/fatal/gen-cpp2/reflection_dep_C_metadata.h"

namespace apache {
namespace thrift {
namespace detail {
namespace md {
using ThriftMetadata = ::apache::thrift::metadata::ThriftMetadata;

template <>
class EnumMetadata<::test_cpp2::cpp_reflection::enum1> {
 public:
  static void gen(ThriftMetadata& metadata);
};
template <>
class EnumMetadata<::test_cpp2::cpp_reflection::enum2> {
 public:
  static void gen(ThriftMetadata& metadata);
};
template <>
class EnumMetadata<::test_cpp2::cpp_reflection::enum3> {
 public:
  static void gen(ThriftMetadata& metadata);
};
template <>
class EnumMetadata<::test_cpp2::cpp_reflection::enum_with_special_names> {
 public:
  static void gen(ThriftMetadata& metadata);
};

} // namespace md
} // namespace detail
} // namespace thrift
} // namespace apache
