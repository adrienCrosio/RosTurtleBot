// Generated by gencpp from file kobuki_msgs/DockInfraRed.msg
// DO NOT EDIT!


#ifndef KOBUKI_MSGS_MESSAGE_DOCKINFRARED_H
#define KOBUKI_MSGS_MESSAGE_DOCKINFRARED_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace kobuki_msgs
{
template <class ContainerAllocator>
struct DockInfraRed_
{
  typedef DockInfraRed_<ContainerAllocator> Type;

  DockInfraRed_()
    : header()
    , data()  {
    }
  DockInfraRed_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , data(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _data_type;
  _data_type data;



  enum {
    NEAR_LEFT = 1u,
    NEAR_CENTER = 2u,
    NEAR_RIGHT = 4u,
    FAR_LEFT = 16u,
    FAR_CENTER = 8u,
    FAR_RIGHT = 32u,
  };


  typedef boost::shared_ptr< ::kobuki_msgs::DockInfraRed_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kobuki_msgs::DockInfraRed_<ContainerAllocator> const> ConstPtr;

}; // struct DockInfraRed_

typedef ::kobuki_msgs::DockInfraRed_<std::allocator<void> > DockInfraRed;

typedef boost::shared_ptr< ::kobuki_msgs::DockInfraRed > DockInfraRedPtr;
typedef boost::shared_ptr< ::kobuki_msgs::DockInfraRed const> DockInfraRedConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kobuki_msgs::DockInfraRed_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kobuki_msgs::DockInfraRed_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace kobuki_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'kobuki_msgs': ['/home/cpe_student/Bureau/damasceno_crosio_ws/src/kobuki_msgs/msg', '/home/cpe_student/Bureau/damasceno_crosio_ws/devel/share/kobuki_msgs/msg'], 'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::kobuki_msgs::DockInfraRed_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kobuki_msgs::DockInfraRed_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kobuki_msgs::DockInfraRed_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kobuki_msgs::DockInfraRed_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kobuki_msgs::DockInfraRed_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kobuki_msgs::DockInfraRed_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kobuki_msgs::DockInfraRed_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a3d77f7d15e50579473dcc24e9b97b34";
  }

  static const char* value(const ::kobuki_msgs::DockInfraRed_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa3d77f7d15e50579ULL;
  static const uint64_t static_value2 = 0x473dcc24e9b97b34ULL;
};

template<class ContainerAllocator>
struct DataType< ::kobuki_msgs::DockInfraRed_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kobuki_msgs/DockInfraRed";
  }

  static const char* value(const ::kobuki_msgs::DockInfraRed_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kobuki_msgs::DockInfraRed_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Docking base ir sensors messages.\n"
"# Generated on the proximity of the docking base to assist the automatic docking.\n"
"\n"
"uint8 NEAR_LEFT   =  1\n"
"uint8 NEAR_CENTER =  2\n"
"uint8 NEAR_RIGHT  =  4\n"
"uint8 FAR_LEFT    = 16\n"
"uint8 FAR_CENTER  =  8\n"
"uint8 FAR_RIGHT   = 32\n"
"\n"
"Header header\n"
"uint8[] data\n"
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

  static const char* value(const ::kobuki_msgs::DockInfraRed_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kobuki_msgs::DockInfraRed_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DockInfraRed_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kobuki_msgs::DockInfraRed_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kobuki_msgs::DockInfraRed_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "data[]" << std::endl;
    for (size_t i = 0; i < v.data.size(); ++i)
    {
      s << indent << "  data[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.data[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // KOBUKI_MSGS_MESSAGE_DOCKINFRARED_H
