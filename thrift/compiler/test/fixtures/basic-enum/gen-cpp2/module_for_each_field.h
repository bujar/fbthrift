/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "thrift/compiler/test/fixtures/basic-enum/gen-cpp2/module_metadata.h"
#include <thrift/lib/cpp2/visitation/for_each.h>

namespace apache {
namespace thrift {
namespace detail {

template <>
struct ForEachField<::test::fixtures::enumstrict::MyStruct> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    FOLLY_MAYBE_UNUSED constexpr auto get_metadata =
        get_field_metadata<::test::fixtures::enumstrict::MyStruct>;

    f(get_metadata(0), static_cast<T&&>(t).myEnum_ref()...);
    f(get_metadata(1), static_cast<T&&>(t).myBigEnum_ref()...);
  }
};
} // namespace detail
} // namespace thrift
} // namespace apache
