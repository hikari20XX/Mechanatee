// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/UpdatedPIDParams.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__UPDATED_PID_PARAMS__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__UPDATED_PID_PARAMS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__UpdatedPIDParams __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__UpdatedPIDParams __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UpdatedPIDParams_
{
  using Type = UpdatedPIDParams_<ContainerAllocator>;

  explicit UpdatedPIDParams_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sec = 0l;
      this->nanosec = 0ul;
      this->updated_p_value = 0.0;
      this->updated_i_value = 0.0;
      this->updated_d_value = 0.0;
    }
  }

  explicit UpdatedPIDParams_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sec = 0l;
      this->nanosec = 0ul;
      this->updated_p_value = 0.0;
      this->updated_i_value = 0.0;
      this->updated_d_value = 0.0;
    }
  }

  // field types and members
  using _sec_type =
    int32_t;
  _sec_type sec;
  using _nanosec_type =
    uint32_t;
  _nanosec_type nanosec;
  using _updated_p_value_type =
    double;
  _updated_p_value_type updated_p_value;
  using _updated_i_value_type =
    double;
  _updated_i_value_type updated_i_value;
  using _updated_d_value_type =
    double;
  _updated_d_value_type updated_d_value;

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
  Type & set__updated_p_value(
    const double & _arg)
  {
    this->updated_p_value = _arg;
    return *this;
  }
  Type & set__updated_i_value(
    const double & _arg)
  {
    this->updated_i_value = _arg;
    return *this;
  }
  Type & set__updated_d_value(
    const double & _arg)
  {
    this->updated_d_value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::UpdatedPIDParams_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::UpdatedPIDParams_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::UpdatedPIDParams_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::UpdatedPIDParams_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::UpdatedPIDParams_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::UpdatedPIDParams_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::UpdatedPIDParams_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::UpdatedPIDParams_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::UpdatedPIDParams_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::UpdatedPIDParams_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__UpdatedPIDParams
    std::shared_ptr<custom_msgs::msg::UpdatedPIDParams_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__UpdatedPIDParams
    std::shared_ptr<custom_msgs::msg::UpdatedPIDParams_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UpdatedPIDParams_ & other) const
  {
    if (this->sec != other.sec) {
      return false;
    }
    if (this->nanosec != other.nanosec) {
      return false;
    }
    if (this->updated_p_value != other.updated_p_value) {
      return false;
    }
    if (this->updated_i_value != other.updated_i_value) {
      return false;
    }
    if (this->updated_d_value != other.updated_d_value) {
      return false;
    }
    return true;
  }
  bool operator!=(const UpdatedPIDParams_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UpdatedPIDParams_

// alias to use template instance with default allocator
using UpdatedPIDParams =
  custom_msgs::msg::UpdatedPIDParams_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__UPDATED_PID_PARAMS__STRUCT_HPP_
