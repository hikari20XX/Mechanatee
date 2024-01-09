// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/VoltageReading.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__VOLTAGE_READING__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__VOLTAGE_READING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_msgs/msg/detail/voltage_reading__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_VoltageReading_sensor_id
{
public:
  explicit Init_VoltageReading_sensor_id(::custom_msgs::msg::VoltageReading & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::VoltageReading sensor_id(::custom_msgs::msg::VoltageReading::_sensor_id_type arg)
  {
    msg_.sensor_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::VoltageReading msg_;
};

class Init_VoltageReading_voltage_value
{
public:
  explicit Init_VoltageReading_voltage_value(::custom_msgs::msg::VoltageReading & msg)
  : msg_(msg)
  {}
  Init_VoltageReading_sensor_id voltage_value(::custom_msgs::msg::VoltageReading::_voltage_value_type arg)
  {
    msg_.voltage_value = std::move(arg);
    return Init_VoltageReading_sensor_id(msg_);
  }

private:
  ::custom_msgs::msg::VoltageReading msg_;
};

class Init_VoltageReading_nanosec
{
public:
  explicit Init_VoltageReading_nanosec(::custom_msgs::msg::VoltageReading & msg)
  : msg_(msg)
  {}
  Init_VoltageReading_voltage_value nanosec(::custom_msgs::msg::VoltageReading::_nanosec_type arg)
  {
    msg_.nanosec = std::move(arg);
    return Init_VoltageReading_voltage_value(msg_);
  }

private:
  ::custom_msgs::msg::VoltageReading msg_;
};

class Init_VoltageReading_sec
{
public:
  Init_VoltageReading_sec()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VoltageReading_nanosec sec(::custom_msgs::msg::VoltageReading::_sec_type arg)
  {
    msg_.sec = std::move(arg);
    return Init_VoltageReading_nanosec(msg_);
  }

private:
  ::custom_msgs::msg::VoltageReading msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::VoltageReading>()
{
  return custom_msgs::msg::builder::Init_VoltageReading_sec();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__VOLTAGE_READING__BUILDER_HPP_
