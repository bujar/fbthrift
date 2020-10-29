/**
 * Autogenerated by Thrift for src/module2.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "thrift/compiler/test/fixtures/qualified/gen-cpp2/module2_metadata.h"
#include <thrift/lib/cpp2/visitation/for_each.h>

namespace apache {
namespace thrift {
namespace detail {

template <>
struct ForEachField<::module2::Struct> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    FOLLY_MAYBE_UNUSED constexpr auto get_metadata =
        get_field_metadata<::module2::Struct>;

    f(get_metadata(0), static_cast<T&&>(t).first_ref()...);
    f(get_metadata(1), static_cast<T&&>(t).second_ref()...);
  }
};

template <>
struct ForEachField<::module2::BigStruct> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    FOLLY_MAYBE_UNUSED constexpr auto get_metadata =
        get_field_metadata<::module2::BigStruct>;

    f(get_metadata(0), static_cast<T&&>(t).s_ref()...);
    f(get_metadata(1), static_cast<T&&>(t).id_ref()...);
  }
};
} // namespace detail
} // namespace thrift
} // namespace apache
