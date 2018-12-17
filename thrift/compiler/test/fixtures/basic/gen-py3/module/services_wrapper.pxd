#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from cpython.ref cimport PyObject
from libcpp.memory cimport shared_ptr
from thrift.py3.server cimport cServerInterface, cAsyncProcessorFactory
from folly cimport cFollyExecutor



cdef extern from "src/gen-cpp2/MyService.h" namespace "::cpp2":
    cdef cppclass cMyServiceSvAsyncIf "::cpp2::MyServiceSvAsyncIf":
      pass

    cdef cppclass cMyServiceSvIf "::cpp2::MyServiceSvIf"(
            cMyServiceSvAsyncIf,
            cServerInterface):
        pass

cdef extern from "src/gen-cpp2/MyServiceFast.h" namespace "::cpp2":
    cdef cppclass cMyServiceFastSvAsyncIf "::cpp2::MyServiceFastSvAsyncIf":
      pass

    cdef cppclass cMyServiceFastSvIf "::cpp2::MyServiceFastSvIf"(
            cMyServiceFastSvAsyncIf,
            cServerInterface):
        pass

cdef extern from "src/gen-cpp2/MyServiceEmpty.h" namespace "::cpp2":
    cdef cppclass cMyServiceEmptySvAsyncIf "::cpp2::MyServiceEmptySvAsyncIf":
      pass

    cdef cppclass cMyServiceEmptySvIf "::cpp2::MyServiceEmptySvIf"(
            cMyServiceEmptySvAsyncIf,
            cServerInterface):
        pass

cdef extern from "src/gen-cpp2/MyServicePrioParent.h" namespace "::cpp2":
    cdef cppclass cMyServicePrioParentSvAsyncIf "::cpp2::MyServicePrioParentSvAsyncIf":
      pass

    cdef cppclass cMyServicePrioParentSvIf "::cpp2::MyServicePrioParentSvIf"(
            cMyServicePrioParentSvAsyncIf,
            cServerInterface):
        pass

cdef extern from "src/gen-cpp2/MyServicePrioChild.h" namespace "::cpp2":
    cdef cppclass cMyServicePrioChildSvAsyncIf "::cpp2::MyServicePrioChildSvAsyncIf":
      pass

    cdef cppclass cMyServicePrioChildSvIf "::cpp2::MyServicePrioChildSvIf"(
            cMyServicePrioChildSvAsyncIf,
            cMyServicePrioParentSvIf,
            cServerInterface):
        pass



cdef extern from "src/gen-py3/module/services_wrapper.h" namespace "::cpp2":
    cdef cppclass cMyServiceWrapper "::cpp2::MyServiceWrapper"(
        cMyServiceSvIf
    ):
        pass

    shared_ptr[cAsyncProcessorFactory] cMyServiceInterface "::cpp2::MyServiceInterface"(PyObject *if_object, cFollyExecutor* Q)
    cdef cppclass cMyServiceFastWrapper "::cpp2::MyServiceFastWrapper"(
        cMyServiceFastSvIf
    ):
        pass

    shared_ptr[cAsyncProcessorFactory] cMyServiceFastInterface "::cpp2::MyServiceFastInterface"(PyObject *if_object, cFollyExecutor* Q)
    cdef cppclass cMyServiceEmptyWrapper "::cpp2::MyServiceEmptyWrapper"(
        cMyServiceEmptySvIf
    ):
        pass

    shared_ptr[cAsyncProcessorFactory] cMyServiceEmptyInterface "::cpp2::MyServiceEmptyInterface"(PyObject *if_object, cFollyExecutor* Q)
    cdef cppclass cMyServicePrioParentWrapper "::cpp2::MyServicePrioParentWrapper"(
        cMyServicePrioParentSvIf
    ):
        pass

    shared_ptr[cAsyncProcessorFactory] cMyServicePrioParentInterface "::cpp2::MyServicePrioParentInterface"(PyObject *if_object, cFollyExecutor* Q)
    cdef cppclass cMyServicePrioChildWrapper "::cpp2::MyServicePrioChildWrapper"(
        cMyServicePrioChildSvIf,
        cMyServicePrioParentWrapper
    ):
        pass

    shared_ptr[cAsyncProcessorFactory] cMyServicePrioChildInterface "::cpp2::MyServicePrioChildInterface"(PyObject *if_object, cFollyExecutor* Q)
