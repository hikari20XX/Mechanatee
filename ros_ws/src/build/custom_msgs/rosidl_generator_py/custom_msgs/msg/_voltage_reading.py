# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_msgs:msg/VoltageReading.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VoltageReading(type):
    """Metaclass of message 'VoltageReading'."""

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
                'custom_msgs.msg.VoltageReading')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__voltage_reading
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__voltage_reading
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__voltage_reading
            cls._TYPE_SUPPORT = module.type_support_msg__msg__voltage_reading
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__voltage_reading

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class VoltageReading(metaclass=Metaclass_VoltageReading):
    """Message class 'VoltageReading'."""

    __slots__ = [
        '_sec',
        '_nanosec',
        '_voltage_value',
        '_sensor_id',
    ]

    _fields_and_field_types = {
        'sec': 'int32',
        'nanosec': 'uint32',
        'voltage_value': 'float',
        'sensor_id': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.sec = kwargs.get('sec', int())
        self.nanosec = kwargs.get('nanosec', int())
        self.voltage_value = kwargs.get('voltage_value', float())
        self.sensor_id = kwargs.get('sensor_id', str())

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
        if self.voltage_value != other.voltage_value:
            return False
        if self.sensor_id != other.sensor_id:
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
    def voltage_value(self):
        """Message field 'voltage_value'."""
        return self._voltage_value

    @voltage_value.setter
    def voltage_value(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'voltage_value' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'voltage_value' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._voltage_value = value

    @builtins.property
    def sensor_id(self):
        """Message field 'sensor_id'."""
        return self._sensor_id

    @sensor_id.setter
    def sensor_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'sensor_id' field must be of type 'str'"
        self._sensor_id = value