// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/ServoSetpoint.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SERVO_SETPOINT__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SERVO_SETPOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_msgs/msg/detail/servo_setpoint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_ServoSetpoint_position
{
public:
  explicit Init_ServoSetpoint_position(::custom_msgs::msg::ServoSetpoint & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::ServoSetpoint position(::custom_msgs::msg::ServoSetpoint::_position_type arg)
  {
    msg_.position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::ServoSetpoint msg_;
};

class Init_ServoSetpoint_nanosec
{
public:
  explicit Init_ServoSetpoint_nanosec(::custom_msgs::msg::ServoSetpoint & msg)
  : msg_(msg)
  {}
  Init_ServoSetpoint_position nanosec(::custom_msgs::msg::ServoSetpoint::_nanosec_type arg)
  {
    msg_.nanosec = std::move(arg);
    return Init_ServoSetpoint_position(msg_);
  }

private:
  ::custom_msgs::msg::ServoSetpoint msg_;
};

class Init_ServoSetpoint_sec
{
public:
  Init_ServoSetpoint_sec()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ServoSetpoint_nanosec sec(::custom_msgs::msg::ServoSetpoint::_sec_type arg)
  {
    msg_.sec = std::move(arg);
    return Init_ServoSetpoint_nanosec(msg_);
  }

private:
  ::custom_msgs::msg::ServoSetpoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::ServoSetpoint>()
{
  return custom_msgs::msg::builder::Init_ServoSetpoint_sec();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SERVO_SETPOINT__BUILDER_HPP_
