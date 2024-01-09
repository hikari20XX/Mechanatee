# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_msgs:msg/TuningStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TuningStatus(type):
    """Metaclass of message 'TuningStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NOT_STARTED': 0,
        'ONGOING': 1,
        'COMPLETED': 2,
        'FAILED': 3,
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
                'custom_msgs.msg.TuningStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__tuning_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__tuning_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__tuning_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__tuning_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__tuning_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NOT_STARTED': cls.__constants['NOT_STARTED'],
            'ONGOING': cls.__constants['ONGOING'],
            'COMPLETED': cls.__constants['COMPLETED'],
            'FAILED': cls.__constants['FAILED'],
        }

    @property
    def NOT_STARTED(self):
        """Message constant 'NOT_STARTED'."""
        return Metaclass_TuningStatus.__constants['NOT_STARTED']

    @property
    def ONGOING(self):
        """Message constant 'ONGOING'."""
        return Metaclass_TuningStatus.__constants['ONGOING']

    @property
    def COMPLETED(self):
        """Message constant 'COMPLETED'."""
        return Metaclass_TuningStatus.__constants['COMPLETED']

    @property
    def FAILED(self):
        """Message constant 'FAILED'."""
        return Metaclass_TuningStatus.__constants['FAILED']


class TuningStatus(metaclass=Metaclass_TuningStatus):
    """
    Message class 'TuningStatus'.

    Constants:
      NOT_STARTED
      ONGOING
      COMPLETED
      FAILED
    """

    __slots__ = [
        '_sec',
        '_nanosec',
        '_status',
        '_details',
    ]

    _fields_and_field_types = {
        'sec': 'int32',
        'nanosec': 'uint32',
        'status': 'int8',
        'details': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.sec = kwargs.get('sec', int())
        self.nanosec = kwargs.get('nanosec', int())
        self.status = kwargs.get('status', int())
        self.details = kwargs.get('details', str())

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
        if self.status != other.status:
            return False
        if self.details != other.details:
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
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

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
