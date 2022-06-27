// Generated by gencpp from file neo_msgs/LCDOutput.msg
// DO NOT EDIT!


#ifndef NEO_MSGS_MESSAGE_LCDOUTPUT_H
#define NEO_MSGS_MESSAGE_LCDOUTPUT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace neo_msgs
{
template <class ContainerAllocator>
struct LCDOutput_
{
  typedef LCDOutput_<ContainerAllocator> Type;

  LCDOutput_()
    : header()
    , msg_line()  {
    }
  LCDOutput_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , msg_line(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _msg_line_type;
  _msg_line_type msg_line;





  typedef boost::shared_ptr< ::neo_msgs::LCDOutput_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::neo_msgs::LCDOutput_<ContainerAllocator> const> ConstPtr;

}; // struct LCDOutput_

typedef ::neo_msgs::LCDOutput_<std::allocator<void> > LCDOutput;

typedef boost::shared_ptr< ::neo_msgs::LCDOutput > LCDOutputPtr;
typedef boost::shared_ptr< ::neo_msgs::LCDOutput const> LCDOutputConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::neo_msgs::LCDOutput_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::neo_msgs::LCDOutput_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::neo_msgs::LCDOutput_<ContainerAllocator1> & lhs, const ::neo_msgs::LCDOutput_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.msg_line == rhs.msg_line;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::neo_msgs::LCDOutput_<ContainerAllocator1> & lhs, const ::neo_msgs::LCDOutput_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace neo_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::neo_msgs::LCDOutput_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::neo_msgs::LCDOutput_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::neo_msgs::LCDOutput_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::neo_msgs::LCDOutput_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::neo_msgs::LCDOutput_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::neo_msgs::LCDOutput_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::neo_msgs::LCDOutput_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7a6e85aa179c4269808f0f1656a095be";
  }

  static const char* value(const ::neo_msgs::LCDOutput_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7a6e85aa179c4269ULL;
  static const uint64_t static_value2 = 0x808f0f1656a095beULL;
};

template<class ContainerAllocator>
struct DataType< ::neo_msgs::LCDOutput_<ContainerAllocator> >
{
  static const char* value()
  {
    return "neo_msgs/LCDOutput";
  }

  static const char* value(const ::neo_msgs::LCDOutput_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::neo_msgs::LCDOutput_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"std_msgs/Header header\n"
"\n"
"string msg_line 	#in mode 1 msg_lines size is limited to 20 chars\n"
"			#in mode 2 msg_lines size is limited to 60 chars\n"
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

  static const char* value(const ::neo_msgs::LCDOutput_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::neo_msgs::LCDOutput_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.msg_line);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LCDOutput_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::neo_msgs::LCDOutput_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::neo_msgs::LCDOutput_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "msg_line: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.msg_line);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NEO_MSGS_MESSAGE_LCDOUTPUT_H
