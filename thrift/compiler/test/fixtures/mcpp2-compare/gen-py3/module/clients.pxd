#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
from libcpp.memory cimport shared_ptr
cimport thrift.py3.client


from module.clients_wrapper cimport cEmptyServiceClientWrapper
from module.clients_wrapper cimport cReturnServiceClientWrapper
from module.clients_wrapper cimport cParamServiceClientWrapper

cdef class EmptyService(thrift.py3.client.Client):
    cdef shared_ptr[cEmptyServiceClientWrapper] _module_EmptyService_client

    cdef _module_EmptyService_set_client(EmptyService self, shared_ptr[cEmptyServiceClientWrapper] c_obj)

    cdef _module_EmptyService_reset_client(EmptyService self)

cdef class ReturnService(thrift.py3.client.Client):
    cdef shared_ptr[cReturnServiceClientWrapper] _module_ReturnService_client

    cdef _module_ReturnService_set_client(ReturnService self, shared_ptr[cReturnServiceClientWrapper] c_obj)

    cdef _module_ReturnService_reset_client(ReturnService self)

cdef class ParamService(thrift.py3.client.Client):
    cdef shared_ptr[cParamServiceClientWrapper] _module_ParamService_client

    cdef _module_ParamService_set_client(ParamService self, shared_ptr[cParamServiceClientWrapper] c_obj)

    cdef _module_ParamService_reset_client(ParamService self)

