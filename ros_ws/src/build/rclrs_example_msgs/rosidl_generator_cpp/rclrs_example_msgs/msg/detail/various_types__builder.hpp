// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rclrs_example_msgs:msg/VariousTypes.idl
// generated code does not contain a copyright notice

#ifndef RCLRS_EXAMPLE_MSGS__MSG__DETAIL__VARIOUS_TYPES__BUILDER_HPP_
#define RCLRS_EXAMPLE_MSGS__MSG__DETAIL__VARIOUS_TYPES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rclrs_example_msgs/msg/detail/various_types__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rclrs_example_msgs
{

namespace msg
{

namespace builder
{

class Init_VariousTypes_nested_seq_bounded
{
public:
  explicit Init_VariousTypes_nested_seq_bounded(::rclrs_example_msgs::msg::VariousTypes & msg)
  : msg_(msg)
  {}
  ::rclrs_example_msgs::msg::VariousTypes nested_seq_bounded(::rclrs_example_msgs::msg::VariousTypes::_nested_seq_bounded_type arg)
  {
    msg_.nested_seq_bounded = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rclrs_example_msgs::msg::VariousTypes msg_;
};

class Init_VariousTypes_nested_seq_unbounded
{
public:
  explicit Init_VariousTypes_nested_seq_unbounded(::rclrs_example_msgs::msg::VariousTypes & msg)
  : msg_(msg)
  {}
  Init_VariousTypes_nested_seq_bounded nested_seq_unbounded(::rclrs_example_msgs::msg::VariousTypes::_nested_seq_unbounded_type arg)
  {
    msg_.nested_seq_unbounded = std::move(arg);
    return Init_VariousTypes_nested_seq_bounded(msg_);
  }

private:
  ::rclrs_example_msgs::msg::VariousTypes msg_;
};

class Init_VariousTypes_nested_array
{
public:
  explicit Init_VariousTypes_nested_array(::rclrs_example_msgs::msg::VariousTypes & msg)
  : msg_(msg)
  {}
  Init_VariousTypes_nested_seq_unbounded nested_array(::rclrs_example_msgs::msg::VariousTypes::_nested_array_type arg)
  {
    msg_.nested_array = std::move(arg);
    return Init_VariousTypes_nested_seq_unbounded(msg_);
  }

private:
  ::rclrs_example_msgs::msg::VariousTypes msg_;
};

class Init_VariousTypes_nested_member
{
public:
  explicit Init_VariousTypes_nested_member(::rclrs_example_msgs::msg::VariousTypes & msg)
  : msg_(msg)
  {}
  Init_VariousTypes_nested_array nested_member(::rclrs_example_msgs::msg::VariousTypes::_nested_member_type arg)
  {
    msg_.nested_member = std::move(arg);
    return Init_VariousTypes_nested_array(msg_);
  }

private:
  ::rclrs_example_msgs::msg::VariousTypes msg_;
};

class Init_VariousTypes_bounded_string_seq_unbounded
{
public:
  explicit Init_VariousTypes_bounded_string_seq_unbounded(::rclrs_example_msgs::msg::VariousTypes & msg)
  : msg_(msg)
  {}
  Init_VariousTypes_nested_member bounded_string_seq_unbounded(::rclrs_example_msgs::msg::VariousTypes::_bounded_string_seq_unbounded_type arg)
  {
    msg_.bounded_string_seq_unbounded = std::move(arg);
    return Init_VariousTypes_nested_member(msg_);
  }

private:
  ::rclrs_example_msgs::msg::VariousTypes msg_;
};

class Init_VariousTypes_bounded_string_seq_bounded
{
public:
  explicit Init_VariousTypes_bounded_string_seq_bounded(::rclrs_example_msgs::msg::VariousTypes & msg)
  : msg_(msg)
  {}
  Init_VariousTypes_bounded_string_seq_unbounded bounded_string_seq_bounded(::rclrs_example_msgs::msg::VariousTypes::_bounded_string_seq_bounded_type arg)
  {
    msg_.bounded_string_seq_bounded = std::move(arg);
    return Init_VariousTypes_bounded_string_seq_unbounded(msg_);
  }

private:
  ::rclrs_example_msgs::msg::VariousTypes msg_;
};

class Init_VariousTypes_bounded_string_array
{
public:
  explicit Init_VariousTypes_bounded_string_array(::rclrs_example_msgs::msg::VariousTypes & msg)
  : msg_(msg)
  {}
  Init_VariousTypes_bounded_string_seq_bounded bounded_string_array(::rclrs_example_msgs::msg::VariousTypes::_bounded_string_array_type arg)
  {
    msg_.bounded_string_array = std::move(arg);
    return Init_VariousTypes_bounded_string_seq_bounded(msg_);
  }

private:
  ::rclrs_example_msgs::msg::VariousTypes msg_;
};

class Init_VariousTypes_string_seq_unbounded
{
public:
  explicit Init_VariousTypes_string_seq_unbounded(::rclrs_example_msgs::msg::VariousTypes & msg)
  : msg_(msg)
  {}
  Init_VariousTypes_bounded_string_array string_seq_unbounded(::rclrs_example_msgs::msg::VariousTypes::_string_seq_unbounded_type arg)
  {
    msg_.string_seq_unbounded = std::move(arg);
    return Init_VariousTypes_bounded_string_array(msg_);
  }

private:
  ::rclrs_example_msgs::msg::VariousTypes msg_;
};

class Init_VariousTypes_string_seq_bounded
{
public:
  explicit Init_VariousTypes_string_seq_bounded(::rclrs_example_msgs::msg::VariousTypes & msg)
  : msg_(msg)
  {}
  Init_VariousTypes_string_seq_unbounded string_seq_bounded(::rclrs_example_msgs::msg::VariousTypes::_string_seq_bounded_type arg)
  {
    msg_.string_seq_bounded = std::move(arg);
    return Init_VariousTypes_string_seq_unbounded(msg_);
  }

private:
  ::rclrs_example_msgs::msg::VariousTypes msg_;
};

class Init_VariousTypes_string_array
{
public:
  explicit Init_VariousTypes_string_array(::rclrs_example_msgs::msg::VariousTypes & msg)
  : msg_(msg)
  {}
  Init_VariousTypes_string_seq_bounded string_array(::rclrs_example_msgs::msg::VariousTypes::_string_array_type arg)
  {
    msg_.string_array = std::move(arg);
    return Init_VariousTypes_string_seq_bounded(msg_);
  }

private:
  ::rclrs_example_msgs::msg::VariousTypes msg_;
};

class Init_VariousTypes_bounded_wstring_member
{
public:
  explicit Init_VariousTypes_bounded_wstring_member(::rclrs_example_msgs::msg::VariousTypes & msg)
  : msg_(msg)
  {}
  Init_VariousTypes_string_array bounded_wstring_member(::rclrs_example_msgs::msg::VariousTypes::_bounded_wstring_member_type arg)
  {
    msg_.bounded_wstring_member = std::move(arg);
    return Init_VariousTypes_string_array(msg_);
  }

private:
  ::rclrs_example_msgs::msg::VariousTypes msg_;
};

class Init_VariousTypes_bounded_string_member
{
public:
  explicit Init_VariousTypes_bounded_string_member(::rclrs_example_msgs::msg::VariousTypes & msg)
  : msg_(msg)
  {}
  Init_VariousTypes_bounded_wstring_member bounded_string_member(::rclrs_example_msgs::msg::VariousTypes::_bounded_string_member_type arg)
  {
    msg_.bounded_string_member = std::move(arg);
    return Init_VariousTypes_bounded_wstring_member(msg_);
  }

private:
  ::rclrs_example_msgs::msg::VariousTypes msg_;
};

class Init_VariousTypes_wstring_member
{
public:
  explicit Init_VariousTypes_wstring_member(::rclrs_example_msgs::msg::VariousTypes & msg)
  : msg_(msg)
  {}
  Init_VariousTypes_bounded_string_member wstring_member(::rclrs_example_msgs::msg::VariousTypes::_wstring_member_type arg)
  {
    msg_.wstring_member = std::move(arg);
    return Init_VariousTypes_bounded_string_member(msg_);
  }

private:
  ::rclrs_example_msgs::msg::VariousTypes msg_;
};

class Init_VariousTypes_string_member
{
public:
  explicit Init_VariousTypes_string_member(::rclrs_example_msgs::msg::VariousTypes & msg)
  : msg_(msg)
  {}
  Init_VariousTypes_wstring_member string_member(::rclrs_example_msgs::msg::VariousTypes::_string_member_type arg)
  {
    msg_.string_member = std::move(arg);
    return Init_VariousTypes_wstring_member(msg_);
  }

private:
  ::rclrs_example_msgs::msg::VariousTypes msg_;
};

class Init_VariousTypes_float_seq_unbounded
{
public:
  explicit Init_VariousTypes_float_seq_unbounded(::rclrs_example_msgs::msg::VariousTypes & msg)
  : msg_(msg)
  {}
  Init_VariousTypes_string_member float_seq_unbounded(::rclrs_example_msgs::msg::VariousTypes::_float_seq_unbounded_type arg)
  {
    msg_.float_seq_unbounded = std::move(arg);
    return Init_VariousTypes_string_member(msg_);
  }

private:
  ::rclrs_example_msgs::msg::VariousTypes msg_;
};

class Init_VariousTypes_float_seq_bounded
{
public:
  explicit Init_VariousTypes_float_seq_bounded(::rclrs_example_msgs::msg::VariousTypes & msg)
  : msg_(msg)
  {}
  Init_VariousTypes_float_seq_unbounded float_seq_bounded(::rclrs_example_msgs::msg::VariousTypes::_float_seq_bounded_type arg)
  {
    msg_.float_seq_bounded = std::move(arg);
    return Init_VariousTypes_float_seq_unbounded(msg_);
  }

private:
  ::rclrs_example_msgs::msg::VariousTypes msg_;
};

class Init_VariousTypes_float_array
{
public:
  explicit Init_VariousTypes_float_array(::rclrs_example_msgs::msg::VariousTypes & msg)
  : msg_(msg)
  {}
  Init_VariousTypes_float_seq_bounded float_array(::rclrs_example_msgs::msg::VariousTypes::_float_array_type arg)
  {
    msg_.float_array = std::move(arg);
    return Init_VariousTypes_float_seq_bounded(msg_);
  }

private:
  ::rclrs_example_msgs::msg::VariousTypes msg_;
};

class Init_VariousTypes_float32_member
{
public:
  explicit Init_VariousTypes_float32_member(::rclrs_example_msgs::msg::VariousTypes & msg)
  : msg_(msg)
  {}
  Init_VariousTypes_float_array float32_member(::rclrs_example_msgs::msg::VariousTypes::_float32_member_type arg)
  {
    msg_.float32_member = std::move(arg);
    return Init_VariousTypes_float_array(msg_);
  }

private:
  ::rclrs_example_msgs::msg::VariousTypes msg_;
};

class Init_VariousTypes_byte_member
{
public:
  explicit Init_VariousTypes_byte_member(::rclrs_example_msgs::msg::VariousTypes & msg)
  : msg_(msg)
  {}
  Init_VariousTypes_float32_member byte_member(::rclrs_example_msgs::msg::VariousTypes::_byte_member_type arg)
  {
    msg_.byte_member = std::move(arg);
    return Init_VariousTypes_float32_member(msg_);
  }

private:
  ::rclrs_example_msgs::msg::VariousTypes msg_;
};

class Init_VariousTypes_uint8_member
{
public:
  explicit Init_VariousTypes_uint8_member(::rclrs_example_msgs::msg::VariousTypes & msg)
  : msg_(msg)
  {}
  Init_VariousTypes_byte_member uint8_member(::rclrs_example_msgs::msg::VariousTypes::_uint8_member_type arg)
  {
    msg_.uint8_member = std::move(arg);
    return Init_VariousTypes_byte_member(msg_);
  }

private:
  ::rclrs_example_msgs::msg::VariousTypes msg_;
};

class Init_VariousTypes_int8_member
{
public:
  explicit Init_VariousTypes_int8_member(::rclrs_example_msgs::msg::VariousTypes & msg)
  : msg_(msg)
  {}
  Init_VariousTypes_uint8_member int8_member(::rclrs_example_msgs::msg::VariousTypes::_int8_member_type arg)
  {
    msg_.int8_member = std::move(arg);
    return Init_VariousTypes_uint8_member(msg_);
  }

private:
  ::rclrs_example_msgs::msg::VariousTypes msg_;
};

class Init_VariousTypes_bool_member
{
public:
  Init_VariousTypes_bool_member()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VariousTypes_int8_member bool_member(::rclrs_example_msgs::msg::VariousTypes::_bool_member_type arg)
  {
    msg_.bool_member = std::move(arg);
    return Init_VariousTypes_int8_member(msg_);
  }

private:
  ::rclrs_example_msgs::msg::VariousTypes msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rclrs_example_msgs::msg::VariousTypes>()
{
  return rclrs_example_msgs::msg::builder::Init_VariousTypes_bool_member();
}

}  // namespace rclrs_example_msgs

#endif  // RCLRS_EXAMPLE_MSGS__MSG__DETAIL__VARIOUS_TYPES__BUILDER_HPP_
