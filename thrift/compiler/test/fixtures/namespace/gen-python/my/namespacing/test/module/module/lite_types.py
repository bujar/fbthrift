#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#
import folly.iobuf as _fbthrift_iobuf
import thrift.py3lite.types as _fbthrift_py3lite_types
import thrift.py3lite.exceptions as _fbthrift_py3lite_exceptions



class Foo(metaclass=_fbthrift_py3lite_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            True,  # isUnqualified
            "MyInt",  # name
            _fbthrift_py3lite_types.typeinfo_i64,  # typeinfo
            None,  # default value
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.Foo"

    @staticmethod
    def __get_thrift_uri__():
        return None

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_Foo()


# This unfortunately has to be down here to prevent circular imports
import py3lite_module_root.my.namespacing.test.module.module.lite_metadata


def _fbthrift_metadata__struct_Foo():
    return py3lite_module_root.my.namespacing.test.module.module.lite_metadata.gen_metadata_struct_Foo()

_fbthrift_all_structs = [
    Foo,
]
_fbthrift_py3lite_types.fill_specs(*_fbthrift_all_structs)


class _fbthrift_TestService_init_args(metaclass=_fbthrift_py3lite_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            True,  # isUnqualified
            "int1",  # name
            _fbthrift_py3lite_types.typeinfo_i64,  # typeinfo
            None,  # default value
        ),
    )

class _fbthrift_TestService_init_result(metaclass=_fbthrift_py3lite_types.StructMeta):
    _fbthrift_SPEC = (
        (
            0,  # id
            False,  # isUnqualified
            "success",  # name
            _fbthrift_py3lite_types.typeinfo_i64,  # typeinfo
            None,  # default value

        ),
    )


_fbthrift_py3lite_types.fill_specs(
    _fbthrift_TestService_init_args,
    _fbthrift_TestService_init_result,
)