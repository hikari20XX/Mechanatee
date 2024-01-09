// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_msgs:msg/MotorAlerts.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__MOTOR_ALERTS__TRAITS_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__MOTOR_ALERTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_msgs/msg/detail/motor_alerts__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace custom_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorAlerts & msg,
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

  // member: motor_id
  {
    out << "motor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_id, out);
    out << ", ";
  }

  // member: overheating
  {
    out << "overheating: ";
    rosidl_generator_traits::value_to_yaml(msg.overheating, out);
    out << ", ";
  }

  // member: electrical_fault
  {
    out << "electrical_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.electrical_fault, out);
    out << ", ";
  }

  // member: stall
  {
    out << "stall: ";
    rosidl_generator_traits::value_to_yaml(msg.stall, out);
    out << ", ";
  }

  // member: overcurrent
  {
    out << "overcurrent: ";
    rosidl_generator_traits::value_to_yaml(msg.overcurrent, out);
    out << ", ";
  }

  // member: obstruction
  {
    out << "obstruction: ";
    rosidl_generator_traits::value_to_yaml(msg.obstruction, out);
    out << ", ";
  }

  // member: encoder_fault
  {
    out << "encoder_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.encoder_fault, out);
    out << ", ";
  }

  // member: runtime_exceeded
  {
    out << "runtime_exceeded: ";
    rosidl_generator_traits::value_to_yaml(msg.runtime_exceeded, out);
    out << ", ";
  }

  // member: additional_info
  {
    out << "additional_info: ";
    rosidl_generator_traits::value_to_yaml(msg.additional_info, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorAlerts & msg,
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

  // member: motor_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_id, out);
    out << "\n";
  }

  // member: overheating
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "overheating: ";
    rosidl_generator_traits::value_to_yaml(msg.overheating, out);
    out << "\n";
  }

  // member: electrical_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "electrical_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.electrical_fault, out);
    out << "\n";
  }

  // member: stall
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stall: ";
    rosidl_generator_traits::value_to_yaml(msg.stall, out);
    out << "\n";
  }

  // member: overcurrent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "overcurrent: ";
    rosidl_generator_traits::value_to_yaml(msg.overcurrent, out);
    out << "\n";
  }

  // member: obstruction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obstruction: ";
    rosidl_generator_traits::value_to_yaml(msg.obstruction, out);
    out << "\n";
  }

  // member: encoder_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "encoder_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.encoder_fault, out);
    out << "\n";
  }

  // member: runtime_exceeded
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "runtime_exceeded: ";
    rosidl_generator_traits::value_to_yaml(msg.runtime_exceeded, out);
    out << "\n";
  }

  // member: additional_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "additional_info: ";
    rosidl_generator_traits::value_to_yaml(msg.additional_info, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorAlerts & msg, bool use_flow_style = false)
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
  const custom_msgs::msg::MotorAlerts & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const custom_msgs::msg::MotorAlerts & msg)
{
  return custom_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<custom_msgs::msg::MotorAlerts>()
{
  return "custom_msgs::msg::MotorAlerts";
}

template<>
inline const char * name<custom_msgs::msg::MotorAlerts>()
{
  return "custom_msgs/msg/MotorAlerts";
}

template<>
struct has_fixed_size<custom_msgs::msg::MotorAlerts>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_msgs::msg::MotorAlerts>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custom_msgs::msg::MotorAlerts>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_MSGS__MSG__DETAIL__MOTOR_ALERTS__TRAITS_HPP_
