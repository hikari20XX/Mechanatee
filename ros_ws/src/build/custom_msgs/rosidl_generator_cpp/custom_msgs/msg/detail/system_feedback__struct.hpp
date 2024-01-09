// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/SystemFeedback.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SYSTEM_FEEDBACK__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SYSTEM_FEEDBACK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__SystemFeedback __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__SystemFeedback __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SystemFeedback_
{
  using Type = SystemFeedback_<ContainerAllocator>;

  explicit SystemFeedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sec = 0l;
      this->nanosec = 0ul;
      this->current_position = 0.0f;
      this->current_velocity = 0.0f;
      this->current_state = 0.0;
      this->desired_state = 0.0;
      this->error = 0.0;
    }
  }

  explicit SystemFeedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sec = 0l;
      this->nanosec = 0ul;
      this->current_position = 0.0f;
      this->current_velocity = 0.0f;
      this->current_state = 0.0;
      this->desired_state = 0.0;
      this->error = 0.0;
    }
  }

  // field types and members
  using _sec_type =
    int32_t;
  _sec_type sec;
  using _nanosec_type =
    uint32_t;
  _nanosec_type nanosec;
  using _current_position_type =
    float;
  _current_position_type current_position;
  using _current_velocity_type =
    float;
  _current_velocity_type current_velocity;
  using _current_state_type =
    double;
  _current_state_type current_state;
  using _desired_state_type =
    double;
  _desired_state_type desired_state;
  using _error_type =
    double;
  _error_type error;

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
  Type & set__current_position(
    const float & _arg)
  {
    this->current_position = _arg;
    return *this;
  }
  Type & set__current_velocity(
    const float & _arg)
  {
    this->current_velocity = _arg;
    return *this;
  }
  Type & set__current_state(
    const double & _arg)
  {
    this->current_state = _arg;
    return *this;
  }
  Type & set__desired_state(
    const double & _arg)
  {
    this->desired_state = _arg;
    return *this;
  }
  Type & set__error(
    const double & _arg)
  {
    this->error = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::SystemFeedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::SystemFeedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::SystemFeedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::SystemFeedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::SystemFeedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::SystemFeedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::SystemFeedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::SystemFeedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::SystemFeedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::SystemFeedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__SystemFeedback
    std::shared_ptr<custom_msgs::msg::SystemFeedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__SystemFeedback
    std::shared_ptr<custom_msgs::msg::SystemFeedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SystemFeedback_ & other) const
  {
    if (this->sec != other.sec) {
      return false;
    }
    if (this->nanosec != other.nanosec) {
      return false;
    }
    if (this->current_position != other.current_position) {
      return false;
    }
    if (this->current_velocity != other.current_velocity) {
      return false;
    }
    if (this->current_state != other.current_state) {
      return false;
    }
    if (this->desired_state != other.desired_state) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    return true;
  }
  bool operator!=(const SystemFeedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SystemFeedback_

// alias to use template instance with default allocator
using SystemFeedback =
  custom_msgs::msg::SystemFeedback_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SYSTEM_FEEDBACK__STRUCT_HPP_
