// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/PWMCommand.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__PWM_COMMAND__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__PWM_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_msgs/msg/detail/pwm_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_PWMCommand_pwm_value
{
public:
  explicit Init_PWMCommand_pwm_value(::custom_msgs::msg::PWMCommand & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::PWMCommand pwm_value(::custom_msgs::msg::PWMCommand::_pwm_value_type arg)
  {
    msg_.pwm_value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::PWMCommand msg_;
};

class Init_PWMCommand_nanosec
{
public:
  explicit Init_PWMCommand_nanosec(::custom_msgs::msg::PWMCommand & msg)
  : msg_(msg)
  {}
  Init_PWMCommand_pwm_value nanosec(::custom_msgs::msg::PWMCommand::_nanosec_type arg)
  {
    msg_.nanosec = std::move(arg);
    return Init_PWMCommand_pwm_value(msg_);
  }

private:
  ::custom_msgs::msg::PWMCommand msg_;
};

class Init_PWMCommand_sec
{
public:
  Init_PWMCommand_sec()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PWMCommand_nanosec sec(::custom_msgs::msg::PWMCommand::_sec_type arg)
  {
    msg_.sec = std::move(arg);
    return Init_PWMCommand_nanosec(msg_);
  }

private:
  ::custom_msgs::msg::PWMCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::PWMCommand>()
{
  return custom_msgs::msg::builder::Init_PWMCommand_sec();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__PWM_COMMAND__BUILDER_HPP_
