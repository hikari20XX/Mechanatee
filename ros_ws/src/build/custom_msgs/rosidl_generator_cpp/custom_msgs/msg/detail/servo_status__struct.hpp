// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/ServoStatus.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SERVO_STATUS__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SERVO_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__ServoStatus __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__ServoStatus __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ServoStatus_
{
  using Type = ServoStatus_<ContainerAllocator>;

  explicit ServoStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sec = 0l;
      this->nanosec = 0ul;
      this->servo_id = "";
      this->position = 0.0;
      this->speed = 0.0;
      this->load = 0.0;
      this->temperature = 0.0;
      this->voltage = 0.0;
      this->error_status = 0l;
      this->additional_info = "";
    }
  }

  explicit ServoStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : servo_id(_alloc),
    additional_info(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sec = 0l;
      this->nanosec = 0ul;
      this->servo_id = "";
      this->position = 0.0;
      this->speed = 0.0;
      this->load = 0.0;
      this->temperature = 0.0;
      this->voltage = 0.0;
      this->error_status = 0l;
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
  using _servo_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _servo_id_type servo_id;
  using _position_type =
    double;
  _position_type position;
  using _speed_type =
    double;
  _speed_type speed;
  using _load_type =
    double;
  _load_type load;
  using _temperature_type =
    double;
  _temperature_type temperature;
  using _voltage_type =
    double;
  _voltage_type voltage;
  using _error_status_type =
    int32_t;
  _error_status_type error_status;
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
  Type & set__servo_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->servo_id = _arg;
    return *this;
  }
  Type & set__position(
    const double & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__speed(
    const double & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__load(
    const double & _arg)
  {
    this->load = _arg;
    return *this;
  }
  Type & set__temperature(
    const double & _arg)
  {
    this->temperature = _arg;
    return *this;
  }
  Type & set__voltage(
    const double & _arg)
  {
    this->voltage = _arg;
    return *this;
  }
  Type & set__error_status(
    const int32_t & _arg)
  {
    this->error_status = _arg;
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
    custom_msgs::msg::ServoStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::ServoStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::ServoStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::ServoStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::ServoStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::ServoStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::ServoStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::ServoStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::ServoStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::ServoStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__ServoStatus
    std::shared_ptr<custom_msgs::msg::ServoStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__ServoStatus
    std::shared_ptr<custom_msgs::msg::ServoStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ServoStatus_ & other) const
  {
    if (this->sec != other.sec) {
      return false;
    }
    if (this->nanosec != other.nanosec) {
      return false;
    }
    if (this->servo_id != other.servo_id) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->load != other.load) {
      return false;
    }
    if (this->temperature != other.temperature) {
      return false;
    }
    if (this->voltage != other.voltage) {
      return false;
    }
    if (this->error_status != other.error_status) {
      return false;
    }
    if (this->additional_info != other.additional_info) {
      return false;
    }
    return true;
  }
  bool operator!=(const ServoStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ServoStatus_

// alias to use template instance with default allocator
using ServoStatus =
  custom_msgs::msg::ServoStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SERVO_STATUS__STRUCT_HPP_
