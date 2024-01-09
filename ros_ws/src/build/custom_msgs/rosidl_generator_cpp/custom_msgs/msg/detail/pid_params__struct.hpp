// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/PIDParams.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__PID_PARAMS__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__PID_PARAMS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__PIDParams __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__PIDParams __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PIDParams_
{
  using Type = PIDParams_<ContainerAllocator>;

  explicit PIDParams_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sec = 0l;
      this->nanosec = 0ul;
      this->p_value = 0.0;
      this->i_value = 0.0;
      this->d_value = 0.0;
      this->integral_limit_upper = 0.0;
      this->integral_limit_lower = 0.0;
    }
  }

  explicit PIDParams_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sec = 0l;
      this->nanosec = 0ul;
      this->p_value = 0.0;
      this->i_value = 0.0;
      this->d_value = 0.0;
      this->integral_limit_upper = 0.0;
      this->integral_limit_lower = 0.0;
    }
  }

  // field types and members
  using _sec_type =
    int32_t;
  _sec_type sec;
  using _nanosec_type =
    uint32_t;
  _nanosec_type nanosec;
  using _p_value_type =
    double;
  _p_value_type p_value;
  using _i_value_type =
    double;
  _i_value_type i_value;
  using _d_value_type =
    double;
  _d_value_type d_value;
  using _integral_limit_upper_type =
    double;
  _integral_limit_upper_type integral_limit_upper;
  using _integral_limit_lower_type =
    double;
  _integral_limit_lower_type integral_limit_lower;

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
  Type & set__p_value(
    const double & _arg)
  {
    this->p_value = _arg;
    return *this;
  }
  Type & set__i_value(
    const double & _arg)
  {
    this->i_value = _arg;
    return *this;
  }
  Type & set__d_value(
    const double & _arg)
  {
    this->d_value = _arg;
    return *this;
  }
  Type & set__integral_limit_upper(
    const double & _arg)
  {
    this->integral_limit_upper = _arg;
    return *this;
  }
  Type & set__integral_limit_lower(
    const double & _arg)
  {
    this->integral_limit_lower = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::PIDParams_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::PIDParams_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::PIDParams_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::PIDParams_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::PIDParams_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::PIDParams_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::PIDParams_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::PIDParams_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::PIDParams_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::PIDParams_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__PIDParams
    std::shared_ptr<custom_msgs::msg::PIDParams_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__PIDParams
    std::shared_ptr<custom_msgs::msg::PIDParams_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PIDParams_ & other) const
  {
    if (this->sec != other.sec) {
      return false;
    }
    if (this->nanosec != other.nanosec) {
      return false;
    }
    if (this->p_value != other.p_value) {
      return false;
    }
    if (this->i_value != other.i_value) {
      return false;
    }
    if (this->d_value != other.d_value) {
      return false;
    }
    if (this->integral_limit_upper != other.integral_limit_upper) {
      return false;
    }
    if (this->integral_limit_lower != other.integral_limit_lower) {
      return false;
    }
    return true;
  }
  bool operator!=(const PIDParams_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PIDParams_

// alias to use template instance with default allocator
using PIDParams =
  custom_msgs::msg::PIDParams_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__PID_PARAMS__STRUCT_HPP_
