// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/TargetPosition.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__TARGET_POSITION__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__TARGET_POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_msgs/msg/detail/target_position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_TargetPosition_velocity
{
public:
  explicit Init_TargetPosition_velocity(::custom_msgs::msg::TargetPosition & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::TargetPosition velocity(::custom_msgs::msg::TargetPosition::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::TargetPosition msg_;
};

class Init_TargetPosition_position
{
public:
  explicit Init_TargetPosition_position(::custom_msgs::msg::TargetPosition & msg)
  : msg_(msg)
  {}
  Init_TargetPosition_velocity position(::custom_msgs::msg::TargetPosition::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_TargetPosition_velocity(msg_);
  }

private:
  ::custom_msgs::msg::TargetPosition msg_;
};

class Init_TargetPosition_nanosec
{
public:
  explicit Init_TargetPosition_nanosec(::custom_msgs::msg::TargetPosition & msg)
  : msg_(msg)
  {}
  Init_TargetPosition_position nanosec(::custom_msgs::msg::TargetPosition::_nanosec_type arg)
  {
    msg_.nanosec = std::move(arg);
    return Init_TargetPosition_position(msg_);
  }

private:
  ::custom_msgs::msg::TargetPosition msg_;
};

class Init_TargetPosition_sec
{
public:
  Init_TargetPosition_sec()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TargetPosition_nanosec sec(::custom_msgs::msg::TargetPosition::_sec_type arg)
  {
    msg_.sec = std::move(arg);
    return Init_TargetPosition_nanosec(msg_);
  }

private:
  ::custom_msgs::msg::TargetPosition msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::TargetPosition>()
{
  return custom_msgs::msg::builder::Init_TargetPosition_sec();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__TARGET_POSITION__BUILDER_HPP_
