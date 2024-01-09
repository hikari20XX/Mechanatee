// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/ServoSpeed.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SERVO_SPEED__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SERVO_SPEED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_msgs/msg/detail/servo_speed__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_ServoSpeed_additional_info
{
public:
  explicit Init_ServoSpeed_additional_info(::custom_msgs::msg::ServoSpeed & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::ServoSpeed additional_info(::custom_msgs::msg::ServoSpeed::_additional_info_type arg)
  {
    msg_.additional_info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::ServoSpeed msg_;
};

class Init_ServoSpeed_direction
{
public:
  explicit Init_ServoSpeed_direction(::custom_msgs::msg::ServoSpeed & msg)
  : msg_(msg)
  {}
  Init_ServoSpeed_additional_info direction(::custom_msgs::msg::ServoSpeed::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return Init_ServoSpeed_additional_info(msg_);
  }

private:
  ::custom_msgs::msg::ServoSpeed msg_;
};

class Init_ServoSpeed_speed
{
public:
  explicit Init_ServoSpeed_speed(::custom_msgs::msg::ServoSpeed & msg)
  : msg_(msg)
  {}
  Init_ServoSpeed_direction speed(::custom_msgs::msg::ServoSpeed::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_ServoSpeed_direction(msg_);
  }

private:
  ::custom_msgs::msg::ServoSpeed msg_;
};

class Init_ServoSpeed_servo_id
{
public:
  explicit Init_ServoSpeed_servo_id(::custom_msgs::msg::ServoSpeed & msg)
  : msg_(msg)
  {}
  Init_ServoSpeed_speed servo_id(::custom_msgs::msg::ServoSpeed::_servo_id_type arg)
  {
    msg_.servo_id = std::move(arg);
    return Init_ServoSpeed_speed(msg_);
  }

private:
  ::custom_msgs::msg::ServoSpeed msg_;
};

class Init_ServoSpeed_nanosec
{
public:
  explicit Init_ServoSpeed_nanosec(::custom_msgs::msg::ServoSpeed & msg)
  : msg_(msg)
  {}
  Init_ServoSpeed_servo_id nanosec(::custom_msgs::msg::ServoSpeed::_nanosec_type arg)
  {
    msg_.nanosec = std::move(arg);
    return Init_ServoSpeed_servo_id(msg_);
  }

private:
  ::custom_msgs::msg::ServoSpeed msg_;
};

class Init_ServoSpeed_sec
{
public:
  Init_ServoSpeed_sec()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ServoSpeed_nanosec sec(::custom_msgs::msg::ServoSpeed::_sec_type arg)
  {
    msg_.sec = std::move(arg);
    return Init_ServoSpeed_nanosec(msg_);
  }

private:
  ::custom_msgs::msg::ServoSpeed msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::ServoSpeed>()
{
  return custom_msgs::msg::builder::Init_ServoSpeed_sec();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SERVO_SPEED__BUILDER_HPP_
