// Auto-generated. Do not edit!

// (in-package champ_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let geometry_msgs = _finder('geometry_msgs');
let std_msgs = _finder('std_msgs');

//-----------------------------------------------------------

class ContactsStamped {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.contacts = null;
      this.reactions = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('contacts')) {
        this.contacts = initObj.contacts
      }
      else {
        this.contacts = [];
      }
      if (initObj.hasOwnProperty('reactions')) {
        this.reactions = initObj.reactions
      }
      else {
        this.reactions = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type ContactsStamped
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [contacts]
    bufferOffset = _arraySerializer.bool(obj.contacts, buffer, bufferOffset, null);
    // Serialize message field [reactions]
    // Serialize the length for message field [reactions]
    bufferOffset = _serializer.uint32(obj.reactions.length, buffer, bufferOffset);
    obj.reactions.forEach((val) => {
      bufferOffset = geometry_msgs.msg.Vector3.serialize(val, buffer, bufferOffset);
    });
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type ContactsStamped
    let len;
    let data = new ContactsStamped(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [contacts]
    data.contacts = _arrayDeserializer.bool(buffer, bufferOffset, null)
    // Deserialize message field [reactions]
    // Deserialize array length for message field [reactions]
    len = _deserializer.uint32(buffer, bufferOffset);
    data.reactions = new Array(len);
    for (let i = 0; i < len; ++i) {
      data.reactions[i] = geometry_msgs.msg.Vector3.deserialize(buffer, bufferOffset)
    }
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    length += object.contacts.length;
    length += 24 * object.reactions.length;
    return length + 8;
  }

  static datatype() {
    // Returns string type for a message object
    return 'champ_msgs/ContactsStamped';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '3fa2cbd07de707c129881426493b5047';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    Header header
    bool[] contacts
    geometry_msgs/Vector3[] reactions
    
    ================================================================================
    MSG: std_msgs/Header
    # Standard metadata for higher-level stamped data types.
    # This is generally used to communicate timestamped data 
    # in a particular coordinate frame.
    # 
    # sequence ID: consecutively increasing ID 
    uint32 seq
    #Two-integer timestamp that is expressed as:
    # * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
    # * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
    # time-handling sugar is provided by the client library
    time stamp
    #Frame this data is associated with
    string frame_id
    
    ================================================================================
    MSG: geometry_msgs/Vector3
    # This represents a vector in free space. 
    # It is only meant to represent a direction. Therefore, it does not
    # make sense to apply a translation to it (e.g., when applying a 
    # generic rigid transformation to a Vector3, tf2 will only apply the
    # rotation). If you want your data to be translatable too, use the
    # geometry_msgs/Point message instead.
    
    float64 x
    float64 y
    float64 z
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new ContactsStamped(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.contacts !== undefined) {
      resolved.contacts = msg.contacts;
    }
    else {
      resolved.contacts = []
    }

    if (msg.reactions !== undefined) {
      resolved.reactions = new Array(msg.reactions.length);
      for (let i = 0; i < resolved.reactions.length; ++i) {
        resolved.reactions[i] = geometry_msgs.msg.Vector3.Resolve(msg.reactions[i]);
      }
    }
    else {
      resolved.reactions = []
    }

    return resolved;
    }
};

module.exports = ContactsStamped;
