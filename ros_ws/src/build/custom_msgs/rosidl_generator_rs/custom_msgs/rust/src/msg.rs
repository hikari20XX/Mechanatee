pub mod rmw {
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};

#[link(name = "custom_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__custom_msgs__msg__AnalogInput() -> *const std::os::raw::c_void;
}

#[link(name = "custom_msgs__rosidl_generator_c")]
extern "C" {
    fn custom_msgs__msg__AnalogInput__init(msg: *mut AnalogInput) -> bool;
    fn custom_msgs__msg__AnalogInput__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AnalogInput>, size: usize) -> bool;
    fn custom_msgs__msg__AnalogInput__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AnalogInput>);
    fn custom_msgs__msg__AnalogInput__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AnalogInput>, out_seq: *mut rosidl_runtime_rs::Sequence<AnalogInput>) -> bool;
}

// Corresponds to custom_msgs__msg__AnalogInput
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AnalogInput {
    pub sec: i32,
    pub nanosec: u32,
    pub value: f64,
}



impl Default for AnalogInput {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !custom_msgs__msg__AnalogInput__init(&mut msg as *mut _) {
        panic!("Call to custom_msgs__msg__AnalogInput__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AnalogInput {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__msg__AnalogInput__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__msg__AnalogInput__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__msg__AnalogInput__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AnalogInput {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AnalogInput where Self: Sized {
  const TYPE_NAME: &'static str = "custom_msgs/msg/AnalogInput";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__custom_msgs__msg__AnalogInput() }
  }
}


#[link(name = "custom_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__custom_msgs__msg__PWMCommand() -> *const std::os::raw::c_void;
}

#[link(name = "custom_msgs__rosidl_generator_c")]
extern "C" {
    fn custom_msgs__msg__PWMCommand__init(msg: *mut PWMCommand) -> bool;
    fn custom_msgs__msg__PWMCommand__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PWMCommand>, size: usize) -> bool;
    fn custom_msgs__msg__PWMCommand__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PWMCommand>);
    fn custom_msgs__msg__PWMCommand__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PWMCommand>, out_seq: *mut rosidl_runtime_rs::Sequence<PWMCommand>) -> bool;
}

// Corresponds to custom_msgs__msg__PWMCommand
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PWMCommand {
    pub sec: i32,
    pub nanosec: u32,
    pub pwm_value: i32,
}



impl Default for PWMCommand {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !custom_msgs__msg__PWMCommand__init(&mut msg as *mut _) {
        panic!("Call to custom_msgs__msg__PWMCommand__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PWMCommand {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__msg__PWMCommand__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__msg__PWMCommand__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__msg__PWMCommand__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PWMCommand {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PWMCommand where Self: Sized {
  const TYPE_NAME: &'static str = "custom_msgs/msg/PWMCommand";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__custom_msgs__msg__PWMCommand() }
  }
}


#[link(name = "custom_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__custom_msgs__msg__MotorStatus() -> *const std::os::raw::c_void;
}

#[link(name = "custom_msgs__rosidl_generator_c")]
extern "C" {
    fn custom_msgs__msg__MotorStatus__init(msg: *mut MotorStatus) -> bool;
    fn custom_msgs__msg__MotorStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MotorStatus>, size: usize) -> bool;
    fn custom_msgs__msg__MotorStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MotorStatus>);
    fn custom_msgs__msg__MotorStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MotorStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<MotorStatus>) -> bool;
}

// Corresponds to custom_msgs__msg__MotorStatus
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorStatus {
    pub sec: i32,
    pub nanosec: u32,
    pub state: i8,
    pub speed_rpm: i32,
    pub load_percentage: f32,
    pub error_code: i32,
    pub description: rosidl_runtime_rs::String,
}

impl MotorStatus {
    pub const RUNNING: i8 = 1;
    pub const STOPPED: i8 = 2;
    pub const ERROR: i8 = 3;
}


impl Default for MotorStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !custom_msgs__msg__MotorStatus__init(&mut msg as *mut _) {
        panic!("Call to custom_msgs__msg__MotorStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MotorStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__msg__MotorStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__msg__MotorStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__msg__MotorStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MotorStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MotorStatus where Self: Sized {
  const TYPE_NAME: &'static str = "custom_msgs/msg/MotorStatus";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__custom_msgs__msg__MotorStatus() }
  }
}


#[link(name = "custom_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__custom_msgs__msg__MotorFeedback() -> *const std::os::raw::c_void;
}

#[link(name = "custom_msgs__rosidl_generator_c")]
extern "C" {
    fn custom_msgs__msg__MotorFeedback__init(msg: *mut MotorFeedback) -> bool;
    fn custom_msgs__msg__MotorFeedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MotorFeedback>, size: usize) -> bool;
    fn custom_msgs__msg__MotorFeedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MotorFeedback>);
    fn custom_msgs__msg__MotorFeedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MotorFeedback>, out_seq: *mut rosidl_runtime_rs::Sequence<MotorFeedback>) -> bool;
}

// Corresponds to custom_msgs__msg__MotorFeedback
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorFeedback {
    pub sec: i32,
    pub nanosec: u32,
    pub motor_id: rosidl_runtime_rs::String,
    pub position: f64,
    pub speed: f64,
    pub torque: f64,
    pub temperature: f64,
    pub current: f64,
    pub voltage: f64,
    pub encoder_counts: i64,
    pub additional_info: rosidl_runtime_rs::String,
}



impl Default for MotorFeedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !custom_msgs__msg__MotorFeedback__init(&mut msg as *mut _) {
        panic!("Call to custom_msgs__msg__MotorFeedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MotorFeedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__msg__MotorFeedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__msg__MotorFeedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__msg__MotorFeedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MotorFeedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MotorFeedback where Self: Sized {
  const TYPE_NAME: &'static str = "custom_msgs/msg/MotorFeedback";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__custom_msgs__msg__MotorFeedback() }
  }
}


#[link(name = "custom_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__custom_msgs__msg__MotorAlerts() -> *const std::os::raw::c_void;
}

#[link(name = "custom_msgs__rosidl_generator_c")]
extern "C" {
    fn custom_msgs__msg__MotorAlerts__init(msg: *mut MotorAlerts) -> bool;
    fn custom_msgs__msg__MotorAlerts__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MotorAlerts>, size: usize) -> bool;
    fn custom_msgs__msg__MotorAlerts__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MotorAlerts>);
    fn custom_msgs__msg__MotorAlerts__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MotorAlerts>, out_seq: *mut rosidl_runtime_rs::Sequence<MotorAlerts>) -> bool;
}

// Corresponds to custom_msgs__msg__MotorAlerts
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorAlerts {
    pub sec: i32,
    pub nanosec: u32,
    pub motor_id: rosidl_runtime_rs::String,
    pub overheating: bool,
    pub electrical_fault: bool,
    pub stall: bool,
    pub overcurrent: bool,
    pub obstruction: bool,
    pub encoder_fault: bool,
    pub runtime_exceeded: bool,
    pub additional_info: rosidl_runtime_rs::String,
}



impl Default for MotorAlerts {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !custom_msgs__msg__MotorAlerts__init(&mut msg as *mut _) {
        panic!("Call to custom_msgs__msg__MotorAlerts__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MotorAlerts {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__msg__MotorAlerts__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__msg__MotorAlerts__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__msg__MotorAlerts__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MotorAlerts {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MotorAlerts where Self: Sized {
  const TYPE_NAME: &'static str = "custom_msgs/msg/MotorAlerts";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__custom_msgs__msg__MotorAlerts() }
  }
}


#[link(name = "custom_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__custom_msgs__msg__SystemFeedback() -> *const std::os::raw::c_void;
}

#[link(name = "custom_msgs__rosidl_generator_c")]
extern "C" {
    fn custom_msgs__msg__SystemFeedback__init(msg: *mut SystemFeedback) -> bool;
    fn custom_msgs__msg__SystemFeedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SystemFeedback>, size: usize) -> bool;
    fn custom_msgs__msg__SystemFeedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SystemFeedback>);
    fn custom_msgs__msg__SystemFeedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SystemFeedback>, out_seq: *mut rosidl_runtime_rs::Sequence<SystemFeedback>) -> bool;
}

// Corresponds to custom_msgs__msg__SystemFeedback
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SystemFeedback {
    pub sec: i32,
    pub nanosec: u32,
    pub current_position: f32,
    pub current_velocity: f32,
    pub current_state: f64,
    pub desired_state: f64,
    pub error: f64,
}



impl Default for SystemFeedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !custom_msgs__msg__SystemFeedback__init(&mut msg as *mut _) {
        panic!("Call to custom_msgs__msg__SystemFeedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SystemFeedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__msg__SystemFeedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__msg__SystemFeedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__msg__SystemFeedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SystemFeedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SystemFeedback where Self: Sized {
  const TYPE_NAME: &'static str = "custom_msgs/msg/SystemFeedback";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__custom_msgs__msg__SystemFeedback() }
  }
}


#[link(name = "custom_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__custom_msgs__msg__PIDParams() -> *const std::os::raw::c_void;
}

#[link(name = "custom_msgs__rosidl_generator_c")]
extern "C" {
    fn custom_msgs__msg__PIDParams__init(msg: *mut PIDParams) -> bool;
    fn custom_msgs__msg__PIDParams__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PIDParams>, size: usize) -> bool;
    fn custom_msgs__msg__PIDParams__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PIDParams>);
    fn custom_msgs__msg__PIDParams__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PIDParams>, out_seq: *mut rosidl_runtime_rs::Sequence<PIDParams>) -> bool;
}

// Corresponds to custom_msgs__msg__PIDParams
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PIDParams {
    pub sec: i32,
    pub nanosec: u32,
    pub p_value: f64,
    pub i_value: f64,
    pub d_value: f64,
    pub integral_limit_upper: f64,
    pub integral_limit_lower: f64,
}



impl Default for PIDParams {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !custom_msgs__msg__PIDParams__init(&mut msg as *mut _) {
        panic!("Call to custom_msgs__msg__PIDParams__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PIDParams {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__msg__PIDParams__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__msg__PIDParams__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__msg__PIDParams__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PIDParams {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PIDParams where Self: Sized {
  const TYPE_NAME: &'static str = "custom_msgs/msg/PIDParams";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__custom_msgs__msg__PIDParams() }
  }
}


#[link(name = "custom_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__custom_msgs__msg__UpdatedPIDParams() -> *const std::os::raw::c_void;
}

#[link(name = "custom_msgs__rosidl_generator_c")]
extern "C" {
    fn custom_msgs__msg__UpdatedPIDParams__init(msg: *mut UpdatedPIDParams) -> bool;
    fn custom_msgs__msg__UpdatedPIDParams__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<UpdatedPIDParams>, size: usize) -> bool;
    fn custom_msgs__msg__UpdatedPIDParams__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<UpdatedPIDParams>);
    fn custom_msgs__msg__UpdatedPIDParams__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<UpdatedPIDParams>, out_seq: *mut rosidl_runtime_rs::Sequence<UpdatedPIDParams>) -> bool;
}

// Corresponds to custom_msgs__msg__UpdatedPIDParams
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UpdatedPIDParams {
    pub sec: i32,
    pub nanosec: u32,
    pub updated_p_value: f64,
    pub updated_i_value: f64,
    pub updated_d_value: f64,
}



impl Default for UpdatedPIDParams {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !custom_msgs__msg__UpdatedPIDParams__init(&mut msg as *mut _) {
        panic!("Call to custom_msgs__msg__UpdatedPIDParams__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for UpdatedPIDParams {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__msg__UpdatedPIDParams__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__msg__UpdatedPIDParams__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__msg__UpdatedPIDParams__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for UpdatedPIDParams {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for UpdatedPIDParams where Self: Sized {
  const TYPE_NAME: &'static str = "custom_msgs/msg/UpdatedPIDParams";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__custom_msgs__msg__UpdatedPIDParams() }
  }
}


#[link(name = "custom_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__custom_msgs__msg__TuningStatus() -> *const std::os::raw::c_void;
}

#[link(name = "custom_msgs__rosidl_generator_c")]
extern "C" {
    fn custom_msgs__msg__TuningStatus__init(msg: *mut TuningStatus) -> bool;
    fn custom_msgs__msg__TuningStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TuningStatus>, size: usize) -> bool;
    fn custom_msgs__msg__TuningStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TuningStatus>);
    fn custom_msgs__msg__TuningStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TuningStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<TuningStatus>) -> bool;
}

// Corresponds to custom_msgs__msg__TuningStatus
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TuningStatus {
    pub sec: i32,
    pub nanosec: u32,
    pub status: i8,
    pub details: rosidl_runtime_rs::String,
}

impl TuningStatus {
    pub const NOT_STARTED: i8 = 0;
    pub const ONGOING: i8 = 1;
    pub const COMPLETED: i8 = 2;
    pub const FAILED: i8 = 3;
}


impl Default for TuningStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !custom_msgs__msg__TuningStatus__init(&mut msg as *mut _) {
        panic!("Call to custom_msgs__msg__TuningStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TuningStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__msg__TuningStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__msg__TuningStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__msg__TuningStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TuningStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TuningStatus where Self: Sized {
  const TYPE_NAME: &'static str = "custom_msgs/msg/TuningStatus";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__custom_msgs__msg__TuningStatus() }
  }
}


#[link(name = "custom_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__custom_msgs__msg__ServoFeedback() -> *const std::os::raw::c_void;
}

#[link(name = "custom_msgs__rosidl_generator_c")]
extern "C" {
    fn custom_msgs__msg__ServoFeedback__init(msg: *mut ServoFeedback) -> bool;
    fn custom_msgs__msg__ServoFeedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ServoFeedback>, size: usize) -> bool;
    fn custom_msgs__msg__ServoFeedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ServoFeedback>);
    fn custom_msgs__msg__ServoFeedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ServoFeedback>, out_seq: *mut rosidl_runtime_rs::Sequence<ServoFeedback>) -> bool;
}

// Corresponds to custom_msgs__msg__ServoFeedback
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ServoFeedback {
    pub sec: i32,
    pub nanosec: u32,
    pub position: f32,
}



impl Default for ServoFeedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !custom_msgs__msg__ServoFeedback__init(&mut msg as *mut _) {
        panic!("Call to custom_msgs__msg__ServoFeedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ServoFeedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__msg__ServoFeedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__msg__ServoFeedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__msg__ServoFeedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ServoFeedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ServoFeedback where Self: Sized {
  const TYPE_NAME: &'static str = "custom_msgs/msg/ServoFeedback";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__custom_msgs__msg__ServoFeedback() }
  }
}


#[link(name = "custom_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__custom_msgs__msg__ServoSetpoint() -> *const std::os::raw::c_void;
}

#[link(name = "custom_msgs__rosidl_generator_c")]
extern "C" {
    fn custom_msgs__msg__ServoSetpoint__init(msg: *mut ServoSetpoint) -> bool;
    fn custom_msgs__msg__ServoSetpoint__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ServoSetpoint>, size: usize) -> bool;
    fn custom_msgs__msg__ServoSetpoint__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ServoSetpoint>);
    fn custom_msgs__msg__ServoSetpoint__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ServoSetpoint>, out_seq: *mut rosidl_runtime_rs::Sequence<ServoSetpoint>) -> bool;
}

// Corresponds to custom_msgs__msg__ServoSetpoint
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ServoSetpoint {
    pub sec: i32,
    pub nanosec: u32,
    pub position: f32,
}



impl Default for ServoSetpoint {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !custom_msgs__msg__ServoSetpoint__init(&mut msg as *mut _) {
        panic!("Call to custom_msgs__msg__ServoSetpoint__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ServoSetpoint {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__msg__ServoSetpoint__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__msg__ServoSetpoint__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__msg__ServoSetpoint__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ServoSetpoint {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ServoSetpoint where Self: Sized {
  const TYPE_NAME: &'static str = "custom_msgs/msg/ServoSetpoint";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__custom_msgs__msg__ServoSetpoint() }
  }
}


#[link(name = "custom_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__custom_msgs__msg__ServoStatus() -> *const std::os::raw::c_void;
}

#[link(name = "custom_msgs__rosidl_generator_c")]
extern "C" {
    fn custom_msgs__msg__ServoStatus__init(msg: *mut ServoStatus) -> bool;
    fn custom_msgs__msg__ServoStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ServoStatus>, size: usize) -> bool;
    fn custom_msgs__msg__ServoStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ServoStatus>);
    fn custom_msgs__msg__ServoStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ServoStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<ServoStatus>) -> bool;
}

// Corresponds to custom_msgs__msg__ServoStatus
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ServoStatus {
    pub sec: i32,
    pub nanosec: u32,
    pub servo_id: rosidl_runtime_rs::String,
    pub position: f64,
    pub speed: f64,
    pub load: f64,
    pub temperature: f64,
    pub voltage: f64,
    pub error_status: i32,
    pub additional_info: rosidl_runtime_rs::String,
}



impl Default for ServoStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !custom_msgs__msg__ServoStatus__init(&mut msg as *mut _) {
        panic!("Call to custom_msgs__msg__ServoStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ServoStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__msg__ServoStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__msg__ServoStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__msg__ServoStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ServoStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ServoStatus where Self: Sized {
  const TYPE_NAME: &'static str = "custom_msgs/msg/ServoStatus";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__custom_msgs__msg__ServoStatus() }
  }
}


#[link(name = "custom_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__custom_msgs__msg__BatteryStatus() -> *const std::os::raw::c_void;
}

#[link(name = "custom_msgs__rosidl_generator_c")]
extern "C" {
    fn custom_msgs__msg__BatteryStatus__init(msg: *mut BatteryStatus) -> bool;
    fn custom_msgs__msg__BatteryStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<BatteryStatus>, size: usize) -> bool;
    fn custom_msgs__msg__BatteryStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<BatteryStatus>);
    fn custom_msgs__msg__BatteryStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<BatteryStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<BatteryStatus>) -> bool;
}

// Corresponds to custom_msgs__msg__BatteryStatus
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BatteryStatus {
    pub sec: i32,
    pub nanosec: u32,
    pub charge_percentage: f32,
    pub voltage: f32,
    pub current: f32,
    pub time_remaining: f32,
    pub status: i8,
    pub health_percentage: f32,
}

impl BatteryStatus {
    pub const OK: i8 = 1;
    pub const LOW: i8 = 2;
    pub const CRITICAL: i8 = 3;
}


impl Default for BatteryStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !custom_msgs__msg__BatteryStatus__init(&mut msg as *mut _) {
        panic!("Call to custom_msgs__msg__BatteryStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for BatteryStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__msg__BatteryStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__msg__BatteryStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__msg__BatteryStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for BatteryStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for BatteryStatus where Self: Sized {
  const TYPE_NAME: &'static str = "custom_msgs/msg/BatteryStatus";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__custom_msgs__msg__BatteryStatus() }
  }
}


#[link(name = "custom_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__custom_msgs__msg__ServoSpeed() -> *const std::os::raw::c_void;
}

#[link(name = "custom_msgs__rosidl_generator_c")]
extern "C" {
    fn custom_msgs__msg__ServoSpeed__init(msg: *mut ServoSpeed) -> bool;
    fn custom_msgs__msg__ServoSpeed__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ServoSpeed>, size: usize) -> bool;
    fn custom_msgs__msg__ServoSpeed__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ServoSpeed>);
    fn custom_msgs__msg__ServoSpeed__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ServoSpeed>, out_seq: *mut rosidl_runtime_rs::Sequence<ServoSpeed>) -> bool;
}

// Corresponds to custom_msgs__msg__ServoSpeed
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ServoSpeed {
    pub sec: i32,
    pub nanosec: u32,
    pub servo_id: rosidl_runtime_rs::String,
    pub speed: f64,
    pub direction: i8,
    pub additional_info: rosidl_runtime_rs::String,
}



impl Default for ServoSpeed {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !custom_msgs__msg__ServoSpeed__init(&mut msg as *mut _) {
        panic!("Call to custom_msgs__msg__ServoSpeed__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ServoSpeed {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__msg__ServoSpeed__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__msg__ServoSpeed__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__msg__ServoSpeed__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ServoSpeed {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ServoSpeed where Self: Sized {
  const TYPE_NAME: &'static str = "custom_msgs/msg/ServoSpeed";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__custom_msgs__msg__ServoSpeed() }
  }
}


#[link(name = "custom_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__custom_msgs__msg__TargetPosition() -> *const std::os::raw::c_void;
}

#[link(name = "custom_msgs__rosidl_generator_c")]
extern "C" {
    fn custom_msgs__msg__TargetPosition__init(msg: *mut TargetPosition) -> bool;
    fn custom_msgs__msg__TargetPosition__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TargetPosition>, size: usize) -> bool;
    fn custom_msgs__msg__TargetPosition__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TargetPosition>);
    fn custom_msgs__msg__TargetPosition__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TargetPosition>, out_seq: *mut rosidl_runtime_rs::Sequence<TargetPosition>) -> bool;
}

// Corresponds to custom_msgs__msg__TargetPosition
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TargetPosition {
    pub sec: i32,
    pub nanosec: u32,
    pub position: f32,
    pub velocity: f32,
}



impl Default for TargetPosition {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !custom_msgs__msg__TargetPosition__init(&mut msg as *mut _) {
        panic!("Call to custom_msgs__msg__TargetPosition__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TargetPosition {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__msg__TargetPosition__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__msg__TargetPosition__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__msg__TargetPosition__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TargetPosition {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TargetPosition where Self: Sized {
  const TYPE_NAME: &'static str = "custom_msgs/msg/TargetPosition";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__custom_msgs__msg__TargetPosition() }
  }
}


#[link(name = "custom_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__custom_msgs__msg__SystemLogs() -> *const std::os::raw::c_void;
}

#[link(name = "custom_msgs__rosidl_generator_c")]
extern "C" {
    fn custom_msgs__msg__SystemLogs__init(msg: *mut SystemLogs) -> bool;
    fn custom_msgs__msg__SystemLogs__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SystemLogs>, size: usize) -> bool;
    fn custom_msgs__msg__SystemLogs__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SystemLogs>);
    fn custom_msgs__msg__SystemLogs__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SystemLogs>, out_seq: *mut rosidl_runtime_rs::Sequence<SystemLogs>) -> bool;
}

// Corresponds to custom_msgs__msg__SystemLogs
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SystemLogs {
    pub sec: i32,
    pub nanosec: u32,
    pub component_id: rosidl_runtime_rs::String,
    pub log_level: i32,
    pub message: rosidl_runtime_rs::String,
    pub details: rosidl_runtime_rs::String,
    pub time_since_last_log: f32,
    pub max_log_frequency: f32,
}



impl Default for SystemLogs {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !custom_msgs__msg__SystemLogs__init(&mut msg as *mut _) {
        panic!("Call to custom_msgs__msg__SystemLogs__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SystemLogs {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__msg__SystemLogs__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__msg__SystemLogs__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__msg__SystemLogs__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SystemLogs {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SystemLogs where Self: Sized {
  const TYPE_NAME: &'static str = "custom_msgs/msg/SystemLogs";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__custom_msgs__msg__SystemLogs() }
  }
}


#[link(name = "custom_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__custom_msgs__msg__VoltageReading() -> *const std::os::raw::c_void;
}

#[link(name = "custom_msgs__rosidl_generator_c")]
extern "C" {
    fn custom_msgs__msg__VoltageReading__init(msg: *mut VoltageReading) -> bool;
    fn custom_msgs__msg__VoltageReading__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<VoltageReading>, size: usize) -> bool;
    fn custom_msgs__msg__VoltageReading__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<VoltageReading>);
    fn custom_msgs__msg__VoltageReading__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<VoltageReading>, out_seq: *mut rosidl_runtime_rs::Sequence<VoltageReading>) -> bool;
}

// Corresponds to custom_msgs__msg__VoltageReading
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VoltageReading {
    pub sec: i32,
    pub nanosec: u32,
    pub voltage_value: f32,
    pub sensor_id: rosidl_runtime_rs::String,
}



impl Default for VoltageReading {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !custom_msgs__msg__VoltageReading__init(&mut msg as *mut _) {
        panic!("Call to custom_msgs__msg__VoltageReading__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for VoltageReading {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__msg__VoltageReading__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__msg__VoltageReading__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_msgs__msg__VoltageReading__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for VoltageReading {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for VoltageReading where Self: Sized {
  const TYPE_NAME: &'static str = "custom_msgs/msg/VoltageReading";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__custom_msgs__msg__VoltageReading() }
  }
}


}  // mod rmw


#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AnalogInput {
    pub sec: i32,
    pub nanosec: u32,
    pub value: f64,
}



impl Default for AnalogInput {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::AnalogInput::default())
  }
}

impl rosidl_runtime_rs::Message for AnalogInput {
  type RmwMsg = crate::msg::rmw::AnalogInput;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        sec: msg.sec,
        nanosec: msg.nanosec,
        value: msg.value,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      sec: msg.sec,
      nanosec: msg.nanosec,
      value: msg.value,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      sec: msg.sec,
      nanosec: msg.nanosec,
      value: msg.value,
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PWMCommand {
    pub sec: i32,
    pub nanosec: u32,
    pub pwm_value: i32,
}



impl Default for PWMCommand {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::PWMCommand::default())
  }
}

impl rosidl_runtime_rs::Message for PWMCommand {
  type RmwMsg = crate::msg::rmw::PWMCommand;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        sec: msg.sec,
        nanosec: msg.nanosec,
        pwm_value: msg.pwm_value,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      sec: msg.sec,
      nanosec: msg.nanosec,
      pwm_value: msg.pwm_value,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      sec: msg.sec,
      nanosec: msg.nanosec,
      pwm_value: msg.pwm_value,
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorStatus {
    pub sec: i32,
    pub nanosec: u32,
    pub state: i8,
    pub speed_rpm: i32,
    pub load_percentage: f32,
    pub error_code: i32,
    pub description: std::string::String,
}

impl MotorStatus {
    pub const RUNNING: i8 = 1;
    pub const STOPPED: i8 = 2;
    pub const ERROR: i8 = 3;
}


impl Default for MotorStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::MotorStatus::default())
  }
}

impl rosidl_runtime_rs::Message for MotorStatus {
  type RmwMsg = crate::msg::rmw::MotorStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        sec: msg.sec,
        nanosec: msg.nanosec,
        state: msg.state,
        speed_rpm: msg.speed_rpm,
        load_percentage: msg.load_percentage,
        error_code: msg.error_code,
        description: msg.description.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      sec: msg.sec,
      nanosec: msg.nanosec,
      state: msg.state,
      speed_rpm: msg.speed_rpm,
      load_percentage: msg.load_percentage,
      error_code: msg.error_code,
        description: msg.description.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      sec: msg.sec,
      nanosec: msg.nanosec,
      state: msg.state,
      speed_rpm: msg.speed_rpm,
      load_percentage: msg.load_percentage,
      error_code: msg.error_code,
      description: msg.description.to_string(),
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorFeedback {
    pub sec: i32,
    pub nanosec: u32,
    pub motor_id: std::string::String,
    pub position: f64,
    pub speed: f64,
    pub torque: f64,
    pub temperature: f64,
    pub current: f64,
    pub voltage: f64,
    pub encoder_counts: i64,
    pub additional_info: std::string::String,
}



impl Default for MotorFeedback {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::MotorFeedback::default())
  }
}

impl rosidl_runtime_rs::Message for MotorFeedback {
  type RmwMsg = crate::msg::rmw::MotorFeedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        sec: msg.sec,
        nanosec: msg.nanosec,
        motor_id: msg.motor_id.as_str().into(),
        position: msg.position,
        speed: msg.speed,
        torque: msg.torque,
        temperature: msg.temperature,
        current: msg.current,
        voltage: msg.voltage,
        encoder_counts: msg.encoder_counts,
        additional_info: msg.additional_info.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      sec: msg.sec,
      nanosec: msg.nanosec,
        motor_id: msg.motor_id.as_str().into(),
      position: msg.position,
      speed: msg.speed,
      torque: msg.torque,
      temperature: msg.temperature,
      current: msg.current,
      voltage: msg.voltage,
      encoder_counts: msg.encoder_counts,
        additional_info: msg.additional_info.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      sec: msg.sec,
      nanosec: msg.nanosec,
      motor_id: msg.motor_id.to_string(),
      position: msg.position,
      speed: msg.speed,
      torque: msg.torque,
      temperature: msg.temperature,
      current: msg.current,
      voltage: msg.voltage,
      encoder_counts: msg.encoder_counts,
      additional_info: msg.additional_info.to_string(),
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorAlerts {
    pub sec: i32,
    pub nanosec: u32,
    pub motor_id: std::string::String,
    pub overheating: bool,
    pub electrical_fault: bool,
    pub stall: bool,
    pub overcurrent: bool,
    pub obstruction: bool,
    pub encoder_fault: bool,
    pub runtime_exceeded: bool,
    pub additional_info: std::string::String,
}



impl Default for MotorAlerts {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::MotorAlerts::default())
  }
}

impl rosidl_runtime_rs::Message for MotorAlerts {
  type RmwMsg = crate::msg::rmw::MotorAlerts;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        sec: msg.sec,
        nanosec: msg.nanosec,
        motor_id: msg.motor_id.as_str().into(),
        overheating: msg.overheating,
        electrical_fault: msg.electrical_fault,
        stall: msg.stall,
        overcurrent: msg.overcurrent,
        obstruction: msg.obstruction,
        encoder_fault: msg.encoder_fault,
        runtime_exceeded: msg.runtime_exceeded,
        additional_info: msg.additional_info.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      sec: msg.sec,
      nanosec: msg.nanosec,
        motor_id: msg.motor_id.as_str().into(),
      overheating: msg.overheating,
      electrical_fault: msg.electrical_fault,
      stall: msg.stall,
      overcurrent: msg.overcurrent,
      obstruction: msg.obstruction,
      encoder_fault: msg.encoder_fault,
      runtime_exceeded: msg.runtime_exceeded,
        additional_info: msg.additional_info.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      sec: msg.sec,
      nanosec: msg.nanosec,
      motor_id: msg.motor_id.to_string(),
      overheating: msg.overheating,
      electrical_fault: msg.electrical_fault,
      stall: msg.stall,
      overcurrent: msg.overcurrent,
      obstruction: msg.obstruction,
      encoder_fault: msg.encoder_fault,
      runtime_exceeded: msg.runtime_exceeded,
      additional_info: msg.additional_info.to_string(),
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SystemFeedback {
    pub sec: i32,
    pub nanosec: u32,
    pub current_position: f32,
    pub current_velocity: f32,
    pub current_state: f64,
    pub desired_state: f64,
    pub error: f64,
}



impl Default for SystemFeedback {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::SystemFeedback::default())
  }
}

impl rosidl_runtime_rs::Message for SystemFeedback {
  type RmwMsg = crate::msg::rmw::SystemFeedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        sec: msg.sec,
        nanosec: msg.nanosec,
        current_position: msg.current_position,
        current_velocity: msg.current_velocity,
        current_state: msg.current_state,
        desired_state: msg.desired_state,
        error: msg.error,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      sec: msg.sec,
      nanosec: msg.nanosec,
      current_position: msg.current_position,
      current_velocity: msg.current_velocity,
      current_state: msg.current_state,
      desired_state: msg.desired_state,
      error: msg.error,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      sec: msg.sec,
      nanosec: msg.nanosec,
      current_position: msg.current_position,
      current_velocity: msg.current_velocity,
      current_state: msg.current_state,
      desired_state: msg.desired_state,
      error: msg.error,
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PIDParams {
    pub sec: i32,
    pub nanosec: u32,
    pub p_value: f64,
    pub i_value: f64,
    pub d_value: f64,
    pub integral_limit_upper: f64,
    pub integral_limit_lower: f64,
}



impl Default for PIDParams {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::PIDParams::default())
  }
}

impl rosidl_runtime_rs::Message for PIDParams {
  type RmwMsg = crate::msg::rmw::PIDParams;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        sec: msg.sec,
        nanosec: msg.nanosec,
        p_value: msg.p_value,
        i_value: msg.i_value,
        d_value: msg.d_value,
        integral_limit_upper: msg.integral_limit_upper,
        integral_limit_lower: msg.integral_limit_lower,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      sec: msg.sec,
      nanosec: msg.nanosec,
      p_value: msg.p_value,
      i_value: msg.i_value,
      d_value: msg.d_value,
      integral_limit_upper: msg.integral_limit_upper,
      integral_limit_lower: msg.integral_limit_lower,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      sec: msg.sec,
      nanosec: msg.nanosec,
      p_value: msg.p_value,
      i_value: msg.i_value,
      d_value: msg.d_value,
      integral_limit_upper: msg.integral_limit_upper,
      integral_limit_lower: msg.integral_limit_lower,
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UpdatedPIDParams {
    pub sec: i32,
    pub nanosec: u32,
    pub updated_p_value: f64,
    pub updated_i_value: f64,
    pub updated_d_value: f64,
}



impl Default for UpdatedPIDParams {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::UpdatedPIDParams::default())
  }
}

impl rosidl_runtime_rs::Message for UpdatedPIDParams {
  type RmwMsg = crate::msg::rmw::UpdatedPIDParams;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        sec: msg.sec,
        nanosec: msg.nanosec,
        updated_p_value: msg.updated_p_value,
        updated_i_value: msg.updated_i_value,
        updated_d_value: msg.updated_d_value,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      sec: msg.sec,
      nanosec: msg.nanosec,
      updated_p_value: msg.updated_p_value,
      updated_i_value: msg.updated_i_value,
      updated_d_value: msg.updated_d_value,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      sec: msg.sec,
      nanosec: msg.nanosec,
      updated_p_value: msg.updated_p_value,
      updated_i_value: msg.updated_i_value,
      updated_d_value: msg.updated_d_value,
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TuningStatus {
    pub sec: i32,
    pub nanosec: u32,
    pub status: i8,
    pub details: std::string::String,
}

impl TuningStatus {
    pub const NOT_STARTED: i8 = 0;
    pub const ONGOING: i8 = 1;
    pub const COMPLETED: i8 = 2;
    pub const FAILED: i8 = 3;
}


impl Default for TuningStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::TuningStatus::default())
  }
}

impl rosidl_runtime_rs::Message for TuningStatus {
  type RmwMsg = crate::msg::rmw::TuningStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        sec: msg.sec,
        nanosec: msg.nanosec,
        status: msg.status,
        details: msg.details.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      sec: msg.sec,
      nanosec: msg.nanosec,
      status: msg.status,
        details: msg.details.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      sec: msg.sec,
      nanosec: msg.nanosec,
      status: msg.status,
      details: msg.details.to_string(),
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ServoFeedback {
    pub sec: i32,
    pub nanosec: u32,
    pub position: f32,
}



impl Default for ServoFeedback {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::ServoFeedback::default())
  }
}

impl rosidl_runtime_rs::Message for ServoFeedback {
  type RmwMsg = crate::msg::rmw::ServoFeedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        sec: msg.sec,
        nanosec: msg.nanosec,
        position: msg.position,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      sec: msg.sec,
      nanosec: msg.nanosec,
      position: msg.position,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      sec: msg.sec,
      nanosec: msg.nanosec,
      position: msg.position,
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ServoSetpoint {
    pub sec: i32,
    pub nanosec: u32,
    pub position: f32,
}



impl Default for ServoSetpoint {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::ServoSetpoint::default())
  }
}

impl rosidl_runtime_rs::Message for ServoSetpoint {
  type RmwMsg = crate::msg::rmw::ServoSetpoint;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        sec: msg.sec,
        nanosec: msg.nanosec,
        position: msg.position,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      sec: msg.sec,
      nanosec: msg.nanosec,
      position: msg.position,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      sec: msg.sec,
      nanosec: msg.nanosec,
      position: msg.position,
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ServoStatus {
    pub sec: i32,
    pub nanosec: u32,
    pub servo_id: std::string::String,
    pub position: f64,
    pub speed: f64,
    pub load: f64,
    pub temperature: f64,
    pub voltage: f64,
    pub error_status: i32,
    pub additional_info: std::string::String,
}



impl Default for ServoStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::ServoStatus::default())
  }
}

impl rosidl_runtime_rs::Message for ServoStatus {
  type RmwMsg = crate::msg::rmw::ServoStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        sec: msg.sec,
        nanosec: msg.nanosec,
        servo_id: msg.servo_id.as_str().into(),
        position: msg.position,
        speed: msg.speed,
        load: msg.load,
        temperature: msg.temperature,
        voltage: msg.voltage,
        error_status: msg.error_status,
        additional_info: msg.additional_info.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      sec: msg.sec,
      nanosec: msg.nanosec,
        servo_id: msg.servo_id.as_str().into(),
      position: msg.position,
      speed: msg.speed,
      load: msg.load,
      temperature: msg.temperature,
      voltage: msg.voltage,
      error_status: msg.error_status,
        additional_info: msg.additional_info.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      sec: msg.sec,
      nanosec: msg.nanosec,
      servo_id: msg.servo_id.to_string(),
      position: msg.position,
      speed: msg.speed,
      load: msg.load,
      temperature: msg.temperature,
      voltage: msg.voltage,
      error_status: msg.error_status,
      additional_info: msg.additional_info.to_string(),
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BatteryStatus {
    pub sec: i32,
    pub nanosec: u32,
    pub charge_percentage: f32,
    pub voltage: f32,
    pub current: f32,
    pub time_remaining: f32,
    pub status: i8,
    pub health_percentage: f32,
}

impl BatteryStatus {
    pub const OK: i8 = 1;
    pub const LOW: i8 = 2;
    pub const CRITICAL: i8 = 3;
}


impl Default for BatteryStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::BatteryStatus::default())
  }
}

impl rosidl_runtime_rs::Message for BatteryStatus {
  type RmwMsg = crate::msg::rmw::BatteryStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        sec: msg.sec,
        nanosec: msg.nanosec,
        charge_percentage: msg.charge_percentage,
        voltage: msg.voltage,
        current: msg.current,
        time_remaining: msg.time_remaining,
        status: msg.status,
        health_percentage: msg.health_percentage,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      sec: msg.sec,
      nanosec: msg.nanosec,
      charge_percentage: msg.charge_percentage,
      voltage: msg.voltage,
      current: msg.current,
      time_remaining: msg.time_remaining,
      status: msg.status,
      health_percentage: msg.health_percentage,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      sec: msg.sec,
      nanosec: msg.nanosec,
      charge_percentage: msg.charge_percentage,
      voltage: msg.voltage,
      current: msg.current,
      time_remaining: msg.time_remaining,
      status: msg.status,
      health_percentage: msg.health_percentage,
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ServoSpeed {
    pub sec: i32,
    pub nanosec: u32,
    pub servo_id: std::string::String,
    pub speed: f64,
    pub direction: i8,
    pub additional_info: std::string::String,
}



impl Default for ServoSpeed {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::ServoSpeed::default())
  }
}

impl rosidl_runtime_rs::Message for ServoSpeed {
  type RmwMsg = crate::msg::rmw::ServoSpeed;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        sec: msg.sec,
        nanosec: msg.nanosec,
        servo_id: msg.servo_id.as_str().into(),
        speed: msg.speed,
        direction: msg.direction,
        additional_info: msg.additional_info.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      sec: msg.sec,
      nanosec: msg.nanosec,
        servo_id: msg.servo_id.as_str().into(),
      speed: msg.speed,
      direction: msg.direction,
        additional_info: msg.additional_info.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      sec: msg.sec,
      nanosec: msg.nanosec,
      servo_id: msg.servo_id.to_string(),
      speed: msg.speed,
      direction: msg.direction,
      additional_info: msg.additional_info.to_string(),
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TargetPosition {
    pub sec: i32,
    pub nanosec: u32,
    pub position: f32,
    pub velocity: f32,
}



impl Default for TargetPosition {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::TargetPosition::default())
  }
}

impl rosidl_runtime_rs::Message for TargetPosition {
  type RmwMsg = crate::msg::rmw::TargetPosition;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        sec: msg.sec,
        nanosec: msg.nanosec,
        position: msg.position,
        velocity: msg.velocity,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      sec: msg.sec,
      nanosec: msg.nanosec,
      position: msg.position,
      velocity: msg.velocity,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      sec: msg.sec,
      nanosec: msg.nanosec,
      position: msg.position,
      velocity: msg.velocity,
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SystemLogs {
    pub sec: i32,
    pub nanosec: u32,
    pub component_id: std::string::String,
    pub log_level: i32,
    pub message: std::string::String,
    pub details: std::string::String,
    pub time_since_last_log: f32,
    pub max_log_frequency: f32,
}



impl Default for SystemLogs {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::SystemLogs::default())
  }
}

impl rosidl_runtime_rs::Message for SystemLogs {
  type RmwMsg = crate::msg::rmw::SystemLogs;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        sec: msg.sec,
        nanosec: msg.nanosec,
        component_id: msg.component_id.as_str().into(),
        log_level: msg.log_level,
        message: msg.message.as_str().into(),
        details: msg.details.as_str().into(),
        time_since_last_log: msg.time_since_last_log,
        max_log_frequency: msg.max_log_frequency,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      sec: msg.sec,
      nanosec: msg.nanosec,
        component_id: msg.component_id.as_str().into(),
      log_level: msg.log_level,
        message: msg.message.as_str().into(),
        details: msg.details.as_str().into(),
      time_since_last_log: msg.time_since_last_log,
      max_log_frequency: msg.max_log_frequency,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      sec: msg.sec,
      nanosec: msg.nanosec,
      component_id: msg.component_id.to_string(),
      log_level: msg.log_level,
      message: msg.message.to_string(),
      details: msg.details.to_string(),
      time_since_last_log: msg.time_since_last_log,
      max_log_frequency: msg.max_log_frequency,
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VoltageReading {
    pub sec: i32,
    pub nanosec: u32,
    pub voltage_value: f32,
    pub sensor_id: std::string::String,
}



impl Default for VoltageReading {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::VoltageReading::default())
  }
}

impl rosidl_runtime_rs::Message for VoltageReading {
  type RmwMsg = crate::msg::rmw::VoltageReading;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        sec: msg.sec,
        nanosec: msg.nanosec,
        voltage_value: msg.voltage_value,
        sensor_id: msg.sensor_id.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      sec: msg.sec,
      nanosec: msg.nanosec,
      voltage_value: msg.voltage_value,
        sensor_id: msg.sensor_id.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      sec: msg.sec,
      nanosec: msg.nanosec,
      voltage_value: msg.voltage_value,
      sensor_id: msg.sensor_id.to_string(),
    }
  }
}


