// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/ServoStatus.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SERVO_STATUS__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SERVO_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_msgs/msg/detail/servo_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_ServoStatus_additional_info
{
public:
  explicit Init_ServoStatus_additional_info(::custom_msgs::msg::ServoStatus & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::ServoStatus additional_info(::custom_msgs::msg::ServoStatus::_additional_info_type arg)
  {
    msg_.additional_info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::ServoStatus msg_;
};

class Init_ServoStatus_error_status
{
public:
  explicit Init_ServoStatus_error_status(::custom_msgs::msg::ServoStatus & msg)
  : msg_(msg)
  {}
  Init_ServoStatus_additional_info error_status(::custom_msgs::msg::ServoStatus::_error_status_type arg)
  {
    msg_.error_status = std::move(arg);
    return Init_ServoStatus_additional_info(msg_);
  }

private:
  ::custom_msgs::msg::ServoStatus msg_;
};

class Init_ServoStatus_voltage
{
public:
  explicit Init_ServoStatus_voltage(::custom_msgs::msg::ServoStatus & msg)
  : msg_(msg)
  {}
  Init_ServoStatus_error_status voltage(::custom_msgs::msg::ServoStatus::_voltage_type arg)
  {
    msg_.voltage = std::move(arg);
    return Init_ServoStatus_error_status(msg_);
  }

private:
  ::custom_msgs::msg::ServoStatus msg_;
};

class Init_ServoStatus_temperature
{
public:
  explicit Init_ServoStatus_temperature(::custom_msgs::msg::ServoStatus & msg)
  : msg_(msg)
  {}
  Init_ServoStatus_voltage temperature(::custom_msgs::msg::ServoStatus::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_ServoStatus_voltage(msg_);
  }

private:
  ::custom_msgs::msg::ServoStatus msg_;
};

class Init_ServoStatus_load
{
public:
  explicit Init_ServoStatus_load(::custom_msgs::msg::ServoStatus & msg)
  : msg_(msg)
  {}
  Init_ServoStatus_temperature load(::custom_msgs::msg::ServoStatus::_load_type arg)
  {
    msg_.load = std::move(arg);
    return Init_ServoStatus_temperature(msg_);
  }

private:
  ::custom_msgs::msg::ServoStatus msg_;
};

class Init_ServoStatus_speed
{
public:
  explicit Init_ServoStatus_speed(::custom_msgs::msg::ServoStatus & msg)
  : msg_(msg)
  {}
  Init_ServoStatus_load speed(::custom_msgs::msg::ServoStatus::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_ServoStatus_load(msg_);
  }

private:
  ::custom_msgs::msg::ServoStatus msg_;
};

class Init_ServoStatus_position
{
public:
  explicit Init_ServoStatus_position(::custom_msgs::msg::ServoStatus & msg)
  : msg_(msg)
  {}
  Init_ServoStatus_speed position(::custom_msgs::msg::ServoStatus::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_ServoStatus_speed(msg_);
  }

private:
  ::custom_msgs::msg::ServoStatus msg_;
};

class Init_ServoStatus_servo_id
{
public:
  explicit Init_ServoStatus_servo_id(::custom_msgs::msg::ServoStatus & msg)
  : msg_(msg)
  {}
  Init_ServoStatus_position servo_id(::custom_msgs::msg::ServoStatus::_servo_id_type arg)
  {
    msg_.servo_id = std::move(arg);
    return Init_ServoStatus_position(msg_);
  }

private:
  ::custom_msgs::msg::ServoStatus msg_;
};

class Init_ServoStatus_nanosec
{
public:
  explicit Init_ServoStatus_nanosec(::custom_msgs::msg::ServoStatus & msg)
  : msg_(msg)
  {}
  Init_ServoStatus_servo_id nanosec(::custom_msgs::msg::ServoStatus::_nanosec_type arg)
  {
    msg_.nanosec = std::move(arg);
    return Init_ServoStatus_servo_id(msg_);
  }

private:
  ::custom_msgs::msg::ServoStatus msg_;
};

class Init_ServoStatus_sec
{
public:
  Init_ServoStatus_sec()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ServoStatus_nanosec sec(::custom_msgs::msg::ServoStatus::_sec_type arg)
  {
    msg_.sec = std::move(arg);
    return Init_ServoStatus_nanosec(msg_);
  }

private:
  ::custom_msgs::msg::ServoStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::ServoStatus>()
{
  return custom_msgs::msg::builder::Init_ServoStatus_sec();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SERVO_STATUS__BUILDER_HPP_
