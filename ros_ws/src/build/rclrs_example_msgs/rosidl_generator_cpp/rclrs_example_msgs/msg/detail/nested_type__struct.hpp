// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rclrs_example_msgs:msg/NestedType.idl
// generated code does not contain a copyright notice

#ifndef RCLRS_EXAMPLE_MSGS__MSG__DETAIL__NESTED_TYPE__STRUCT_HPP_
#define RCLRS_EXAMPLE_MSGS__MSG__DETAIL__NESTED_TYPE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rclrs_example_msgs__msg__NestedType __attribute__((deprecated))
#else
# define DEPRECATED__rclrs_example_msgs__msg__NestedType __declspec(deprecated)
#endif

namespace rclrs_example_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NestedType_
{
  using Type = NestedType_<ContainerAllocator>;

  explicit NestedType_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->effect = "discombobulate";
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->effect = "";
    }
  }

  explicit NestedType_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : effect(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->effect = "discombobulate";
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->effect = "";
    }
  }

  // field types and members
  using _effect_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _effect_type effect;

  // setters for named parameter idiom
  Type & set__effect(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->effect = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rclrs_example_msgs::msg::NestedType_<ContainerAllocator> *;
  using ConstRawPtr =
    const rclrs_example_msgs::msg::NestedType_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rclrs_example_msgs::msg::NestedType_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rclrs_example_msgs::msg::NestedType_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rclrs_example_msgs::msg::NestedType_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rclrs_example_msgs::msg::NestedType_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rclrs_example_msgs::msg::NestedType_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rclrs_example_msgs::msg::NestedType_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rclrs_example_msgs::msg::NestedType_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rclrs_example_msgs::msg::NestedType_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rclrs_example_msgs__msg__NestedType
    std::shared_ptr<rclrs_example_msgs::msg::NestedType_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rclrs_example_msgs__msg__NestedType
    std::shared_ptr<rclrs_example_msgs::msg::NestedType_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NestedType_ & other) const
  {
    if (this->effect != other.effect) {
      return false;
    }
    return true;
  }
  bool operator!=(const NestedType_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NestedType_

// alias to use template instance with default allocator
using NestedType =
  rclrs_example_msgs::msg::NestedType_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rclrs_example_msgs

#endif  // RCLRS_EXAMPLE_MSGS__MSG__DETAIL__NESTED_TYPE__STRUCT_HPP_
