#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
from libcpp.memory cimport shared_ptr, make_shared, unique_ptr, make_unique
from libcpp.string cimport string
from libcpp cimport bool as cbool
from cpython cimport bool as pbool
from libc.stdint cimport int8_t, int16_t, int32_t, int64_t
from libcpp.vector cimport vector as vector
from libcpp.set cimport set as cset
from libcpp.map cimport map as cmap
from cython.operator cimport dereference as deref, typeid
from cpython.ref cimport PyObject
from thrift.py3.client cimport cRequestChannel_ptr, makeClientWrapper
from thrift.py3.exceptions cimport try_make_shared_exception, create_py_exception
from folly cimport cFollyTry, cFollyUnit, c_unit
from libcpp.typeinfo cimport type_info
import thrift.py3.types
cimport thrift.py3.types
from thrift.py3.types cimport move
import thrift.py3.client
cimport thrift.py3.client
from thrift.py3.common cimport RpcOptions as __RpcOptions
from thrift.py3.common import RpcOptions as __RpcOptions

from folly.futures cimport bridgeFutureWith
from folly.executor cimport get_executor
cimport folly.iobuf as __iobuf
import folly.iobuf as __iobuf
from folly.iobuf cimport move as move_iobuf
cimport cython

import sys
import types as _py_types
from asyncio import get_event_loop as asyncio_get_event_loop, shield as asyncio_shield, InvalidStateError as asyncio_InvalidStateError

cimport my.namespacing.test.module.module.types as _my_namespacing_test_module_module_types
import my.namespacing.test.module.module.types as _my_namespacing_test_module_module_types

from my.namespacing.test.module.module.clients_wrapper cimport cTestServiceAsyncClient, cTestServiceClientWrapper


cdef void TestService_init_callback(
    cFollyTry[int64_t]&& result,
    PyObject* userdata
):
    client, pyfuture, options = <object> userdata  
    if result.hasException():
        pyfuture.set_exception(create_py_exception(result.exception(), <__RpcOptions>options))
    else:
        try:
            pyfuture.set_result(result.value())
        except Exception as ex:
            pyfuture.set_exception(ex.with_traceback(None))


cdef object _TestService_annotations = _py_types.MappingProxyType({
})


cdef class TestService(thrift.py3.client.Client):
    annotations = _TestService_annotations

    def __cinit__(TestService self):
        loop = asyncio_get_event_loop()
        self._connect_future = loop.create_future()
        self._deferred_headers = {}

    cdef const type_info* _typeid(TestService self):
        return &typeid(cTestServiceAsyncClient)

    cdef _module_TestService_set_client(TestService self, shared_ptr[cTestServiceClientWrapper] c_obj):
        """So the class hierarchy talks to the correct pointer type"""
        self._module_TestService_client = c_obj

    cdef _module_TestService_reset_client(TestService self):
        """So the class hierarchy resets the shared pointer up the chain"""
        self._module_TestService_client.reset()

    def __dealloc__(TestService self):
        if self._connect_future and self._connect_future.done() and not self._connect_future.exception():
            print(f'thrift-py3 client: {self!r} was not cleaned up, use the async context manager', file=sys.stderr)
            if self._module_TestService_client:
                deref(self._module_TestService_client).disconnect().get()
        self._module_TestService_reset_client()

    cdef bind_client(TestService self, cRequestChannel_ptr&& channel):
        self._module_TestService_set_client(
            makeClientWrapper[cTestServiceAsyncClient, cTestServiceClientWrapper](
                thrift.py3.client.move(channel)
            ),
        )

    async def __aenter__(TestService self):
        await asyncio_shield(self._connect_future)
        if self._context_entered:
            raise asyncio_InvalidStateError('Client context has been used already')
        self._context_entered = True
        for key, value in self._deferred_headers.items():
            self.set_persistent_header(key, value)
        self._deferred_headers = None
        return self

    def __aexit__(TestService self, *exc):
        self._check_connect_future()
        loop = asyncio_get_event_loop()
        future = loop.create_future()
        userdata = (self, future)
        bridgeFutureWith[cFollyUnit](
            self._executor,
            deref(self._module_TestService_client).disconnect(),
            closed_TestService_py3_client_callback,
            <PyObject *>userdata  # So we keep client alive until disconnect
        )
        # To break any future usage of this client
        # Also to prevent dealloc from trying to disconnect in a blocking way.
        badfuture = loop.create_future()
        badfuture.set_exception(asyncio_InvalidStateError('Client Out of Context'))
        badfuture.exception()
        self._connect_future = badfuture
        return asyncio_shield(future)

    def set_persistent_header(TestService self, str key, str value):
        if not self._module_TestService_client:
            self._deferred_headers[key] = value
            return

        cdef string ckey = <bytes> key.encode('utf-8')
        cdef string cvalue = <bytes> value.encode('utf-8')
        deref(self._module_TestService_client).setPersistentHeader(ckey, cvalue)

    @cython.always_allow_keywords(True)
    def init(
            TestService self,
            int1 not None,
            __RpcOptions rpc_options=None
    ):
        if rpc_options is None:
            rpc_options = <__RpcOptions>__RpcOptions.__new__(__RpcOptions)
        if not isinstance(int1, int):
            raise TypeError(f'int1 is not a {int !r}.')
        else:
            int1 = <int64_t> int1
        self._check_connect_future()
        __loop = asyncio_get_event_loop()
        __future = __loop.create_future()
        __userdata = (self, __future, rpc_options)
        bridgeFutureWith[int64_t](
            self._executor,
            deref(self._module_TestService_client).init(rpc_options._cpp_obj, 
                int1,
            ),
            TestService_init_callback,
            <PyObject *> __userdata
        )
        return asyncio_shield(__future)



cdef void closed_TestService_py3_client_callback(
    cFollyTry[cFollyUnit]&& result,
    PyObject* userdata,
):
    client, pyfuture = <object> userdata 
    pyfuture.set_result(None)
