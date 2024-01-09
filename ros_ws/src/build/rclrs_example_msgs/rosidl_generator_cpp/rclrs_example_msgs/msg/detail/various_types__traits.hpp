// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rclrs_example_msgs:msg/VariousTypes.idl
// generated code does not contain a copyright notice

#ifndef RCLRS_EXAMPLE_MSGS__MSG__DETAIL__VARIOUS_TYPES__TRAITS_HPP_
#define RCLRS_EXAMPLE_MSGS__MSG__DETAIL__VARIOUS_TYPES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rclrs_example_msgs/msg/detail/various_types__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'nested_member'
// Member 'nested_array'
// Member 'nested_seq_unbounded'
// Member 'nested_seq_bounded'
#include "rclrs_example_msgs/msg/detail/nested_type__traits.hpp"

namespace rclrs_example_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VariousTypes & msg,
  std::ostream & out)
{
  out << "{";
  // member: bool_member
  {
    out << "bool_member: ";
    rosidl_generator_traits::value_to_yaml(msg.bool_member, out);
    out << ", ";
  }

  // member: int8_member
  {
    out << "int8_member: ";
    rosidl_generator_traits::value_to_yaml(msg.int8_member, out);
    out << ", ";
  }

  // member: uint8_member
  {
    out << "uint8_member: ";
    rosidl_generator_traits::value_to_yaml(msg.uint8_member, out);
    out << ", ";
  }

  // member: byte_member
  {
    out << "byte_member: ";
    rosidl_generator_traits::character_value_to_yaml(msg.byte_member, out);
    out << ", ";
  }

  // member: float32_member
  {
    out << "float32_member: ";
    rosidl_generator_traits::value_to_yaml(msg.float32_member, out);
    out << ", ";
  }

  // member: float_array
  {
    if (msg.float_array.size() == 0) {
      out << "float_array: []";
    } else {
      out << "float_array: [";
      size_t pending_items = msg.float_array.size();
      for (auto item : msg.float_array) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: float_seq_bounded
  {
    if (msg.float_seq_bounded.size() == 0) {
      out << "float_seq_bounded: []";
    } else {
      out << "float_seq_bounded: [";
      size_t pending_items = msg.float_seq_bounded.size();
      for (auto item : msg.float_seq_bounded) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: float_seq_unbounded
  {
    if (msg.float_seq_unbounded.size() == 0) {
      out << "float_seq_unbounded: []";
    } else {
      out << "float_seq_unbounded: [";
      size_t pending_items = msg.float_seq_unbounded.size();
      for (auto item : msg.float_seq_unbounded) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: string_member
  {
    out << "string_member: ";
    rosidl_generator_traits::value_to_yaml(msg.string_member, out);
    out << ", ";
  }

  // member: wstring_member
  {
    out << "wstring_member: ";
    rosidl_generator_traits::value_to_yaml(msg.wstring_member, out);
    out << ", ";
  }

  // member: bounded_string_member
  {
    out << "bounded_string_member: ";
    rosidl_generator_traits::value_to_yaml(msg.bounded_string_member, out);
    out << ", ";
  }

  // member: bounded_wstring_member
  {
    out << "bounded_wstring_member: ";
    rosidl_generator_traits::value_to_yaml(msg.bounded_wstring_member, out);
    out << ", ";
  }

  // member: string_array
  {
    if (msg.string_array.size() == 0) {
      out << "string_array: []";
    } else {
      out << "string_array: [";
      size_t pending_items = msg.string_array.size();
      for (auto item : msg.string_array) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: string_seq_bounded
  {
    if (msg.string_seq_bounded.size() == 0) {
      out << "string_seq_bounded: []";
    } else {
      out << "string_seq_bounded: [";
      size_t pending_items = msg.string_seq_bounded.size();
      for (auto item : msg.string_seq_bounded) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: string_seq_unbounded
  {
    if (msg.string_seq_unbounded.size() == 0) {
      out << "string_seq_unbounded: []";
    } else {
      out << "string_seq_unbounded: [";
      size_t pending_items = msg.string_seq_unbounded.size();
      for (auto item : msg.string_seq_unbounded) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: bounded_string_array
  {
    if (msg.bounded_string_array.size() == 0) {
      out << "bounded_string_array: []";
    } else {
      out << "bounded_string_array: [";
      size_t pending_items = msg.bounded_string_array.size();
      for (auto item : msg.bounded_string_array) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: bounded_string_seq_bounded
  {
    if (msg.bounded_string_seq_bounded.size() == 0) {
      out << "bounded_string_seq_bounded: []";
    } else {
      out << "bounded_string_seq_bounded: [";
      size_t pending_items = msg.bounded_string_seq_bounded.size();
      for (auto item : msg.bounded_string_seq_bounded) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: bounded_string_seq_unbounded
  {
    if (msg.bounded_string_seq_unbounded.size() == 0) {
      out << "bounded_string_seq_unbounded: []";
    } else {
      out << "bounded_string_seq_unbounded: [";
      size_t pending_items = msg.bounded_string_seq_unbounded.size();
      for (auto item : msg.bounded_string_seq_unbounded) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: nested_member
  {
    out << "nested_member: ";
    to_flow_style_yaml(msg.nested_member, out);
    out << ", ";
  }

  // member: nested_array
  {
    if (msg.nested_array.size() == 0) {
      out << "nested_array: []";
    } else {
      out << "nested_array: [";
      size_t pending_items = msg.nested_array.size();
      for (auto item : msg.nested_array) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: nested_seq_unbounded
  {
    if (msg.nested_seq_unbounded.size() == 0) {
      out << "nested_seq_unbounded: []";
    } else {
      out << "nested_seq_unbounded: [";
      size_t pending_items = msg.nested_seq_unbounded.size();
      for (auto item : msg.nested_seq_unbounded) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: nested_seq_bounded
  {
    if (msg.nested_seq_bounded.size() == 0) {
      out << "nested_seq_bounded: []";
    } else {
      out << "nested_seq_bounded: [";
      size_t pending_items = msg.nested_seq_bounded.size();
      for (auto item : msg.nested_seq_bounded) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VariousTypes & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: bool_member
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bool_member: ";
    rosidl_generator_traits::value_to_yaml(msg.bool_member, out);
    out << "\n";
  }

  // member: int8_member
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "int8_member: ";
    rosidl_generator_traits::value_to_yaml(msg.int8_member, out);
    out << "\n";
  }

  // member: uint8_member
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uint8_member: ";
    rosidl_generator_traits::value_to_yaml(msg.uint8_member, out);
    out << "\n";
  }

  // member: byte_member
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "byte_member: ";
    rosidl_generator_traits::character_value_to_yaml(msg.byte_member, out);
    out << "\n";
  }

  // member: float32_member
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "float32_member: ";
    rosidl_generator_traits::value_to_yaml(msg.float32_member, out);
    out << "\n";
  }

  // member: float_array
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.float_array.size() == 0) {
      out << "float_array: []\n";
    } else {
      out << "float_array:\n";
      for (auto item : msg.float_array) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: float_seq_bounded
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.float_seq_bounded.size() == 0) {
      out << "float_seq_bounded: []\n";
    } else {
      out << "float_seq_bounded:\n";
      for (auto item : msg.float_seq_bounded) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: float_seq_unbounded
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.float_seq_unbounded.size() == 0) {
      out << "float_seq_unbounded: []\n";
    } else {
      out << "float_seq_unbounded:\n";
      for (auto item : msg.float_seq_unbounded) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: string_member
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "string_member: ";
    rosidl_generator_traits::value_to_yaml(msg.string_member, out);
    out << "\n";
  }

  // member: wstring_member
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wstring_member: ";
    rosidl_generator_traits::value_to_yaml(msg.wstring_member, out);
    out << "\n";
  }

  // member: bounded_string_member
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bounded_string_member: ";
    rosidl_generator_traits::value_to_yaml(msg.bounded_string_member, out);
    out << "\n";
  }

  // member: bounded_wstring_member
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bounded_wstring_member: ";
    rosidl_generator_traits::value_to_yaml(msg.bounded_wstring_member, out);
    out << "\n";
  }

  // member: string_array
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.string_array.size() == 0) {
      out << "string_array: []\n";
    } else {
      out << "string_array:\n";
      for (auto item : msg.string_array) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: string_seq_bounded
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.string_seq_bounded.size() == 0) {
      out << "string_seq_bounded: []\n";
    } else {
      out << "string_seq_bounded:\n";
      for (auto item : msg.string_seq_bounded) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: string_seq_unbounded
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.string_seq_unbounded.size() == 0) {
      out << "string_seq_unbounded: []\n";
    } else {
      out << "string_seq_unbounded:\n";
      for (auto item : msg.string_seq_unbounded) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: bounded_string_array
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bounded_string_array.size() == 0) {
      out << "bounded_string_array: []\n";
    } else {
      out << "bounded_string_array:\n";
      for (auto item : msg.bounded_string_array) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: bounded_string_seq_bounded
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bounded_string_seq_bounded.size() == 0) {
      out << "bounded_string_seq_bounded: []\n";
    } else {
      out << "bounded_string_seq_bounded:\n";
      for (auto item : msg.bounded_string_seq_bounded) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: bounded_string_seq_unbounded
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bounded_string_seq_unbounded.size() == 0) {
      out << "bounded_string_seq_unbounded: []\n";
    } else {
      out << "bounded_string_seq_unbounded:\n";
      for (auto item : msg.bounded_string_seq_unbounded) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: nested_member
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nested_member:\n";
    to_block_style_yaml(msg.nested_member, out, indentation + 2);
  }

  // member: nested_array
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.nested_array.size() == 0) {
      out << "nested_array: []\n";
    } else {
      out << "nested_array:\n";
      for (auto item : msg.nested_array) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: nested_seq_unbounded
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.nested_seq_unbounded.size() == 0) {
      out << "nested_seq_unbounded: []\n";
    } else {
      out << "nested_seq_unbounded:\n";
      for (auto item : msg.nested_seq_unbounded) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: nested_seq_bounded
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.nested_seq_bounded.size() == 0) {
      out << "nested_seq_bounded: []\n";
    } else {
      out << "nested_seq_bounded:\n";
      for (auto item : msg.nested_seq_bounded) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VariousTypes & msg, bool use_flow_style = false)
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
  const rclrs_example_msgs::msg::VariousTypes & msg,
  std::ostream & out, size_t indentation = 0)
{
  rclrs_example_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rclrs_example_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rclrs_example_msgs::msg::VariousTypes & msg)
{
  return rclrs_example_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rclrs_example_msgs::msg::VariousTypes>()
{
  return "rclrs_example_msgs::msg::VariousTypes";
}

template<>
inline const char * name<rclrs_example_msgs::msg::VariousTypes>()
{
  return "rclrs_example_msgs/msg/VariousTypes";
}

template<>
struct has_fixed_size<rclrs_example_msgs::msg::VariousTypes>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rclrs_example_msgs::msg::VariousTypes>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rclrs_example_msgs::msg::VariousTypes>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RCLRS_EXAMPLE_MSGS__MSG__DETAIL__VARIOUS_TYPES__TRAITS_HPP_
