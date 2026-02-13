# generated from rosidl_generator_py/resource/_idl.py.em
# with input from crtk_msgs:msg/SetpointMode.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetpointMode(type):
    """Metaclass of message 'SetpointMode'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'POSITION': 1,
        'VELOCITY': 2,
        'EFFORT': 4,
        'NONE': 0,
        'P': 1,
        'V': 2,
        'PV': 3,
        'F': 4,
        'PF': 5,
        'VF': 6,
        'PVF': 7,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('crtk_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'crtk_msgs.msg.SetpointMode')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__setpoint_mode
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__setpoint_mode
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__setpoint_mode
            cls._TYPE_SUPPORT = module.type_support_msg__msg__setpoint_mode
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__setpoint_mode

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'POSITION': cls.__constants['POSITION'],
            'VELOCITY': cls.__constants['VELOCITY'],
            'EFFORT': cls.__constants['EFFORT'],
            'NONE': cls.__constants['NONE'],
            'P': cls.__constants['P'],
            'V': cls.__constants['V'],
            'PV': cls.__constants['PV'],
            'F': cls.__constants['F'],
            'PF': cls.__constants['PF'],
            'VF': cls.__constants['VF'],
            'PVF': cls.__constants['PVF'],
        }

    @property
    def POSITION(self):
        """Message constant 'POSITION'."""
        return Metaclass_SetpointMode.__constants['POSITION']

    @property
    def VELOCITY(self):
        """Message constant 'VELOCITY'."""
        return Metaclass_SetpointMode.__constants['VELOCITY']

    @property
    def EFFORT(self):
        """Message constant 'EFFORT'."""
        return Metaclass_SetpointMode.__constants['EFFORT']

    @property
    def NONE(self):
        """Message constant 'NONE'."""
        return Metaclass_SetpointMode.__constants['NONE']

    @property
    def P(self):
        """Message constant 'P'."""
        return Metaclass_SetpointMode.__constants['P']

    @property
    def V(self):
        """Message constant 'V'."""
        return Metaclass_SetpointMode.__constants['V']

    @property
    def PV(self):
        """Message constant 'PV'."""
        return Metaclass_SetpointMode.__constants['PV']

    @property
    def F(self):
        """Message constant 'F'."""
        return Metaclass_SetpointMode.__constants['F']

    @property
    def PF(self):
        """Message constant 'PF'."""
        return Metaclass_SetpointMode.__constants['PF']

    @property
    def VF(self):
        """Message constant 'VF'."""
        return Metaclass_SetpointMode.__constants['VF']

    @property
    def PVF(self):
        """Message constant 'PVF'."""
        return Metaclass_SetpointMode.__constants['PVF']


class SetpointMode(metaclass=Metaclass_SetpointMode):
    """
    Message class 'SetpointMode'.

    Constants:
      POSITION
      VELOCITY
      EFFORT
      NONE
      P
      V
      PV
      F
      PF
      VF
      PVF
    """

    __slots__ = [
        '_value',
    ]

    _fields_and_field_types = {
        'value': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.value = kwargs.get('value', int())

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
        if self.value != other.value:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def value(self):
        """Message field 'value'."""
        return self._value

    @value.setter
    def value(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'value' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'value' field must be an unsigned integer in [0, 255]"
        self._value = value
