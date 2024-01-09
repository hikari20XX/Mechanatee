// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_msgs:msg/PWMCommand.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__PWM_COMMAND__TRAITS_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__PWM_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_msgs/msg/detail/pwm_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace custom_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PWMCommand & msg,
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

  // member: pwm_value
  {
    out << "pwm_value: ";
    rosidl_generator_traits::value_to_yaml(msg.pwm_value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PWMCommand & msg,
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

  // member: pwm_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pwm_value: ";
    rosidl_generator_traits::value_to_yaml(msg.pwm_value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PWMCommand & msg, bool use_flow_style = false)
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
  const custom_msgs::msg::PWMCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const custom_msgs::msg::PWMCommand & msg)
{
  return custom_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<custom_msgs::msg::PWMCommand>()
{
  return "custom_msgs::msg::PWMCommand";
}

template<>
inline const char * name<custom_msgs::msg::PWMCommand>()
{
  return "custom_msgs/msg/PWMCommand";
}

template<>
struct has_fixed_size<custom_msgs::msg::PWMCommand>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_msgs::msg::PWMCommand>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_msgs::msg::PWMCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_MSGS__MSG__DETAIL__PWM_COMMAND__TRAITS_HPP_
