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



cdef extern from "src/gen-cpp2/Raiser.h" namespace "::cpp2":
    cdef cppclass cRaiserSvAsyncIf "::cpp2::RaiserSvAsyncIf":
      pass

    cdef cppclass cRaiserSvIf "::cpp2::RaiserSvIf"(
            cRaiserSvAsyncIf,
            cServerInterface):
        pass



cdef extern from "src/gen-py3/module/services_wrapper.h" namespace "::cpp2":
    cdef cppclass cRaiserWrapper "::cpp2::RaiserWrapper"(
        cRaiserSvIf
    ):
        pass

    shared_ptr[cAsyncProcessorFactory] cRaiserInterface "::cpp2::RaiserInterface"(PyObject *if_object, cFollyExecutor* Q)
