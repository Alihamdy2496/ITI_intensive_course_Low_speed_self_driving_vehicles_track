# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mymsgsrv:srv/CustomSrv.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CustomSrv_Request(type):
    """Metaclass of message 'CustomSrv_Request'."""

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
            module = import_type_support('mymsgsrv')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mymsgsrv.srv.CustomSrv_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__custom_srv__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__custom_srv__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__custom_srv__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__custom_srv__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__custom_srv__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CustomSrv_Request(metaclass=Metaclass_CustomSrv_Request):
    """Message class 'CustomSrv_Request'."""

    __slots__ = [
        '_reqq',
    ]

    _fields_and_field_types = {
        'reqq': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.reqq = kwargs.get('reqq', bool())

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
        if self.reqq != other.reqq:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def reqq(self):
        """Message field 'reqq'."""
        return self._reqq

    @reqq.setter
    def reqq(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'reqq' field must be of type 'bool'"
        self._reqq = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_CustomSrv_Response(type):
    """Metaclass of message 'CustomSrv_Response'."""

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
            module = import_type_support('mymsgsrv')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mymsgsrv.srv.CustomSrv_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__custom_srv__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__custom_srv__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__custom_srv__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__custom_srv__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__custom_srv__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CustomSrv_Response(metaclass=Metaclass_CustomSrv_Response):
    """Message class 'CustomSrv_Response'."""

    __slots__ = [
        '_rspp',
    ]

    _fields_and_field_types = {
        'rspp': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.rspp = kwargs.get('rspp', str())

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
        if self.rspp != other.rspp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def rspp(self):
        """Message field 'rspp'."""
        return self._rspp

    @rspp.setter
    def rspp(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'rspp' field must be of type 'str'"
        self._rspp = value


class Metaclass_CustomSrv(type):
    """Metaclass of service 'CustomSrv'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mymsgsrv')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mymsgsrv.srv.CustomSrv')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__custom_srv

            from mymsgsrv.srv import _custom_srv
            if _custom_srv.Metaclass_CustomSrv_Request._TYPE_SUPPORT is None:
                _custom_srv.Metaclass_CustomSrv_Request.__import_type_support__()
            if _custom_srv.Metaclass_CustomSrv_Response._TYPE_SUPPORT is None:
                _custom_srv.Metaclass_CustomSrv_Response.__import_type_support__()


class CustomSrv(metaclass=Metaclass_CustomSrv):
    from mymsgsrv.srv._custom_srv import CustomSrv_Request as Request
    from mymsgsrv.srv._custom_srv import CustomSrv_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
