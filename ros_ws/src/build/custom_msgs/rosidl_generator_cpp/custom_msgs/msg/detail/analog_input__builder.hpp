// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/AnalogInput.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__ANALOG_INPUT__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__ANALOG_INPUT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_msgs/msg/detail/analog_input__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_AnalogInput_value
{
public:
  explicit Init_AnalogInput_value(::custom_msgs::msg::AnalogInput & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::AnalogInput value(::custom_msgs::msg::AnalogInput::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::AnalogInput msg_;
};

class Init_AnalogInput_nanosec
{
public:
  explicit Init_AnalogInput_nanosec(::custom_msgs::msg::AnalogInput & msg)
  : msg_(msg)
  {}
  Init_AnalogInput_value nanosec(::custom_msgs::msg::AnalogInput::_nanosec_type arg)
  {
    msg_.nanosec = std::move(arg);
    return Init_AnalogInput_value(msg_);
  }

private:
  ::custom_msgs::msg::AnalogInput msg_;
};

class Init_AnalogInput_sec
{
public:
  Init_AnalogInput_sec()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AnalogInput_nanosec sec(::custom_msgs::msg::AnalogInput::_sec_type arg)
  {
    msg_.sec = std::move(arg);
    return Init_AnalogInput_nanosec(msg_);
  }

private:
  ::custom_msgs::msg::AnalogInput msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::AnalogInput>()
{
  return custom_msgs::msg::builder::Init_AnalogInput_sec();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__ANALOG_INPUT__BUILDER_HPP_
