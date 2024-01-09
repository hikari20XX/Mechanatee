// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/MotorAlerts.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__MOTOR_ALERTS__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__MOTOR_ALERTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__MotorAlerts __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__MotorAlerts __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorAlerts_
{
  using Type = MotorAlerts_<ContainerAllocator>;

  explicit MotorAlerts_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sec = 0l;
      this->nanosec = 0ul;
      this->motor_id = "";
      this->overheating = false;
      this->electrical_fault = false;
      this->stall = false;
      this->overcurrent = false;
      this->obstruction = false;
      this->encoder_fault = false;
      this->runtime_exceeded = false;
      this->additional_info = "";
    }
  }

  explicit MotorAlerts_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : motor_id(_alloc),
    additional_info(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sec = 0l;
      this->nanosec = 0ul;
      this->motor_id = "";
      this->overheating = false;
      this->electrical_fault = false;
      this->stall = false;
      this->overcurrent = false;
      this->obstruction = false;
      this->encoder_fault = false;
      this->runtime_exceeded = false;
      this->additional_info = "";
    }
  }

  // field types and members
  using _sec_type =
    int32_t;
  _sec_type sec;
  using _nanosec_type =
    uint32_t;
  _nanosec_type nanosec;
  using _motor_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _motor_id_type motor_id;
  using _overheating_type =
    bool;
  _overheating_type overheating;
  using _electrical_fault_type =
    bool;
  _electrical_fault_type electrical_fault;
  using _stall_type =
    bool;
  _stall_type stall;
  using _overcurrent_type =
    bool;
  _overcurrent_type overcurrent;
  using _obstruction_type =
    bool;
  _obstruction_type obstruction;
  using _encoder_fault_type =
    bool;
  _encoder_fault_type encoder_fault;
  using _runtime_exceeded_type =
    bool;
  _runtime_exceeded_type runtime_exceeded;
  using _additional_info_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _additional_info_type additional_info;

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
  Type & set__motor_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->motor_id = _arg;
    return *this;
  }
  Type & set__overheating(
    const bool & _arg)
  {
    this->overheating = _arg;
    return *this;
  }
  Type & set__electrical_fault(
    const bool & _arg)
  {
    this->electrical_fault = _arg;
    return *this;
  }
  Type & set__stall(
    const bool & _arg)
  {
    this->stall = _arg;
    return *this;
  }
  Type & set__overcurrent(
    const bool & _arg)
  {
    this->overcurrent = _arg;
    return *this;
  }
  Type & set__obstruction(
    const bool & _arg)
  {
    this->obstruction = _arg;
    return *this;
  }
  Type & set__encoder_fault(
    const bool & _arg)
  {
    this->encoder_fault = _arg;
    return *this;
  }
  Type & set__runtime_exceeded(
    const bool & _arg)
  {
    this->runtime_exceeded = _arg;
    return *this;
  }
  Type & set__additional_info(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->additional_info = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::MotorAlerts_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::MotorAlerts_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::MotorAlerts_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::MotorAlerts_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::MotorAlerts_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::MotorAlerts_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::MotorAlerts_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::MotorAlerts_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::MotorAlerts_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::MotorAlerts_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__MotorAlerts
    std::shared_ptr<custom_msgs::msg::MotorAlerts_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__MotorAlerts
    std::shared_ptr<custom_msgs::msg::MotorAlerts_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorAlerts_ & other) const
  {
    if (this->sec != other.sec) {
      return false;
    }
    if (this->nanosec != other.nanosec) {
      return false;
    }
    if (this->motor_id != other.motor_id) {
      return false;
    }
    if (this->overheating != other.overheating) {
      return false;
    }
    if (this->electrical_fault != other.electrical_fault) {
      return false;
    }
    if (this->stall != other.stall) {
      return false;
    }
    if (this->overcurrent != other.overcurrent) {
      return false;
    }
    if (this->obstruction != other.obstruction) {
      return false;
    }
    if (this->encoder_fault != other.encoder_fault) {
      return false;
    }
    if (this->runtime_exceeded != other.runtime_exceeded) {
      return false;
    }
    if (this->additional_info != other.additional_info) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorAlerts_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorAlerts_

// alias to use template instance with default allocator
using MotorAlerts =
  custom_msgs::msg::MotorAlerts_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__MOTOR_ALERTS__STRUCT_HPP_
