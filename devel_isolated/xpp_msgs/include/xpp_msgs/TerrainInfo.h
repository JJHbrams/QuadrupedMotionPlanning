// Generated by gencpp from file xpp_msgs/TerrainInfo.msg
// DO NOT EDIT!


#ifndef XPP_MSGS_MESSAGE_TERRAININFO_H
#define XPP_MSGS_MESSAGE_TERRAININFO_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Vector3.h>

namespace xpp_msgs
{
template <class ContainerAllocator>
struct TerrainInfo_
{
  typedef TerrainInfo_<ContainerAllocator> Type;

  TerrainInfo_()
    : surface_normals()
    , friction_coeff(0.0)  {
    }
  TerrainInfo_(const ContainerAllocator& _alloc)
    : surface_normals(_alloc)
    , friction_coeff(0.0)  {
  (void)_alloc;
    }



   typedef std::vector< ::geometry_msgs::Vector3_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Vector3_<ContainerAllocator> >::other >  _surface_normals_type;
  _surface_normals_type surface_normals;

   typedef double _friction_coeff_type;
  _friction_coeff_type friction_coeff;





  typedef boost::shared_ptr< ::xpp_msgs::TerrainInfo_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::xpp_msgs::TerrainInfo_<ContainerAllocator> const> ConstPtr;

}; // struct TerrainInfo_

typedef ::xpp_msgs::TerrainInfo_<std::allocator<void> > TerrainInfo;

typedef boost::shared_ptr< ::xpp_msgs::TerrainInfo > TerrainInfoPtr;
typedef boost::shared_ptr< ::xpp_msgs::TerrainInfo const> TerrainInfoConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::xpp_msgs::TerrainInfo_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::xpp_msgs::TerrainInfo_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::xpp_msgs::TerrainInfo_<ContainerAllocator1> & lhs, const ::xpp_msgs::TerrainInfo_<ContainerAllocator2> & rhs)
{
  return lhs.surface_normals == rhs.surface_normals &&
    lhs.friction_coeff == rhs.friction_coeff;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::xpp_msgs::TerrainInfo_<ContainerAllocator1> & lhs, const ::xpp_msgs::TerrainInfo_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace xpp_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::xpp_msgs::TerrainInfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::xpp_msgs::TerrainInfo_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::xpp_msgs::TerrainInfo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::xpp_msgs::TerrainInfo_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::xpp_msgs::TerrainInfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::xpp_msgs::TerrainInfo_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::xpp_msgs::TerrainInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "58f8d0d19c0428c00252cd1c16c74dcf";
  }

  static const char* value(const ::xpp_msgs::TerrainInfo_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x58f8d0d19c0428c0ULL;
  static const uint64_t static_value2 = 0x0252cd1c16c74dcfULL;
};

template<class ContainerAllocator>
struct DataType< ::xpp_msgs::TerrainInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "xpp_msgs/TerrainInfo";
  }

  static const char* value(const ::xpp_msgs::TerrainInfo_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::xpp_msgs::TerrainInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Extending the robot state\n"
"\n"
"geometry_msgs/Vector3[] surface_normals      # at every endeffector, expressed in world\n"
"float64                 friction_coeff       # friction coefficient\n"
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
;
  }

  static const char* value(const ::xpp_msgs::TerrainInfo_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::xpp_msgs::TerrainInfo_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.surface_normals);
      stream.next(m.friction_coeff);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TerrainInfo_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::xpp_msgs::TerrainInfo_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::xpp_msgs::TerrainInfo_<ContainerAllocator>& v)
  {
    s << indent << "surface_normals[]" << std::endl;
    for (size_t i = 0; i < v.surface_normals.size(); ++i)
    {
      s << indent << "  surface_normals[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "    ", v.surface_normals[i]);
    }
    s << indent << "friction_coeff: ";
    Printer<double>::stream(s, indent + "  ", v.friction_coeff);
  }
};

} // namespace message_operations
} // namespace ros

#endif // XPP_MSGS_MESSAGE_TERRAININFO_H
