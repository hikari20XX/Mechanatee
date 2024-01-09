// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rclrs_example_msgs:msg/VariousTypes.idl
// generated code does not contain a copyright notice

#ifndef RCLRS_EXAMPLE_MSGS__MSG__DETAIL__VARIOUS_TYPES__STRUCT_HPP_
#define RCLRS_EXAMPLE_MSGS__MSG__DETAIL__VARIOUS_TYPES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'nested_member'
// Member 'nested_array'
// Member 'nested_seq_unbounded'
// Member 'nested_seq_bounded'
#include "rclrs_example_msgs/msg/detail/nested_type__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rclrs_example_msgs__msg__VariousTypes __attribute__((deprecated))
#else
# define DEPRECATED__rclrs_example_msgs__msg__VariousTypes __declspec(deprecated)
#endif

namespace rclrs_example_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VariousTypes_
{
  using Type = VariousTypes_<ContainerAllocator>;

  explicit VariousTypes_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : nested_member(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->bool_member = true;
      this->int8_member = 1;
      this->uint8_member = 2;
      this->byte_member = 3;
      this->float32_member = 0.01f;
      this->float_array[0] = 1.0f;
      this->float_array[1] = 2.0f;
      this->float_array[2] = 3.0f;
      this->float_seq_bounded.resize(2);
      this->float_seq_bounded = {{4.0f, 5.0f}};
      this->float_seq_unbounded.resize(1);
      this->float_seq_unbounded = {6.0f};
      this->string_member = "Χαίρετε 你好";
      this->wstring_member = u"αντίο σου 再见";
      this->bounded_string_member = "äöü";
      this->bounded_wstring_member = u"äöü";
      this->string_array[0] = "R";
      this->string_array[1] = "O";
      this->string_array[2] = "S";
      this->string_array[3] = "2";
      this->string_seq_bounded.resize(4);
      this->string_seq_bounded = {{"R"}, {"O"}, {"S"}, {"2"}};
      this->string_seq_unbounded.resize(4);
      this->string_seq_unbounded = {{"R"}, {"O"}, {"S"}, {"2"}};
      this->bounded_string_array[0] = "R";
      this->bounded_string_array[1] = "O";
      this->bounded_string_array[2] = "S";
      this->bounded_string_array[3] = "2";
      this->bounded_string_seq_bounded.resize(4);
      this->bounded_string_seq_bounded = {{"R"}, {"O"}, {"S"}, {"2"}};
      this->bounded_string_seq_unbounded.resize(4);
      this->bounded_string_seq_unbounded = {{"R"}, {"O"}, {"S"}, {"2"}};
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->bool_member = false;
      this->int8_member = 0;
      this->uint8_member = 0;
      this->byte_member = 0;
      this->float32_member = 0.0f;
      std::fill<typename std::array<float, 3>::iterator, float>(this->float_array.begin(), this->float_array.end(), 0.0f);
      this->string_member = "";
      this->wstring_member = u"";
      this->bounded_string_member = "";
      this->bounded_wstring_member = u"";
      std::fill<typename std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 4>::iterator, std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>(this->string_array.begin(), this->string_array.end(), "");
      std::fill<typename std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 4>::iterator, std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>(this->bounded_string_array.begin(), this->bounded_string_array.end(), "");
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->nested_array.fill(rclrs_example_msgs::msg::NestedType_<ContainerAllocator>{_init});
    }
  }

  explicit VariousTypes_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : float_array(_alloc),
    string_member(_alloc),
    wstring_member(_alloc),
    bounded_string_member(_alloc),
    bounded_wstring_member(_alloc),
    string_array(_alloc),
    bounded_string_array(_alloc),
    nested_member(_alloc, _init),
    nested_array(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->bool_member = true;
      this->int8_member = 1;
      this->uint8_member = 2;
      this->byte_member = 3;
      this->float32_member = 0.01f;
      this->float_array[0] = 1.0f;
      this->float_array[1] = 2.0f;
      this->float_array[2] = 3.0f;
      this->float_seq_bounded.resize(2);
      this->float_seq_bounded = {{4.0f, 5.0f}};
      this->float_seq_unbounded.resize(1);
      this->float_seq_unbounded = {6.0f};
      this->string_member = "Χαίρετε 你好";
      this->wstring_member = u"αντίο σου 再见";
      this->bounded_string_member = "äöü";
      this->bounded_wstring_member = u"äöü";
      this->string_array[0] = "R";
      this->string_array[1] = "O";
      this->string_array[2] = "S";
      this->string_array[3] = "2";
      this->string_seq_bounded.resize(4);
      this->string_seq_bounded = {{"R"}, {"O"}, {"S"}, {"2"}};
      this->string_seq_unbounded.resize(4);
      this->string_seq_unbounded = {{"R"}, {"O"}, {"S"}, {"2"}};
      this->bounded_string_array[0] = "R";
      this->bounded_string_array[1] = "O";
      this->bounded_string_array[2] = "S";
      this->bounded_string_array[3] = "2";
      this->bounded_string_seq_bounded.resize(4);
      this->bounded_string_seq_bounded = {{"R"}, {"O"}, {"S"}, {"2"}};
      this->bounded_string_seq_unbounded.resize(4);
      this->bounded_string_seq_unbounded = {{"R"}, {"O"}, {"S"}, {"2"}};
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->bool_member = false;
      this->int8_member = 0;
      this->uint8_member = 0;
      this->byte_member = 0;
      this->float32_member = 0.0f;
      std::fill<typename std::array<float, 3>::iterator, float>(this->float_array.begin(), this->float_array.end(), 0.0f);
      this->string_member = "";
      this->wstring_member = u"";
      this->bounded_string_member = "";
      this->bounded_wstring_member = u"";
      std::fill<typename std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 4>::iterator, std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>(this->string_array.begin(), this->string_array.end(), "");
      std::fill<typename std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 4>::iterator, std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>(this->bounded_string_array.begin(), this->bounded_string_array.end(), "");
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->nested_array.fill(rclrs_example_msgs::msg::NestedType_<ContainerAllocator>{_alloc, _init});
    }
  }

  // field types and members
  using _bool_member_type =
    bool;
  _bool_member_type bool_member;
  using _int8_member_type =
    int8_t;
  _int8_member_type int8_member;
  using _uint8_member_type =
    uint8_t;
  _uint8_member_type uint8_member;
  using _byte_member_type =
    unsigned char;
  _byte_member_type byte_member;
  using _float32_member_type =
    float;
  _float32_member_type float32_member;
  using _float_array_type =
    std::array<float, 3>;
  _float_array_type float_array;
  using _float_seq_bounded_type =
    rosidl_runtime_cpp::BoundedVector<float, 3, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _float_seq_bounded_type float_seq_bounded;
  using _float_seq_unbounded_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _float_seq_unbounded_type float_seq_unbounded;
  using _string_member_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _string_member_type string_member;
  using _wstring_member_type =
    std::basic_string<char16_t, std::char_traits<char16_t>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char16_t>>;
  _wstring_member_type wstring_member;
  using _bounded_string_member_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _bounded_string_member_type bounded_string_member;
  using _bounded_wstring_member_type =
    std::basic_string<char16_t, std::char_traits<char16_t>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char16_t>>;
  _bounded_wstring_member_type bounded_wstring_member;
  using _string_array_type =
    std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 4>;
  _string_array_type string_array;
  using _string_seq_bounded_type =
    rosidl_runtime_cpp::BoundedVector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 4, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _string_seq_bounded_type string_seq_bounded;
  using _string_seq_unbounded_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _string_seq_unbounded_type string_seq_unbounded;
  using _bounded_string_array_type =
    std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 4>;
  _bounded_string_array_type bounded_string_array;
  using _bounded_string_seq_bounded_type =
    rosidl_runtime_cpp::BoundedVector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 4, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _bounded_string_seq_bounded_type bounded_string_seq_bounded;
  using _bounded_string_seq_unbounded_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _bounded_string_seq_unbounded_type bounded_string_seq_unbounded;
  using _nested_member_type =
    rclrs_example_msgs::msg::NestedType_<ContainerAllocator>;
  _nested_member_type nested_member;
  using _nested_array_type =
    std::array<rclrs_example_msgs::msg::NestedType_<ContainerAllocator>, 2>;
  _nested_array_type nested_array;
  using _nested_seq_unbounded_type =
    std::vector<rclrs_example_msgs::msg::NestedType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rclrs_example_msgs::msg::NestedType_<ContainerAllocator>>>;
  _nested_seq_unbounded_type nested_seq_unbounded;
  using _nested_seq_bounded_type =
    rosidl_runtime_cpp::BoundedVector<rclrs_example_msgs::msg::NestedType_<ContainerAllocator>, 3, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rclrs_example_msgs::msg::NestedType_<ContainerAllocator>>>;
  _nested_seq_bounded_type nested_seq_bounded;

  // setters for named parameter idiom
  Type & set__bool_member(
    const bool & _arg)
  {
    this->bool_member = _arg;
    return *this;
  }
  Type & set__int8_member(
    const int8_t & _arg)
  {
    this->int8_member = _arg;
    return *this;
  }
  Type & set__uint8_member(
    const uint8_t & _arg)
  {
    this->uint8_member = _arg;
    return *this;
  }
  Type & set__byte_member(
    const unsigned char & _arg)
  {
    this->byte_member = _arg;
    return *this;
  }
  Type & set__float32_member(
    const float & _arg)
  {
    this->float32_member = _arg;
    return *this;
  }
  Type & set__float_array(
    const std::array<float, 3> & _arg)
  {
    this->float_array = _arg;
    return *this;
  }
  Type & set__float_seq_bounded(
    const rosidl_runtime_cpp::BoundedVector<float, 3, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->float_seq_bounded = _arg;
    return *this;
  }
  Type & set__float_seq_unbounded(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->float_seq_unbounded = _arg;
    return *this;
  }
  Type & set__string_member(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->string_member = _arg;
    return *this;
  }
  Type & set__wstring_member(
    const std::basic_string<char16_t, std::char_traits<char16_t>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char16_t>> & _arg)
  {
    this->wstring_member = _arg;
    return *this;
  }
  Type & set__bounded_string_member(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->bounded_string_member = _arg;
    return *this;
  }
  Type & set__bounded_wstring_member(
    const std::basic_string<char16_t, std::char_traits<char16_t>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char16_t>> & _arg)
  {
    this->bounded_wstring_member = _arg;
    return *this;
  }
  Type & set__string_array(
    const std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 4> & _arg)
  {
    this->string_array = _arg;
    return *this;
  }
  Type & set__string_seq_bounded(
    const rosidl_runtime_cpp::BoundedVector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 4, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->string_seq_bounded = _arg;
    return *this;
  }
  Type & set__string_seq_unbounded(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->string_seq_unbounded = _arg;
    return *this;
  }
  Type & set__bounded_string_array(
    const std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 4> & _arg)
  {
    this->bounded_string_array = _arg;
    return *this;
  }
  Type & set__bounded_string_seq_bounded(
    const rosidl_runtime_cpp::BoundedVector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 4, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->bounded_string_seq_bounded = _arg;
    return *this;
  }
  Type & set__bounded_string_seq_unbounded(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->bounded_string_seq_unbounded = _arg;
    return *this;
  }
  Type & set__nested_member(
    const rclrs_example_msgs::msg::NestedType_<ContainerAllocator> & _arg)
  {
    this->nested_member = _arg;
    return *this;
  }
  Type & set__nested_array(
    const std::array<rclrs_example_msgs::msg::NestedType_<ContainerAllocator>, 2> & _arg)
  {
    this->nested_array = _arg;
    return *this;
  }
  Type & set__nested_seq_unbounded(
    const std::vector<rclrs_example_msgs::msg::NestedType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rclrs_example_msgs::msg::NestedType_<ContainerAllocator>>> & _arg)
  {
    this->nested_seq_unbounded = _arg;
    return *this;
  }
  Type & set__nested_seq_bounded(
    const rosidl_runtime_cpp::BoundedVector<rclrs_example_msgs::msg::NestedType_<ContainerAllocator>, 3, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rclrs_example_msgs::msg::NestedType_<ContainerAllocator>>> & _arg)
  {
    this->nested_seq_bounded = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t TWO_PLUS_TWO =
    5;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> PASSWORD;
  static constexpr float PI =
    3.0;

  // pointer types
  using RawPtr =
    rclrs_example_msgs::msg::VariousTypes_<ContainerAllocator> *;
  using ConstRawPtr =
    const rclrs_example_msgs::msg::VariousTypes_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rclrs_example_msgs::msg::VariousTypes_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rclrs_example_msgs::msg::VariousTypes_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rclrs_example_msgs::msg::VariousTypes_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rclrs_example_msgs::msg::VariousTypes_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rclrs_example_msgs::msg::VariousTypes_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rclrs_example_msgs::msg::VariousTypes_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rclrs_example_msgs::msg::VariousTypes_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rclrs_example_msgs::msg::VariousTypes_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rclrs_example_msgs__msg__VariousTypes
    std::shared_ptr<rclrs_example_msgs::msg::VariousTypes_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rclrs_example_msgs__msg__VariousTypes
    std::shared_ptr<rclrs_example_msgs::msg::VariousTypes_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VariousTypes_ & other) const
  {
    if (this->bool_member != other.bool_member) {
      return false;
    }
    if (this->int8_member != other.int8_member) {
      return false;
    }
    if (this->uint8_member != other.uint8_member) {
      return false;
    }
    if (this->byte_member != other.byte_member) {
      return false;
    }
    if (this->float32_member != other.float32_member) {
      return false;
    }
    if (this->float_array != other.float_array) {
      return false;
    }
    if (this->float_seq_bounded != other.float_seq_bounded) {
      return false;
    }
    if (this->float_seq_unbounded != other.float_seq_unbounded) {
      return false;
    }
    if (this->string_member != other.string_member) {
      return false;
    }
    if (this->wstring_member != other.wstring_member) {
      return false;
    }
    if (this->bounded_string_member != other.bounded_string_member) {
      return false;
    }
    if (this->bounded_wstring_member != other.bounded_wstring_member) {
      return false;
    }
    if (this->string_array != other.string_array) {
      return false;
    }
    if (this->string_seq_bounded != other.string_seq_bounded) {
      return false;
    }
    if (this->string_seq_unbounded != other.string_seq_unbounded) {
      return false;
    }
    if (this->bounded_string_array != other.bounded_string_array) {
      return false;
    }
    if (this->bounded_string_seq_bounded != other.bounded_string_seq_bounded) {
      return false;
    }
    if (this->bounded_string_seq_unbounded != other.bounded_string_seq_unbounded) {
      return false;
    }
    if (this->nested_member != other.nested_member) {
      return false;
    }
    if (this->nested_array != other.nested_array) {
      return false;
    }
    if (this->nested_seq_unbounded != other.nested_seq_unbounded) {
      return false;
    }
    if (this->nested_seq_bounded != other.nested_seq_bounded) {
      return false;
    }
    return true;
  }
  bool operator!=(const VariousTypes_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VariousTypes_

// alias to use template instance with default allocator
using VariousTypes =
  rclrs_example_msgs::msg::VariousTypes_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t VariousTypes_<ContainerAllocator>::TWO_PLUS_TWO;
#endif  // __cplusplus < 201703L
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
VariousTypes_<ContainerAllocator>::PASSWORD = "hunter2";
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr float VariousTypes_<ContainerAllocator>::PI;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace rclrs_example_msgs

#endif  // RCLRS_EXAMPLE_MSGS__MSG__DETAIL__VARIOUS_TYPES__STRUCT_HPP_
