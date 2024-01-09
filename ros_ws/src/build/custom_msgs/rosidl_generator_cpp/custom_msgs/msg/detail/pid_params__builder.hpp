// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/PIDParams.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__PID_PARAMS__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__PID_PARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_msgs/msg/detail/pid_params__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_PIDParams_integral_limit_lower
{
public:
  explicit Init_PIDParams_integral_limit_lower(::custom_msgs::msg::PIDParams & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::PIDParams integral_limit_lower(::custom_msgs::msg::PIDParams::_integral_limit_lower_type arg)
  {
    msg_.integral_limit_lower = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::PIDParams msg_;
};

class Init_PIDParams_integral_limit_upper
{
public:
  explicit Init_PIDParams_integral_limit_upper(::custom_msgs::msg::PIDParams & msg)
  : msg_(msg)
  {}
  Init_PIDParams_integral_limit_lower integral_limit_upper(::custom_msgs::msg::PIDParams::_integral_limit_upper_type arg)
  {
    msg_.integral_limit_upper = std::move(arg);
    return Init_PIDParams_integral_limit_lower(msg_);
  }

private:
  ::custom_msgs::msg::PIDParams msg_;
};

class Init_PIDParams_d_value
{
public:
  explicit Init_PIDParams_d_value(::custom_msgs::msg::PIDParams & msg)
  : msg_(msg)
  {}
  Init_PIDParams_integral_limit_upper d_value(::custom_msgs::msg::PIDParams::_d_value_type arg)
  {
    msg_.d_value = std::move(arg);
    return Init_PIDParams_integral_limit_upper(msg_);
  }

private:
  ::custom_msgs::msg::PIDParams msg_;
};

class Init_PIDParams_i_value
{
public:
  explicit Init_PIDParams_i_value(::custom_msgs::msg::PIDParams & msg)
  : msg_(msg)
  {}
  Init_PIDParams_d_value i_value(::custom_msgs::msg::PIDParams::_i_value_type arg)
  {
    msg_.i_value = std::move(arg);
    return Init_PIDParams_d_value(msg_);
  }

private:
  ::custom_msgs::msg::PIDParams msg_;
};

class Init_PIDParams_p_value
{
public:
  explicit Init_PIDParams_p_value(::custom_msgs::msg::PIDParams & msg)
  : msg_(msg)
  {}
  Init_PIDParams_i_value p_value(::custom_msgs::msg::PIDParams::_p_value_type arg)
  {
    msg_.p_value = std::move(arg);
    return Init_PIDParams_i_value(msg_);
  }

private:
  ::custom_msgs::msg::PIDParams msg_;
};

class Init_PIDParams_nanosec
{
public:
  explicit Init_PIDParams_nanosec(::custom_msgs::msg::PIDParams & msg)
  : msg_(msg)
  {}
  Init_PIDParams_p_value nanosec(::custom_msgs::msg::PIDParams::_nanosec_type arg)
  {
    msg_.nanosec = std::move(arg);
    return Init_PIDParams_p_value(msg_);
  }

private:
  ::custom_msgs::msg::PIDParams msg_;
};

class Init_PIDParams_sec
{
public:
  Init_PIDParams_sec()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PIDParams_nanosec sec(::custom_msgs::msg::PIDParams::_sec_type arg)
  {
    msg_.sec = std::move(arg);
    return Init_PIDParams_nanosec(msg_);
  }

private:
  ::custom_msgs::msg::PIDParams msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::PIDParams>()
{
  return custom_msgs::msg::builder::Init_PIDParams_sec();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__PID_PARAMS__BUILDER_HPP_
