/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#pragma once
#include <src/gen-cpp2/SimpleService.h>
#include <src/gen-cpp2/DerivedService.h>
#include <src/gen-cpp2/RederivedService.h>
#include <folly/python/futures.h>
#include <Python.h>

#include <memory>

namespace py3 {
namespace simple {

class SimpleServiceWrapper : virtual public SimpleServiceSvIf {
  protected:
    PyObject *if_object;
    folly::Executor *executor;
  public:
    explicit SimpleServiceWrapper(PyObject *if_object, folly::Executor *exc);
    virtual ~SimpleServiceWrapper();
    folly::Future<int32_t> future_get_five() override;
    folly::Future<int32_t> future_add_five(
        int32_t num
    ) override;
    folly::Future<folly::Unit> future_do_nothing() override;
    folly::Future<std::unique_ptr<std::string>> future_concat(
        std::unique_ptr<std::string> first,
        std::unique_ptr<std::string> second
    ) override;
    folly::Future<int32_t> future_get_value(
        std::unique_ptr<::py3::simple::SimpleStruct> simple_struct
    ) override;
    folly::Future<bool> future_negate(
        bool input
    ) override;
    folly::Future<int8_t> future_tiny(
        int8_t input
    ) override;
    folly::Future<int16_t> future_small(
        int16_t input
    ) override;
    folly::Future<int64_t> future_big(
        int64_t input
    ) override;
    folly::Future<double> future_two(
        double input
    ) override;
    folly::Future<folly::Unit> future_expected_exception() override;
    folly::Future<int32_t> future_unexpected_exception() override;
    folly::Future<int32_t> future_sum_i16_list(
        std::unique_ptr<std::vector<int16_t>> numbers
    ) override;
    folly::Future<int32_t> future_sum_i32_list(
        std::unique_ptr<std::vector<int32_t>> numbers
    ) override;
    folly::Future<int32_t> future_sum_i64_list(
        std::unique_ptr<std::vector<int64_t>> numbers
    ) override;
    folly::Future<std::unique_ptr<std::string>> future_concat_many(
        std::unique_ptr<std::vector<std::string>> words
    ) override;
    folly::Future<int32_t> future_count_structs(
        std::unique_ptr<std::vector<::py3::simple::SimpleStruct>> items
    ) override;
    folly::Future<int32_t> future_sum_set(
        std::unique_ptr<std::set<int32_t>> numbers
    ) override;
    folly::Future<bool> future_contains_word(
        std::unique_ptr<std::set<std::string>> words,
        std::unique_ptr<std::string> word
    ) override;
    folly::Future<std::unique_ptr<std::string>> future_get_map_value(
        std::unique_ptr<std::map<std::string,std::string>> words,
        std::unique_ptr<std::string> key
    ) override;
    folly::Future<int16_t> future_map_length(
        std::unique_ptr<std::map<std::string,::py3::simple::SimpleStruct>> items
    ) override;
    folly::Future<int16_t> future_sum_map_values(
        std::unique_ptr<std::map<std::string,int16_t>> items
    ) override;
    folly::Future<int32_t> future_complex_sum_i32(
        std::unique_ptr<::py3::simple::ComplexStruct> counter
    ) override;
    folly::Future<std::unique_ptr<std::string>> future_repeat_name(
        std::unique_ptr<::py3::simple::ComplexStruct> counter
    ) override;
    folly::Future<std::unique_ptr<::py3::simple::SimpleStruct>> future_get_struct() override;
    folly::Future<std::unique_ptr<std::vector<int32_t>>> future_fib(
        int16_t n
    ) override;
    folly::Future<std::unique_ptr<std::set<std::string>>> future_unique_words(
        std::unique_ptr<std::vector<std::string>> words
    ) override;
    folly::Future<std::unique_ptr<std::map<std::string,int16_t>>> future_words_count(
        std::unique_ptr<std::vector<std::string>> words
    ) override;
    folly::Future<::py3::simple::AnEnum> future_set_enum(
        ::py3::simple::AnEnum in_enum
    ) override;
    folly::Future<std::unique_ptr<std::vector<std::vector<int32_t>>>> future_list_of_lists(
        int16_t num_lists,
        int16_t num_items
    ) override;
    folly::Future<std::unique_ptr<std::map<std::string,std::map<std::string,int32_t>>>> future_word_character_frequency(
        std::unique_ptr<std::string> sentence
    ) override;
    folly::Future<std::unique_ptr<std::vector<std::set<std::string>>>> future_list_of_sets(
        std::unique_ptr<std::string> some_words
    ) override;
    folly::Future<int32_t> future_nested_map_argument(
        std::unique_ptr<std::map<std::string,std::vector<::py3::simple::SimpleStruct>>> struct_map
    ) override;
    folly::Future<std::unique_ptr<std::string>> future_make_sentence(
        std::unique_ptr<std::vector<std::vector<std::string>>> word_chars
    ) override;
    folly::Future<std::unique_ptr<std::set<int32_t>>> future_get_union(
        std::unique_ptr<std::vector<std::set<int32_t>>> sets
    ) override;
    folly::Future<std::unique_ptr<std::set<std::string>>> future_get_keys(
        std::unique_ptr<std::vector<std::map<std::string,std::string>>> string_map
    ) override;
    folly::Future<double> future_lookup_double(
        int32_t key
    ) override;
    folly::Future<std::unique_ptr<std::string>> future_retrieve_binary(
        std::unique_ptr<std::string> something
    ) override;
    folly::Future<std::unique_ptr<std::set<std::string>>> future_contain_binary(
        std::unique_ptr<std::vector<std::string>> binaries
    ) override;
    folly::Future<std::unique_ptr<std::vector<::py3::simple::AnEnum>>> future_contain_enum(
        std::unique_ptr<std::vector<::py3::simple::AnEnum>> the_enum
    ) override;
};

std::shared_ptr<apache::thrift::ServerInterface> SimpleServiceInterface(PyObject *if_object, folly::Executor *exc);


class DerivedServiceWrapper : public ::py3::simple::SimpleServiceWrapper, virtual public DerivedServiceSvIf {
  public:
    explicit DerivedServiceWrapper(PyObject *if_object, folly::Executor *exc);
    folly::Future<int32_t> future_get_six() override;
};

std::shared_ptr<apache::thrift::ServerInterface> DerivedServiceInterface(PyObject *if_object, folly::Executor *exc);


class RederivedServiceWrapper : public ::py3::simple::DerivedServiceWrapper, virtual public RederivedServiceSvIf {
  public:
    explicit RederivedServiceWrapper(PyObject *if_object, folly::Executor *exc);
    folly::Future<int32_t> future_get_seven() override;
};

std::shared_ptr<apache::thrift::ServerInterface> RederivedServiceInterface(PyObject *if_object, folly::Executor *exc);
} // namespace py3
} // namespace simple
