// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/BatteryStatus.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__BATTERY_STATUS__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__BATTERY_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_msgs/msg/detail/battery_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_BatteryStatus_health_percentage
{
public:
  explicit Init_BatteryStatus_health_percentage(::custom_msgs::msg::BatteryStatus & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::BatteryStatus health_percentage(::custom_msgs::msg::BatteryStatus::_health_percentage_type arg)
  {
    msg_.health_percentage = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::BatteryStatus msg_;
};

class Init_BatteryStatus_status
{
public:
  explicit Init_BatteryStatus_status(::custom_msgs::msg::BatteryStatus & msg)
  : msg_(msg)
  {}
  Init_BatteryStatus_health_percentage status(::custom_msgs::msg::BatteryStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_BatteryStatus_health_percentage(msg_);
  }

private:
  ::custom_msgs::msg::BatteryStatus msg_;
};

class Init_BatteryStatus_time_remaining
{
public:
  explicit Init_BatteryStatus_time_remaining(::custom_msgs::msg::BatteryStatus & msg)
  : msg_(msg)
  {}
  Init_BatteryStatus_status time_remaining(::custom_msgs::msg::BatteryStatus::_time_remaining_type arg)
  {
    msg_.time_remaining = std::move(arg);
    return Init_BatteryStatus_status(msg_);
  }

private:
  ::custom_msgs::msg::BatteryStatus msg_;
};

class Init_BatteryStatus_current
{
public:
  explicit Init_BatteryStatus_current(::custom_msgs::msg::BatteryStatus & msg)
  : msg_(msg)
  {}
  Init_BatteryStatus_time_remaining current(::custom_msgs::msg::BatteryStatus::_current_type arg)
  {
    msg_.current = std::move(arg);
    return Init_BatteryStatus_time_remaining(msg_);
  }

private:
  ::custom_msgs::msg::BatteryStatus msg_;
};

class Init_BatteryStatus_voltage
{
public:
  explicit Init_BatteryStatus_voltage(::custom_msgs::msg::BatteryStatus & msg)
  : msg_(msg)
  {}
  Init_BatteryStatus_current voltage(::custom_msgs::msg::BatteryStatus::_voltage_type arg)
  {
    msg_.voltage = std::move(arg);
    return Init_BatteryStatus_current(msg_);
  }

private:
  ::custom_msgs::msg::BatteryStatus msg_;
};

class Init_BatteryStatus_charge_percentage
{
public:
  explicit Init_BatteryStatus_charge_percentage(::custom_msgs::msg::BatteryStatus & msg)
  : msg_(msg)
  {}
  Init_BatteryStatus_voltage charge_percentage(::custom_msgs::msg::BatteryStatus::_charge_percentage_type arg)
  {
    msg_.charge_percentage = std::move(arg);
    return Init_BatteryStatus_voltage(msg_);
  }

private:
  ::custom_msgs::msg::BatteryStatus msg_;
};

class Init_BatteryStatus_nanosec
{
public:
  explicit Init_BatteryStatus_nanosec(::custom_msgs::msg::BatteryStatus & msg)
  : msg_(msg)
  {}
  Init_BatteryStatus_charge_percentage nanosec(::custom_msgs::msg::BatteryStatus::_nanosec_type arg)
  {
    msg_.nanosec = std::move(arg);
    return Init_BatteryStatus_charge_percentage(msg_);
  }

private:
  ::custom_msgs::msg::BatteryStatus msg_;
};

class Init_BatteryStatus_sec
{
public:
  Init_BatteryStatus_sec()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BatteryStatus_nanosec sec(::custom_msgs::msg::BatteryStatus::_sec_type arg)
  {
    msg_.sec = std::move(arg);
    return Init_BatteryStatus_nanosec(msg_);
  }

private:
  ::custom_msgs::msg::BatteryStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::BatteryStatus>()
{
  return custom_msgs::msg::builder::Init_BatteryStatus_sec();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__BATTERY_STATUS__BUILDER_HPP_
