#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

import typing as _typing

import apache.thrift.metadata.lite_types as _fbthrift_metadata
import folly.iobuf as _fbthrift_iobuf
from thrift.py3lite.client import (
    AsyncClient as _fbthrift_py3lite_AsyncClient,
    SyncClient as _fbthrift_py3lite_SyncClient,
    Client as _fbthrift_py3lite_Client,
)
import thrift.py3lite.exceptions as _fbthrift_py3lite_exceptions
import thrift.py3lite.types as _fbthrift_py3lite_types
import module.lite_types
import module.lite_metadata


class Raiser(_fbthrift_py3lite_Client["Raiser.Async", "Raiser.Sync"]):
    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.Raiser"

    @staticmethod
    def __get_metadata__() -> _fbthrift_metadata.ThriftMetadata:
        return module.lite_metadata.gen_metadata_service_Raiser()

    class Async(_fbthrift_py3lite_AsyncClient):
        @staticmethod
        def __get_thrift_name__() -> str:
            return "module.Raiser"

        @staticmethod
        def __get_metadata__() -> _fbthrift_metadata.ThriftMetadata:
            return module.lite_metadata.gen_metadata_service_Raiser()

        async def doBland(
            self
        ) -> None:
            resp = await self._send_request(
                "Raiser",
                "doBland",
                module.lite_types._fbthrift_Raiser_doBland_args(),
                module.lite_types._fbthrift_Raiser_doBland_result,
            )

        async def doRaise(
            self
        ) -> None:
            resp = await self._send_request(
                "Raiser",
                "doRaise",
                module.lite_types._fbthrift_Raiser_doRaise_args(),
                module.lite_types._fbthrift_Raiser_doRaise_result,
            )
            if resp.b is not None:
                raise resp.b
            if resp.f is not None:
                raise resp.f
            if resp.s is not None:
                raise resp.s

        async def get200(
            self
        ) -> str:
            resp = await self._send_request(
                "Raiser",
                "get200",
                module.lite_types._fbthrift_Raiser_get200_args(),
                module.lite_types._fbthrift_Raiser_get200_result,
            )
            # shortcut to success path for non-void returns
            if resp.success is not None:
                return resp.success
            raise _fbthrift_py3lite_exceptions.ApplicationError(
                _fbthrift_py3lite_exceptions.ApplicationErrorType.MISSING_RESULT,
                "Empty Response",
            )

        async def get500(
            self
        ) -> str:
            resp = await self._send_request(
                "Raiser",
                "get500",
                module.lite_types._fbthrift_Raiser_get500_args(),
                module.lite_types._fbthrift_Raiser_get500_result,
            )
            # shortcut to success path for non-void returns
            if resp.success is not None:
                return resp.success
            if resp.f is not None:
                raise resp.f
            if resp.b is not None:
                raise resp.b
            if resp.s is not None:
                raise resp.s
            raise _fbthrift_py3lite_exceptions.ApplicationError(
                _fbthrift_py3lite_exceptions.ApplicationErrorType.MISSING_RESULT,
                "Empty Response",
            )


    class Sync(_fbthrift_py3lite_SyncClient):
        @staticmethod
        def __get_thrift_name__() -> str:
            return "module.Raiser"

        @staticmethod
        def __get_metadata__() -> _fbthrift_metadata.ThriftMetadata:
            return module.lite_metadata.gen_metadata_service_Raiser()

        def doBland(
            self
        ) -> None:
            resp = self._send_request(
                "Raiser",
                "doBland",
                module.lite_types._fbthrift_Raiser_doBland_args(),
                module.lite_types._fbthrift_Raiser_doBland_result,
            )

        def doRaise(
            self
        ) -> None:
            resp = self._send_request(
                "Raiser",
                "doRaise",
                module.lite_types._fbthrift_Raiser_doRaise_args(),
                module.lite_types._fbthrift_Raiser_doRaise_result,
            )
            if resp.b is not None:
                raise resp.b
            if resp.f is not None:
                raise resp.f
            if resp.s is not None:
                raise resp.s

        def get200(
            self
        ) -> str:
            resp = self._send_request(
                "Raiser",
                "get200",
                module.lite_types._fbthrift_Raiser_get200_args(),
                module.lite_types._fbthrift_Raiser_get200_result,
            )
            # shortcut to success path for non-void returns
            if resp.success is not None:
                return resp.success
            raise _fbthrift_py3lite_exceptions.ApplicationError(
                _fbthrift_py3lite_exceptions.ApplicationErrorType.MISSING_RESULT,
                "Empty Response",
            )

        def get500(
            self
        ) -> str:
            resp = self._send_request(
                "Raiser",
                "get500",
                module.lite_types._fbthrift_Raiser_get500_args(),
                module.lite_types._fbthrift_Raiser_get500_result,
            )
            # shortcut to success path for non-void returns
            if resp.success is not None:
                return resp.success
            if resp.f is not None:
                raise resp.f
            if resp.b is not None:
                raise resp.b
            if resp.s is not None:
                raise resp.s
            raise _fbthrift_py3lite_exceptions.ApplicationError(
                _fbthrift_py3lite_exceptions.ApplicationErrorType.MISSING_RESULT,
                "Empty Response",
            )

