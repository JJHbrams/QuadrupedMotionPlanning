// Generated by gencpp from file xpp_msgs/RobotStateJoint.msg
// DO NOT EDIT!


#ifndef XPP_MSGS_MESSAGE_ROBOTSTATEJOINT_H
#define XPP_MSGS_MESSAGE_ROBOTSTATEJOINT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <xpp_msgs/State6d.h>
#include <sensor_msgs/JointState.h>

namespace xpp_msgs
{
template <class ContainerAllocator>
struct RobotStateJoint_
{
  typedef RobotStateJoint_<ContainerAllocator> Type;

  RobotStateJoint_()
    : time_from_start()
    , base()
    , joint_state()
    , ee_contact()  {
    }
  RobotStateJoint_(const ContainerAllocator& _alloc)
    : time_from_start()
    , base(_alloc)
    , joint_state(_alloc)
    , ee_contact(_alloc)  {
  (void)_alloc;
    }



   typedef ros::Duration _time_from_start_type;
  _time_from_start_type time_from_start;

   typedef  ::xpp_msgs::State6d_<ContainerAllocator>  _base_type;
  _base_type base;

   typedef  ::sensor_msgs::JointState_<ContainerAllocator>  _joint_state_type;
  _joint_state_type joint_state;

   typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _ee_contact_type;
  _ee_contact_type ee_contact;





  typedef boost::shared_ptr< ::xpp_msgs::RobotStateJoint_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::xpp_msgs::RobotStateJoint_<ContainerAllocator> const> ConstPtr;

}; // struct RobotStateJoint_

typedef ::xpp_msgs::RobotStateJoint_<std::allocator<void> > RobotStateJoint;

typedef boost::shared_ptr< ::xpp_msgs::RobotStateJoint > RobotStateJointPtr;
typedef boost::shared_ptr< ::xpp_msgs::RobotStateJoint const> RobotStateJointConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::xpp_msgs::RobotStateJoint_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::xpp_msgs::RobotStateJoint_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::xpp_msgs::RobotStateJoint_<ContainerAllocator1> & lhs, const ::xpp_msgs::RobotStateJoint_<ContainerAllocator2> & rhs)
{
  return lhs.time_from_start == rhs.time_from_start &&
    lhs.base == rhs.base &&
    lhs.joint_state == rhs.joint_state &&
    lhs.ee_contact == rhs.ee_contact;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::xpp_msgs::RobotStateJoint_<ContainerAllocator1> & lhs, const ::xpp_msgs::RobotStateJoint_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace xpp_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::xpp_msgs::RobotStateJoint_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::xpp_msgs::RobotStateJoint_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::xpp_msgs::RobotStateJoint_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::xpp_msgs::RobotStateJoint_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::xpp_msgs::RobotStateJoint_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::xpp_msgs::RobotStateJoint_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::xpp_msgs::RobotStateJoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e95013ef0a2eb2815e5e1a85c92e0ac0";
  }

  static const char* value(const ::xpp_msgs::RobotStateJoint_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe95013ef0a2eb281ULL;
  static const uint64_t static_value2 = 0x5e5e1a85c92e0ac0ULL;
};

template<class ContainerAllocator>
struct DataType< ::xpp_msgs::RobotStateJoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "xpp_msgs/RobotStateJoint";
  }

  static const char* value(const ::xpp_msgs::RobotStateJoint_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::xpp_msgs::RobotStateJoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# The state of a robot expressed in the Cartesian frame\n"
"\n"
"duration                time_from_start   # global time along trajectory\n"
"\n"
"# Position, velocity and acceleration of the base expressed in world frame\n"
"# The orientation quaternion maps base to world frame.\n"
"State6d                 base              # base pos/vel/acc in world\n"
"\n"
"sensor_msgs/JointState  joint_state\n"
"bool[]                  ee_contact        # True if the foot is touching the environment\n"
"\n"
"\n"
"\n"
"\n"
"================================================================================\n"
"MSG: xpp_msgs/State6d\n"
"# The state of the 6D base of a system\n"
"\n"
"geometry_msgs/Pose     pose         # The 6D linear and angular position, orientation maps base to world\n"
"geometry_msgs/Twist    twist        # The 6D linear and angular velocity \n"
"geometry_msgs/Accel    accel        # The 6D linear and angular acceleration\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Twist\n"
"# This expresses velocity in free space broken into its linear and angular parts.\n"
"Vector3  linear\n"
"Vector3  angular\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"================================================================================\n"
"MSG: geometry_msgs/Accel\n"
"# This expresses acceleration in free space broken into its linear and angular parts.\n"
"Vector3  linear\n"
"Vector3  angular\n"
"\n"
"================================================================================\n"
"MSG: sensor_msgs/JointState\n"
"# This is a message that holds data to describe the state of a set of torque controlled joints. \n"
"#\n"
"# The state of each joint (revolute or prismatic) is defined by:\n"
"#  * the position of the joint (rad or m),\n"
"#  * the velocity of the joint (rad/s or m/s) and \n"
"#  * the effort that is applied in the joint (Nm or N).\n"
"#\n"
"# Each joint is uniquely identified by its name\n"
"# The header specifies the time at which the joint states were recorded. All the joint states\n"
"# in one message have to be recorded at the same time.\n"
"#\n"
"# This message consists of a multiple arrays, one for each part of the joint state. \n"
"# The goal is to make each of the fields optional. When e.g. your joints have no\n"
"# effort associated with them, you can leave the effort array empty. \n"
"#\n"
"# All arrays in this message should have the same size, or be empty.\n"
"# This is the only way to uniquely associate the joint name with the correct\n"
"# states.\n"
"\n"
"\n"
"Header header\n"
"\n"
"string[] name\n"
"float64[] position\n"
"float64[] velocity\n"
"float64[] effort\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::xpp_msgs::RobotStateJoint_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::xpp_msgs::RobotStateJoint_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.time_from_start);
      stream.next(m.base);
      stream.next(m.joint_state);
      stream.next(m.ee_contact);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RobotStateJoint_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::xpp_msgs::RobotStateJoint_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::xpp_msgs::RobotStateJoint_<ContainerAllocator>& v)
  {
    s << indent << "time_from_start: ";
    Printer<ros::Duration>::stream(s, indent + "  ", v.time_from_start);
    s << indent << "base: ";
    s << std::endl;
    Printer< ::xpp_msgs::State6d_<ContainerAllocator> >::stream(s, indent + "  ", v.base);
    s << indent << "joint_state: ";
    s << std::endl;
    Printer< ::sensor_msgs::JointState_<ContainerAllocator> >::stream(s, indent + "  ", v.joint_state);
    s << indent << "ee_contact[]" << std::endl;
    for (size_t i = 0; i < v.ee_contact.size(); ++i)
    {
      s << indent << "  ee_contact[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.ee_contact[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // XPP_MSGS_MESSAGE_ROBOTSTATEJOINT_H