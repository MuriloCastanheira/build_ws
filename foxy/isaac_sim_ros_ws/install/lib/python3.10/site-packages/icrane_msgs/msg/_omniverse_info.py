# generated from rosidl_generator_py/resource/_idl.py.em
# with input from icrane_msgs:msg/OmniverseInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_OmniverseInfo(type):
    """Metaclass of message 'OmniverseInfo'."""

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
                'icrane_msgs.msg.OmniverseInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__omniverse_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__omniverse_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__omniverse_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__omniverse_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__omniverse_info

            from icrane_msgs.msg import Modeling
            if Modeling.__class__._TYPE_SUPPORT is None:
                Modeling.__class__.__import_type_support__()

            from icrane_msgs.msg import TrackedEntities
            if TrackedEntities.__class__._TYPE_SUPPORT is None:
                TrackedEntities.__class__.__import_type_support__()

            from nav_msgs.msg import Path
            if Path.__class__._TYPE_SUPPORT is None:
                Path.__class__.__import_type_support__()

            from sensor_msgs.msg import JointState
            if JointState.__class__._TYPE_SUPPORT is None:
                JointState.__class__.__import_type_support__()

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


class OmniverseInfo(metaclass=Metaclass_OmniverseInfo):
    """Message class 'OmniverseInfo'."""

    __slots__ = [
        '_header',
        '_people_info',
        '_boxes_info',
        '_load_position',
        '_joint_state',
        '_points',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'people_info': 'sequence<icrane_msgs/TrackedEntities>',
        'boxes_info': 'sequence<icrane_msgs/TrackedEntities>',
        'load_position': 'nav_msgs/Path',
        'joint_state': 'sensor_msgs/JointState',
        'points': 'icrane_msgs/Modeling',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['icrane_msgs', 'msg'], 'TrackedEntities')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['icrane_msgs', 'msg'], 'TrackedEntities')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['nav_msgs', 'msg'], 'Path'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'JointState'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['icrane_msgs', 'msg'], 'Modeling'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.people_info = kwargs.get('people_info', [])
        self.boxes_info = kwargs.get('boxes_info', [])
        from nav_msgs.msg import Path
        self.load_position = kwargs.get('load_position', Path())
        from sensor_msgs.msg import JointState
        self.joint_state = kwargs.get('joint_state', JointState())
        from icrane_msgs.msg import Modeling
        self.points = kwargs.get('points', Modeling())

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
        if self.people_info != other.people_info:
            return False
        if self.boxes_info != other.boxes_info:
            return False
        if self.load_position != other.load_position:
            return False
        if self.joint_state != other.joint_state:
            return False
        if self.points != other.points:
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
    def people_info(self):
        """Message field 'people_info'."""
        return self._people_info

    @people_info.setter
    def people_info(self, value):
        if __debug__:
            from icrane_msgs.msg import TrackedEntities
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
                 all(isinstance(v, TrackedEntities) for v in value) and
                 True), \
                "The 'people_info' field must be a set or sequence and each value of type 'TrackedEntities'"
        self._people_info = value

    @property
    def boxes_info(self):
        """Message field 'boxes_info'."""
        return self._boxes_info

    @boxes_info.setter
    def boxes_info(self, value):
        if __debug__:
            from icrane_msgs.msg import TrackedEntities
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
                 all(isinstance(v, TrackedEntities) for v in value) and
                 True), \
                "The 'boxes_info' field must be a set or sequence and each value of type 'TrackedEntities'"
        self._boxes_info = value

    @property
    def load_position(self):
        """Message field 'load_position'."""
        return self._load_position

    @load_position.setter
    def load_position(self, value):
        if __debug__:
            from nav_msgs.msg import Path
            assert \
                isinstance(value, Path), \
                "The 'load_position' field must be a sub message of type 'Path'"
        self._load_position = value

    @property
    def joint_state(self):
        """Message field 'joint_state'."""
        return self._joint_state

    @joint_state.setter
    def joint_state(self, value):
        if __debug__:
            from sensor_msgs.msg import JointState
            assert \
                isinstance(value, JointState), \
                "The 'joint_state' field must be a sub message of type 'JointState'"
        self._joint_state = value

    @property
    def points(self):
        """Message field 'points'."""
        return self._points

    @points.setter
    def points(self, value):
        if __debug__:
            from icrane_msgs.msg import Modeling
            assert \
                isinstance(value, Modeling), \
                "The 'points' field must be a sub message of type 'Modeling'"
        self._points = value
