// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/VoltageReading.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__VOLTAGE_READING__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__VOLTAGE_READING__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__VoltageReading __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__VoltageReading __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VoltageReading_
{
  using Type = VoltageReading_<ContainerAllocator>;

  explicit VoltageReading_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sec = 0l;
      this->nanosec = 0ul;
      this->voltage_value = 0.0f;
      this->sensor_id = "";
    }
  }

  explicit VoltageReading_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : sensor_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sec = 0l;
      this->nanosec = 0ul;
      this->voltage_value = 0.0f;
      this->sensor_id = "";
    }
  }

  // field types and members
  using _sec_type =
    int32_t;
  _sec_type sec;
  using _nanosec_type =
    uint32_t;
  _nanosec_type nanosec;
  using _voltage_value_type =
    float;
  _voltage_value_type voltage_value;
  using _sensor_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _sensor_id_type sensor_id;

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
  Type & set__voltage_value(
    const float & _arg)
  {
    this->voltage_value = _arg;
    return *this;
  }
  Type & set__sensor_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->sensor_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::VoltageReading_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::VoltageReading_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::VoltageReading_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::VoltageReading_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::VoltageReading_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::VoltageReading_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::VoltageReading_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::VoltageReading_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::VoltageReading_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::VoltageReading_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__VoltageReading
    std::shared_ptr<custom_msgs::msg::VoltageReading_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__VoltageReading
    std::shared_ptr<custom_msgs::msg::VoltageReading_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VoltageReading_ & other) const
  {
    if (this->sec != other.sec) {
      return false;
    }
    if (this->nanosec != other.nanosec) {
      return false;
    }
    if (this->voltage_value != other.voltage_value) {
      return false;
    }
    if (this->sensor_id != other.sensor_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const VoltageReading_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VoltageReading_

// alias to use template instance with default allocator
using VoltageReading =
  custom_msgs::msg::VoltageReading_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__VOLTAGE_READING__STRUCT_HPP_
