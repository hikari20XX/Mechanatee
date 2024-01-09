# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_msgs:msg/PIDParams.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PIDParams(type):
    """Metaclass of message 'PIDParams'."""

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
                'custom_msgs.msg.PIDParams')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__pid_params
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__pid_params
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__pid_params
            cls._TYPE_SUPPORT = module.type_support_msg__msg__pid_params
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__pid_params

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PIDParams(metaclass=Metaclass_PIDParams):
    """Message class 'PIDParams'."""

    __slots__ = [
        '_sec',
        '_nanosec',
        '_p_value',
        '_i_value',
        '_d_value',
        '_integral_limit_upper',
        '_integral_limit_lower',
    ]

    _fields_and_field_types = {
        'sec': 'int32',
        'nanosec': 'uint32',
        'p_value': 'double',
        'i_value': 'double',
        'd_value': 'double',
        'integral_limit_upper': 'double',
        'integral_limit_lower': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.sec = kwargs.get('sec', int())
        self.nanosec = kwargs.get('nanosec', int())
        self.p_value = kwargs.get('p_value', float())
        self.i_value = kwargs.get('i_value', float())
        self.d_value = kwargs.get('d_value', float())
        self.integral_limit_upper = kwargs.get('integral_limit_upper', float())
        self.integral_limit_lower = kwargs.get('integral_limit_lower', float())

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
        if self.p_value != other.p_value:
            return False
        if self.i_value != other.i_value:
            return False
        if self.d_value != other.d_value:
            return False
        if self.integral_limit_upper != other.integral_limit_upper:
            return False
        if self.integral_limit_lower != other.integral_limit_lower:
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
    def p_value(self):
        """Message field 'p_value'."""
        return self._p_value

    @p_value.setter
    def p_value(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'p_value' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'p_value' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._p_value = value

    @builtins.property
    def i_value(self):
        """Message field 'i_value'."""
        return self._i_value

    @i_value.setter
    def i_value(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'i_value' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'i_value' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._i_value = value

    @builtins.property
    def d_value(self):
        """Message field 'd_value'."""
        return self._d_value

    @d_value.setter
    def d_value(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'd_value' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'd_value' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._d_value = value

    @builtins.property
    def integral_limit_upper(self):
        """Message field 'integral_limit_upper'."""
        return self._integral_limit_upper

    @integral_limit_upper.setter
    def integral_limit_upper(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'integral_limit_upper' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'integral_limit_upper' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._integral_limit_upper = value

    @builtins.property
    def integral_limit_lower(self):
        """Message field 'integral_limit_lower'."""
        return self._integral_limit_lower

    @integral_limit_lower.setter
    def integral_limit_lower(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'integral_limit_lower' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'integral_limit_lower' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._integral_limit_lower = value