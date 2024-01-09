// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/TuningStatus.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__TUNING_STATUS__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__TUNING_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_msgs/msg/detail/tuning_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_TuningStatus_details
{
public:
  explicit Init_TuningStatus_details(::custom_msgs::msg::TuningStatus & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::TuningStatus details(::custom_msgs::msg::TuningStatus::_details_type arg)
  {
    msg_.details = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::TuningStatus msg_;
};

class Init_TuningStatus_status
{
public:
  explicit Init_TuningStatus_status(::custom_msgs::msg::TuningStatus & msg)
  : msg_(msg)
  {}
  Init_TuningStatus_details status(::custom_msgs::msg::TuningStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_TuningStatus_details(msg_);
  }

private:
  ::custom_msgs::msg::TuningStatus msg_;
};

class Init_TuningStatus_nanosec
{
public:
  explicit Init_TuningStatus_nanosec(::custom_msgs::msg::TuningStatus & msg)
  : msg_(msg)
  {}
  Init_TuningStatus_status nanosec(::custom_msgs::msg::TuningStatus::_nanosec_type arg)
  {
    msg_.nanosec = std::move(arg);
    return Init_TuningStatus_status(msg_);
  }

private:
  ::custom_msgs::msg::TuningStatus msg_;
};

class Init_TuningStatus_sec
{
public:
  Init_TuningStatus_sec()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TuningStatus_nanosec sec(::custom_msgs::msg::TuningStatus::_sec_type arg)
  {
    msg_.sec = std::move(arg);
    return Init_TuningStatus_nanosec(msg_);
  }

private:
  ::custom_msgs::msg::TuningStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::TuningStatus>()
{
  return custom_msgs::msg::builder::Init_TuningStatus_sec();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__TUNING_STATUS__BUILDER_HPP_
