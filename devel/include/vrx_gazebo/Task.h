// Generated by gencpp from file vrx_gazebo/Task.msg
// DO NOT EDIT!


#ifndef VRX_GAZEBO_MESSAGE_TASK_H
#define VRX_GAZEBO_MESSAGE_TASK_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace vrx_gazebo
{
template <class ContainerAllocator>
struct Task_
{
  typedef Task_<ContainerAllocator> Type;

  Task_()
    : name()
    , state()
    , ready_time()
    , running_time()
    , elapsed_time()
    , remaining_time()
    , timed_out(false)
    , num_collisions(0)
    , score(0.0)  {
    }
  Task_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , state(_alloc)
    , ready_time()
    , running_time()
    , elapsed_time()
    , remaining_time()
    , timed_out(false)
    , num_collisions(0)
    , score(0.0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _name_type;
  _name_type name;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _state_type;
  _state_type state;

   typedef ros::Time _ready_time_type;
  _ready_time_type ready_time;

   typedef ros::Time _running_time_type;
  _running_time_type running_time;

   typedef ros::Duration _elapsed_time_type;
  _elapsed_time_type elapsed_time;

   typedef ros::Duration _remaining_time_type;
  _remaining_time_type remaining_time;

   typedef uint8_t _timed_out_type;
  _timed_out_type timed_out;

   typedef uint32_t _num_collisions_type;
  _num_collisions_type num_collisions;

   typedef double _score_type;
  _score_type score;





  typedef boost::shared_ptr< ::vrx_gazebo::Task_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrx_gazebo::Task_<ContainerAllocator> const> ConstPtr;

}; // struct Task_

typedef ::vrx_gazebo::Task_<std::allocator<void> > Task;

typedef boost::shared_ptr< ::vrx_gazebo::Task > TaskPtr;
typedef boost::shared_ptr< ::vrx_gazebo::Task const> TaskConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vrx_gazebo::Task_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vrx_gazebo::Task_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::vrx_gazebo::Task_<ContainerAllocator1> & lhs, const ::vrx_gazebo::Task_<ContainerAllocator2> & rhs)
{
  return lhs.name == rhs.name &&
    lhs.state == rhs.state &&
    lhs.ready_time == rhs.ready_time &&
    lhs.running_time == rhs.running_time &&
    lhs.elapsed_time == rhs.elapsed_time &&
    lhs.remaining_time == rhs.remaining_time &&
    lhs.timed_out == rhs.timed_out &&
    lhs.num_collisions == rhs.num_collisions &&
    lhs.score == rhs.score;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::vrx_gazebo::Task_<ContainerAllocator1> & lhs, const ::vrx_gazebo::Task_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace vrx_gazebo

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::vrx_gazebo::Task_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrx_gazebo::Task_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vrx_gazebo::Task_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vrx_gazebo::Task_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrx_gazebo::Task_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrx_gazebo::Task_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vrx_gazebo::Task_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8b3267cadc02a4d8846adeb79baa09a1";
  }

  static const char* value(const ::vrx_gazebo::Task_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8b3267cadc02a4d8ULL;
  static const uint64_t static_value2 = 0x846adeb79baa09a1ULL;
};

template<class ContainerAllocator>
struct DataType< ::vrx_gazebo::Task_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vrx_gazebo/Task";
  }

  static const char* value(const ::vrx_gazebo::Task_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vrx_gazebo::Task_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Task name.\n"
"string name\n"
"\n"
"# Task state.\n"
"string state\n"
"\n"
"# Absolute sim time when this task will be in \"ready\" state (ROS time).\n"
"time ready_time\n"
"\n"
"# Absolute sim time when this task will be in \"running\" state (ROS time).\n"
"time running_time\n"
"\n"
"# Time elapsed since task started (ROS time). This is the current sim time\n"
"# minus start time.\n"
"# When the elapsed time reaches the task timeout, `timed_out` is set to true.\n"
"duration elapsed_time\n"
"\n"
"# Remaining time until the task times out (ROS time).\n"
"duration remaining_time\n"
"\n"
"# True if task timed out.\n"
"bool timed_out\n"
"\n"
"# Number of collisions.\n"
"uint32 num_collisions\n"
"\n"
"# The score.\n"
"float64 score\n"
;
  }

  static const char* value(const ::vrx_gazebo::Task_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vrx_gazebo::Task_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.state);
      stream.next(m.ready_time);
      stream.next(m.running_time);
      stream.next(m.elapsed_time);
      stream.next(m.remaining_time);
      stream.next(m.timed_out);
      stream.next(m.num_collisions);
      stream.next(m.score);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Task_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vrx_gazebo::Task_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vrx_gazebo::Task_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.name);
    s << indent << "state: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.state);
    s << indent << "ready_time: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.ready_time);
    s << indent << "running_time: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.running_time);
    s << indent << "elapsed_time: ";
    Printer<ros::Duration>::stream(s, indent + "  ", v.elapsed_time);
    s << indent << "remaining_time: ";
    Printer<ros::Duration>::stream(s, indent + "  ", v.remaining_time);
    s << indent << "timed_out: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.timed_out);
    s << indent << "num_collisions: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.num_collisions);
    s << indent << "score: ";
    Printer<double>::stream(s, indent + "  ", v.score);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VRX_GAZEBO_MESSAGE_TASK_H
