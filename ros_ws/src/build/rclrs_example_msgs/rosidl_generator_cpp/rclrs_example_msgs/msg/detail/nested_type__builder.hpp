// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rclrs_example_msgs:msg/NestedType.idl
// generated code does not contain a copyright notice

#ifndef RCLRS_EXAMPLE_MSGS__MSG__DETAIL__NESTED_TYPE__BUILDER_HPP_
#define RCLRS_EXAMPLE_MSGS__MSG__DETAIL__NESTED_TYPE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rclrs_example_msgs/msg/detail/nested_type__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rclrs_example_msgs
{

namespace msg
{

namespace builder
{

class Init_NestedType_effect
{
public:
  Init_NestedType_effect()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rclrs_example_msgs::msg::NestedType effect(::rclrs_example_msgs::msg::NestedType::_effect_type arg)
  {
    msg_.effect = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rclrs_example_msgs::msg::NestedType msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rclrs_example_msgs::msg::NestedType>()
{
  return rclrs_example_msgs::msg::builder::Init_NestedType_effect();
}

}  // namespace rclrs_example_msgs

#endif  // RCLRS_EXAMPLE_MSGS__MSG__DETAIL__NESTED_TYPE__BUILDER_HPP_
