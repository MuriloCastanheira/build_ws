# generated from rosidl_generator_py/resource/_idl.py.em
# with input from icrane_msgs:msg/DetectionSeg2D.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DetectionSeg2D(type):
    """Metaclass of message 'DetectionSeg2D'."""

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
                'icrane_msgs.msg.DetectionSeg2D')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__detection_seg2_d
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__detection_seg2_d
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__detection_seg2_d
            cls._TYPE_SUPPORT = module.type_support_msg__msg__detection_seg2_d
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__detection_seg2_d

            from sensor_msgs.msg import Image
            if Image.__class__._TYPE_SUPPORT is None:
                Image.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DetectionSeg2D(metaclass=Metaclass_DetectionSeg2D):
    """Message class 'DetectionSeg2D'."""

    __slots__ = [
        '_class_id',
        '_label',
        '_score',
        '_id',
        '_mask',
    ]

    _fields_and_field_types = {
        'class_id': 'int32',
        'label': 'string',
        'score': 'double',
        'id': 'string',
        'mask': 'sensor_msgs/Image',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Image'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.class_id = kwargs.get('class_id', int())
        self.label = kwargs.get('label', str())
        self.score = kwargs.get('score', float())
        self.id = kwargs.get('id', str())
        from sensor_msgs.msg import Image
        self.mask = kwargs.get('mask', Image())

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
        if self.class_id != other.class_id:
            return False
        if self.label != other.label:
            return False
        if self.score != other.score:
            return False
        if self.id != other.id:
            return False
        if self.mask != other.mask:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def class_id(self):
        """Message field 'class_id'."""
        return self._class_id

    @class_id.setter
    def class_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'class_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'class_id' field must be an integer in [-2147483648, 2147483647]"
        self._class_id = value

    @property
    def label(self):
        """Message field 'label'."""
        return self._label

    @label.setter
    def label(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'label' field must be of type 'str'"
        self._label = value

    @property
    def score(self):
        """Message field 'score'."""
        return self._score

    @score.setter
    def score(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'score' field must be of type 'float'"
        self._score = value

    @property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'id' field must be of type 'str'"
        self._id = value

    @property
    def mask(self):
        """Message field 'mask'."""
        return self._mask

    @mask.setter
    def mask(self, value):
        if __debug__:
            from sensor_msgs.msg import Image
            assert \
                isinstance(value, Image), \
                "The 'mask' field must be a sub message of type 'Image'"
        self._mask = value
