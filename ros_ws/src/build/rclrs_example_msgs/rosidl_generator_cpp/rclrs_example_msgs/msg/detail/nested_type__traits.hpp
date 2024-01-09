// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rclrs_example_msgs:msg/NestedType.idl
// generated code does not contain a copyright notice

#ifndef RCLRS_EXAMPLE_MSGS__MSG__DETAIL__NESTED_TYPE__TRAITS_HPP_
#define RCLRS_EXAMPLE_MSGS__MSG__DETAIL__NESTED_TYPE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rclrs_example_msgs/msg/detail/nested_type__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rclrs_example_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NestedType & msg,
  std::ostream & out)
{
  out << "{";
  // member: effect
  {
    out << "effect: ";
    rosidl_generator_traits::value_to_yaml(msg.effect, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NestedType & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: effect
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "effect: ";
    rosidl_generator_traits::value_to_yaml(msg.effect, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NestedType & msg, bool use_flow_style = false)
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

}  // namespace rclrs_example_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rclrs_example_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rclrs_example_msgs::msg::NestedType & msg,
  std::ostream & out, size_t indentation = 0)
{
  rclrs_example_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rclrs_example_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rclrs_example_msgs::msg::NestedType & msg)
{
  return rclrs_example_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rclrs_example_msgs::msg::NestedType>()
{
  return "rclrs_example_msgs::msg::NestedType";
}

template<>
inline const char * name<rclrs_example_msgs::msg::NestedType>()
{
  return "rclrs_example_msgs/msg/NestedType";
}

template<>
struct has_fixed_size<rclrs_example_msgs::msg::NestedType>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rclrs_example_msgs::msg::NestedType>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rclrs_example_msgs::msg::NestedType>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RCLRS_EXAMPLE_MSGS__MSG__DETAIL__NESTED_TYPE__TRAITS_HPP_
