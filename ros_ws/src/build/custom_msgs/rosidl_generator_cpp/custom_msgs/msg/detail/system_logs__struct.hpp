// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/SystemLogs.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SYSTEM_LOGS__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SYSTEM_LOGS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__SystemLogs __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__SystemLogs __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SystemLogs_
{
  using Type = SystemLogs_<ContainerAllocator>;

  explicit SystemLogs_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sec = 0l;
      this->nanosec = 0ul;
      this->component_id = "";
      this->log_level = 0l;
      this->message = "";
      this->details = "";
      this->time_since_last_log = 0.0f;
      this->max_log_frequency = 0.0f;
    }
  }

  explicit SystemLogs_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : component_id(_alloc),
    message(_alloc),
    details(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sec = 0l;
      this->nanosec = 0ul;
      this->component_id = "";
      this->log_level = 0l;
      this->message = "";
      this->details = "";
      this->time_since_last_log = 0.0f;
      this->max_log_frequency = 0.0f;
    }
  }

  // field types and members
  using _sec_type =
    int32_t;
  _sec_type sec;
  using _nanosec_type =
    uint32_t;
  _nanosec_type nanosec;
  using _component_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _component_id_type component_id;
  using _log_level_type =
    int32_t;
  _log_level_type log_level;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _details_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _details_type details;
  using _time_since_last_log_type =
    float;
  _time_since_last_log_type time_since_last_log;
  using _max_log_frequency_type =
    float;
  _max_log_frequency_type max_log_frequency;

  // setters for named parameter idiom
  Type & set__sec(
    const int32_t & _arg)
  {
    this->sec = _arg;
    return *this;
  }
  Type & set__nanosec(
    const uint32_t & _arg)
  {
    this->nanosec = _arg;
    return *this;
  }
  Type & set__component_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->component_id = _arg;
    return *this;
  }
  Type & set__log_level(
    const int32_t & _arg)
  {
    this->log_level = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }
  Type & set__details(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->details = _arg;
    return *this;
  }
  Type & set__time_since_last_log(
    const float & _arg)
  {
    this->time_since_last_log = _arg;
    return *this;
  }
  Type & set__max_log_frequency(
    const float & _arg)
  {
    this->max_log_frequency = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::SystemLogs_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::SystemLogs_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::SystemLogs_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::SystemLogs_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::SystemLogs_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::SystemLogs_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::SystemLogs_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::SystemLogs_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::SystemLogs_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::SystemLogs_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__SystemLogs
    std::shared_ptr<custom_msgs::msg::SystemLogs_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__SystemLogs
    std::shared_ptr<custom_msgs::msg::SystemLogs_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SystemLogs_ & other) const
  {
    if (this->sec != other.sec) {
      return false;
    }
    if (this->nanosec != other.nanosec) {
      return false;
    }
    if (this->component_id != other.component_id) {
      return false;
    }
    if (this->log_level != other.log_level) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->details != other.details) {
      return false;
    }
    if (this->time_since_last_log != other.time_since_last_log) {
      return false;
    }
    if (this->max_log_frequency != other.max_log_frequency) {
      return false;
    }
    return true;
  }
  bool operator!=(const SystemLogs_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SystemLogs_

// alias to use template instance with default allocator
using SystemLogs =
  custom_msgs::msg::SystemLogs_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SYSTEM_LOGS__STRUCT_HPP_
