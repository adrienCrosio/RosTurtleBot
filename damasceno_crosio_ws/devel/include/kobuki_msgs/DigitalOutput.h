// Generated by gencpp from file kobuki_msgs/DigitalOutput.msg
// DO NOT EDIT!


#ifndef KOBUKI_MSGS_MESSAGE_DIGITALOUTPUT_H
#define KOBUKI_MSGS_MESSAGE_DIGITALOUTPUT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace kobuki_msgs
{
template <class ContainerAllocator>
struct DigitalOutput_
{
  typedef DigitalOutput_<ContainerAllocator> Type;

  DigitalOutput_()
    : values()
    , mask()  {
      values.assign(false);

      mask.assign(false);
  }
  DigitalOutput_(const ContainerAllocator& _alloc)
    : values()
    , mask()  {
  (void)_alloc;
      values.assign(false);

      mask.assign(false);
  }



   typedef boost::array<uint8_t, 4>  _values_type;
  _values_type values;

   typedef boost::array<uint8_t, 4>  _mask_type;
  _mask_type mask;





  typedef boost::shared_ptr< ::kobuki_msgs::DigitalOutput_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kobuki_msgs::DigitalOutput_<ContainerAllocator> const> ConstPtr;

}; // struct DigitalOutput_

typedef ::kobuki_msgs::DigitalOutput_<std::allocator<void> > DigitalOutput;

typedef boost::shared_ptr< ::kobuki_msgs::DigitalOutput > DigitalOutputPtr;
typedef boost::shared_ptr< ::kobuki_msgs::DigitalOutput const> DigitalOutputConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kobuki_msgs::DigitalOutput_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kobuki_msgs::DigitalOutput_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace kobuki_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'kobuki_msgs': ['/home/cpe_student/Bureau/damasceno_crosio_ws/src/kobuki_msgs/msg', '/home/cpe_student/Bureau/damasceno_crosio_ws/devel/share/kobuki_msgs/msg'], 'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::kobuki_msgs::DigitalOutput_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kobuki_msgs::DigitalOutput_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kobuki_msgs::DigitalOutput_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kobuki_msgs::DigitalOutput_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kobuki_msgs::DigitalOutput_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kobuki_msgs::DigitalOutput_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kobuki_msgs::DigitalOutput_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1e97cd7f196a0270516b506e8bf29ca2";
  }

  static const char* value(const ::kobuki_msgs::DigitalOutput_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1e97cd7f196a0270ULL;
  static const uint64_t static_value2 = 0x516b506e8bf29ca2ULL;
};

template<class ContainerAllocator>
struct DataType< ::kobuki_msgs::DigitalOutput_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kobuki_msgs/DigitalOutput";
  }

  static const char* value(const ::kobuki_msgs::DigitalOutput_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kobuki_msgs::DigitalOutput_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Digital output - only four pins. \n"
"\n"
"# Array of values indices represent pins 0-3 respectively.\n"
"bool[4] values\n"
"\n"
"# Set indices to true to set a pin, false to ignore.\n"
"bool[4] mask\n"
;
  }

  static const char* value(const ::kobuki_msgs::DigitalOutput_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kobuki_msgs::DigitalOutput_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.values);
      stream.next(m.mask);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DigitalOutput_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kobuki_msgs::DigitalOutput_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kobuki_msgs::DigitalOutput_<ContainerAllocator>& v)
  {
    s << indent << "values[]" << std::endl;
    for (size_t i = 0; i < v.values.size(); ++i)
    {
      s << indent << "  values[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.values[i]);
    }
    s << indent << "mask[]" << std::endl;
    for (size_t i = 0; i < v.mask.size(); ++i)
    {
      s << indent << "  mask[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.mask[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // KOBUKI_MSGS_MESSAGE_DIGITALOUTPUT_H
