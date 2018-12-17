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

#include <folly/futures/Future.h>
#include <folly/futures/Promise.h>
#include <folly/Unit.h>
#include <thrift/lib/py3/clientcallbacks.h>

#include <cstdint>
#include <functional>
#include <map>
#include <memory>
#include <set>
#include <vector>

namespace py3 {
namespace simple {

class SimpleServiceClientWrapper {
  protected:
    std::shared_ptr<::py3::simple::SimpleServiceAsyncClient> async_client;
    std::shared_ptr<apache::thrift::RequestChannel> channel_;
  public:
    explicit SimpleServiceClientWrapper(
      std::shared_ptr<::py3::simple::SimpleServiceAsyncClient> async_client,
      std::shared_ptr<apache::thrift::RequestChannel> channel);
    virtual ~SimpleServiceClientWrapper();

    folly::Future<folly::Unit> disconnect();
    void disconnectInLoop();
    void setPersistentHeader(const std::string& key, const std::string& value);

    folly::Future<int32_t> get_five(
      apache::thrift::RpcOptions& rpcOptions);
    folly::Future<int32_t> add_five(
      apache::thrift::RpcOptions& rpcOptions,
      int32_t arg_num);
    folly::Future<folly::Unit> do_nothing(
      apache::thrift::RpcOptions& rpcOptions);
    folly::Future<std::string> concat(
      apache::thrift::RpcOptions& rpcOptions,
      std::string arg_first,
      std::string arg_second);
    folly::Future<int32_t> get_value(
      apache::thrift::RpcOptions& rpcOptions,
      ::py3::simple::SimpleStruct arg_simple_struct);
    folly::Future<bool> negate(
      apache::thrift::RpcOptions& rpcOptions,
      bool arg_input);
    folly::Future<int8_t> tiny(
      apache::thrift::RpcOptions& rpcOptions,
      int8_t arg_input);
    folly::Future<int16_t> small(
      apache::thrift::RpcOptions& rpcOptions,
      int16_t arg_input);
    folly::Future<int64_t> big(
      apache::thrift::RpcOptions& rpcOptions,
      int64_t arg_input);
    folly::Future<double> two(
      apache::thrift::RpcOptions& rpcOptions,
      double arg_input);
    folly::Future<folly::Unit> expected_exception(
      apache::thrift::RpcOptions& rpcOptions);
    folly::Future<int32_t> unexpected_exception(
      apache::thrift::RpcOptions& rpcOptions);
    folly::Future<int32_t> sum_i16_list(
      apache::thrift::RpcOptions& rpcOptions,
      std::vector<int16_t> arg_numbers);
    folly::Future<int32_t> sum_i32_list(
      apache::thrift::RpcOptions& rpcOptions,
      std::vector<int32_t> arg_numbers);
    folly::Future<int32_t> sum_i64_list(
      apache::thrift::RpcOptions& rpcOptions,
      std::vector<int64_t> arg_numbers);
    folly::Future<std::string> concat_many(
      apache::thrift::RpcOptions& rpcOptions,
      std::vector<std::string> arg_words);
    folly::Future<int32_t> count_structs(
      apache::thrift::RpcOptions& rpcOptions,
      std::vector<::py3::simple::SimpleStruct> arg_items);
    folly::Future<int32_t> sum_set(
      apache::thrift::RpcOptions& rpcOptions,
      std::set<int32_t> arg_numbers);
    folly::Future<bool> contains_word(
      apache::thrift::RpcOptions& rpcOptions,
      std::set<std::string> arg_words,
      std::string arg_word);
    folly::Future<std::string> get_map_value(
      apache::thrift::RpcOptions& rpcOptions,
      std::map<std::string,std::string> arg_words,
      std::string arg_key);
    folly::Future<int16_t> map_length(
      apache::thrift::RpcOptions& rpcOptions,
      std::map<std::string,::py3::simple::SimpleStruct> arg_items);
    folly::Future<int16_t> sum_map_values(
      apache::thrift::RpcOptions& rpcOptions,
      std::map<std::string,int16_t> arg_items);
    folly::Future<int32_t> complex_sum_i32(
      apache::thrift::RpcOptions& rpcOptions,
      ::py3::simple::ComplexStruct arg_counter);
    folly::Future<std::string> repeat_name(
      apache::thrift::RpcOptions& rpcOptions,
      ::py3::simple::ComplexStruct arg_counter);
    folly::Future<::py3::simple::SimpleStruct> get_struct(
      apache::thrift::RpcOptions& rpcOptions);
    folly::Future<std::vector<int32_t>> fib(
      apache::thrift::RpcOptions& rpcOptions,
      int16_t arg_n);
    folly::Future<std::set<std::string>> unique_words(
      apache::thrift::RpcOptions& rpcOptions,
      std::vector<std::string> arg_words);
    folly::Future<std::map<std::string,int16_t>> words_count(
      apache::thrift::RpcOptions& rpcOptions,
      std::vector<std::string> arg_words);
    folly::Future<::py3::simple::AnEnum> set_enum(
      apache::thrift::RpcOptions& rpcOptions,
      ::py3::simple::AnEnum arg_in_enum);
    folly::Future<std::vector<std::vector<int32_t>>> list_of_lists(
      apache::thrift::RpcOptions& rpcOptions,
      int16_t arg_num_lists,
      int16_t arg_num_items);
    folly::Future<std::map<std::string,std::map<std::string,int32_t>>> word_character_frequency(
      apache::thrift::RpcOptions& rpcOptions,
      std::string arg_sentence);
    folly::Future<std::vector<std::set<std::string>>> list_of_sets(
      apache::thrift::RpcOptions& rpcOptions,
      std::string arg_some_words);
    folly::Future<int32_t> nested_map_argument(
      apache::thrift::RpcOptions& rpcOptions,
      std::map<std::string,std::vector<::py3::simple::SimpleStruct>> arg_struct_map);
    folly::Future<std::string> make_sentence(
      apache::thrift::RpcOptions& rpcOptions,
      std::vector<std::vector<std::string>> arg_word_chars);
    folly::Future<std::set<int32_t>> get_union(
      apache::thrift::RpcOptions& rpcOptions,
      std::vector<std::set<int32_t>> arg_sets);
    folly::Future<std::set<std::string>> get_keys(
      apache::thrift::RpcOptions& rpcOptions,
      std::vector<std::map<std::string,std::string>> arg_string_map);
    folly::Future<double> lookup_double(
      apache::thrift::RpcOptions& rpcOptions,
      int32_t arg_key);
    folly::Future<std::string> retrieve_binary(
      apache::thrift::RpcOptions& rpcOptions,
      std::string arg_something);
    folly::Future<std::set<std::string>> contain_binary(
      apache::thrift::RpcOptions& rpcOptions,
      std::vector<std::string> arg_binaries);
    folly::Future<std::vector<::py3::simple::AnEnum>> contain_enum(
      apache::thrift::RpcOptions& rpcOptions,
      std::vector<::py3::simple::AnEnum> arg_the_enum);
};


class DerivedServiceClientWrapper : public ::py3::simple::SimpleServiceClientWrapper {
  protected:
    std::shared_ptr<::py3::simple::DerivedServiceAsyncClient> async_client;
    std::shared_ptr<apache::thrift::RequestChannel> channel_;
  public:
    explicit DerivedServiceClientWrapper(
      std::shared_ptr<::py3::simple::DerivedServiceAsyncClient> async_client,
      std::shared_ptr<apache::thrift::RequestChannel> channel);

    folly::Future<folly::Unit> disconnect();
    void disconnectInLoop();

    folly::Future<int32_t> get_six(
      apache::thrift::RpcOptions& rpcOptions);
};


class RederivedServiceClientWrapper : public ::py3::simple::DerivedServiceClientWrapper {
  protected:
    std::shared_ptr<::py3::simple::RederivedServiceAsyncClient> async_client;
    std::shared_ptr<apache::thrift::RequestChannel> channel_;
  public:
    explicit RederivedServiceClientWrapper(
      std::shared_ptr<::py3::simple::RederivedServiceAsyncClient> async_client,
      std::shared_ptr<apache::thrift::RequestChannel> channel);

    folly::Future<folly::Unit> disconnect();
    void disconnectInLoop();

    folly::Future<int32_t> get_seven(
      apache::thrift::RpcOptions& rpcOptions);
};


} // namespace py3
} // namespace simple
