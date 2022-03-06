// Generated by gencpp from file ros_x_habitat/ResetAgentRequest.msg
// DO NOT EDIT!


#ifndef ROS_X_HABITAT_MESSAGE_RESETAGENTREQUEST_H
#define ROS_X_HABITAT_MESSAGE_RESETAGENTREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ros_x_habitat
{
template <class ContainerAllocator>
struct ResetAgentRequest_
{
  typedef ResetAgentRequest_<ContainerAllocator> Type;

  ResetAgentRequest_()
    : reset(0)
    , seed(0)  {
    }
  ResetAgentRequest_(const ContainerAllocator& _alloc)
    : reset(0)
    , seed(0)  {
  (void)_alloc;
    }



   typedef int16_t _reset_type;
  _reset_type reset;

   typedef int32_t _seed_type;
  _seed_type seed;





  typedef boost::shared_ptr< ::ros_x_habitat::ResetAgentRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ros_x_habitat::ResetAgentRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ResetAgentRequest_

typedef ::ros_x_habitat::ResetAgentRequest_<std::allocator<void> > ResetAgentRequest;

typedef boost::shared_ptr< ::ros_x_habitat::ResetAgentRequest > ResetAgentRequestPtr;
typedef boost::shared_ptr< ::ros_x_habitat::ResetAgentRequest const> ResetAgentRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ros_x_habitat::ResetAgentRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ros_x_habitat::ResetAgentRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ros_x_habitat::ResetAgentRequest_<ContainerAllocator1> & lhs, const ::ros_x_habitat::ResetAgentRequest_<ContainerAllocator2> & rhs)
{
  return lhs.reset == rhs.reset &&
    lhs.seed == rhs.seed;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ros_x_habitat::ResetAgentRequest_<ContainerAllocator1> & lhs, const ::ros_x_habitat::ResetAgentRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ros_x_habitat

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ros_x_habitat::ResetAgentRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_x_habitat::ResetAgentRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_x_habitat::ResetAgentRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_x_habitat::ResetAgentRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_x_habitat::ResetAgentRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_x_habitat::ResetAgentRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ros_x_habitat::ResetAgentRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ece443822a688f9f324e3458e0560a90";
  }

  static const char* value(const ::ros_x_habitat::ResetAgentRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xece443822a688f9fULL;
  static const uint64_t static_value2 = 0x324e3458e0560a90ULL;
};

template<class ContainerAllocator>
struct DataType< ::ros_x_habitat::ResetAgentRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ros_x_habitat/ResetAgentRequest";
  }

  static const char* value(const ::ros_x_habitat::ResetAgentRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ros_x_habitat::ResetAgentRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int16 reset # 0 for reset, 1 for shutdown\n"
"int32 seed # seed to instantiate agent\n"
;
  }

  static const char* value(const ::ros_x_habitat::ResetAgentRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ros_x_habitat::ResetAgentRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.reset);
      stream.next(m.seed);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ResetAgentRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ros_x_habitat::ResetAgentRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ros_x_habitat::ResetAgentRequest_<ContainerAllocator>& v)
  {
    s << indent << "reset: ";
    Printer<int16_t>::stream(s, indent + "  ", v.reset);
    s << indent << "seed: ";
    Printer<int32_t>::stream(s, indent + "  ", v.seed);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROS_X_HABITAT_MESSAGE_RESETAGENTREQUEST_H
