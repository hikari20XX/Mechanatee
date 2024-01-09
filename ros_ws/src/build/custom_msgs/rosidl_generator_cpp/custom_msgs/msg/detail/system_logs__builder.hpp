// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/SystemLogs.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SYSTEM_LOGS__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SYSTEM_LOGS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_msgs/msg/detail/system_logs__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_SystemLogs_max_log_frequency
{
public:
  explicit Init_SystemLogs_max_log_frequency(::custom_msgs::msg::SystemLogs & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::SystemLogs max_log_frequency(::custom_msgs::msg::SystemLogs::_max_log_frequency_type arg)
  {
    msg_.max_log_frequency = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::SystemLogs msg_;
};

class Init_SystemLogs_time_since_last_log
{
public:
  explicit Init_SystemLogs_time_since_last_log(::custom_msgs::msg::SystemLogs & msg)
  : msg_(msg)
  {}
  Init_SystemLogs_max_log_frequency time_since_last_log(::custom_msgs::msg::SystemLogs::_time_since_last_log_type arg)
  {
    msg_.time_since_last_log = std::move(arg);
    return Init_SystemLogs_max_log_frequency(msg_);
  }

private:
  ::custom_msgs::msg::SystemLogs msg_;
};

class Init_SystemLogs_details
{
public:
  explicit Init_SystemLogs_details(::custom_msgs::msg::SystemLogs & msg)
  : msg_(msg)
  {}
  Init_SystemLogs_time_since_last_log details(::custom_msgs::msg::SystemLogs::_details_type arg)
  {
    msg_.details = std::move(arg);
    return Init_SystemLogs_time_since_last_log(msg_);
  }

private:
  ::custom_msgs::msg::SystemLogs msg_;
};

class Init_SystemLogs_message
{
public:
  explicit Init_SystemLogs_message(::custom_msgs::msg::SystemLogs & msg)
  : msg_(msg)
  {}
  Init_SystemLogs_details message(::custom_msgs::msg::SystemLogs::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_SystemLogs_details(msg_);
  }

private:
  ::custom_msgs::msg::SystemLogs msg_;
};

class Init_SystemLogs_log_level
{
public:
  explicit Init_SystemLogs_log_level(::custom_msgs::msg::SystemLogs & msg)
  : msg_(msg)
  {}
  Init_SystemLogs_message log_level(::custom_msgs::msg::SystemLogs::_log_level_type arg)
  {
    msg_.log_level = std::move(arg);
    return Init_SystemLogs_message(msg_);
  }

private:
  ::custom_msgs::msg::SystemLogs msg_;
};

class Init_SystemLogs_component_id
{
public:
  explicit Init_SystemLogs_component_id(::custom_msgs::msg::SystemLogs & msg)
  : msg_(msg)
  {}
  Init_SystemLogs_log_level component_id(::custom_msgs::msg::SystemLogs::_component_id_type arg)
  {
    msg_.component_id = std::move(arg);
    return Init_SystemLogs_log_level(msg_);
  }

private:
  ::custom_msgs::msg::SystemLogs msg_;
};

class Init_SystemLogs_nanosec
{
public:
  explicit Init_SystemLogs_nanosec(::custom_msgs::msg::SystemLogs & msg)
  : msg_(msg)
  {}
  Init_SystemLogs_component_id nanosec(::custom_msgs::msg::SystemLogs::_nanosec_type arg)
  {
    msg_.nanosec = std::move(arg);
    return Init_SystemLogs_component_id(msg_);
  }

private:
  ::custom_msgs::msg::SystemLogs msg_;
};

class Init_SystemLogs_sec
{
public:
  Init_SystemLogs_sec()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SystemLogs_nanosec sec(::custom_msgs::msg::SystemLogs::_sec_type arg)
  {
    msg_.sec = std::move(arg);
    return Init_SystemLogs_nanosec(msg_);
  }

private:
  ::custom_msgs::msg::SystemLogs msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::SystemLogs>()
{
  return custom_msgs::msg::builder::Init_SystemLogs_sec();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SYSTEM_LOGS__BUILDER_HPP_
