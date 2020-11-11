# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from spot_msgs/FootState.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg

class FootState(genpy.Message):
  _md5sum = "524cf45b9d66134675b586174885a624"
  _type = "spot_msgs/FootState"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """# Contact
uint8 CONTACT_UNKNOWN = 0
uint8 CONTACT_MADE = 1
uint8 CONTACT_LOST = 2

geometry_msgs/Point foot_position_rt_body
uint8 contact

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z
"""
  # Pseudo-constants
  CONTACT_UNKNOWN = 0
  CONTACT_MADE = 1
  CONTACT_LOST = 2

  __slots__ = ['foot_position_rt_body','contact']
  _slot_types = ['geometry_msgs/Point','uint8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       foot_position_rt_body,contact

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(FootState, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.foot_position_rt_body is None:
        self.foot_position_rt_body = geometry_msgs.msg.Point()
      if self.contact is None:
        self.contact = 0
    else:
      self.foot_position_rt_body = geometry_msgs.msg.Point()
      self.contact = 0

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_3dB().pack(_x.foot_position_rt_body.x, _x.foot_position_rt_body.y, _x.foot_position_rt_body.z, _x.contact))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.foot_position_rt_body is None:
        self.foot_position_rt_body = geometry_msgs.msg.Point()
      end = 0
      _x = self
      start = end
      end += 25
      (_x.foot_position_rt_body.x, _x.foot_position_rt_body.y, _x.foot_position_rt_body.z, _x.contact,) = _get_struct_3dB().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_3dB().pack(_x.foot_position_rt_body.x, _x.foot_position_rt_body.y, _x.foot_position_rt_body.z, _x.contact))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.foot_position_rt_body is None:
        self.foot_position_rt_body = geometry_msgs.msg.Point()
      end = 0
      _x = self
      start = end
      end += 25
      (_x.foot_position_rt_body.x, _x.foot_position_rt_body.y, _x.foot_position_rt_body.z, _x.contact,) = _get_struct_3dB().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3dB = None
def _get_struct_3dB():
    global _struct_3dB
    if _struct_3dB is None:
        _struct_3dB = struct.Struct("<3dB")
    return _struct_3dB