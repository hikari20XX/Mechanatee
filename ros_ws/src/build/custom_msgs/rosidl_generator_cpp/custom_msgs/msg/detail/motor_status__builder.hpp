// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/MotorStatus.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__MOTOR_STATUS__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__MOTOR_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_msgs/msg/detail/motor_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_MotorStatus_description
{
public:
  explicit Init_MotorStatus_description(::custom_msgs::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::MotorStatus description(::custom_msgs::msg::MotorStatus::_description_type arg)
  {
    msg_.description = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::MotorStatus msg_;
};

class Init_MotorStatus_error_code
{
public:
  explicit Init_MotorStatus_error_code(::custom_msgs::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_description error_code(::custom_msgs::msg::MotorStatus::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_MotorStatus_description(msg_);
  }

private:
  ::custom_msgs::msg::MotorStatus msg_;
};

class Init_MotorStatus_load_percentage
{
public:
  explicit Init_MotorStatus_load_percentage(::custom_msgs::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_error_code load_percentage(::custom_msgs::msg::MotorStatus::_load_percentage_type arg)
  {
    msg_.load_percentage = std::move(arg);
    return Init_MotorStatus_error_code(msg_);
  }

private:
  ::custom_msgs::msg::MotorStatus msg_;
};

class Init_MotorStatus_speed_rpm
{
public:
  explicit Init_MotorStatus_speed_rpm(::custom_msgs::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_load_percentage speed_rpm(::custom_msgs::msg::MotorStatus::_speed_rpm_type arg)
  {
    msg_.speed_rpm = std::move(arg);
    return Init_MotorStatus_load_percentage(msg_);
  }

private:
  ::custom_msgs::msg::MotorStatus msg_;
};

class Init_MotorStatus_state
{
public:
  explicit Init_MotorStatus_state(::custom_msgs::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_speed_rpm state(::custom_msgs::msg::MotorStatus::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_MotorStatus_speed_rpm(msg_);
  }

private:
  ::custom_msgs::msg::MotorStatus msg_;
};

class Init_MotorStatus_nanosec
{
public:
  explicit Init_MotorStatus_nanosec(::custom_msgs::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_state nanosec(::custom_msgs::msg::MotorStatus::_nanosec_type arg)
  {
    msg_.nanosec = std::move(arg);
    return Init_MotorStatus_state(msg_);
  }

private:
  ::custom_msgs::msg::MotorStatus msg_;
};

class Init_MotorStatus_sec
{
public:
  Init_MotorStatus_sec()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorStatus_nanosec sec(::custom_msgs::msg::MotorStatus::_sec_type arg)
  {
    msg_.sec = std::move(arg);
    return Init_MotorStatus_nanosec(msg_);
  }

private:
  ::custom_msgs::msg::MotorStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::MotorStatus>()
{
  return custom_msgs::msg::builder::Init_MotorStatus_sec();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__MOTOR_STATUS__BUILDER_HPP_
