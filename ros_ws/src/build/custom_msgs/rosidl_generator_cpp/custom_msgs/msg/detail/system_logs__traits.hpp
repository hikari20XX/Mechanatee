// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_msgs:msg/SystemLogs.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SYSTEM_LOGS__TRAITS_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SYSTEM_LOGS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_msgs/msg/detail/system_logs__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace custom_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SystemLogs & msg,
  std::ostream & out)
{
  out << "{";
  // member: sec
  {
    out << "sec: ";
    rosidl_generator_traits::value_to_yaml(msg.sec, out);
    out << ", ";
  }

  // member: nanosec
  {
    out << "nanosec: ";
    rosidl_generator_traits::value_to_yaml(msg.nanosec, out);
    out << ", ";
  }

  // member: component_id
  {
    out << "component_id: ";
    rosidl_generator_traits::value_to_yaml(msg.component_id, out);
    out << ", ";
  }

  // member: log_level
  {
    out << "log_level: ";
    rosidl_generator_traits::value_to_yaml(msg.log_level, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << ", ";
  }

  // member: details
  {
    out << "details: ";
    rosidl_generator_traits::value_to_yaml(msg.details, out);
    out << ", ";
  }

  // member: time_since_last_log
  {
    out << "time_since_last_log: ";
    rosidl_generator_traits::value_to_yaml(msg.time_since_last_log, out);
    out << ", ";
  }

  // member: max_log_frequency
  {
    out << "max_log_frequency: ";
    rosidl_generator_traits::value_to_yaml(msg.max_log_frequency, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SystemLogs & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sec: ";
    rosidl_generator_traits::value_to_yaml(msg.sec, out);
    out << "\n";
  }

  // member: nanosec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nanosec: ";
    rosidl_generator_traits::value_to_yaml(msg.nanosec, out);
    out << "\n";
  }

  // member: component_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "component_id: ";
    rosidl_generator_traits::value_to_yaml(msg.component_id, out);
    out << "\n";
  }

  // member: log_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "log_level: ";
    rosidl_generator_traits::value_to_yaml(msg.log_level, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }

  // member: details
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "details: ";
    rosidl_generator_traits::value_to_yaml(msg.details, out);
    out << "\n";
  }

  // member: time_since_last_log
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_since_last_log: ";
    rosidl_generator_traits::value_to_yaml(msg.time_since_last_log, out);
    out << "\n";
  }

  // member: max_log_frequency
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_log_frequency: ";
    rosidl_generator_traits::value_to_yaml(msg.max_log_frequency, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SystemLogs & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace custom_msgs

namespace rosidl_generator_traits
{

[[deprecated("use custom_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_msgs::msg::SystemLogs & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const custom_msgs::msg::SystemLogs & msg)
{
  return custom_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<custom_msgs::msg::SystemLogs>()
{
  return "custom_msgs::msg::SystemLogs";
}

template<>
inline const char * name<custom_msgs::msg::SystemLogs>()
{
  return "custom_msgs/msg/SystemLogs";
}

template<>
struct has_fixed_size<custom_msgs::msg::SystemLogs>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_msgs::msg::SystemLogs>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custom_msgs::msg::SystemLogs>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_MSGS__MSG__DETAIL__SYSTEM_LOGS__TRAITS_HPP_
