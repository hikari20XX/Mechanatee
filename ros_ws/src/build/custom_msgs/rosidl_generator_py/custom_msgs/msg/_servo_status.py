# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_msgs:msg/ServoStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ServoStatus(type):
    """Metaclass of message 'ServoStatus'."""

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
            module = import_type_support('custom_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'custom_msgs.msg.ServoStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__servo_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__servo_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__servo_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__servo_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__servo_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ServoStatus(metaclass=Metaclass_ServoStatus):
    """Message class 'ServoStatus'."""

    __slots__ = [
        '_sec',
        '_nanosec',
        '_servo_id',
        '_position',
        '_speed',
        '_load',
        '_temperature',
        '_voltage',
        '_error_status',
        '_additional_info',
    ]

    _fields_and_field_types = {
        'sec': 'int32',
        'nanosec': 'uint32',
        'servo_id': 'string',
        'position': 'double',
        'speed': 'double',
        'load': 'double',
        'temperature': 'double',
        'voltage': 'double',
        'error_status': 'int32',
        'additional_info': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.sec = kwargs.get('sec', int())
        self.nanosec = kwargs.get('nanosec', int())
        self.servo_id = kwargs.get('servo_id', str())
        self.position = kwargs.get('position', float())
        self.speed = kwargs.get('speed', float())
        self.load = kwargs.get('load', float())
        self.temperature = kwargs.get('temperature', float())
        self.voltage = kwargs.get('voltage', float())
        self.error_status = kwargs.get('error_status', int())
        self.additional_info = kwargs.get('additional_info', str())

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
        if self.sec != other.sec:
            return False
        if self.nanosec != other.nanosec:
            return False
        if self.servo_id != other.servo_id:
            return False
        if self.position != other.position:
            return False
        if self.speed != other.speed:
            return False
        if self.load != other.load:
            return False
        if self.temperature != other.temperature:
            return False
        if self.voltage != other.voltage:
            return False
        if self.error_status != other.error_status:
            return False
        if self.additional_info != other.additional_info:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def sec(self):
        """Message field 'sec'."""
        return self._sec

    @sec.setter
    def sec(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sec' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'sec' field must be an integer in [-2147483648, 2147483647]"
        self._sec = value

    @builtins.property
    def nanosec(self):
        """Message field 'nanosec'."""
        return self._nanosec

    @nanosec.setter
    def nanosec(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'nanosec' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'nanosec' field must be an unsigned integer in [0, 4294967295]"
        self._nanosec = value

    @builtins.property
    def servo_id(self):
        """Message field 'servo_id'."""
        return self._servo_id

    @servo_id.setter
    def servo_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'servo_id' field must be of type 'str'"
        self._servo_id = value

    @builtins.property
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'position' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'position' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._position = value

    @builtins.property
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'speed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._speed = value

    @builtins.property
    def load(self):
        """Message field 'load'."""
        return self._load

    @load.setter
    def load(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'load' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'load' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._load = value

    @builtins.property
    def temperature(self):
        """Message field 'temperature'."""
        return self._temperature

    @temperature.setter
    def temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'temperature' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'temperature' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._temperature = value

    @builtins.property
    def voltage(self):
        """Message field 'voltage'."""
        return self._voltage

    @voltage.setter
    def voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'voltage' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'voltage' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._voltage = value

    @builtins.property
    def error_status(self):
        """Message field 'error_status'."""
        return self._error_status

    @error_status.setter
    def error_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'error_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'error_status' field must be an integer in [-2147483648, 2147483647]"
        self._error_status = value

    @builtins.property
    def additional_info(self):
        """Message field 'additional_info'."""
        return self._additional_info

    @additional_info.setter
    def additional_info(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'additional_info' field must be of type 'str'"
        self._additional_info = value