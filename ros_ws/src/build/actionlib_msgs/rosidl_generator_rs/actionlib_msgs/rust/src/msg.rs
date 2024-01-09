pub mod rmw {
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};

#[link(name = "actionlib_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__actionlib_msgs__msg__GoalID() -> *const std::os::raw::c_void;
}

#[link(name = "actionlib_msgs__rosidl_generator_c")]
extern "C" {
    fn actionlib_msgs__msg__GoalID__init(msg: *mut GoalID) -> bool;
    fn actionlib_msgs__msg__GoalID__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GoalID>, size: usize) -> bool;
    fn actionlib_msgs__msg__GoalID__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GoalID>);
    fn actionlib_msgs__msg__GoalID__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GoalID>, out_seq: *mut rosidl_runtime_rs::Sequence<GoalID>) -> bool;
}

// Corresponds to actionlib_msgs__msg__GoalID
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GoalID {
    pub stamp: builtin_interfaces::msg::rmw::Time,
    pub id: rosidl_runtime_rs::String,
}



impl Default for GoalID {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !actionlib_msgs__msg__GoalID__init(&mut msg as *mut _) {
        panic!("Call to actionlib_msgs__msg__GoalID__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GoalID {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib_msgs__msg__GoalID__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib_msgs__msg__GoalID__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib_msgs__msg__GoalID__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GoalID {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GoalID where Self: Sized {
  const TYPE_NAME: &'static str = "actionlib_msgs/msg/GoalID";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__actionlib_msgs__msg__GoalID() }
  }
}


#[link(name = "actionlib_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__actionlib_msgs__msg__GoalStatus() -> *const std::os::raw::c_void;
}

#[link(name = "actionlib_msgs__rosidl_generator_c")]
extern "C" {
    fn actionlib_msgs__msg__GoalStatus__init(msg: *mut GoalStatus) -> bool;
    fn actionlib_msgs__msg__GoalStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GoalStatus>, size: usize) -> bool;
    fn actionlib_msgs__msg__GoalStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GoalStatus>);
    fn actionlib_msgs__msg__GoalStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GoalStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<GoalStatus>) -> bool;
}

// Corresponds to actionlib_msgs__msg__GoalStatus
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GoalStatus {
    pub goal_id: crate::msg::rmw::GoalID,
    pub status: u8,
    pub text: rosidl_runtime_rs::String,
}

impl GoalStatus {
    /// The goal has yet to be processed by the action server.
    pub const PENDING: u8 = 0;
    /// The goal is currently being processed by the action server.
    pub const ACTIVE: u8 = 1;
    /// The goal received a cancel request after it started executing
    ///   and has since completed its execution (Terminal State).
    pub const PREEMPTED: u8 = 2;
    /// The goal was achieved successfully by the action server
    ///   (Terminal State).
    pub const SUCCEEDED: u8 = 3;
    /// The goal was aborted during execution by the action server due
    ///    to some failure (Terminal State).
    pub const ABORTED: u8 = 4;
    /// The goal was rejected by the action server without being processed,
    ///    because the goal was unattainable or invalid (Terminal State).
    pub const REJECTED: u8 = 5;
    /// The goal received a cancel request after it started executing
    ///    and has not yet completed execution.
    pub const PREEMPTING: u8 = 6;
    /// The goal received a cancel request before it started executing, but
    ///    the action server has not yet confirmed that the goal is canceled.
    pub const RECALLING: u8 = 7;
    /// The goal received a cancel request before it started executing
    ///    and was successfully cancelled (Terminal State).
    pub const RECALLED: u8 = 8;
    /// An action client can determine that a goal is LOST. This should not
    ///    be sent over the wire by an action server.
    pub const LOST: u8 = 9;
}


impl Default for GoalStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !actionlib_msgs__msg__GoalStatus__init(&mut msg as *mut _) {
        panic!("Call to actionlib_msgs__msg__GoalStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GoalStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib_msgs__msg__GoalStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib_msgs__msg__GoalStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib_msgs__msg__GoalStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GoalStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GoalStatus where Self: Sized {
  const TYPE_NAME: &'static str = "actionlib_msgs/msg/GoalStatus";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__actionlib_msgs__msg__GoalStatus() }
  }
}


#[link(name = "actionlib_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__actionlib_msgs__msg__GoalStatusArray() -> *const std::os::raw::c_void;
}

#[link(name = "actionlib_msgs__rosidl_generator_c")]
extern "C" {
    fn actionlib_msgs__msg__GoalStatusArray__init(msg: *mut GoalStatusArray) -> bool;
    fn actionlib_msgs__msg__GoalStatusArray__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GoalStatusArray>, size: usize) -> bool;
    fn actionlib_msgs__msg__GoalStatusArray__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GoalStatusArray>);
    fn actionlib_msgs__msg__GoalStatusArray__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GoalStatusArray>, out_seq: *mut rosidl_runtime_rs::Sequence<GoalStatusArray>) -> bool;
}

// Corresponds to actionlib_msgs__msg__GoalStatusArray
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GoalStatusArray {
    pub header: std_msgs::msg::rmw::Header,
    pub status_list: rosidl_runtime_rs::Sequence<crate::msg::rmw::GoalStatus>,
}



impl Default for GoalStatusArray {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !actionlib_msgs__msg__GoalStatusArray__init(&mut msg as *mut _) {
        panic!("Call to actionlib_msgs__msg__GoalStatusArray__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GoalStatusArray {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib_msgs__msg__GoalStatusArray__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib_msgs__msg__GoalStatusArray__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { actionlib_msgs__msg__GoalStatusArray__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GoalStatusArray {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GoalStatusArray where Self: Sized {
  const TYPE_NAME: &'static str = "actionlib_msgs/msg/GoalStatusArray";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__actionlib_msgs__msg__GoalStatusArray() }
  }
}


}  // mod rmw


#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GoalID {
    pub stamp: builtin_interfaces::msg::Time,
    pub id: std::string::String,
}



impl Default for GoalID {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::GoalID::default())
  }
}

impl rosidl_runtime_rs::Message for GoalID {
  type RmwMsg = crate::msg::rmw::GoalID;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
        id: msg.id.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
        id: msg.id.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
      id: msg.id.to_string(),
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GoalStatus {
    pub goal_id: crate::msg::GoalID,
    pub status: u8,
    pub text: std::string::String,
}

impl GoalStatus {
    /// The goal has yet to be processed by the action server.
    pub const PENDING: u8 = 0;
    /// The goal is currently being processed by the action server.
    pub const ACTIVE: u8 = 1;
    /// The goal received a cancel request after it started executing
    ///   and has since completed its execution (Terminal State).
    pub const PREEMPTED: u8 = 2;
    /// The goal was achieved successfully by the action server
    ///   (Terminal State).
    pub const SUCCEEDED: u8 = 3;
    /// The goal was aborted during execution by the action server due
    ///    to some failure (Terminal State).
    pub const ABORTED: u8 = 4;
    /// The goal was rejected by the action server without being processed,
    ///    because the goal was unattainable or invalid (Terminal State).
    pub const REJECTED: u8 = 5;
    /// The goal received a cancel request after it started executing
    ///    and has not yet completed execution.
    pub const PREEMPTING: u8 = 6;
    /// The goal received a cancel request before it started executing, but
    ///    the action server has not yet confirmed that the goal is canceled.
    pub const RECALLING: u8 = 7;
    /// The goal received a cancel request before it started executing
    ///    and was successfully cancelled (Terminal State).
    pub const RECALLED: u8 = 8;
    /// An action client can determine that a goal is LOST. This should not
    ///    be sent over the wire by an action server.
    pub const LOST: u8 = 9;
}


impl Default for GoalStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::GoalStatus::default())
  }
}

impl rosidl_runtime_rs::Message for GoalStatus {
  type RmwMsg = crate::msg::rmw::GoalStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: crate::msg::GoalID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        status: msg.status,
        text: msg.text.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: crate::msg::GoalID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
      status: msg.status,
        text: msg.text.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: crate::msg::GoalID::from_rmw_message(msg.goal_id),
      status: msg.status,
      text: msg.text.to_string(),
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GoalStatusArray {
    pub header: std_msgs::msg::Header,
    pub status_list: Vec<crate::msg::GoalStatus>,
}



impl Default for GoalStatusArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::GoalStatusArray::default())
  }
}

impl rosidl_runtime_rs::Message for GoalStatusArray {
  type RmwMsg = crate::msg::rmw::GoalStatusArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        status_list: msg.status_list
          .into_iter()
          .map(|elem| crate::msg::GoalStatus::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        status_list: msg.status_list
          .iter()
          .map(|elem| crate::msg::GoalStatus::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      status_list: msg.status_list
          .into_iter()
          .map(crate::msg::GoalStatus::from_rmw_message)
          .collect(),
    }
  }
}


