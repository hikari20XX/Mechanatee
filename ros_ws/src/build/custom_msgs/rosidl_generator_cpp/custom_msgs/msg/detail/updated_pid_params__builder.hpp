// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/UpdatedPIDParams.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__UPDATED_PID_PARAMS__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__UPDATED_PID_PARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_msgs/msg/detail/updated_pid_params__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_UpdatedPIDParams_updated_d_value
{
public:
  explicit Init_UpdatedPIDParams_updated_d_value(::custom_msgs::msg::UpdatedPIDParams & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::UpdatedPIDParams updated_d_value(::custom_msgs::msg::UpdatedPIDParams::_updated_d_value_type arg)
  {
    msg_.updated_d_value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::UpdatedPIDParams msg_;
};

class Init_UpdatedPIDParams_updated_i_value
{
public:
  explicit Init_UpdatedPIDParams_updated_i_value(::custom_msgs::msg::UpdatedPIDParams & msg)
  : msg_(msg)
  {}
  Init_UpdatedPIDParams_updated_d_value updated_i_value(::custom_msgs::msg::UpdatedPIDParams::_updated_i_value_type arg)
  {
    msg_.updated_i_value = std::move(arg);
    return Init_UpdatedPIDParams_updated_d_value(msg_);
  }

private:
  ::custom_msgs::msg::UpdatedPIDParams msg_;
};

class Init_UpdatedPIDParams_updated_p_value
{
public:
  explicit Init_UpdatedPIDParams_updated_p_value(::custom_msgs::msg::UpdatedPIDParams & msg)
  : msg_(msg)
  {}
  Init_UpdatedPIDParams_updated_i_value updated_p_value(::custom_msgs::msg::UpdatedPIDParams::_updated_p_value_type arg)
  {
    msg_.updated_p_value = std::move(arg);
    return Init_UpdatedPIDParams_updated_i_value(msg_);
  }

private:
  ::custom_msgs::msg::UpdatedPIDParams msg_;
};

class Init_UpdatedPIDParams_nanosec
{
public:
  explicit Init_UpdatedPIDParams_nanosec(::custom_msgs::msg::UpdatedPIDParams & msg)
  : msg_(msg)
  {}
  Init_UpdatedPIDParams_updated_p_value nanosec(::custom_msgs::msg::UpdatedPIDParams::_nanosec_type arg)
  {
    msg_.nanosec = std::move(arg);
    return Init_UpdatedPIDParams_updated_p_value(msg_);
  }

private:
  ::custom_msgs::msg::UpdatedPIDParams msg_;
};

class Init_UpdatedPIDParams_sec
{
public:
  Init_UpdatedPIDParams_sec()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UpdatedPIDParams_nanosec sec(::custom_msgs::msg::UpdatedPIDParams::_sec_type arg)
  {
    msg_.sec = std::move(arg);
    return Init_UpdatedPIDParams_nanosec(msg_);
  }

private:
  ::custom_msgs::msg::UpdatedPIDParams msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::UpdatedPIDParams>()
{
  return custom_msgs::msg::builder::Init_UpdatedPIDParams_sec();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__UPDATED_PID_PARAMS__BUILDER_HPP_
