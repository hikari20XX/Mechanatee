# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rclrs_example_msgs:msg/VariousTypes.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'float_seq_bounded'
# Member 'float_seq_unbounded'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'float_array'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VariousTypes(type):
    """Metaclass of message 'VariousTypes'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'TWO_PLUS_TWO': 5,
        'PASSWORD': 'hunter2',
        'PI': 3.0,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rclrs_example_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rclrs_example_msgs.msg.VariousTypes')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__various_types
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__various_types
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__various_types
            cls._TYPE_SUPPORT = module.type_support_msg__msg__various_types
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__various_types

            from rclrs_example_msgs.msg import NestedType
            if NestedType.__class__._TYPE_SUPPORT is None:
                NestedType.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'TWO_PLUS_TWO': cls.__constants['TWO_PLUS_TWO'],
            'PASSWORD': cls.__constants['PASSWORD'],
            'PI': cls.__constants['PI'],
            'BOOL_MEMBER__DEFAULT': True,
            'INT8_MEMBER__DEFAULT': 1,
            'UINT8_MEMBER__DEFAULT': 2,
            'BYTE_MEMBER__DEFAULT': b'\x03',
            'FLOAT32_MEMBER__DEFAULT': 0.01,
            'FLOAT_ARRAY__DEFAULT': numpy.array((1.0, 2.0, 3.0, ), dtype=numpy.float32),
            'FLOAT_SEQ_BOUNDED__DEFAULT': array.array('f', (4.0, 5.0, )),
            'FLOAT_SEQ_UNBOUNDED__DEFAULT': array.array('f', (6.0, )),
            'STRING_MEMBER__DEFAULT': 'Χαίρετε 你好',
            'WSTRING_MEMBER__DEFAULT': 'αντίο σου 再见',
            'BOUNDED_STRING_MEMBER__DEFAULT': 'äöü',
            'BOUNDED_WSTRING_MEMBER__DEFAULT': 'äöü',
            'STRING_ARRAY__DEFAULT': ['R', 'O', 'S', '2'],
            'STRING_SEQ_BOUNDED__DEFAULT': ['R', 'O', 'S', '2'],
            'STRING_SEQ_UNBOUNDED__DEFAULT': ['R', 'O', 'S', '2'],
            'BOUNDED_STRING_ARRAY__DEFAULT': ['R', 'O', 'S', '2'],
            'BOUNDED_STRING_SEQ_BOUNDED__DEFAULT': ['R', 'O', 'S', '2'],
            'BOUNDED_STRING_SEQ_UNBOUNDED__DEFAULT': ['R', 'O', 'S', '2'],
        }

    @property
    def TWO_PLUS_TWO(self):
        """Message constant 'TWO_PLUS_TWO'."""
        return Metaclass_VariousTypes.__constants['TWO_PLUS_TWO']

    @property
    def PASSWORD(self):
        """Message constant 'PASSWORD'."""
        return Metaclass_VariousTypes.__constants['PASSWORD']

    @property
    def PI(self):
        """Message constant 'PI'."""
        return Metaclass_VariousTypes.__constants['PI']

    @property
    def BOOL_MEMBER__DEFAULT(cls):
        """Return default value for message field 'bool_member'."""
        return True

    @property
    def INT8_MEMBER__DEFAULT(cls):
        """Return default value for message field 'int8_member'."""
        return 1

    @property
    def UINT8_MEMBER__DEFAULT(cls):
        """Return default value for message field 'uint8_member'."""
        return 2

    @property
    def BYTE_MEMBER__DEFAULT(cls):
        """Return default value for message field 'byte_member'."""
        return b'\x03'

    @property
    def FLOAT32_MEMBER__DEFAULT(cls):
        """Return default value for message field 'float32_member'."""
        return 0.01

    @property
    def FLOAT_ARRAY__DEFAULT(cls):
        """Return default value for message field 'float_array'."""
        return numpy.array((1.0, 2.0, 3.0, ), dtype=numpy.float32)

    @property
    def FLOAT_SEQ_BOUNDED__DEFAULT(cls):
        """Return default value for message field 'float_seq_bounded'."""
        return array.array('f', (4.0, 5.0, ))

    @property
    def FLOAT_SEQ_UNBOUNDED__DEFAULT(cls):
        """Return default value for message field 'float_seq_unbounded'."""
        return array.array('f', (6.0, ))

    @property
    def STRING_MEMBER__DEFAULT(cls):
        """Return default value for message field 'string_member'."""
        return 'Χαίρετε 你好'

    @property
    def WSTRING_MEMBER__DEFAULT(cls):
        """Return default value for message field 'wstring_member'."""
        return 'αντίο σου 再见'

    @property
    def BOUNDED_STRING_MEMBER__DEFAULT(cls):
        """Return default value for message field 'bounded_string_member'."""
        return 'äöü'

    @property
    def BOUNDED_WSTRING_MEMBER__DEFAULT(cls):
        """Return default value for message field 'bounded_wstring_member'."""
        return 'äöü'

    @property
    def STRING_ARRAY__DEFAULT(cls):
        """Return default value for message field 'string_array'."""
        return ['R', 'O', 'S', '2']

    @property
    def STRING_SEQ_BOUNDED__DEFAULT(cls):
        """Return default value for message field 'string_seq_bounded'."""
        return ['R', 'O', 'S', '2']

    @property
    def STRING_SEQ_UNBOUNDED__DEFAULT(cls):
        """Return default value for message field 'string_seq_unbounded'."""
        return ['R', 'O', 'S', '2']

    @property
    def BOUNDED_STRING_ARRAY__DEFAULT(cls):
        """Return default value for message field 'bounded_string_array'."""
        return ['R', 'O', 'S', '2']

    @property
    def BOUNDED_STRING_SEQ_BOUNDED__DEFAULT(cls):
        """Return default value for message field 'bounded_string_seq_bounded'."""
        return ['R', 'O', 'S', '2']

    @property
    def BOUNDED_STRING_SEQ_UNBOUNDED__DEFAULT(cls):
        """Return default value for message field 'bounded_string_seq_unbounded'."""
        return ['R', 'O', 'S', '2']


class VariousTypes(metaclass=Metaclass_VariousTypes):
    """
    Message class 'VariousTypes'.

    Constants:
      TWO_PLUS_TWO
      PASSWORD
      PI
    """

    __slots__ = [
        '_bool_member',
        '_int8_member',
        '_uint8_member',
        '_byte_member',
        '_float32_member',
        '_float_array',
        '_float_seq_bounded',
        '_float_seq_unbounded',
        '_string_member',
        '_wstring_member',
        '_bounded_string_member',
        '_bounded_wstring_member',
        '_string_array',
        '_string_seq_bounded',
        '_string_seq_unbounded',
        '_bounded_string_array',
        '_bounded_string_seq_bounded',
        '_bounded_string_seq_unbounded',
        '_nested_member',
        '_nested_array',
        '_nested_seq_unbounded',
        '_nested_seq_bounded',
    ]

    _fields_and_field_types = {
        'bool_member': 'boolean',
        'int8_member': 'int8',
        'uint8_member': 'uint8',
        'byte_member': 'octet',
        'float32_member': 'float',
        'float_array': 'float[3]',
        'float_seq_bounded': 'sequence<float, 3>',
        'float_seq_unbounded': 'sequence<float>',
        'string_member': 'string',
        'wstring_member': 'wstring',
        'bounded_string_member': 'string<3>',
        'bounded_wstring_member': 'wstring<3>',
        'string_array': 'string[4]',
        'string_seq_bounded': 'sequence<string, 4>',
        'string_seq_unbounded': 'sequence<string>',
        'bounded_string_array': 'string<1>[4]',
        'bounded_string_seq_bounded': 'sequence<string<1>, 4>',
        'bounded_string_seq_unbounded': 'sequence<string<1>>',
        'nested_member': 'rclrs_example_msgs/NestedType',
        'nested_array': 'rclrs_example_msgs/NestedType[2]',
        'nested_seq_unbounded': 'sequence<rclrs_example_msgs/NestedType>',
        'nested_seq_bounded': 'sequence<rclrs_example_msgs/NestedType, 3>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('octet'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedWString(),  # noqa: E501
        rosidl_parser.definition.BoundedString(3),  # noqa: E501
        rosidl_parser.definition.BoundedWString(3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.UnboundedString(), 4),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.UnboundedString(), 4),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BoundedString(1), 4),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.BoundedString(1), 4),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BoundedString(1)),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rclrs_example_msgs', 'msg'], 'NestedType'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.NamespacedType(['rclrs_example_msgs', 'msg'], 'NestedType'), 2),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['rclrs_example_msgs', 'msg'], 'NestedType')),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['rclrs_example_msgs', 'msg'], 'NestedType'), 3),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.bool_member = kwargs.get(
            'bool_member', VariousTypes.BOOL_MEMBER__DEFAULT)
        self.int8_member = kwargs.get(
            'int8_member', VariousTypes.INT8_MEMBER__DEFAULT)
        self.uint8_member = kwargs.get(
            'uint8_member', VariousTypes.UINT8_MEMBER__DEFAULT)
        self.byte_member = kwargs.get(
            'byte_member', VariousTypes.BYTE_MEMBER__DEFAULT)
        self.float32_member = kwargs.get(
            'float32_member', VariousTypes.FLOAT32_MEMBER__DEFAULT)
        self.float_array = kwargs.get(
            'float_array', VariousTypes.FLOAT_ARRAY__DEFAULT)
        self.float_seq_bounded = kwargs.get(
            'float_seq_bounded', VariousTypes.FLOAT_SEQ_BOUNDED__DEFAULT)
        self.float_seq_unbounded = kwargs.get(
            'float_seq_unbounded', VariousTypes.FLOAT_SEQ_UNBOUNDED__DEFAULT)
        self.string_member = kwargs.get(
            'string_member', VariousTypes.STRING_MEMBER__DEFAULT)
        self.wstring_member = kwargs.get(
            'wstring_member', VariousTypes.WSTRING_MEMBER__DEFAULT)
        self.bounded_string_member = kwargs.get(
            'bounded_string_member', VariousTypes.BOUNDED_STRING_MEMBER__DEFAULT)
        self.bounded_wstring_member = kwargs.get(
            'bounded_wstring_member', VariousTypes.BOUNDED_WSTRING_MEMBER__DEFAULT)
        self.string_array = kwargs.get(
            'string_array', VariousTypes.STRING_ARRAY__DEFAULT)
        self.string_seq_bounded = kwargs.get(
            'string_seq_bounded', VariousTypes.STRING_SEQ_BOUNDED__DEFAULT)
        self.string_seq_unbounded = kwargs.get(
            'string_seq_unbounded', VariousTypes.STRING_SEQ_UNBOUNDED__DEFAULT)
        self.bounded_string_array = kwargs.get(
            'bounded_string_array', VariousTypes.BOUNDED_STRING_ARRAY__DEFAULT)
        self.bounded_string_seq_bounded = kwargs.get(
            'bounded_string_seq_bounded', VariousTypes.BOUNDED_STRING_SEQ_BOUNDED__DEFAULT)
        self.bounded_string_seq_unbounded = kwargs.get(
            'bounded_string_seq_unbounded', VariousTypes.BOUNDED_STRING_SEQ_UNBOUNDED__DEFAULT)
        from rclrs_example_msgs.msg import NestedType
        self.nested_member = kwargs.get('nested_member', NestedType())
        from rclrs_example_msgs.msg import NestedType
        self.nested_array = kwargs.get(
            'nested_array',
            [NestedType() for x in range(2)]
        )
        self.nested_seq_unbounded = kwargs.get('nested_seq_unbounded', [])
        self.nested_seq_bounded = kwargs.get('nested_seq_bounded', [])

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
        if self.bool_member != other.bool_member:
            return False
        if self.int8_member != other.int8_member:
            return False
        if self.uint8_member != other.uint8_member:
            return False
        if self.byte_member != other.byte_member:
            return False
        if self.float32_member != other.float32_member:
            return False
        if all(self.float_array != other.float_array):
            return False
        if self.float_seq_bounded != other.float_seq_bounded:
            return False
        if self.float_seq_unbounded != other.float_seq_unbounded:
            return False
        if self.string_member != other.string_member:
            return False
        if self.wstring_member != other.wstring_member:
            return False
        if self.bounded_string_member != other.bounded_string_member:
            return False
        if self.bounded_wstring_member != other.bounded_wstring_member:
            return False
        if self.string_array != other.string_array:
            return False
        if self.string_seq_bounded != other.string_seq_bounded:
            return False
        if self.string_seq_unbounded != other.string_seq_unbounded:
            return False
        if self.bounded_string_array != other.bounded_string_array:
            return False
        if self.bounded_string_seq_bounded != other.bounded_string_seq_bounded:
            return False
        if self.bounded_string_seq_unbounded != other.bounded_string_seq_unbounded:
            return False
        if self.nested_member != other.nested_member:
            return False
        if self.nested_array != other.nested_array:
            return False
        if self.nested_seq_unbounded != other.nested_seq_unbounded:
            return False
        if self.nested_seq_bounded != other.nested_seq_bounded:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def bool_member(self):
        """Message field 'bool_member'."""
        return self._bool_member

    @bool_member.setter
    def bool_member(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'bool_member' field must be of type 'bool'"
        self._bool_member = value

    @builtins.property
    def int8_member(self):
        """Message field 'int8_member'."""
        return self._int8_member

    @int8_member.setter
    def int8_member(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'int8_member' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'int8_member' field must be an integer in [-128, 127]"
        self._int8_member = value

    @builtins.property
    def uint8_member(self):
        """Message field 'uint8_member'."""
        return self._uint8_member

    @uint8_member.setter
    def uint8_member(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'uint8_member' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'uint8_member' field must be an unsigned integer in [0, 255]"
        self._uint8_member = value

    @builtins.property
    def byte_member(self):
        """Message field 'byte_member'."""
        return self._byte_member

    @byte_member.setter
    def byte_member(self, value):
        if __debug__:
            from collections.abc import ByteString
            assert \
                (isinstance(value, (bytes, ByteString)) and
                 len(value) == 1), \
                "The 'byte_member' field must be of type 'bytes' or 'ByteString' with length 1"
        self._byte_member = value

    @builtins.property
    def float32_member(self):
        """Message field 'float32_member'."""
        return self._float32_member

    @float32_member.setter
    def float32_member(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'float32_member' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'float32_member' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._float32_member = value

    @builtins.property
    def float_array(self):
        """Message field 'float_array'."""
        return self._float_array

    @float_array.setter
    def float_array(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'float_array' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'float_array' numpy.ndarray() must have a size of 3"
            self._float_array = value
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'float_array' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._float_array = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def float_seq_bounded(self):
        """Message field 'float_seq_bounded'."""
        return self._float_seq_bounded

    @float_seq_bounded.setter
    def float_seq_bounded(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'float_seq_bounded' array.array() must have the type code of 'f'"
            assert len(value) <= 3, \
                "The 'float_seq_bounded' array.array() must have a size <= 3"
            self._float_seq_bounded = value
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
                 len(value) <= 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'float_seq_bounded' field must be a set or sequence with length <= 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._float_seq_bounded = array.array('f', value)

    @builtins.property
    def float_seq_unbounded(self):
        """Message field 'float_seq_unbounded'."""
        return self._float_seq_unbounded

    @float_seq_unbounded.setter
    def float_seq_unbounded(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'float_seq_unbounded' array.array() must have the type code of 'f'"
            self._float_seq_unbounded = value
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
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'float_seq_unbounded' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._float_seq_unbounded = array.array('f', value)

    @builtins.property
    def string_member(self):
        """Message field 'string_member'."""
        return self._string_member

    @string_member.setter
    def string_member(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'string_member' field must be of type 'str'"
        self._string_member = value

    @builtins.property
    def wstring_member(self):
        """Message field 'wstring_member'."""
        return self._wstring_member

    @wstring_member.setter
    def wstring_member(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'wstring_member' field must be of type 'str'"
        self._wstring_member = value

    @builtins.property
    def bounded_string_member(self):
        """Message field 'bounded_string_member'."""
        return self._bounded_string_member

    @bounded_string_member.setter
    def bounded_string_member(self, value):
        if __debug__:
            from collections import UserString
            assert \
                (isinstance(value, (str, UserString)) and
                 len(value) <= 3), \
                "The 'bounded_string_member' field must be string value " \
                'not longer than 3'
        self._bounded_string_member = value

    @builtins.property
    def bounded_wstring_member(self):
        """Message field 'bounded_wstring_member'."""
        return self._bounded_wstring_member

    @bounded_wstring_member.setter
    def bounded_wstring_member(self, value):
        if __debug__:
            from collections import UserString
            assert \
                (isinstance(value, (str, UserString)) and
                 len(value) <= 3), \
                "The 'bounded_wstring_member' field must be string value " \
                'not longer than 3'
        self._bounded_wstring_member = value

    @builtins.property
    def string_array(self):
        """Message field 'string_array'."""
        return self._string_array

    @string_array.setter
    def string_array(self, value):
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
                 len(value) == 4 and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'string_array' field must be a set or sequence with length 4 and each value of type 'str'"
        self._string_array = value

    @builtins.property
    def string_seq_bounded(self):
        """Message field 'string_seq_bounded'."""
        return self._string_seq_bounded

    @string_seq_bounded.setter
    def string_seq_bounded(self, value):
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
                 len(value) <= 4 and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'string_seq_bounded' field must be a set or sequence with length <= 4 and each value of type 'str'"
        self._string_seq_bounded = value

    @builtins.property
    def string_seq_unbounded(self):
        """Message field 'string_seq_unbounded'."""
        return self._string_seq_unbounded

    @string_seq_unbounded.setter
    def string_seq_unbounded(self, value):
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
                "The 'string_seq_unbounded' field must be a set or sequence and each value of type 'str'"
        self._string_seq_unbounded = value

    @builtins.property
    def bounded_string_array(self):
        """Message field 'bounded_string_array'."""
        return self._bounded_string_array

    @bounded_string_array.setter
    def bounded_string_array(self, value):
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
                 all(len(val) <= 1 for val in value) and
                 len(value) == 4 and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'bounded_string_array' field must be a set or sequence with length 4 and each string value not longer than 1 and each value of type 'str'"
        self._bounded_string_array = value

    @builtins.property
    def bounded_string_seq_bounded(self):
        """Message field 'bounded_string_seq_bounded'."""
        return self._bounded_string_seq_bounded

    @bounded_string_seq_bounded.setter
    def bounded_string_seq_bounded(self, value):
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
                 all(len(val) <= 1 for val in value) and
                 len(value) <= 4 and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'bounded_string_seq_bounded' field must be a set or sequence with length <= 4 and each string value not longer than 1 and each value of type 'str'"
        self._bounded_string_seq_bounded = value

    @builtins.property
    def bounded_string_seq_unbounded(self):
        """Message field 'bounded_string_seq_unbounded'."""
        return self._bounded_string_seq_unbounded

    @bounded_string_seq_unbounded.setter
    def bounded_string_seq_unbounded(self, value):
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
                 all(len(val) <= 1 for val in value) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'bounded_string_seq_unbounded' field must be a set or sequence and each string value not longer than 1 and each value of type 'str'"
        self._bounded_string_seq_unbounded = value

    @builtins.property
    def nested_member(self):
        """Message field 'nested_member'."""
        return self._nested_member

    @nested_member.setter
    def nested_member(self, value):
        if __debug__:
            from rclrs_example_msgs.msg import NestedType
            assert \
                isinstance(value, NestedType), \
                "The 'nested_member' field must be a sub message of type 'NestedType'"
        self._nested_member = value

    @builtins.property
    def nested_array(self):
        """Message field 'nested_array'."""
        return self._nested_array

    @nested_array.setter
    def nested_array(self, value):
        if __debug__:
            from rclrs_example_msgs.msg import NestedType
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
                 len(value) == 2 and
                 all(isinstance(v, NestedType) for v in value) and
                 True), \
                "The 'nested_array' field must be a set or sequence with length 2 and each value of type 'NestedType'"
        self._nested_array = value

    @builtins.property
    def nested_seq_unbounded(self):
        """Message field 'nested_seq_unbounded'."""
        return self._nested_seq_unbounded

    @nested_seq_unbounded.setter
    def nested_seq_unbounded(self, value):
        if __debug__:
            from rclrs_example_msgs.msg import NestedType
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
                 all(isinstance(v, NestedType) for v in value) and
                 True), \
                "The 'nested_seq_unbounded' field must be a set or sequence and each value of type 'NestedType'"
        self._nested_seq_unbounded = value

    @builtins.property
    def nested_seq_bounded(self):
        """Message field 'nested_seq_bounded'."""
        return self._nested_seq_bounded

    @nested_seq_bounded.setter
    def nested_seq_bounded(self, value):
        if __debug__:
            from rclrs_example_msgs.msg import NestedType
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
                 len(value) <= 3 and
                 all(isinstance(v, NestedType) for v in value) and
                 True), \
                "The 'nested_seq_bounded' field must be a set or sequence with length <= 3 and each value of type 'NestedType'"
        self._nested_seq_bounded = value
