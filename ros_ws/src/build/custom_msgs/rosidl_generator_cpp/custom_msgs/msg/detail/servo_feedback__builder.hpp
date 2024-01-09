// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/ServoFeedback.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SERVO_FEEDBACK__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SERVO_FEEDBACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_msgs/msg/detail/servo_feedback__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_ServoFeedback_position
{
public:
  explicit Init_ServoFeedback_position(::custom_msgs::msg::ServoFeedback & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::ServoFeedback position(::custom_msgs::msg::ServoFeedback::_position_type arg)
  {
    msg_.position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::ServoFeedback msg_;
};

class Init_ServoFeedback_nanosec
{
public:
  explicit Init_ServoFeedback_nanosec(::custom_msgs::msg::ServoFeedback & msg)
  : msg_(msg)
  {}
  Init_ServoFeedback_position nanosec(::custom_msgs::msg::ServoFeedback::_nanosec_type arg)
  {
    msg_.nanosec = std::move(arg);
    return Init_ServoFeedback_position(msg_);
  }

private:
  ::custom_msgs::msg::ServoFeedback msg_;
};

class Init_ServoFeedback_sec
{
public:
  Init_ServoFeedback_sec()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ServoFeedback_nanosec sec(::custom_msgs::msg::ServoFeedback::_sec_type arg)
  {
    msg_.sec = std::move(arg);
    return Init_ServoFeedback_nanosec(msg_);
  }

private:
  ::custom_msgs::msg::ServoFeedback msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::ServoFeedback>()
{
  return custom_msgs::msg::builder::Init_ServoFeedback_sec();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SERVO_FEEDBACK__BUILDER_HPP_
