/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "thrift/compiler/test/fixtures/any/gen-cpp2/module_metadata.h"
#include <thrift/lib/cpp2/visitation/for_each.h>

namespace apache {
namespace thrift {
namespace detail {

template <>
struct ForEachField<::cpp2::MyStruct> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    FOLLY_MAYBE_UNUSED constexpr auto get_metadata =
        get_field_metadata<::cpp2::MyStruct>;

    f(get_metadata(0), static_cast<T&&>(t).myString_ref()...);
  }
};

template <>
struct ForEachField<::cpp2::MyUnion> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    FOLLY_MAYBE_UNUSED constexpr auto get_metadata =
        get_field_metadata<::cpp2::MyUnion>;

    f(get_metadata(0), static_cast<T&&>(t).myString_ref()...);
  }
};

template <>
struct ForEachField<::cpp2::MyException> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    FOLLY_MAYBE_UNUSED constexpr auto get_metadata =
        get_field_metadata<::cpp2::MyException>;

    f(get_metadata(0), static_cast<T&&>(t).myString_ref()...);
  }
};
} // namespace detail
} // namespace thrift
} // namespace apache
