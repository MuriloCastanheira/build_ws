# generated from rosidl_generator_py/resource/_idl.py.em
# with input from icrane_msgs:msg/Modeling.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'predict_alpha'
# Member 'predict_beta'
# Member 'predict_x'
# Member 'predict_y'
# Member 'predict_z'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Modeling(type):
    """Metaclass of message 'Modeling'."""

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
            module = import_type_support('icrane_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'icrane_msgs.msg.Modeling')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__modeling
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__modeling
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__modeling
            cls._TYPE_SUPPORT = module.type_support_msg__msg__modeling
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__modeling

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Modeling(metaclass=Metaclass_Modeling):
    """Message class 'Modeling'."""

    __slots__ = [
        '_header',
        '_alpha',
        '_beta',
        '_x',
        '_y',
        '_z',
        '_predict_alpha',
        '_predict_beta',
        '_predict_x',
        '_predict_y',
        '_predict_z',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'alpha': 'double',
        'beta': 'double',
        'x': 'double',
        'y': 'double',
        'z': 'double',
        'predict_alpha': 'sequence<double>',
        'predict_beta': 'sequence<double>',
        'predict_x': 'sequence<double>',
        'predict_y': 'sequence<double>',
        'predict_z': 'sequence<double>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.alpha = kwargs.get('alpha', float())
        self.beta = kwargs.get('beta', float())
        self.x = kwargs.get('x', float())
        self.y = kwargs.get('y', float())
        self.z = kwargs.get('z', float())
        self.predict_alpha = array.array('d', kwargs.get('predict_alpha', []))
        self.predict_beta = array.array('d', kwargs.get('predict_beta', []))
        self.predict_x = array.array('d', kwargs.get('predict_x', []))
        self.predict_y = array.array('d', kwargs.get('predict_y', []))
        self.predict_z = array.array('d', kwargs.get('predict_z', []))

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
        if self.header != other.header:
            return False
        if self.alpha != other.alpha:
            return False
        if self.beta != other.beta:
            return False
        if self.x != other.x:
            return False
        if self.y != other.y:
            return False
        if self.z != other.z:
            return False
        if self.predict_alpha != other.predict_alpha:
            return False
        if self.predict_beta != other.predict_beta:
            return False
        if self.predict_x != other.predict_x:
            return False
        if self.predict_y != other.predict_y:
            return False
        if self.predict_z != other.predict_z:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @property
    def alpha(self):
        """Message field 'alpha'."""
        return self._alpha

    @alpha.setter
    def alpha(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'alpha' field must be of type 'float'"
        self._alpha = value

    @property
    def beta(self):
        """Message field 'beta'."""
        return self._beta

    @beta.setter
    def beta(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'beta' field must be of type 'float'"
        self._beta = value

    @property
    def x(self):
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x' field must be of type 'float'"
        self._x = value

    @property
    def y(self):
        """Message field 'y'."""
        return self._y

    @y.setter
    def y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y' field must be of type 'float'"
        self._y = value

    @property
    def z(self):
        """Message field 'z'."""
        return self._z

    @z.setter
    def z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'z' field must be of type 'float'"
        self._z = value

    @property
    def predict_alpha(self):
        """Message field 'predict_alpha'."""
        return self._predict_alpha

    @predict_alpha.setter
    def predict_alpha(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'predict_alpha' array.array() must have the type code of 'd'"
            self._predict_alpha = value
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
                "The 'predict_alpha' field must be a set or sequence and each value of type 'float'"
        self._predict_alpha = array.array('d', value)

    @property
    def predict_beta(self):
        """Message field 'predict_beta'."""
        return self._predict_beta

    @predict_beta.setter
    def predict_beta(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'predict_beta' array.array() must have the type code of 'd'"
            self._predict_beta = value
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
                "The 'predict_beta' field must be a set or sequence and each value of type 'float'"
        self._predict_beta = array.array('d', value)

    @property
    def predict_x(self):
        """Message field 'predict_x'."""
        return self._predict_x

    @predict_x.setter
    def predict_x(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'predict_x' array.array() must have the type code of 'd'"
            self._predict_x = value
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
                "The 'predict_x' field must be a set or sequence and each value of type 'float'"
        self._predict_x = array.array('d', value)

    @property
    def predict_y(self):
        """Message field 'predict_y'."""
        return self._predict_y

    @predict_y.setter
    def predict_y(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'predict_y' array.array() must have the type code of 'd'"
            self._predict_y = value
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
                "The 'predict_y' field must be a set or sequence and each value of type 'float'"
        self._predict_y = array.array('d', value)

    @property
    def predict_z(self):
        """Message field 'predict_z'."""
        return self._predict_z

    @predict_z.setter
    def predict_z(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'predict_z' array.array() must have the type code of 'd'"
            self._predict_z = value
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
                "The 'predict_z' field must be a set or sequence and each value of type 'float'"
        self._predict_z = array.array('d', value)
