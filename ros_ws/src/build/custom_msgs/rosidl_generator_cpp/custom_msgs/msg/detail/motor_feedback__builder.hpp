// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/MotorFeedback.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__MOTOR_FEEDBACK__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__MOTOR_FEEDBACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_msgs/msg/detail/motor_feedback__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_MotorFeedback_additional_info
{
public:
  explicit Init_MotorFeedback_additional_info(::custom_msgs::msg::MotorFeedback & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::MotorFeedback additional_info(::custom_msgs::msg::MotorFeedback::_additional_info_type arg)
  {
    msg_.additional_info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::MotorFeedback msg_;
};

class Init_MotorFeedback_encoder_counts
{
public:
  explicit Init_MotorFeedback_encoder_counts(::custom_msgs::msg::MotorFeedback & msg)
  : msg_(msg)
  {}
  Init_MotorFeedback_additional_info encoder_counts(::custom_msgs::msg::MotorFeedback::_encoder_counts_type arg)
  {
    msg_.encoder_counts = std::move(arg);
    return Init_MotorFeedback_additional_info(msg_);
  }

private:
  ::custom_msgs::msg::MotorFeedback msg_;
};

class Init_MotorFeedback_voltage
{
public:
  explicit Init_MotorFeedback_voltage(::custom_msgs::msg::MotorFeedback & msg)
  : msg_(msg)
  {}
  Init_MotorFeedback_encoder_counts voltage(::custom_msgs::msg::MotorFeedback::_voltage_type arg)
  {
    msg_.voltage = std::move(arg);
    return Init_MotorFeedback_encoder_counts(msg_);
  }

private:
  ::custom_msgs::msg::MotorFeedback msg_;
};

class Init_MotorFeedback_current
{
public:
  explicit Init_MotorFeedback_current(::custom_msgs::msg::MotorFeedback & msg)
  : msg_(msg)
  {}
  Init_MotorFeedback_voltage current(::custom_msgs::msg::MotorFeedback::_current_type arg)
  {
    msg_.current = std::move(arg);
    return Init_MotorFeedback_voltage(msg_);
  }

private:
  ::custom_msgs::msg::MotorFeedback msg_;
};

class Init_MotorFeedback_temperature
{
public:
  explicit Init_MotorFeedback_temperature(::custom_msgs::msg::MotorFeedback & msg)
  : msg_(msg)
  {}
  Init_MotorFeedback_current temperature(::custom_msgs::msg::MotorFeedback::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_MotorFeedback_current(msg_);
  }

private:
  ::custom_msgs::msg::MotorFeedback msg_;
};

class Init_MotorFeedback_torque
{
public:
  explicit Init_MotorFeedback_torque(::custom_msgs::msg::MotorFeedback & msg)
  : msg_(msg)
  {}
  Init_MotorFeedback_temperature torque(::custom_msgs::msg::MotorFeedback::_torque_type arg)
  {
    msg_.torque = std::move(arg);
    return Init_MotorFeedback_temperature(msg_);
  }

private:
  ::custom_msgs::msg::MotorFeedback msg_;
};

class Init_MotorFeedback_speed
{
public:
  explicit Init_MotorFeedback_speed(::custom_msgs::msg::MotorFeedback & msg)
  : msg_(msg)
  {}
  Init_MotorFeedback_torque speed(::custom_msgs::msg::MotorFeedback::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_MotorFeedback_torque(msg_);
  }

private:
  ::custom_msgs::msg::MotorFeedback msg_;
};

class Init_MotorFeedback_position
{
public:
  explicit Init_MotorFeedback_position(::custom_msgs::msg::MotorFeedback & msg)
  : msg_(msg)
  {}
  Init_MotorFeedback_speed position(::custom_msgs::msg::MotorFeedback::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_MotorFeedback_speed(msg_);
  }

private:
  ::custom_msgs::msg::MotorFeedback msg_;
};

class Init_MotorFeedback_motor_id
{
public:
  explicit Init_MotorFeedback_motor_id(::custom_msgs::msg::MotorFeedback & msg)
  : msg_(msg)
  {}
  Init_MotorFeedback_position motor_id(::custom_msgs::msg::MotorFeedback::_motor_id_type arg)
  {
    msg_.motor_id = std::move(arg);
    return Init_MotorFeedback_position(msg_);
  }

private:
  ::custom_msgs::msg::MotorFeedback msg_;
};

class Init_MotorFeedback_nanosec
{
public:
  explicit Init_MotorFeedback_nanosec(::custom_msgs::msg::MotorFeedback & msg)
  : msg_(msg)
  {}
  Init_MotorFeedback_motor_id nanosec(::custom_msgs::msg::MotorFeedback::_nanosec_type arg)
  {
    msg_.nanosec = std::move(arg);
    return Init_MotorFeedback_motor_id(msg_);
  }

private:
  ::custom_msgs::msg::MotorFeedback msg_;
};

class Init_MotorFeedback_sec
{
public:
  Init_MotorFeedback_sec()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorFeedback_nanosec sec(::custom_msgs::msg::MotorFeedback::_sec_type arg)
  {
    msg_.sec = std::move(arg);
    return Init_MotorFeedback_nanosec(msg_);
  }

private:
  ::custom_msgs::msg::MotorFeedback msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::MotorFeedback>()
{
  return custom_msgs::msg::builder::Init_MotorFeedback_sec();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__MOTOR_FEEDBACK__BUILDER_HPP_
