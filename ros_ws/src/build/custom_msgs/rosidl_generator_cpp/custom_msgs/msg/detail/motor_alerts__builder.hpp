// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/MotorAlerts.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__MOTOR_ALERTS__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__MOTOR_ALERTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_msgs/msg/detail/motor_alerts__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_MotorAlerts_additional_info
{
public:
  explicit Init_MotorAlerts_additional_info(::custom_msgs::msg::MotorAlerts & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::MotorAlerts additional_info(::custom_msgs::msg::MotorAlerts::_additional_info_type arg)
  {
    msg_.additional_info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::MotorAlerts msg_;
};

class Init_MotorAlerts_runtime_exceeded
{
public:
  explicit Init_MotorAlerts_runtime_exceeded(::custom_msgs::msg::MotorAlerts & msg)
  : msg_(msg)
  {}
  Init_MotorAlerts_additional_info runtime_exceeded(::custom_msgs::msg::MotorAlerts::_runtime_exceeded_type arg)
  {
    msg_.runtime_exceeded = std::move(arg);
    return Init_MotorAlerts_additional_info(msg_);
  }

private:
  ::custom_msgs::msg::MotorAlerts msg_;
};

class Init_MotorAlerts_encoder_fault
{
public:
  explicit Init_MotorAlerts_encoder_fault(::custom_msgs::msg::MotorAlerts & msg)
  : msg_(msg)
  {}
  Init_MotorAlerts_runtime_exceeded encoder_fault(::custom_msgs::msg::MotorAlerts::_encoder_fault_type arg)
  {
    msg_.encoder_fault = std::move(arg);
    return Init_MotorAlerts_runtime_exceeded(msg_);
  }

private:
  ::custom_msgs::msg::MotorAlerts msg_;
};

class Init_MotorAlerts_obstruction
{
public:
  explicit Init_MotorAlerts_obstruction(::custom_msgs::msg::MotorAlerts & msg)
  : msg_(msg)
  {}
  Init_MotorAlerts_encoder_fault obstruction(::custom_msgs::msg::MotorAlerts::_obstruction_type arg)
  {
    msg_.obstruction = std::move(arg);
    return Init_MotorAlerts_encoder_fault(msg_);
  }

private:
  ::custom_msgs::msg::MotorAlerts msg_;
};

class Init_MotorAlerts_overcurrent
{
public:
  explicit Init_MotorAlerts_overcurrent(::custom_msgs::msg::MotorAlerts & msg)
  : msg_(msg)
  {}
  Init_MotorAlerts_obstruction overcurrent(::custom_msgs::msg::MotorAlerts::_overcurrent_type arg)
  {
    msg_.overcurrent = std::move(arg);
    return Init_MotorAlerts_obstruction(msg_);
  }

private:
  ::custom_msgs::msg::MotorAlerts msg_;
};

class Init_MotorAlerts_stall
{
public:
  explicit Init_MotorAlerts_stall(::custom_msgs::msg::MotorAlerts & msg)
  : msg_(msg)
  {}
  Init_MotorAlerts_overcurrent stall(::custom_msgs::msg::MotorAlerts::_stall_type arg)
  {
    msg_.stall = std::move(arg);
    return Init_MotorAlerts_overcurrent(msg_);
  }

private:
  ::custom_msgs::msg::MotorAlerts msg_;
};

class Init_MotorAlerts_electrical_fault
{
public:
  explicit Init_MotorAlerts_electrical_fault(::custom_msgs::msg::MotorAlerts & msg)
  : msg_(msg)
  {}
  Init_MotorAlerts_stall electrical_fault(::custom_msgs::msg::MotorAlerts::_electrical_fault_type arg)
  {
    msg_.electrical_fault = std::move(arg);
    return Init_MotorAlerts_stall(msg_);
  }

private:
  ::custom_msgs::msg::MotorAlerts msg_;
};

class Init_MotorAlerts_overheating
{
public:
  explicit Init_MotorAlerts_overheating(::custom_msgs::msg::MotorAlerts & msg)
  : msg_(msg)
  {}
  Init_MotorAlerts_electrical_fault overheating(::custom_msgs::msg::MotorAlerts::_overheating_type arg)
  {
    msg_.overheating = std::move(arg);
    return Init_MotorAlerts_electrical_fault(msg_);
  }

private:
  ::custom_msgs::msg::MotorAlerts msg_;
};

class Init_MotorAlerts_motor_id
{
public:
  explicit Init_MotorAlerts_motor_id(::custom_msgs::msg::MotorAlerts & msg)
  : msg_(msg)
  {}
  Init_MotorAlerts_overheating motor_id(::custom_msgs::msg::MotorAlerts::_motor_id_type arg)
  {
    msg_.motor_id = std::move(arg);
    return Init_MotorAlerts_overheating(msg_);
  }

private:
  ::custom_msgs::msg::MotorAlerts msg_;
};

class Init_MotorAlerts_nanosec
{
public:
  explicit Init_MotorAlerts_nanosec(::custom_msgs::msg::MotorAlerts & msg)
  : msg_(msg)
  {}
  Init_MotorAlerts_motor_id nanosec(::custom_msgs::msg::MotorAlerts::_nanosec_type arg)
  {
    msg_.nanosec = std::move(arg);
    return Init_MotorAlerts_motor_id(msg_);
  }

private:
  ::custom_msgs::msg::MotorAlerts msg_;
};

class Init_MotorAlerts_sec
{
public:
  Init_MotorAlerts_sec()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorAlerts_nanosec sec(::custom_msgs::msg::MotorAlerts::_sec_type arg)
  {
    msg_.sec = std::move(arg);
    return Init_MotorAlerts_nanosec(msg_);
  }

private:
  ::custom_msgs::msg::MotorAlerts msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::MotorAlerts>()
{
  return custom_msgs::msg::builder::Init_MotorAlerts_sec();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__MOTOR_ALERTS__BUILDER_HPP_
