// Generated by gencpp from file neo_srvs/UnlockPlatformResponse.msg
// DO NOT EDIT!


#ifndef NEO_SRVS_MESSAGE_UNLOCKPLATFORMRESPONSE_H
#define NEO_SRVS_MESSAGE_UNLOCKPLATFORMRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace neo_srvs
{
template <class ContainerAllocator>
struct UnlockPlatformResponse_
{
  typedef UnlockPlatformResponse_<ContainerAllocator> Type;

  UnlockPlatformResponse_()
    : success(false)  {
    }
  UnlockPlatformResponse_(const ContainerAllocator& _alloc)
    : success(false)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;





  typedef boost::shared_ptr< ::neo_srvs::UnlockPlatformResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::neo_srvs::UnlockPlatformResponse_<ContainerAllocator> const> ConstPtr;

}; // struct UnlockPlatformResponse_

typedef ::neo_srvs::UnlockPlatformResponse_<std::allocator<void> > UnlockPlatformResponse;

typedef boost::shared_ptr< ::neo_srvs::UnlockPlatformResponse > UnlockPlatformResponsePtr;
typedef boost::shared_ptr< ::neo_srvs::UnlockPlatformResponse const> UnlockPlatformResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::neo_srvs::UnlockPlatformResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::neo_srvs::UnlockPlatformResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::neo_srvs::UnlockPlatformResponse_<ContainerAllocator1> & lhs, const ::neo_srvs::UnlockPlatformResponse_<ContainerAllocator2> & rhs)
{
  return lhs.success == rhs.success;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::neo_srvs::UnlockPlatformResponse_<ContainerAllocator1> & lhs, const ::neo_srvs::UnlockPlatformResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace neo_srvs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::neo_srvs::UnlockPlatformResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::neo_srvs::UnlockPlatformResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::neo_srvs::UnlockPlatformResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::neo_srvs::UnlockPlatformResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::neo_srvs::UnlockPlatformResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::neo_srvs::UnlockPlatformResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::neo_srvs::UnlockPlatformResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const ::neo_srvs::UnlockPlatformResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x358e233cde0c8a8bULL;
  static const uint64_t static_value2 = 0xcfea4ce193f8fc15ULL;
};

template<class ContainerAllocator>
struct DataType< ::neo_srvs::UnlockPlatformResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "neo_srvs/UnlockPlatformResponse";
  }

  static const char* value(const ::neo_srvs::UnlockPlatformResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::neo_srvs::UnlockPlatformResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool success\n"
"\n"
;
  }

  static const char* value(const ::neo_srvs::UnlockPlatformResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::neo_srvs::UnlockPlatformResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct UnlockPlatformResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::neo_srvs::UnlockPlatformResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::neo_srvs::UnlockPlatformResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NEO_SRVS_MESSAGE_UNLOCKPLATFORMRESPONSE_H
