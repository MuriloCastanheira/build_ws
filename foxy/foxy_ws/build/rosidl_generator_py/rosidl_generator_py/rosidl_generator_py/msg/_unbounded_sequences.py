# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rosidl_generator_py:msg/UnboundedSequences.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'char_values'
# Member 'float32_values'
# Member 'float64_values'
# Member 'int8_values'
# Member 'uint8_values'
# Member 'int16_values'
# Member 'uint16_values'
# Member 'int32_values'
# Member 'uint32_values'
# Member 'int64_values'
# Member 'uint64_values'
# Member 'char_values_default'
# Member 'float32_values_default'
# Member 'float64_values_default'
# Member 'int8_values_default'
# Member 'uint8_values_default'
# Member 'int16_values_default'
# Member 'uint16_values_default'
# Member 'int32_values_default'
# Member 'uint32_values_default'
# Member 'int64_values_default'
# Member 'uint64_values_default'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_UnboundedSequences(type):
    """Metaclass of message 'UnboundedSequences'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rosidl_generator_py')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rosidl_generator_py.msg.UnboundedSequences')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__unbounded_sequences
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__unbounded_sequences
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__unbounded_sequences
            cls._TYPE_SUPPORT = module.type_support_msg__msg__unbounded_sequences
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__unbounded_sequences

            from rosidl_generator_py.msg import BasicTypes
            if BasicTypes.__class__._TYPE_SUPPORT is None:
                BasicTypes.__class__.__import_type_support__()

            from rosidl_generator_py.msg import Constants
            if Constants.__class__._TYPE_SUPPORT is None:
                Constants.__class__.__import_type_support__()

            from rosidl_generator_py.msg import Defaults
            if Defaults.__class__._TYPE_SUPPORT is None:
                Defaults.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'BOOL_VALUES_DEFAULT__DEFAULT': [False, True, False],
            'BYTE_VALUES_DEFAULT__DEFAULT': [b'\x00', b'\x01', b'\xff'],
            'CHAR_VALUES_DEFAULT__DEFAULT': array.array('B', (0, 1, 127, )),
            'FLOAT32_VALUES_DEFAULT__DEFAULT': array.array('f', (1.125, 0.0, -1.125, )),
            'FLOAT64_VALUES_DEFAULT__DEFAULT': array.array('d', (3.1415, 0.0, -3.1415, )),
            'INT8_VALUES_DEFAULT__DEFAULT': array.array('b', (0, 127, -128, )),
            'UINT8_VALUES_DEFAULT__DEFAULT': array.array('B', (0, 1, 255, )),
            'INT16_VALUES_DEFAULT__DEFAULT': array.array('h', (0, 32767, -32768, )),
            'UINT16_VALUES_DEFAULT__DEFAULT': array.array('H', (0, 1, 65535, )),
            'INT32_VALUES_DEFAULT__DEFAULT': array.array('i', (0, 2147483647, -2147483648, )),
            'UINT32_VALUES_DEFAULT__DEFAULT': array.array('I', (0, 1, 4294967295, )),
            'INT64_VALUES_DEFAULT__DEFAULT': array.array('q', (0, 9223372036854775807, -9223372036854775808, )),
            'UINT64_VALUES_DEFAULT__DEFAULT': array.array('Q', (0, 1, 18446744073709551615, )),
            'STRING_VALUES_DEFAULT__DEFAULT': ['', 'max value', 'min value'],
        }

    @property
    def BOOL_VALUES_DEFAULT__DEFAULT(cls):
        """Return default value for message field 'bool_values_default'."""
        return [False, True, False]

    @property
    def BYTE_VALUES_DEFAULT__DEFAULT(cls):
        """Return default value for message field 'byte_values_default'."""
        return [b'\x00', b'\x01', b'\xff']

    @property
    def CHAR_VALUES_DEFAULT__DEFAULT(cls):
        """Return default value for message field 'char_values_default'."""
        return array.array('B', (0, 1, 127, ))

    @property
    def FLOAT32_VALUES_DEFAULT__DEFAULT(cls):
        """Return default value for message field 'float32_values_default'."""
        return array.array('f', (1.125, 0.0, -1.125, ))

    @property
    def FLOAT64_VALUES_DEFAULT__DEFAULT(cls):
        """Return default value for message field 'float64_values_default'."""
        return array.array('d', (3.1415, 0.0, -3.1415, ))

    @property
    def INT8_VALUES_DEFAULT__DEFAULT(cls):
        """Return default value for message field 'int8_values_default'."""
        return array.array('b', (0, 127, -128, ))

    @property
    def UINT8_VALUES_DEFAULT__DEFAULT(cls):
        """Return default value for message field 'uint8_values_default'."""
        return array.array('B', (0, 1, 255, ))

    @property
    def INT16_VALUES_DEFAULT__DEFAULT(cls):
        """Return default value for message field 'int16_values_default'."""
        return array.array('h', (0, 32767, -32768, ))

    @property
    def UINT16_VALUES_DEFAULT__DEFAULT(cls):
        """Return default value for message field 'uint16_values_default'."""
        return array.array('H', (0, 1, 65535, ))

    @property
    def INT32_VALUES_DEFAULT__DEFAULT(cls):
        """Return default value for message field 'int32_values_default'."""
        return array.array('i', (0, 2147483647, -2147483648, ))

    @property
    def UINT32_VALUES_DEFAULT__DEFAULT(cls):
        """Return default value for message field 'uint32_values_default'."""
        return array.array('I', (0, 1, 4294967295, ))

    @property
    def INT64_VALUES_DEFAULT__DEFAULT(cls):
        """Return default value for message field 'int64_values_default'."""
        return array.array('q', (0, 9223372036854775807, -9223372036854775808, ))

    @property
    def UINT64_VALUES_DEFAULT__DEFAULT(cls):
        """Return default value for message field 'uint64_values_default'."""
        return array.array('Q', (0, 1, 18446744073709551615, ))

    @property
    def STRING_VALUES_DEFAULT__DEFAULT(cls):
        """Return default value for message field 'string_values_default'."""
        return ['', 'max value', 'min value']


class UnboundedSequences(metaclass=Metaclass_UnboundedSequences):
    """Message class 'UnboundedSequences'."""

    __slots__ = [
        '_bool_values',
        '_byte_values',
        '_char_values',
        '_float32_values',
        '_float64_values',
        '_int8_values',
        '_uint8_values',
        '_int16_values',
        '_uint16_values',
        '_int32_values',
        '_uint32_values',
        '_int64_values',
        '_uint64_values',
        '_string_values',
        '_basic_types_values',
        '_constants_values',
        '_defaults_values',
        '_bool_values_default',
        '_byte_values_default',
        '_char_values_default',
        '_float32_values_default',
        '_float64_values_default',
        '_int8_values_default',
        '_uint8_values_default',
        '_int16_values_default',
        '_uint16_values_default',
        '_int32_values_default',
        '_uint32_values_default',
        '_int64_values_default',
        '_uint64_values_default',
        '_string_values_default',
        '_alignment_check',
    ]

    _fields_and_field_types = {
        'bool_values': 'sequence<boolean>',
        'byte_values': 'sequence<octet>',
        'char_values': 'sequence<uint8>',
        'float32_values': 'sequence<float>',
        'float64_values': 'sequence<double>',
        'int8_values': 'sequence<int8>',
        'uint8_values': 'sequence<uint8>',
        'int16_values': 'sequence<int16>',
        'uint16_values': 'sequence<uint16>',
        'int32_values': 'sequence<int32>',
        'uint32_values': 'sequence<uint32>',
        'int64_values': 'sequence<int64>',
        'uint64_values': 'sequence<uint64>',
        'string_values': 'sequence<string>',
        'basic_types_values': 'sequence<rosidl_generator_py/BasicTypes>',
        'constants_values': 'sequence<rosidl_generator_py/Constants>',
        'defaults_values': 'sequence<rosidl_generator_py/Defaults>',
        'bool_values_default': 'sequence<boolean>',
        'byte_values_default': 'sequence<octet>',
        'char_values_default': 'sequence<uint8>',
        'float32_values_default': 'sequence<float>',
        'float64_values_default': 'sequence<double>',
        'int8_values_default': 'sequence<int8>',
        'uint8_values_default': 'sequence<uint8>',
        'int16_values_default': 'sequence<int16>',
        'uint16_values_default': 'sequence<uint16>',
        'int32_values_default': 'sequence<int32>',
        'uint32_values_default': 'sequence<uint32>',
        'int64_values_default': 'sequence<int64>',
        'uint64_values_default': 'sequence<uint64>',
        'string_values_default': 'sequence<string>',
        'alignment_check': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('octet')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int16')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint16')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int64')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint64')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['rosidl_generator_py', 'msg'], 'BasicTypes')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['rosidl_generator_py', 'msg'], 'Constants')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['rosidl_generator_py', 'msg'], 'Defaults')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('octet')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int16')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint16')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int64')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint64')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.bool_values = kwargs.get('bool_values', [])
        self.byte_values = kwargs.get('byte_values', [])
        self.char_values = array.array('B', kwargs.get('char_values', []))
        self.float32_values = array.array('f', kwargs.get('float32_values', []))
        self.float64_values = array.array('d', kwargs.get('float64_values', []))
        self.int8_values = array.array('b', kwargs.get('int8_values', []))
        self.uint8_values = array.array('B', kwargs.get('uint8_values', []))
        self.int16_values = array.array('h', kwargs.get('int16_values', []))
        self.uint16_values = array.array('H', kwargs.get('uint16_values', []))
        self.int32_values = array.array('i', kwargs.get('int32_values', []))
        self.uint32_values = array.array('I', kwargs.get('uint32_values', []))
        self.int64_values = array.array('q', kwargs.get('int64_values', []))
        self.uint64_values = array.array('Q', kwargs.get('uint64_values', []))
        self.string_values = kwargs.get('string_values', [])
        self.basic_types_values = kwargs.get('basic_types_values', [])
        self.constants_values = kwargs.get('constants_values', [])
        self.defaults_values = kwargs.get('defaults_values', [])
        self.bool_values_default = kwargs.get(
            'bool_values_default', UnboundedSequences.BOOL_VALUES_DEFAULT__DEFAULT)
        self.byte_values_default = kwargs.get(
            'byte_values_default', UnboundedSequences.BYTE_VALUES_DEFAULT__DEFAULT)
        self.char_values_default = kwargs.get(
            'char_values_default', UnboundedSequences.CHAR_VALUES_DEFAULT__DEFAULT)
        self.float32_values_default = kwargs.get(
            'float32_values_default', UnboundedSequences.FLOAT32_VALUES_DEFAULT__DEFAULT)
        self.float64_values_default = kwargs.get(
            'float64_values_default', UnboundedSequences.FLOAT64_VALUES_DEFAULT__DEFAULT)
        self.int8_values_default = kwargs.get(
            'int8_values_default', UnboundedSequences.INT8_VALUES_DEFAULT__DEFAULT)
        self.uint8_values_default = kwargs.get(
            'uint8_values_default', UnboundedSequences.UINT8_VALUES_DEFAULT__DEFAULT)
        self.int16_values_default = kwargs.get(
            'int16_values_default', UnboundedSequences.INT16_VALUES_DEFAULT__DEFAULT)
        self.uint16_values_default = kwargs.get(
            'uint16_values_default', UnboundedSequences.UINT16_VALUES_DEFAULT__DEFAULT)
        self.int32_values_default = kwargs.get(
            'int32_values_default', UnboundedSequences.INT32_VALUES_DEFAULT__DEFAULT)
        self.uint32_values_default = kwargs.get(
            'uint32_values_default', UnboundedSequences.UINT32_VALUES_DEFAULT__DEFAULT)
        self.int64_values_default = kwargs.get(
            'int64_values_default', UnboundedSequences.INT64_VALUES_DEFAULT__DEFAULT)
        self.uint64_values_default = kwargs.get(
            'uint64_values_default', UnboundedSequences.UINT64_VALUES_DEFAULT__DEFAULT)
        self.string_values_default = kwargs.get(
            'string_values_default', UnboundedSequences.STRING_VALUES_DEFAULT__DEFAULT)
        self.alignment_check = kwargs.get('alignment_check', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.bool_values != other.bool_values:
            return False
        if self.byte_values != other.byte_values:
            return False
        if self.char_values != other.char_values:
            return False
        if self.float32_values != other.float32_values:
            return False
        if self.float64_values != other.float64_values:
            return False
        if self.int8_values != other.int8_values:
            return False
        if self.uint8_values != other.uint8_values:
            return False
        if self.int16_values != other.int16_values:
            return False
        if self.uint16_values != other.uint16_values:
            return False
        if self.int32_values != other.int32_values:
            return False
        if self.uint32_values != other.uint32_values:
            return False
        if self.int64_values != other.int64_values:
            return False
        if self.uint64_values != other.uint64_values:
            return False
        if self.string_values != other.string_values:
            return False
        if self.basic_types_values != other.basic_types_values:
            return False
        if self.constants_values != other.constants_values:
            return False
        if self.defaults_values != other.defaults_values:
            return False
        if self.bool_values_default != other.bool_values_default:
            return False
        if self.byte_values_default != other.byte_values_default:
            return False
        if self.char_values_default != other.char_values_default:
            return False
        if self.float32_values_default != other.float32_values_default:
            return False
        if self.float64_values_default != other.float64_values_default:
            return False
        if self.int8_values_default != other.int8_values_default:
            return False
        if self.uint8_values_default != other.uint8_values_default:
            return False
        if self.int16_values_default != other.int16_values_default:
            return False
        if self.uint16_values_default != other.uint16_values_default:
            return False
        if self.int32_values_default != other.int32_values_default:
            return False
        if self.uint32_values_default != other.uint32_values_default:
            return False
        if self.int64_values_default != other.int64_values_default:
            return False
        if self.uint64_values_default != other.uint64_values_default:
            return False
        if self.string_values_default != other.string_values_default:
            return False
        if self.alignment_check != other.alignment_check:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def bool_values(self):
        """Message field 'bool_values'."""
        return self._bool_values

    @bool_values.setter
    def bool_values(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'bool_values' field must be a set or sequence and each value of type 'bool'"
        self._bool_values = value

    @property
    def byte_values(self):
        """Message field 'byte_values'."""
        return self._byte_values

    @byte_values.setter
    def byte_values(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, bytes) for v in value) and
                 True), \
                "The 'byte_values' field must be a set or sequence and each value of type 'bytes'"
        self._byte_values = value

    @property
    def char_values(self):
        """Message field 'char_values'."""
        return self._char_values

    @char_values.setter
    def char_values(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'char_values' array.array() must have the type code of 'B'"
            self._char_values = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'char_values' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._char_values = array.array('B', value)

    @property
    def float32_values(self):
        """Message field 'float32_values'."""
        return self._float32_values

    @float32_values.setter
    def float32_values(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'float32_values' array.array() must have the type code of 'f'"
            self._float32_values = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'float32_values' field must be a set or sequence and each value of type 'float'"
        self._float32_values = array.array('f', value)

    @property
    def float64_values(self):
        """Message field 'float64_values'."""
        return self._float64_values

    @float64_values.setter
    def float64_values(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'float64_values' array.array() must have the type code of 'd'"
            self._float64_values = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'float64_values' field must be a set or sequence and each value of type 'float'"
        self._float64_values = array.array('d', value)

    @property
    def int8_values(self):
        """Message field 'int8_values'."""
        return self._int8_values

    @int8_values.setter
    def int8_values(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'b', \
                "The 'int8_values' array.array() must have the type code of 'b'"
            self._int8_values = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -128 and val < 128 for val in value)), \
                "The 'int8_values' field must be a set or sequence and each value of type 'int' and each integer in [-128, 127]"
        self._int8_values = array.array('b', value)

    @property
    def uint8_values(self):
        """Message field 'uint8_values'."""
        return self._uint8_values

    @uint8_values.setter
    def uint8_values(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'uint8_values' array.array() must have the type code of 'B'"
            self._uint8_values = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'uint8_values' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._uint8_values = array.array('B', value)

    @property
    def int16_values(self):
        """Message field 'int16_values'."""
        return self._int16_values

    @int16_values.setter
    def int16_values(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'h', \
                "The 'int16_values' array.array() must have the type code of 'h'"
            self._int16_values = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -32768 and val < 32768 for val in value)), \
                "The 'int16_values' field must be a set or sequence and each value of type 'int' and each integer in [-32768, 32767]"
        self._int16_values = array.array('h', value)

    @property
    def uint16_values(self):
        """Message field 'uint16_values'."""
        return self._uint16_values

    @uint16_values.setter
    def uint16_values(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'H', \
                "The 'uint16_values' array.array() must have the type code of 'H'"
            self._uint16_values = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 65536 for val in value)), \
                "The 'uint16_values' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 65535]"
        self._uint16_values = array.array('H', value)

    @property
    def int32_values(self):
        """Message field 'int32_values'."""
        return self._int32_values

    @int32_values.setter
    def int32_values(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'int32_values' array.array() must have the type code of 'i'"
            self._int32_values = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'int32_values' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._int32_values = array.array('i', value)

    @property
    def uint32_values(self):
        """Message field 'uint32_values'."""
        return self._uint32_values

    @uint32_values.setter
    def uint32_values(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'I', \
                "The 'uint32_values' array.array() must have the type code of 'I'"
            self._uint32_values = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 4294967296 for val in value)), \
                "The 'uint32_values' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._uint32_values = array.array('I', value)

    @property
    def int64_values(self):
        """Message field 'int64_values'."""
        return self._int64_values

    @int64_values.setter
    def int64_values(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'q', \
                "The 'int64_values' array.array() must have the type code of 'q'"
            self._int64_values = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -9223372036854775808 and val < 9223372036854775808 for val in value)), \
                "The 'int64_values' field must be a set or sequence and each value of type 'int' and each integer in [-9223372036854775808, 9223372036854775807]"
        self._int64_values = array.array('q', value)

    @property
    def uint64_values(self):
        """Message field 'uint64_values'."""
        return self._uint64_values

    @uint64_values.setter
    def uint64_values(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'Q', \
                "The 'uint64_values' array.array() must have the type code of 'Q'"
            self._uint64_values = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 18446744073709551616 for val in value)), \
                "The 'uint64_values' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 18446744073709551615]"
        self._uint64_values = array.array('Q', value)

    @property
    def string_values(self):
        """Message field 'string_values'."""
        return self._string_values

    @string_values.setter
    def string_values(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'string_values' field must be a set or sequence and each value of type 'str'"
        self._string_values = value

    @property
    def basic_types_values(self):
        """Message field 'basic_types_values'."""
        return self._basic_types_values

    @basic_types_values.setter
    def basic_types_values(self, value):
        if __debug__:
            from rosidl_generator_py.msg import BasicTypes
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, BasicTypes) for v in value) and
                 True), \
                "The 'basic_types_values' field must be a set or sequence and each value of type 'BasicTypes'"
        self._basic_types_values = value

    @property
    def constants_values(self):
        """Message field 'constants_values'."""
        return self._constants_values

    @constants_values.setter
    def constants_values(self, value):
        if __debug__:
            from rosidl_generator_py.msg import Constants
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, Constants) for v in value) and
                 True), \
                "The 'constants_values' field must be a set or sequence and each value of type 'Constants'"
        self._constants_values = value

    @property
    def defaults_values(self):
        """Message field 'defaults_values'."""
        return self._defaults_values

    @defaults_values.setter
    def defaults_values(self, value):
        if __debug__:
            from rosidl_generator_py.msg import Defaults
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, Defaults) for v in value) and
                 True), \
                "The 'defaults_values' field must be a set or sequence and each value of type 'Defaults'"
        self._defaults_values = value

    @property
    def bool_values_default(self):
        """Message field 'bool_values_default'."""
        return self._bool_values_default

    @bool_values_default.setter
    def bool_values_default(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'bool_values_default' field must be a set or sequence and each value of type 'bool'"
        self._bool_values_default = value

    @property
    def byte_values_default(self):
        """Message field 'byte_values_default'."""
        return self._byte_values_default

    @byte_values_default.setter
    def byte_values_default(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, bytes) for v in value) and
                 True), \
                "The 'byte_values_default' field must be a set or sequence and each value of type 'bytes'"
        self._byte_values_default = value

    @property
    def char_values_default(self):
        """Message field 'char_values_default'."""
        return self._char_values_default

    @char_values_default.setter
    def char_values_default(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'char_values_default' array.array() must have the type code of 'B'"
            self._char_values_default = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'char_values_default' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._char_values_default = array.array('B', value)

    @property
    def float32_values_default(self):
        """Message field 'float32_values_default'."""
        return self._float32_values_default

    @float32_values_default.setter
    def float32_values_default(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'float32_values_default' array.array() must have the type code of 'f'"
            self._float32_values_default = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'float32_values_default' field must be a set or sequence and each value of type 'float'"
        self._float32_values_default = array.array('f', value)

    @property
    def float64_values_default(self):
        """Message field 'float64_values_default'."""
        return self._float64_values_default

    @float64_values_default.setter
    def float64_values_default(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'float64_values_default' array.array() must have the type code of 'd'"
            self._float64_values_default = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'float64_values_default' field must be a set or sequence and each value of type 'float'"
        self._float64_values_default = array.array('d', value)

    @property
    def int8_values_default(self):
        """Message field 'int8_values_default'."""
        return self._int8_values_default

    @int8_values_default.setter
    def int8_values_default(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'b', \
                "The 'int8_values_default' array.array() must have the type code of 'b'"
            self._int8_values_default = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -128 and val < 128 for val in value)), \
                "The 'int8_values_default' field must be a set or sequence and each value of type 'int' and each integer in [-128, 127]"
        self._int8_values_default = array.array('b', value)

    @property
    def uint8_values_default(self):
        """Message field 'uint8_values_default'."""
        return self._uint8_values_default

    @uint8_values_default.setter
    def uint8_values_default(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'uint8_values_default' array.array() must have the type code of 'B'"
            self._uint8_values_default = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'uint8_values_default' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._uint8_values_default = array.array('B', value)

    @property
    def int16_values_default(self):
        """Message field 'int16_values_default'."""
        return self._int16_values_default

    @int16_values_default.setter
    def int16_values_default(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'h', \
                "The 'int16_values_default' array.array() must have the type code of 'h'"
            self._int16_values_default = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -32768 and val < 32768 for val in value)), \
                "The 'int16_values_default' field must be a set or sequence and each value of type 'int' and each integer in [-32768, 32767]"
        self._int16_values_default = array.array('h', value)

    @property
    def uint16_values_default(self):
        """Message field 'uint16_values_default'."""
        return self._uint16_values_default

    @uint16_values_default.setter
    def uint16_values_default(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'H', \
                "The 'uint16_values_default' array.array() must have the type code of 'H'"
            self._uint16_values_default = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 65536 for val in value)), \
                "The 'uint16_values_default' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 65535]"
        self._uint16_values_default = array.array('H', value)

    @property
    def int32_values_default(self):
        """Message field 'int32_values_default'."""
        return self._int32_values_default

    @int32_values_default.setter
    def int32_values_default(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'int32_values_default' array.array() must have the type code of 'i'"
            self._int32_values_default = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'int32_values_default' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._int32_values_default = array.array('i', value)

    @property
    def uint32_values_default(self):
        """Message field 'uint32_values_default'."""
        return self._uint32_values_default

    @uint32_values_default.setter
    def uint32_values_default(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'I', \
                "The 'uint32_values_default' array.array() must have the type code of 'I'"
            self._uint32_values_default = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 4294967296 for val in value)), \
                "The 'uint32_values_default' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._uint32_values_default = array.array('I', value)

    @property
    def int64_values_default(self):
        """Message field 'int64_values_default'."""
        return self._int64_values_default

    @int64_values_default.setter
    def int64_values_default(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'q', \
                "The 'int64_values_default' array.array() must have the type code of 'q'"
            self._int64_values_default = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -9223372036854775808 and val < 9223372036854775808 for val in value)), \
                "The 'int64_values_default' field must be a set or sequence and each value of type 'int' and each integer in [-9223372036854775808, 9223372036854775807]"
        self._int64_values_default = array.array('q', value)

    @property
    def uint64_values_default(self):
        """Message field 'uint64_values_default'."""
        return self._uint64_values_default

    @uint64_values_default.setter
    def uint64_values_default(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'Q', \
                "The 'uint64_values_default' array.array() must have the type code of 'Q'"
            self._uint64_values_default = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 18446744073709551616 for val in value)), \
                "The 'uint64_values_default' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 18446744073709551615]"
        self._uint64_values_default = array.array('Q', value)

    @property
    def string_values_default(self):
        """Message field 'string_values_default'."""
        return self._string_values_default

    @string_values_default.setter
    def string_values_default(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'string_values_default' field must be a set or sequence and each value of type 'str'"
        self._string_values_default = value

    @property
    def alignment_check(self):
        """Message field 'alignment_check'."""
        return self._alignment_check

    @alignment_check.setter
    def alignment_check(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'alignment_check' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'alignment_check' field must be an integer in [-2147483648, 2147483647]"
        self._alignment_check = value
