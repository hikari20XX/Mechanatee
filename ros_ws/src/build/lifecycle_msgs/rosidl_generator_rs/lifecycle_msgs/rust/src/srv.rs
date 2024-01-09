

#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ChangeState_Request {
    pub transition: crate::msg::Transition,
}



impl Default for ChangeState_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::srv::rmw::ChangeState_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ChangeState_Request {
  type RmwMsg = crate::srv::rmw::ChangeState_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        transition: crate::msg::Transition::into_rmw_message(std::borrow::Cow::Owned(msg.transition)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        transition: crate::msg::Transition::into_rmw_message(std::borrow::Cow::Borrowed(&msg.transition)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      transition: crate::msg::Transition::from_rmw_message(msg.transition),
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ChangeState_Response {
    pub success: bool,
}



impl Default for ChangeState_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::srv::rmw::ChangeState_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ChangeState_Response {
  type RmwMsg = crate::srv::rmw::ChangeState_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetAvailableStates_Request {
    pub structure_needs_at_least_one_member: u8,
}



impl Default for GetAvailableStates_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::srv::rmw::GetAvailableStates_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetAvailableStates_Request {
  type RmwMsg = crate::srv::rmw::GetAvailableStates_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetAvailableStates_Response {
    pub available_states: Vec<crate::msg::State>,
}



impl Default for GetAvailableStates_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::srv::rmw::GetAvailableStates_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetAvailableStates_Response {
  type RmwMsg = crate::srv::rmw::GetAvailableStates_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        available_states: msg.available_states
          .into_iter()
          .map(|elem| crate::msg::State::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        available_states: msg.available_states
          .iter()
          .map(|elem| crate::msg::State::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      available_states: msg.available_states
          .into_iter()
          .map(crate::msg::State::from_rmw_message)
          .collect(),
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetAvailableTransitions_Request {
    pub structure_needs_at_least_one_member: u8,
}



impl Default for GetAvailableTransitions_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::srv::rmw::GetAvailableTransitions_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetAvailableTransitions_Request {
  type RmwMsg = crate::srv::rmw::GetAvailableTransitions_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetAvailableTransitions_Response {
    pub available_transitions: Vec<crate::msg::TransitionDescription>,
}



impl Default for GetAvailableTransitions_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::srv::rmw::GetAvailableTransitions_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetAvailableTransitions_Response {
  type RmwMsg = crate::srv::rmw::GetAvailableTransitions_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        available_transitions: msg.available_transitions
          .into_iter()
          .map(|elem| crate::msg::TransitionDescription::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        available_transitions: msg.available_transitions
          .iter()
          .map(|elem| crate::msg::TransitionDescription::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      available_transitions: msg.available_transitions
          .into_iter()
          .map(crate::msg::TransitionDescription::from_rmw_message)
          .collect(),
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetState_Request {
    pub structure_needs_at_least_one_member: u8,
}



impl Default for GetState_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::srv::rmw::GetState_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetState_Request {
  type RmwMsg = crate::srv::rmw::GetState_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetState_Response {
    pub current_state: crate::msg::State,
}



impl Default for GetState_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::srv::rmw::GetState_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetState_Response {
  type RmwMsg = crate::srv::rmw::GetState_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        current_state: crate::msg::State::into_rmw_message(std::borrow::Cow::Owned(msg.current_state)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        current_state: crate::msg::State::into_rmw_message(std::borrow::Cow::Borrowed(&msg.current_state)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      current_state: crate::msg::State::from_rmw_message(msg.current_state),
    }
  }
}






#[link(name = "lifecycle_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__lifecycle_msgs__srv__ChangeState() -> *const std::os::raw::c_void;
}

// Corresponds to lifecycle_msgs__srv__ChangeState
pub struct ChangeState;

impl rosidl_runtime_rs::Service for ChangeState {
  type Request = crate::srv::ChangeState_Request;
  type Response = crate::srv::ChangeState_Response;

  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_service_type_support_handle__lifecycle_msgs__srv__ChangeState() }
  }
}




#[link(name = "lifecycle_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__lifecycle_msgs__srv__GetAvailableStates() -> *const std::os::raw::c_void;
}

// Corresponds to lifecycle_msgs__srv__GetAvailableStates
pub struct GetAvailableStates;

impl rosidl_runtime_rs::Service for GetAvailableStates {
  type Request = crate::srv::GetAvailableStates_Request;
  type Response = crate::srv::GetAvailableStates_Response;

  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_service_type_support_handle__lifecycle_msgs__srv__GetAvailableStates() }
  }
}




#[link(name = "lifecycle_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__lifecycle_msgs__srv__GetAvailableTransitions() -> *const std::os::raw::c_void;
}

// Corresponds to lifecycle_msgs__srv__GetAvailableTransitions
pub struct GetAvailableTransitions;

impl rosidl_runtime_rs::Service for GetAvailableTransitions {
  type Request = crate::srv::GetAvailableTransitions_Request;
  type Response = crate::srv::GetAvailableTransitions_Response;

  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_service_type_support_handle__lifecycle_msgs__srv__GetAvailableTransitions() }
  }
}




#[link(name = "lifecycle_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__lifecycle_msgs__srv__GetState() -> *const std::os::raw::c_void;
}

// Corresponds to lifecycle_msgs__srv__GetState
pub struct GetState;

impl rosidl_runtime_rs::Service for GetState {
  type Request = crate::srv::GetState_Request;
  type Response = crate::srv::GetState_Response;

  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_service_type_support_handle__lifecycle_msgs__srv__GetState() }
  }
}



pub mod rmw {
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};

#[link(name = "lifecycle_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__lifecycle_msgs__srv__ChangeState_Request() -> *const std::os::raw::c_void;
}

#[link(name = "lifecycle_msgs__rosidl_generator_c")]
extern "C" {
    fn lifecycle_msgs__srv__ChangeState_Request__init(msg: *mut ChangeState_Request) -> bool;
    fn lifecycle_msgs__srv__ChangeState_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ChangeState_Request>, size: usize) -> bool;
    fn lifecycle_msgs__srv__ChangeState_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ChangeState_Request>);
    fn lifecycle_msgs__srv__ChangeState_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ChangeState_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ChangeState_Request>) -> bool;
}

// Corresponds to lifecycle_msgs__srv__ChangeState_Request
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ChangeState_Request {
    pub transition: crate::msg::rmw::Transition,
}



impl Default for ChangeState_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !lifecycle_msgs__srv__ChangeState_Request__init(&mut msg as *mut _) {
        panic!("Call to lifecycle_msgs__srv__ChangeState_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ChangeState_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { lifecycle_msgs__srv__ChangeState_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { lifecycle_msgs__srv__ChangeState_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { lifecycle_msgs__srv__ChangeState_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ChangeState_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ChangeState_Request where Self: Sized {
  const TYPE_NAME: &'static str = "lifecycle_msgs/srv/ChangeState_Request";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__lifecycle_msgs__srv__ChangeState_Request() }
  }
}


#[link(name = "lifecycle_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__lifecycle_msgs__srv__ChangeState_Response() -> *const std::os::raw::c_void;
}

#[link(name = "lifecycle_msgs__rosidl_generator_c")]
extern "C" {
    fn lifecycle_msgs__srv__ChangeState_Response__init(msg: *mut ChangeState_Response) -> bool;
    fn lifecycle_msgs__srv__ChangeState_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ChangeState_Response>, size: usize) -> bool;
    fn lifecycle_msgs__srv__ChangeState_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ChangeState_Response>);
    fn lifecycle_msgs__srv__ChangeState_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ChangeState_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ChangeState_Response>) -> bool;
}

// Corresponds to lifecycle_msgs__srv__ChangeState_Response
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ChangeState_Response {
    pub success: bool,
}



impl Default for ChangeState_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !lifecycle_msgs__srv__ChangeState_Response__init(&mut msg as *mut _) {
        panic!("Call to lifecycle_msgs__srv__ChangeState_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ChangeState_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { lifecycle_msgs__srv__ChangeState_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { lifecycle_msgs__srv__ChangeState_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { lifecycle_msgs__srv__ChangeState_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ChangeState_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ChangeState_Response where Self: Sized {
  const TYPE_NAME: &'static str = "lifecycle_msgs/srv/ChangeState_Response";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__lifecycle_msgs__srv__ChangeState_Response() }
  }
}


#[link(name = "lifecycle_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__lifecycle_msgs__srv__GetAvailableStates_Request() -> *const std::os::raw::c_void;
}

#[link(name = "lifecycle_msgs__rosidl_generator_c")]
extern "C" {
    fn lifecycle_msgs__srv__GetAvailableStates_Request__init(msg: *mut GetAvailableStates_Request) -> bool;
    fn lifecycle_msgs__srv__GetAvailableStates_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetAvailableStates_Request>, size: usize) -> bool;
    fn lifecycle_msgs__srv__GetAvailableStates_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetAvailableStates_Request>);
    fn lifecycle_msgs__srv__GetAvailableStates_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetAvailableStates_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetAvailableStates_Request>) -> bool;
}

// Corresponds to lifecycle_msgs__srv__GetAvailableStates_Request
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetAvailableStates_Request {
    pub structure_needs_at_least_one_member: u8,
}



impl Default for GetAvailableStates_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !lifecycle_msgs__srv__GetAvailableStates_Request__init(&mut msg as *mut _) {
        panic!("Call to lifecycle_msgs__srv__GetAvailableStates_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetAvailableStates_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { lifecycle_msgs__srv__GetAvailableStates_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { lifecycle_msgs__srv__GetAvailableStates_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { lifecycle_msgs__srv__GetAvailableStates_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetAvailableStates_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetAvailableStates_Request where Self: Sized {
  const TYPE_NAME: &'static str = "lifecycle_msgs/srv/GetAvailableStates_Request";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__lifecycle_msgs__srv__GetAvailableStates_Request() }
  }
}


#[link(name = "lifecycle_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__lifecycle_msgs__srv__GetAvailableStates_Response() -> *const std::os::raw::c_void;
}

#[link(name = "lifecycle_msgs__rosidl_generator_c")]
extern "C" {
    fn lifecycle_msgs__srv__GetAvailableStates_Response__init(msg: *mut GetAvailableStates_Response) -> bool;
    fn lifecycle_msgs__srv__GetAvailableStates_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetAvailableStates_Response>, size: usize) -> bool;
    fn lifecycle_msgs__srv__GetAvailableStates_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetAvailableStates_Response>);
    fn lifecycle_msgs__srv__GetAvailableStates_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetAvailableStates_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetAvailableStates_Response>) -> bool;
}

// Corresponds to lifecycle_msgs__srv__GetAvailableStates_Response
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetAvailableStates_Response {
    pub available_states: rosidl_runtime_rs::Sequence<crate::msg::rmw::State>,
}



impl Default for GetAvailableStates_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !lifecycle_msgs__srv__GetAvailableStates_Response__init(&mut msg as *mut _) {
        panic!("Call to lifecycle_msgs__srv__GetAvailableStates_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetAvailableStates_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { lifecycle_msgs__srv__GetAvailableStates_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { lifecycle_msgs__srv__GetAvailableStates_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { lifecycle_msgs__srv__GetAvailableStates_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetAvailableStates_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetAvailableStates_Response where Self: Sized {
  const TYPE_NAME: &'static str = "lifecycle_msgs/srv/GetAvailableStates_Response";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__lifecycle_msgs__srv__GetAvailableStates_Response() }
  }
}


#[link(name = "lifecycle_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__lifecycle_msgs__srv__GetAvailableTransitions_Request() -> *const std::os::raw::c_void;
}

#[link(name = "lifecycle_msgs__rosidl_generator_c")]
extern "C" {
    fn lifecycle_msgs__srv__GetAvailableTransitions_Request__init(msg: *mut GetAvailableTransitions_Request) -> bool;
    fn lifecycle_msgs__srv__GetAvailableTransitions_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetAvailableTransitions_Request>, size: usize) -> bool;
    fn lifecycle_msgs__srv__GetAvailableTransitions_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetAvailableTransitions_Request>);
    fn lifecycle_msgs__srv__GetAvailableTransitions_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetAvailableTransitions_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetAvailableTransitions_Request>) -> bool;
}

// Corresponds to lifecycle_msgs__srv__GetAvailableTransitions_Request
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetAvailableTransitions_Request {
    pub structure_needs_at_least_one_member: u8,
}



impl Default for GetAvailableTransitions_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !lifecycle_msgs__srv__GetAvailableTransitions_Request__init(&mut msg as *mut _) {
        panic!("Call to lifecycle_msgs__srv__GetAvailableTransitions_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetAvailableTransitions_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { lifecycle_msgs__srv__GetAvailableTransitions_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { lifecycle_msgs__srv__GetAvailableTransitions_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { lifecycle_msgs__srv__GetAvailableTransitions_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetAvailableTransitions_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetAvailableTransitions_Request where Self: Sized {
  const TYPE_NAME: &'static str = "lifecycle_msgs/srv/GetAvailableTransitions_Request";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__lifecycle_msgs__srv__GetAvailableTransitions_Request() }
  }
}


#[link(name = "lifecycle_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__lifecycle_msgs__srv__GetAvailableTransitions_Response() -> *const std::os::raw::c_void;
}

#[link(name = "lifecycle_msgs__rosidl_generator_c")]
extern "C" {
    fn lifecycle_msgs__srv__GetAvailableTransitions_Response__init(msg: *mut GetAvailableTransitions_Response) -> bool;
    fn lifecycle_msgs__srv__GetAvailableTransitions_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetAvailableTransitions_Response>, size: usize) -> bool;
    fn lifecycle_msgs__srv__GetAvailableTransitions_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetAvailableTransitions_Response>);
    fn lifecycle_msgs__srv__GetAvailableTransitions_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetAvailableTransitions_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetAvailableTransitions_Response>) -> bool;
}

// Corresponds to lifecycle_msgs__srv__GetAvailableTransitions_Response
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetAvailableTransitions_Response {
    pub available_transitions: rosidl_runtime_rs::Sequence<crate::msg::rmw::TransitionDescription>,
}



impl Default for GetAvailableTransitions_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !lifecycle_msgs__srv__GetAvailableTransitions_Response__init(&mut msg as *mut _) {
        panic!("Call to lifecycle_msgs__srv__GetAvailableTransitions_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetAvailableTransitions_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { lifecycle_msgs__srv__GetAvailableTransitions_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { lifecycle_msgs__srv__GetAvailableTransitions_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { lifecycle_msgs__srv__GetAvailableTransitions_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetAvailableTransitions_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetAvailableTransitions_Response where Self: Sized {
  const TYPE_NAME: &'static str = "lifecycle_msgs/srv/GetAvailableTransitions_Response";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__lifecycle_msgs__srv__GetAvailableTransitions_Response() }
  }
}


#[link(name = "lifecycle_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__lifecycle_msgs__srv__GetState_Request() -> *const std::os::raw::c_void;
}

#[link(name = "lifecycle_msgs__rosidl_generator_c")]
extern "C" {
    fn lifecycle_msgs__srv__GetState_Request__init(msg: *mut GetState_Request) -> bool;
    fn lifecycle_msgs__srv__GetState_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetState_Request>, size: usize) -> bool;
    fn lifecycle_msgs__srv__GetState_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetState_Request>);
    fn lifecycle_msgs__srv__GetState_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetState_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetState_Request>) -> bool;
}

// Corresponds to lifecycle_msgs__srv__GetState_Request
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetState_Request {
    pub structure_needs_at_least_one_member: u8,
}



impl Default for GetState_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !lifecycle_msgs__srv__GetState_Request__init(&mut msg as *mut _) {
        panic!("Call to lifecycle_msgs__srv__GetState_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetState_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { lifecycle_msgs__srv__GetState_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { lifecycle_msgs__srv__GetState_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { lifecycle_msgs__srv__GetState_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetState_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetState_Request where Self: Sized {
  const TYPE_NAME: &'static str = "lifecycle_msgs/srv/GetState_Request";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__lifecycle_msgs__srv__GetState_Request() }
  }
}


#[link(name = "lifecycle_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__lifecycle_msgs__srv__GetState_Response() -> *const std::os::raw::c_void;
}

#[link(name = "lifecycle_msgs__rosidl_generator_c")]
extern "C" {
    fn lifecycle_msgs__srv__GetState_Response__init(msg: *mut GetState_Response) -> bool;
    fn lifecycle_msgs__srv__GetState_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetState_Response>, size: usize) -> bool;
    fn lifecycle_msgs__srv__GetState_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetState_Response>);
    fn lifecycle_msgs__srv__GetState_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetState_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetState_Response>) -> bool;
}

// Corresponds to lifecycle_msgs__srv__GetState_Response
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetState_Response {
    pub current_state: crate::msg::rmw::State,
}



impl Default for GetState_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !lifecycle_msgs__srv__GetState_Response__init(&mut msg as *mut _) {
        panic!("Call to lifecycle_msgs__srv__GetState_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetState_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { lifecycle_msgs__srv__GetState_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { lifecycle_msgs__srv__GetState_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { lifecycle_msgs__srv__GetState_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetState_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetState_Response where Self: Sized {
  const TYPE_NAME: &'static str = "lifecycle_msgs/srv/GetState_Response";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__lifecycle_msgs__srv__GetState_Response() }
  }
}






  #[link(name = "lifecycle_msgs__rosidl_typesupport_c")]
  extern "C" {
      fn rosidl_typesupport_c__get_service_type_support_handle__lifecycle_msgs__srv__ChangeState() -> *const std::os::raw::c_void;
  }

  // Corresponds to lifecycle_msgs__srv__ChangeState
  pub struct ChangeState;

  impl rosidl_runtime_rs::Service for ChangeState {
    type Request = crate::srv::rmw::ChangeState_Request;
    type Response = crate::srv::rmw::ChangeState_Response;

    fn get_type_support() -> *const std::os::raw::c_void {
      // SAFETY: No preconditions for this function.
      unsafe { rosidl_typesupport_c__get_service_type_support_handle__lifecycle_msgs__srv__ChangeState() }
    }
  }




  #[link(name = "lifecycle_msgs__rosidl_typesupport_c")]
  extern "C" {
      fn rosidl_typesupport_c__get_service_type_support_handle__lifecycle_msgs__srv__GetAvailableStates() -> *const std::os::raw::c_void;
  }

  // Corresponds to lifecycle_msgs__srv__GetAvailableStates
  pub struct GetAvailableStates;

  impl rosidl_runtime_rs::Service for GetAvailableStates {
    type Request = crate::srv::rmw::GetAvailableStates_Request;
    type Response = crate::srv::rmw::GetAvailableStates_Response;

    fn get_type_support() -> *const std::os::raw::c_void {
      // SAFETY: No preconditions for this function.
      unsafe { rosidl_typesupport_c__get_service_type_support_handle__lifecycle_msgs__srv__GetAvailableStates() }
    }
  }




  #[link(name = "lifecycle_msgs__rosidl_typesupport_c")]
  extern "C" {
      fn rosidl_typesupport_c__get_service_type_support_handle__lifecycle_msgs__srv__GetAvailableTransitions() -> *const std::os::raw::c_void;
  }

  // Corresponds to lifecycle_msgs__srv__GetAvailableTransitions
  pub struct GetAvailableTransitions;

  impl rosidl_runtime_rs::Service for GetAvailableTransitions {
    type Request = crate::srv::rmw::GetAvailableTransitions_Request;
    type Response = crate::srv::rmw::GetAvailableTransitions_Response;

    fn get_type_support() -> *const std::os::raw::c_void {
      // SAFETY: No preconditions for this function.
      unsafe { rosidl_typesupport_c__get_service_type_support_handle__lifecycle_msgs__srv__GetAvailableTransitions() }
    }
  }




  #[link(name = "lifecycle_msgs__rosidl_typesupport_c")]
  extern "C" {
      fn rosidl_typesupport_c__get_service_type_support_handle__lifecycle_msgs__srv__GetState() -> *const std::os::raw::c_void;
  }

  // Corresponds to lifecycle_msgs__srv__GetState
  pub struct GetState;

  impl rosidl_runtime_rs::Service for GetState {
    type Request = crate::srv::rmw::GetState_Request;
    type Response = crate::srv::rmw::GetState_Response;

    fn get_type_support() -> *const std::os::raw::c_void {
      // SAFETY: No preconditions for this function.
      unsafe { rosidl_typesupport_c__get_service_type_support_handle__lifecycle_msgs__srv__GetState() }
    }
  }



}  // mod rmw
