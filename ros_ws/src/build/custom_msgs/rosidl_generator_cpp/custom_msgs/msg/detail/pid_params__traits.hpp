// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_msgs:msg/PIDParams.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__PID_PARAMS__TRAITS_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__PID_PARAMS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_msgs/msg/detail/pid_params__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace custom_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PIDParams & msg,
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

  // member: p_value
  {
    out << "p_value: ";
    rosidl_generator_traits::value_to_yaml(msg.p_value, out);
    out << ", ";
  }

  // member: i_value
  {
    out << "i_value: ";
    rosidl_generator_traits::value_to_yaml(msg.i_value, out);
    out << ", ";
  }

  // member: d_value
  {
    out << "d_value: ";
    rosidl_generator_traits::value_to_yaml(msg.d_value, out);
    out << ", ";
  }

  // member: integral_limit_upper
  {
    out << "integral_limit_upper: ";
    rosidl_generator_traits::value_to_yaml(msg.integral_limit_upper, out);
    out << ", ";
  }

  // member: integral_limit_lower
  {
    out << "integral_limit_lower: ";
    rosidl_generator_traits::value_to_yaml(msg.integral_limit_lower, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PIDParams & msg,
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

  // member: p_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "p_value: ";
    rosidl_generator_traits::value_to_yaml(msg.p_value, out);
    out << "\n";
  }

  // member: i_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "i_value: ";
    rosidl_generator_traits::value_to_yaml(msg.i_value, out);
    out << "\n";
  }

  // member: d_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "d_value: ";
    rosidl_generator_traits::value_to_yaml(msg.d_value, out);
    out << "\n";
  }

  // member: integral_limit_upper
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "integral_limit_upper: ";
    rosidl_generator_traits::value_to_yaml(msg.integral_limit_upper, out);
    out << "\n";
  }

  // member: integral_limit_lower
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "integral_limit_lower: ";
    rosidl_generator_traits::value_to_yaml(msg.integral_limit_lower, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PIDParams & msg, bool use_flow_style = false)
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
  const custom_msgs::msg::PIDParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const custom_msgs::msg::PIDParams & msg)
{
  return custom_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<custom_msgs::msg::PIDParams>()
{
  return "custom_msgs::msg::PIDParams";
}

template<>
inline const char * name<custom_msgs::msg::PIDParams>()
{
  return "custom_msgs/msg/PIDParams";
}

template<>
struct has_fixed_size<custom_msgs::msg::PIDParams>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_msgs::msg::PIDParams>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_msgs::msg::PIDParams>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_MSGS__MSG__DETAIL__PID_PARAMS__TRAITS_HPP_
