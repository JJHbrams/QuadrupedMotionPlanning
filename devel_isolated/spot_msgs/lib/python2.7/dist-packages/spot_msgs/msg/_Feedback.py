# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from spot_msgs/Feedback.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class Feedback(genpy.Message):
  _md5sum = "16779e4df8e3f77c9ee8c1811559bd21"
  _type = "spot_msgs/Feedback"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """bool standing
bool sitting
bool moving

string serial_number
string species
string version
string nickname
string computer_serial_number
"""
  __slots__ = ['standing','sitting','moving','serial_number','species','version','nickname','computer_serial_number']
  _slot_types = ['bool','bool','bool','string','string','string','string','string']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       standing,sitting,moving,serial_number,species,version,nickname,computer_serial_number

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Feedback, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.standing is None:
        self.standing = False
      if self.sitting is None:
        self.sitting = False
      if self.moving is None:
        self.moving = False
      if self.serial_number is None:
        self.serial_number = ''
      if self.species is None:
        self.species = ''
      if self.version is None:
        self.version = ''
      if self.nickname is None:
        self.nickname = ''
      if self.computer_serial_number is None:
        self.computer_serial_number = ''
    else:
      self.standing = False
      self.sitting = False
      self.moving = False
      self.serial_number = ''
      self.species = ''
      self.version = ''
      self.nickname = ''
      self.computer_serial_number = ''

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
      buff.write(_get_struct_3B().pack(_x.standing, _x.sitting, _x.moving))
      _x = self.serial_number
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.species
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.version
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.nickname
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.computer_serial_number
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 3
      (_x.standing, _x.sitting, _x.moving,) = _get_struct_3B().unpack(str[start:end])
      self.standing = bool(self.standing)
      self.sitting = bool(self.sitting)
      self.moving = bool(self.moving)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.serial_number = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.serial_number = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.species = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.species = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.version = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.version = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.nickname = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.nickname = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.computer_serial_number = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.computer_serial_number = str[start:end]
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
      buff.write(_get_struct_3B().pack(_x.standing, _x.sitting, _x.moving))
      _x = self.serial_number
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.species
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.version
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.nickname
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.computer_serial_number
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
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
      end = 0
      _x = self
      start = end
      end += 3
      (_x.standing, _x.sitting, _x.moving,) = _get_struct_3B().unpack(str[start:end])
      self.standing = bool(self.standing)
      self.sitting = bool(self.sitting)
      self.moving = bool(self.moving)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.serial_number = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.serial_number = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.species = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.species = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.version = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.version = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.nickname = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.nickname = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.computer_serial_number = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.computer_serial_number = str[start:end]
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3B = None
def _get_struct_3B():
    global _struct_3B
    if _struct_3B is None:
        _struct_3B = struct.Struct("<3B")
    return _struct_3B