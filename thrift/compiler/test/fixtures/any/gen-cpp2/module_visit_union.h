/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "thrift/compiler/test/fixtures/any/gen-cpp2/module_metadata.h"
#include <thrift/lib/cpp2/visitation/visit_union.h>

namespace apache {
namespace thrift {
namespace detail {

template <>
struct VisitUnion<::cpp2::MyUnion> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, T&& t) const {
    using Union = std::remove_reference_t<T>;
    FOLLY_MAYBE_UNUSED constexpr auto get_metadata = 
        get_field_metadata<::cpp2::MyUnion>;
    switch (t.getType()) {
    case Union::Type::myString:
      return f(get_metadata(0), *static_cast<T&&>(t).myString_ref());
    case Union::Type::__EMPTY__: ;
    }
  }
};
} // namespace detail
} // namespace thrift
} // namespace apache
