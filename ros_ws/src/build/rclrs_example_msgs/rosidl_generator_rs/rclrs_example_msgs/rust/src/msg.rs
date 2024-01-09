pub mod rmw {
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};

#[link(name = "rclrs_example_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rclrs_example_msgs__msg__NestedType() -> *const std::os::raw::c_void;
}

#[link(name = "rclrs_example_msgs__rosidl_generator_c")]
extern "C" {
    fn rclrs_example_msgs__msg__NestedType__init(msg: *mut NestedType) -> bool;
    fn rclrs_example_msgs__msg__NestedType__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NestedType>, size: usize) -> bool;
    fn rclrs_example_msgs__msg__NestedType__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NestedType>);
    fn rclrs_example_msgs__msg__NestedType__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NestedType>, out_seq: *mut rosidl_runtime_rs::Sequence<NestedType>) -> bool;
}

// Corresponds to rclrs_example_msgs__msg__NestedType
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NestedType {
    pub effect: rosidl_runtime_rs::String,
}



impl Default for NestedType {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rclrs_example_msgs__msg__NestedType__init(&mut msg as *mut _) {
        panic!("Call to rclrs_example_msgs__msg__NestedType__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NestedType {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rclrs_example_msgs__msg__NestedType__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rclrs_example_msgs__msg__NestedType__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rclrs_example_msgs__msg__NestedType__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NestedType {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NestedType where Self: Sized {
  const TYPE_NAME: &'static str = "rclrs_example_msgs/msg/NestedType";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rclrs_example_msgs__msg__NestedType() }
  }
}


#[link(name = "rclrs_example_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rclrs_example_msgs__msg__VariousTypes() -> *const std::os::raw::c_void;
}

#[link(name = "rclrs_example_msgs__rosidl_generator_c")]
extern "C" {
    fn rclrs_example_msgs__msg__VariousTypes__init(msg: *mut VariousTypes) -> bool;
    fn rclrs_example_msgs__msg__VariousTypes__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<VariousTypes>, size: usize) -> bool;
    fn rclrs_example_msgs__msg__VariousTypes__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<VariousTypes>);
    fn rclrs_example_msgs__msg__VariousTypes__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<VariousTypes>, out_seq: *mut rosidl_runtime_rs::Sequence<VariousTypes>) -> bool;
}

// Corresponds to rclrs_example_msgs__msg__VariousTypes
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VariousTypes {
    pub bool_member: bool,
    pub int8_member: i8,
    pub uint8_member: u8,
    pub byte_member: u8,
    pub float32_member: f32,
    pub float_array: [f32; 3],
    pub float_seq_bounded: rosidl_runtime_rs::BoundedSequence<f32, 3>,
    pub float_seq_unbounded: rosidl_runtime_rs::Sequence<f32>,
    pub string_member: rosidl_runtime_rs::String,
    pub wstring_member: rosidl_runtime_rs::WString,
    pub bounded_string_member: rosidl_runtime_rs::BoundedString<3>,
    pub bounded_wstring_member: rosidl_runtime_rs::BoundedWString<3>,
    pub string_array: [rosidl_runtime_rs::String; 4],
    pub string_seq_bounded: rosidl_runtime_rs::BoundedSequence<rosidl_runtime_rs::String, 4>,
    pub string_seq_unbounded: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,
    pub bounded_string_array: [rosidl_runtime_rs::BoundedString<1>; 4],
    pub bounded_string_seq_bounded: rosidl_runtime_rs::BoundedSequence<rosidl_runtime_rs::BoundedString<1>, 4>,
    pub bounded_string_seq_unbounded: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::BoundedString<1>>,
    pub nested_member: crate::msg::rmw::NestedType,
    pub nested_array: [crate::msg::rmw::NestedType; 2],
    pub nested_seq_unbounded: rosidl_runtime_rs::Sequence<crate::msg::rmw::NestedType>,
    pub nested_seq_bounded: rosidl_runtime_rs::BoundedSequence<crate::msg::rmw::NestedType, 3>,
}

impl VariousTypes {
    /// binary, hexadecimal and octal constants are also possible
    pub const TWO_PLUS_TWO: i8 = 5;
    /// Only unbounded strings are possible
    pub const PASSWORD: &'static str = "hunter2";
    /// As determined by Edward J. Goodwin
    pub const PI: f32 = 3.0;
}


impl Default for VariousTypes {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rclrs_example_msgs__msg__VariousTypes__init(&mut msg as *mut _) {
        panic!("Call to rclrs_example_msgs__msg__VariousTypes__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for VariousTypes {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rclrs_example_msgs__msg__VariousTypes__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rclrs_example_msgs__msg__VariousTypes__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rclrs_example_msgs__msg__VariousTypes__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for VariousTypes {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for VariousTypes where Self: Sized {
  const TYPE_NAME: &'static str = "rclrs_example_msgs/msg/VariousTypes";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rclrs_example_msgs__msg__VariousTypes() }
  }
}


}  // mod rmw


#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NestedType {
    pub effect: std::string::String,
}



impl Default for NestedType {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::NestedType::default())
  }
}

impl rosidl_runtime_rs::Message for NestedType {
  type RmwMsg = crate::msg::rmw::NestedType;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        effect: msg.effect.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        effect: msg.effect.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      effect: msg.effect.to_string(),
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VariousTypes {
    pub bool_member: bool,
    pub int8_member: i8,
    pub uint8_member: u8,
    pub byte_member: u8,
    pub float32_member: f32,
    pub float_array: [f32; 3],
    pub float_seq_bounded: rosidl_runtime_rs::BoundedSequence<f32, 3>,
    pub float_seq_unbounded: Vec<f32>,
    pub string_member: std::string::String,
    pub wstring_member: std::string::String,
    pub bounded_string_member: rosidl_runtime_rs::BoundedString<3>,
    pub bounded_wstring_member: rosidl_runtime_rs::BoundedWString<3>,
    pub string_array: [std::string::String; 4],
    pub string_seq_bounded: rosidl_runtime_rs::BoundedSequence<rosidl_runtime_rs::String, 4>,
    pub string_seq_unbounded: Vec<std::string::String>,
    pub bounded_string_array: [rosidl_runtime_rs::BoundedString<1>; 4],
    pub bounded_string_seq_bounded: rosidl_runtime_rs::BoundedSequence<rosidl_runtime_rs::BoundedString<1>, 4>,
    pub bounded_string_seq_unbounded: Vec<rosidl_runtime_rs::BoundedString<1>>,
    pub nested_member: crate::msg::NestedType,
    pub nested_array: [crate::msg::NestedType; 2],
    pub nested_seq_unbounded: Vec<crate::msg::NestedType>,
    pub nested_seq_bounded: rosidl_runtime_rs::BoundedSequence<crate::msg::rmw::NestedType, 3>,
}

impl VariousTypes {
    /// binary, hexadecimal and octal constants are also possible
    pub const TWO_PLUS_TWO: i8 = 5;
    /// Only unbounded strings are possible
    pub const PASSWORD: &'static str = "hunter2";
    /// As determined by Edward J. Goodwin
    pub const PI: f32 = 3.0;
}


impl Default for VariousTypes {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::VariousTypes::default())
  }
}

impl rosidl_runtime_rs::Message for VariousTypes {
  type RmwMsg = crate::msg::rmw::VariousTypes;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        bool_member: msg.bool_member,
        int8_member: msg.int8_member,
        uint8_member: msg.uint8_member,
        byte_member: msg.byte_member,
        float32_member: msg.float32_member,
        float_array: msg.float_array,
        float_seq_bounded: msg.float_seq_bounded,
        float_seq_unbounded: msg.float_seq_unbounded.into(),
        string_member: msg.string_member.as_str().into(),
        wstring_member: msg.wstring_member.as_str().into(),
        bounded_string_member: msg.bounded_string_member,
        bounded_wstring_member: msg.bounded_wstring_member,
        string_array: msg.string_array
          .map(|elem| elem.as_str().into()),
        string_seq_bounded: msg.string_seq_bounded,
        string_seq_unbounded: msg.string_seq_unbounded
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        bounded_string_array: msg.bounded_string_array.clone(),
        bounded_string_seq_bounded: msg.bounded_string_seq_bounded,
        bounded_string_seq_unbounded: msg.bounded_string_seq_unbounded.into(),
        nested_member: crate::msg::NestedType::into_rmw_message(std::borrow::Cow::Owned(msg.nested_member)).into_owned(),
        nested_array: msg.nested_array
          .map(|elem| crate::msg::NestedType::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned()),
        nested_seq_unbounded: msg.nested_seq_unbounded
          .into_iter()
          .map(|elem| crate::msg::NestedType::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        nested_seq_bounded: msg.nested_seq_bounded,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      bool_member: msg.bool_member,
      int8_member: msg.int8_member,
      uint8_member: msg.uint8_member,
      byte_member: msg.byte_member,
      float32_member: msg.float32_member,
        float_array: msg.float_array,
        float_seq_bounded: msg.float_seq_bounded.clone(),
        float_seq_unbounded: msg.float_seq_unbounded.as_slice().into(),
        string_member: msg.string_member.as_str().into(),
        wstring_member: msg.wstring_member.as_str().into(),
        bounded_string_member: msg.bounded_string_member.clone(),
        bounded_wstring_member: msg.bounded_wstring_member.clone(),
        string_array: msg.string_array
          .iter()
          .map(|elem| elem.as_str().into())
          .collect::<Vec<_>>()
          .try_into()
          .unwrap(),
        string_seq_bounded: msg.string_seq_bounded.clone(),
        string_seq_unbounded: msg.string_seq_unbounded
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        bounded_string_array: msg.bounded_string_array.clone(),
        bounded_string_seq_bounded: msg.bounded_string_seq_bounded.clone(),
        bounded_string_seq_unbounded: msg.bounded_string_seq_unbounded.as_slice().into(),
        nested_member: crate::msg::NestedType::into_rmw_message(std::borrow::Cow::Borrowed(&msg.nested_member)).into_owned(),
        nested_array: msg.nested_array
          .iter()
          .map(|elem| crate::msg::NestedType::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect::<Vec<_>>()
          .try_into()
          .unwrap(),
        nested_seq_unbounded: msg.nested_seq_unbounded
          .iter()
          .map(|elem| crate::msg::NestedType::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        nested_seq_bounded: msg.nested_seq_bounded.clone(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      bool_member: msg.bool_member,
      int8_member: msg.int8_member,
      uint8_member: msg.uint8_member,
      byte_member: msg.byte_member,
      float32_member: msg.float32_member,
      float_array: msg.float_array,
      float_seq_bounded: msg.float_seq_bounded,
      float_seq_unbounded: msg.float_seq_unbounded
          .into_iter()
          .collect(),
      string_member: msg.string_member.to_string(),
      wstring_member: msg.wstring_member.to_string(),
      bounded_string_member: msg.bounded_string_member,
      bounded_wstring_member: msg.bounded_wstring_member,
      string_array: msg.string_array
        .map(|elem| elem.to_string()),
      string_seq_bounded: msg.string_seq_bounded,
      string_seq_unbounded: msg.string_seq_unbounded
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      bounded_string_array: msg.bounded_string_array,
      bounded_string_seq_bounded: msg.bounded_string_seq_bounded,
      bounded_string_seq_unbounded: msg.bounded_string_seq_unbounded
          .into_iter()
          .collect(),
      nested_member: crate::msg::NestedType::from_rmw_message(msg.nested_member),
      nested_array: msg.nested_array
        .map(crate::msg::NestedType::from_rmw_message),
      nested_seq_unbounded: msg.nested_seq_unbounded
          .into_iter()
          .map(crate::msg::NestedType::from_rmw_message)
          .collect(),
      nested_seq_bounded: msg.nested_seq_bounded,
    }
  }
}


