# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_msgs:msg/SystemLogs.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SystemLogs(type):
    """Metaclass of message 'SystemLogs'."""

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
                'custom_msgs.msg.SystemLogs')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__system_logs
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__system_logs
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__system_logs
            cls._TYPE_SUPPORT = module.type_support_msg__msg__system_logs
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__system_logs

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SystemLogs(metaclass=Metaclass_SystemLogs):
    """Message class 'SystemLogs'."""

    __slots__ = [
        '_sec',
        '_nanosec',
        '_component_id',
        '_log_level',
        '_message',
        '_details',
        '_time_since_last_log',
        '_max_log_frequency',
    ]

    _fields_and_field_types = {
        'sec': 'int32',
        'nanosec': 'uint32',
        'component_id': 'string',
        'log_level': 'int32',
        'message': 'string',
        'details': 'string',
        'time_since_last_log': 'float',
        'max_log_frequency': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.sec = kwargs.get('sec', int())
        self.nanosec = kwargs.get('nanosec', int())
        self.component_id = kwargs.get('component_id', str())
        self.log_level = kwargs.get('log_level', int())
        self.message = kwargs.get('message', str())
        self.details = kwargs.get('details', str())
        self.time_since_last_log = kwargs.get('time_since_last_log', float())
        self.max_log_frequency = kwargs.get('max_log_frequency', float())

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
        if self.component_id != other.component_id:
            return False
        if self.log_level != other.log_level:
            return False
        if self.message != other.message:
            return False
        if self.details != other.details:
            return False
        if self.time_since_last_log != other.time_since_last_log:
            return False
        if self.max_log_frequency != other.max_log_frequency:
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
    def component_id(self):
        """Message field 'component_id'."""
        return self._component_id

    @component_id.setter
    def component_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'component_id' field must be of type 'str'"
        self._component_id = value

    @builtins.property
    def log_level(self):
        """Message field 'log_level'."""
        return self._log_level

    @log_level.setter
    def log_level(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'log_level' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'log_level' field must be an integer in [-2147483648, 2147483647]"
        self._log_level = value

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value

    @builtins.property
    def details(self):
        """Message field 'details'."""
        return self._details

    @details.setter
    def details(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'details' field must be of type 'str'"
        self._details = value

    @builtins.property
    def time_since_last_log(self):
        """Message field 'time_since_last_log'."""
        return self._time_since_last_log

    @time_since_last_log.setter
    def time_since_last_log(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'time_since_last_log' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'time_since_last_log' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._time_since_last_log = value

    @builtins.property
    def max_log_frequency(self):
        """Message field 'max_log_frequency'."""
        return self._max_log_frequency

    @max_log_frequency.setter
    def max_log_frequency(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_log_frequency' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'max_log_frequency' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._max_log_frequency = value
