// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/PWMCommand.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__PWM_COMMAND__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__PWM_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__PWMCommand __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__PWMCommand __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PWMCommand_
{
  using Type = PWMCommand_<ContainerAllocator>;

  explicit PWMCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sec = 0l;
      this->nanosec = 0ul;
      this->pwm_value = 0l;
    }
  }

  explicit PWMCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sec = 0l;
      this->nanosec = 0ul;
      this->pwm_value = 0l;
    }
  }

  // field types and members
  using _sec_type =
    int32_t;
  _sec_type sec;
  using _nanosec_type =
    uint32_t;
  _nanosec_type nanosec;
  using _pwm_value_type =
    int32_t;
  _pwm_value_type pwm_value;

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
  Type & set__pwm_value(
    const int32_t & _arg)
  {
    this->pwm_value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::PWMCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::PWMCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::PWMCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::PWMCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::PWMCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::PWMCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::PWMCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::PWMCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::PWMCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::PWMCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__PWMCommand
    std::shared_ptr<custom_msgs::msg::PWMCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__PWMCommand
    std::shared_ptr<custom_msgs::msg::PWMCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PWMCommand_ & other) const
  {
    if (this->sec != other.sec) {
      return false;
    }
    if (this->nanosec != other.nanosec) {
      return false;
    }
    if (this->pwm_value != other.pwm_value) {
      return false;
    }
    return true;
  }
  bool operator!=(const PWMCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PWMCommand_

// alias to use template instance with default allocator
using PWMCommand =
  custom_msgs::msg::PWMCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__PWM_COMMAND__STRUCT_HPP_
