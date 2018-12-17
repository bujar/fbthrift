/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#pragma once
#include <src/gen-cpp2/EmptyService.h>
#include <src/gen-cpp2/ReturnService.h>
#include <src/gen-cpp2/ParamService.h>
#include <folly/python/futures.h>
#include <Python.h>

#include <memory>

namespace some {
namespace valid {
namespace ns {

class EmptyServiceWrapper : virtual public EmptyServiceSvIf {
  protected:
    PyObject *if_object;
    folly::Executor *executor;
  public:
    explicit EmptyServiceWrapper(PyObject *if_object, folly::Executor *exc);
    virtual ~EmptyServiceWrapper();
};

std::shared_ptr<apache::thrift::ServerInterface> EmptyServiceInterface(PyObject *if_object, folly::Executor *exc);


class ReturnServiceWrapper : virtual public ReturnServiceSvIf {
  protected:
    PyObject *if_object;
    folly::Executor *executor;
  public:
    explicit ReturnServiceWrapper(PyObject *if_object, folly::Executor *exc);
    virtual ~ReturnServiceWrapper();
    folly::Future<folly::Unit> future_noReturn() override;
    folly::Future<bool> future_boolReturn() override;
    folly::Future<int16_t> future_i16Return() override;
    folly::Future<int32_t> future_i32Return() override;
    folly::Future<int64_t> future_i64Return() override;
    folly::Future<float> future_floatReturn() override;
    folly::Future<double> future_doubleReturn() override;
    folly::Future<std::unique_ptr<std::string>> future_stringReturn() override;
    folly::Future<std::unique_ptr<std::string>> future_binaryReturn() override;
    folly::Future<std::unique_ptr<std::map<std::string,int64_t>>> future_mapReturn() override;
    folly::Future<int32_t> future_simpleTypedefReturn() override;
    folly::Future<std::unique_ptr<std::vector<std::map<::some::valid::ns::Empty,::some::valid::ns::MyStruct>>>> future_complexTypedefReturn() override;
    folly::Future<std::unique_ptr<std::vector<std::vector<std::vector<std::map<::some::valid::ns::Empty,::some::valid::ns::MyStruct>>>>>> future_list_mostComplexTypedefReturn() override;
    folly::Future<::some::valid::ns::MyEnumA> future_enumReturn() override;
    folly::Future<std::unique_ptr<std::vector<::some::valid::ns::MyEnumA>>> future_list_EnumReturn() override;
    folly::Future<std::unique_ptr<::some::valid::ns::MyStruct>> future_structReturn() override;
    folly::Future<std::unique_ptr<std::set<::some::valid::ns::MyStruct>>> future_set_StructReturn() override;
    folly::Future<std::unique_ptr<::some::valid::ns::ComplexUnion>> future_unionReturn() override;
    folly::Future<std::unique_ptr<std::vector<::some::valid::ns::ComplexUnion>>> future_list_UnionReturn() override;
    folly::Future<std::unique_ptr<folly::IOBuf>> future_readDataEb(
        int64_t size
    ) override;
    folly::Future<std::unique_ptr<std::unique_ptr<folly::IOBuf>>> future_readData(
        int64_t size
    ) override;
};

std::shared_ptr<apache::thrift::ServerInterface> ReturnServiceInterface(PyObject *if_object, folly::Executor *exc);


class ParamServiceWrapper : virtual public ParamServiceSvIf {
  protected:
    PyObject *if_object;
    folly::Executor *executor;
  public:
    explicit ParamServiceWrapper(PyObject *if_object, folly::Executor *exc);
    virtual ~ParamServiceWrapper();
    folly::Future<folly::Unit> future_void_ret_i16_param(
        int16_t param1
    ) override;
    folly::Future<folly::Unit> future_void_ret_byte_i16_param(
        int8_t param1,
        int16_t param2
    ) override;
    folly::Future<folly::Unit> future_void_ret_map_param(
        std::unique_ptr<std::map<std::string,int64_t>> param1
    ) override;
    folly::Future<folly::Unit> future_void_ret_map_setlist_param(
        std::unique_ptr<std::map<std::string,int64_t>> param1,
        std::unique_ptr<std::set<std::vector<std::string>>> param2
    ) override;
    folly::Future<folly::Unit> future_void_ret_map_typedef_param(
        int32_t param1
    ) override;
    folly::Future<folly::Unit> future_void_ret_enum_param(
        ::some::valid::ns::MyEnumA param1
    ) override;
    folly::Future<folly::Unit> future_void_ret_struct_param(
        std::unique_ptr<::some::valid::ns::MyStruct> param1
    ) override;
    folly::Future<folly::Unit> future_void_ret_listunion_param(
        std::unique_ptr<std::vector<::some::valid::ns::ComplexUnion>> param1
    ) override;
    folly::Future<bool> future_bool_ret_i32_i64_param(
        int32_t param1,
        int64_t param2
    ) override;
    folly::Future<bool> future_bool_ret_map_param(
        std::unique_ptr<std::map<std::string,int64_t>> param1
    ) override;
    folly::Future<bool> future_bool_ret_union_param(
        std::unique_ptr<::some::valid::ns::ComplexUnion> param1
    ) override;
    folly::Future<int64_t> future_i64_ret_float_double_param(
        float param1,
        double param2
    ) override;
    folly::Future<int64_t> future_i64_ret_string_typedef_param(
        std::unique_ptr<std::string> param1,
        std::unique_ptr<std::set<std::vector<std::vector<std::map<::some::valid::ns::Empty,::some::valid::ns::MyStruct>>>>> param2
    ) override;
    folly::Future<int64_t> future_i64_ret_i32_i32_i32_i32_i32_param(
        int32_t param1,
        int32_t param2,
        int32_t param3,
        int32_t param4,
        int32_t param5
    ) override;
    folly::Future<double> future_double_ret_setstruct_param(
        std::unique_ptr<std::set<::some::valid::ns::MyStruct>> param1
    ) override;
    folly::Future<std::unique_ptr<std::string>> future_string_ret_string_param(
        std::unique_ptr<std::string> param1
    ) override;
    folly::Future<std::unique_ptr<std::string>> future_binary_ret_binary_param(
        std::unique_ptr<std::string> param1
    ) override;
    folly::Future<std::unique_ptr<std::map<std::string,int64_t>>> future_map_ret_bool_param(
        bool param1
    ) override;
    folly::Future<std::unique_ptr<std::vector<bool>>> future_list_ret_map_setlist_param(
        std::unique_ptr<std::map<int32_t,std::vector<std::string>>> param1,
        std::unique_ptr<std::vector<std::string>> param2
    ) override;
    folly::Future<std::unique_ptr<std::map<std::set<std::vector<int32_t>>,std::map<std::vector<std::set<std::string>>,std::string>>>> future_mapsetlistmapliststring_ret_listlistlist_param(
        std::unique_ptr<std::vector<std::vector<std::vector<std::vector<int32_t>>>>> param1
    ) override;
    folly::Future<int32_t> future_typedef_ret_i32_param(
        int32_t param1
    ) override;
    folly::Future<std::unique_ptr<std::vector<int32_t>>> future_listtypedef_ret_typedef_param(
        std::unique_ptr<std::vector<std::map<::some::valid::ns::Empty,::some::valid::ns::MyStruct>>> param1
    ) override;
    folly::Future<::some::valid::ns::MyEnumA> future_enum_ret_double_param(
        double param1
    ) override;
    folly::Future<::some::valid::ns::MyEnumA> future_enum_ret_double_enum_param(
        double param1,
        ::some::valid::ns::MyEnumA param2
    ) override;
    folly::Future<std::unique_ptr<std::vector<::some::valid::ns::MyEnumA>>> future_listenum_ret_map_param(
        std::unique_ptr<std::map<std::string,int64_t>> param1
    ) override;
    folly::Future<std::unique_ptr<::some::valid::ns::MyStruct>> future_struct_ret_i16_param(
        int16_t param1
    ) override;
    folly::Future<std::unique_ptr<std::set<::some::valid::ns::MyStruct>>> future_setstruct_ret_set_param(
        std::unique_ptr<std::set<std::string>> param1
    ) override;
    folly::Future<std::unique_ptr<::some::valid::ns::ComplexUnion>> future_union_ret_i32_i32_param(
        int32_t param1,
        int32_t param2
    ) override;
    folly::Future<std::unique_ptr<std::vector<::some::valid::ns::ComplexUnion>>> future_listunion_string_param(
        std::unique_ptr<std::string> param1
    ) override;
};

std::shared_ptr<apache::thrift::ServerInterface> ParamServiceInterface(PyObject *if_object, folly::Executor *exc);
} // namespace some
} // namespace valid
} // namespace ns
