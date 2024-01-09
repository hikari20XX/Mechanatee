// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/SystemFeedback.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SYSTEM_FEEDBACK__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SYSTEM_FEEDBACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_msgs/msg/detail/system_feedback__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_SystemFeedback_error
{
public:
  explicit Init_SystemFeedback_error(::custom_msgs::msg::SystemFeedback & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::SystemFeedback error(::custom_msgs::msg::SystemFeedback::_error_type arg)
  {
    msg_.error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::SystemFeedback msg_;
};

class Init_SystemFeedback_desired_state
{
public:
  explicit Init_SystemFeedback_desired_state(::custom_msgs::msg::SystemFeedback & msg)
  : msg_(msg)
  {}
  Init_SystemFeedback_error desired_state(::custom_msgs::msg::SystemFeedback::_desired_state_type arg)
  {
    msg_.desired_state = std::move(arg);
    return Init_SystemFeedback_error(msg_);
  }

private:
  ::custom_msgs::msg::SystemFeedback msg_;
};

class Init_SystemFeedback_current_state
{
public:
  explicit Init_SystemFeedback_current_state(::custom_msgs::msg::SystemFeedback & msg)
  : msg_(msg)
  {}
  Init_SystemFeedback_desired_state current_state(::custom_msgs::msg::SystemFeedback::_current_state_type arg)
  {
    msg_.current_state = std::move(arg);
    return Init_SystemFeedback_desired_state(msg_);
  }

private:
  ::custom_msgs::msg::SystemFeedback msg_;
};

class Init_SystemFeedback_current_velocity
{
public:
  explicit Init_SystemFeedback_current_velocity(::custom_msgs::msg::SystemFeedback & msg)
  : msg_(msg)
  {}
  Init_SystemFeedback_current_state current_velocity(::custom_msgs::msg::SystemFeedback::_current_velocity_type arg)
  {
    msg_.current_velocity = std::move(arg);
    return Init_SystemFeedback_current_state(msg_);
  }

private:
  ::custom_msgs::msg::SystemFeedback msg_;
};

class Init_SystemFeedback_current_position
{
public:
  explicit Init_SystemFeedback_current_position(::custom_msgs::msg::SystemFeedback & msg)
  : msg_(msg)
  {}
  Init_SystemFeedback_current_velocity current_position(::custom_msgs::msg::SystemFeedback::_current_position_type arg)
  {
    msg_.current_position = std::move(arg);
    return Init_SystemFeedback_current_velocity(msg_);
  }

private:
  ::custom_msgs::msg::SystemFeedback msg_;
};

class Init_SystemFeedback_nanosec
{
public:
  explicit Init_SystemFeedback_nanosec(::custom_msgs::msg::SystemFeedback & msg)
  : msg_(msg)
  {}
  Init_SystemFeedback_current_position nanosec(::custom_msgs::msg::SystemFeedback::_nanosec_type arg)
  {
    msg_.nanosec = std::move(arg);
    return Init_SystemFeedback_current_position(msg_);
  }

private:
  ::custom_msgs::msg::SystemFeedback msg_;
};

class Init_SystemFeedback_sec
{
public:
  Init_SystemFeedback_sec()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SystemFeedback_nanosec sec(::custom_msgs::msg::SystemFeedback::_sec_type arg)
  {
    msg_.sec = std::move(arg);
    return Init_SystemFeedback_nanosec(msg_);
  }

private:
  ::custom_msgs::msg::SystemFeedback msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::SystemFeedback>()
{
  return custom_msgs::msg::builder::Init_SystemFeedback_sec();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SYSTEM_FEEDBACK__BUILDER_HPP_
