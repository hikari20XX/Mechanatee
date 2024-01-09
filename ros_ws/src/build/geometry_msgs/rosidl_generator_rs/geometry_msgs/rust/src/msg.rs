pub mod rmw {
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};

#[link(name = "geometry_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__geometry_msgs__msg__Accel() -> *const std::os::raw::c_void;
}

#[link(name = "geometry_msgs__rosidl_generator_c")]
extern "C" {
    fn geometry_msgs__msg__Accel__init(msg: *mut Accel) -> bool;
    fn geometry_msgs__msg__Accel__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Accel>, size: usize) -> bool;
    fn geometry_msgs__msg__Accel__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Accel>);
    fn geometry_msgs__msg__Accel__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Accel>, out_seq: *mut rosidl_runtime_rs::Sequence<Accel>) -> bool;
}

// Corresponds to geometry_msgs__msg__Accel
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Accel {
    pub linear: crate::msg::rmw::Vector3,
    pub angular: crate::msg::rmw::Vector3,
}



impl Default for Accel {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !geometry_msgs__msg__Accel__init(&mut msg as *mut _) {
        panic!("Call to geometry_msgs__msg__Accel__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Accel {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__Accel__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__Accel__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__Accel__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Accel {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Accel where Self: Sized {
  const TYPE_NAME: &'static str = "geometry_msgs/msg/Accel";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__geometry_msgs__msg__Accel() }
  }
}


#[link(name = "geometry_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__geometry_msgs__msg__AccelStamped() -> *const std::os::raw::c_void;
}

#[link(name = "geometry_msgs__rosidl_generator_c")]
extern "C" {
    fn geometry_msgs__msg__AccelStamped__init(msg: *mut AccelStamped) -> bool;
    fn geometry_msgs__msg__AccelStamped__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AccelStamped>, size: usize) -> bool;
    fn geometry_msgs__msg__AccelStamped__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AccelStamped>);
    fn geometry_msgs__msg__AccelStamped__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AccelStamped>, out_seq: *mut rosidl_runtime_rs::Sequence<AccelStamped>) -> bool;
}

// Corresponds to geometry_msgs__msg__AccelStamped
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AccelStamped {
    pub header: std_msgs::msg::rmw::Header,
    pub accel: crate::msg::rmw::Accel,
}



impl Default for AccelStamped {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !geometry_msgs__msg__AccelStamped__init(&mut msg as *mut _) {
        panic!("Call to geometry_msgs__msg__AccelStamped__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AccelStamped {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__AccelStamped__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__AccelStamped__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__AccelStamped__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AccelStamped {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AccelStamped where Self: Sized {
  const TYPE_NAME: &'static str = "geometry_msgs/msg/AccelStamped";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__geometry_msgs__msg__AccelStamped() }
  }
}


#[link(name = "geometry_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__geometry_msgs__msg__AccelWithCovariance() -> *const std::os::raw::c_void;
}

#[link(name = "geometry_msgs__rosidl_generator_c")]
extern "C" {
    fn geometry_msgs__msg__AccelWithCovariance__init(msg: *mut AccelWithCovariance) -> bool;
    fn geometry_msgs__msg__AccelWithCovariance__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AccelWithCovariance>, size: usize) -> bool;
    fn geometry_msgs__msg__AccelWithCovariance__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AccelWithCovariance>);
    fn geometry_msgs__msg__AccelWithCovariance__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AccelWithCovariance>, out_seq: *mut rosidl_runtime_rs::Sequence<AccelWithCovariance>) -> bool;
}

// Corresponds to geometry_msgs__msg__AccelWithCovariance
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AccelWithCovariance {
    pub accel: crate::msg::rmw::Accel,
    #[cfg_attr(feature = "serde", serde(with = "serde_big_array::BigArray"))]
    pub covariance: [f64; 36],
}



impl Default for AccelWithCovariance {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !geometry_msgs__msg__AccelWithCovariance__init(&mut msg as *mut _) {
        panic!("Call to geometry_msgs__msg__AccelWithCovariance__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AccelWithCovariance {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__AccelWithCovariance__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__AccelWithCovariance__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__AccelWithCovariance__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AccelWithCovariance {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AccelWithCovariance where Self: Sized {
  const TYPE_NAME: &'static str = "geometry_msgs/msg/AccelWithCovariance";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__geometry_msgs__msg__AccelWithCovariance() }
  }
}


#[link(name = "geometry_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__geometry_msgs__msg__AccelWithCovarianceStamped() -> *const std::os::raw::c_void;
}

#[link(name = "geometry_msgs__rosidl_generator_c")]
extern "C" {
    fn geometry_msgs__msg__AccelWithCovarianceStamped__init(msg: *mut AccelWithCovarianceStamped) -> bool;
    fn geometry_msgs__msg__AccelWithCovarianceStamped__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AccelWithCovarianceStamped>, size: usize) -> bool;
    fn geometry_msgs__msg__AccelWithCovarianceStamped__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AccelWithCovarianceStamped>);
    fn geometry_msgs__msg__AccelWithCovarianceStamped__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AccelWithCovarianceStamped>, out_seq: *mut rosidl_runtime_rs::Sequence<AccelWithCovarianceStamped>) -> bool;
}

// Corresponds to geometry_msgs__msg__AccelWithCovarianceStamped
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AccelWithCovarianceStamped {
    pub header: std_msgs::msg::rmw::Header,
    pub accel: crate::msg::rmw::AccelWithCovariance,
}



impl Default for AccelWithCovarianceStamped {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !geometry_msgs__msg__AccelWithCovarianceStamped__init(&mut msg as *mut _) {
        panic!("Call to geometry_msgs__msg__AccelWithCovarianceStamped__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AccelWithCovarianceStamped {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__AccelWithCovarianceStamped__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__AccelWithCovarianceStamped__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__AccelWithCovarianceStamped__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AccelWithCovarianceStamped {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AccelWithCovarianceStamped where Self: Sized {
  const TYPE_NAME: &'static str = "geometry_msgs/msg/AccelWithCovarianceStamped";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__geometry_msgs__msg__AccelWithCovarianceStamped() }
  }
}


#[link(name = "geometry_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__geometry_msgs__msg__Inertia() -> *const std::os::raw::c_void;
}

#[link(name = "geometry_msgs__rosidl_generator_c")]
extern "C" {
    fn geometry_msgs__msg__Inertia__init(msg: *mut Inertia) -> bool;
    fn geometry_msgs__msg__Inertia__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Inertia>, size: usize) -> bool;
    fn geometry_msgs__msg__Inertia__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Inertia>);
    fn geometry_msgs__msg__Inertia__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Inertia>, out_seq: *mut rosidl_runtime_rs::Sequence<Inertia>) -> bool;
}

// Corresponds to geometry_msgs__msg__Inertia
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Inertia {
    pub m: f64,
    pub com: crate::msg::rmw::Vector3,
    pub ixx: f64,
    pub ixy: f64,
    pub ixz: f64,
    pub iyy: f64,
    pub iyz: f64,
    pub izz: f64,
}



impl Default for Inertia {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !geometry_msgs__msg__Inertia__init(&mut msg as *mut _) {
        panic!("Call to geometry_msgs__msg__Inertia__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Inertia {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__Inertia__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__Inertia__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__Inertia__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Inertia {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Inertia where Self: Sized {
  const TYPE_NAME: &'static str = "geometry_msgs/msg/Inertia";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__geometry_msgs__msg__Inertia() }
  }
}


#[link(name = "geometry_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__geometry_msgs__msg__InertiaStamped() -> *const std::os::raw::c_void;
}

#[link(name = "geometry_msgs__rosidl_generator_c")]
extern "C" {
    fn geometry_msgs__msg__InertiaStamped__init(msg: *mut InertiaStamped) -> bool;
    fn geometry_msgs__msg__InertiaStamped__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<InertiaStamped>, size: usize) -> bool;
    fn geometry_msgs__msg__InertiaStamped__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<InertiaStamped>);
    fn geometry_msgs__msg__InertiaStamped__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<InertiaStamped>, out_seq: *mut rosidl_runtime_rs::Sequence<InertiaStamped>) -> bool;
}

// Corresponds to geometry_msgs__msg__InertiaStamped
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct InertiaStamped {
    pub header: std_msgs::msg::rmw::Header,
    pub inertia: crate::msg::rmw::Inertia,
}



impl Default for InertiaStamped {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !geometry_msgs__msg__InertiaStamped__init(&mut msg as *mut _) {
        panic!("Call to geometry_msgs__msg__InertiaStamped__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for InertiaStamped {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__InertiaStamped__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__InertiaStamped__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__InertiaStamped__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for InertiaStamped {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for InertiaStamped where Self: Sized {
  const TYPE_NAME: &'static str = "geometry_msgs/msg/InertiaStamped";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__geometry_msgs__msg__InertiaStamped() }
  }
}


#[link(name = "geometry_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__geometry_msgs__msg__Point() -> *const std::os::raw::c_void;
}

#[link(name = "geometry_msgs__rosidl_generator_c")]
extern "C" {
    fn geometry_msgs__msg__Point__init(msg: *mut Point) -> bool;
    fn geometry_msgs__msg__Point__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Point>, size: usize) -> bool;
    fn geometry_msgs__msg__Point__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Point>);
    fn geometry_msgs__msg__Point__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Point>, out_seq: *mut rosidl_runtime_rs::Sequence<Point>) -> bool;
}

// Corresponds to geometry_msgs__msg__Point
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Point {
    pub x: f64,
    pub y: f64,
    pub z: f64,
}



impl Default for Point {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !geometry_msgs__msg__Point__init(&mut msg as *mut _) {
        panic!("Call to geometry_msgs__msg__Point__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Point {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__Point__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__Point__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__Point__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Point {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Point where Self: Sized {
  const TYPE_NAME: &'static str = "geometry_msgs/msg/Point";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__geometry_msgs__msg__Point() }
  }
}


#[link(name = "geometry_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__geometry_msgs__msg__Point32() -> *const std::os::raw::c_void;
}

#[link(name = "geometry_msgs__rosidl_generator_c")]
extern "C" {
    fn geometry_msgs__msg__Point32__init(msg: *mut Point32) -> bool;
    fn geometry_msgs__msg__Point32__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Point32>, size: usize) -> bool;
    fn geometry_msgs__msg__Point32__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Point32>);
    fn geometry_msgs__msg__Point32__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Point32>, out_seq: *mut rosidl_runtime_rs::Sequence<Point32>) -> bool;
}

// Corresponds to geometry_msgs__msg__Point32
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Point32 {
    pub x: f32,
    pub y: f32,
    pub z: f32,
}



impl Default for Point32 {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !geometry_msgs__msg__Point32__init(&mut msg as *mut _) {
        panic!("Call to geometry_msgs__msg__Point32__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Point32 {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__Point32__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__Point32__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__Point32__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Point32 {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Point32 where Self: Sized {
  const TYPE_NAME: &'static str = "geometry_msgs/msg/Point32";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__geometry_msgs__msg__Point32() }
  }
}


#[link(name = "geometry_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__geometry_msgs__msg__PointStamped() -> *const std::os::raw::c_void;
}

#[link(name = "geometry_msgs__rosidl_generator_c")]
extern "C" {
    fn geometry_msgs__msg__PointStamped__init(msg: *mut PointStamped) -> bool;
    fn geometry_msgs__msg__PointStamped__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PointStamped>, size: usize) -> bool;
    fn geometry_msgs__msg__PointStamped__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PointStamped>);
    fn geometry_msgs__msg__PointStamped__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PointStamped>, out_seq: *mut rosidl_runtime_rs::Sequence<PointStamped>) -> bool;
}

// Corresponds to geometry_msgs__msg__PointStamped
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PointStamped {
    pub header: std_msgs::msg::rmw::Header,
    pub point: crate::msg::rmw::Point,
}



impl Default for PointStamped {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !geometry_msgs__msg__PointStamped__init(&mut msg as *mut _) {
        panic!("Call to geometry_msgs__msg__PointStamped__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PointStamped {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__PointStamped__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__PointStamped__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__PointStamped__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PointStamped {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PointStamped where Self: Sized {
  const TYPE_NAME: &'static str = "geometry_msgs/msg/PointStamped";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__geometry_msgs__msg__PointStamped() }
  }
}


#[link(name = "geometry_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__geometry_msgs__msg__Polygon() -> *const std::os::raw::c_void;
}

#[link(name = "geometry_msgs__rosidl_generator_c")]
extern "C" {
    fn geometry_msgs__msg__Polygon__init(msg: *mut Polygon) -> bool;
    fn geometry_msgs__msg__Polygon__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Polygon>, size: usize) -> bool;
    fn geometry_msgs__msg__Polygon__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Polygon>);
    fn geometry_msgs__msg__Polygon__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Polygon>, out_seq: *mut rosidl_runtime_rs::Sequence<Polygon>) -> bool;
}

// Corresponds to geometry_msgs__msg__Polygon
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Polygon {
    pub points: rosidl_runtime_rs::Sequence<crate::msg::rmw::Point32>,
}



impl Default for Polygon {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !geometry_msgs__msg__Polygon__init(&mut msg as *mut _) {
        panic!("Call to geometry_msgs__msg__Polygon__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Polygon {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__Polygon__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__Polygon__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__Polygon__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Polygon {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Polygon where Self: Sized {
  const TYPE_NAME: &'static str = "geometry_msgs/msg/Polygon";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__geometry_msgs__msg__Polygon() }
  }
}


#[link(name = "geometry_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__geometry_msgs__msg__PolygonStamped() -> *const std::os::raw::c_void;
}

#[link(name = "geometry_msgs__rosidl_generator_c")]
extern "C" {
    fn geometry_msgs__msg__PolygonStamped__init(msg: *mut PolygonStamped) -> bool;
    fn geometry_msgs__msg__PolygonStamped__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PolygonStamped>, size: usize) -> bool;
    fn geometry_msgs__msg__PolygonStamped__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PolygonStamped>);
    fn geometry_msgs__msg__PolygonStamped__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PolygonStamped>, out_seq: *mut rosidl_runtime_rs::Sequence<PolygonStamped>) -> bool;
}

// Corresponds to geometry_msgs__msg__PolygonStamped
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PolygonStamped {
    pub header: std_msgs::msg::rmw::Header,
    pub polygon: crate::msg::rmw::Polygon,
}



impl Default for PolygonStamped {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !geometry_msgs__msg__PolygonStamped__init(&mut msg as *mut _) {
        panic!("Call to geometry_msgs__msg__PolygonStamped__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PolygonStamped {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__PolygonStamped__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__PolygonStamped__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__PolygonStamped__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PolygonStamped {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PolygonStamped where Self: Sized {
  const TYPE_NAME: &'static str = "geometry_msgs/msg/PolygonStamped";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__geometry_msgs__msg__PolygonStamped() }
  }
}


#[link(name = "geometry_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__geometry_msgs__msg__Pose() -> *const std::os::raw::c_void;
}

#[link(name = "geometry_msgs__rosidl_generator_c")]
extern "C" {
    fn geometry_msgs__msg__Pose__init(msg: *mut Pose) -> bool;
    fn geometry_msgs__msg__Pose__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Pose>, size: usize) -> bool;
    fn geometry_msgs__msg__Pose__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Pose>);
    fn geometry_msgs__msg__Pose__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Pose>, out_seq: *mut rosidl_runtime_rs::Sequence<Pose>) -> bool;
}

// Corresponds to geometry_msgs__msg__Pose
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Pose {
    pub position: crate::msg::rmw::Point,
    pub orientation: crate::msg::rmw::Quaternion,
}



impl Default for Pose {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !geometry_msgs__msg__Pose__init(&mut msg as *mut _) {
        panic!("Call to geometry_msgs__msg__Pose__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Pose {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__Pose__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__Pose__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__Pose__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Pose {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Pose where Self: Sized {
  const TYPE_NAME: &'static str = "geometry_msgs/msg/Pose";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__geometry_msgs__msg__Pose() }
  }
}


#[link(name = "geometry_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__geometry_msgs__msg__Pose2D() -> *const std::os::raw::c_void;
}

#[link(name = "geometry_msgs__rosidl_generator_c")]
extern "C" {
    fn geometry_msgs__msg__Pose2D__init(msg: *mut Pose2D) -> bool;
    fn geometry_msgs__msg__Pose2D__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Pose2D>, size: usize) -> bool;
    fn geometry_msgs__msg__Pose2D__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Pose2D>);
    fn geometry_msgs__msg__Pose2D__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Pose2D>, out_seq: *mut rosidl_runtime_rs::Sequence<Pose2D>) -> bool;
}

// Corresponds to geometry_msgs__msg__Pose2D
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Pose2D {
    pub x: f64,
    pub y: f64,
    pub theta: f64,
}



impl Default for Pose2D {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !geometry_msgs__msg__Pose2D__init(&mut msg as *mut _) {
        panic!("Call to geometry_msgs__msg__Pose2D__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Pose2D {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__Pose2D__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__Pose2D__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__Pose2D__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Pose2D {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Pose2D where Self: Sized {
  const TYPE_NAME: &'static str = "geometry_msgs/msg/Pose2D";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__geometry_msgs__msg__Pose2D() }
  }
}


#[link(name = "geometry_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__geometry_msgs__msg__PoseArray() -> *const std::os::raw::c_void;
}

#[link(name = "geometry_msgs__rosidl_generator_c")]
extern "C" {
    fn geometry_msgs__msg__PoseArray__init(msg: *mut PoseArray) -> bool;
    fn geometry_msgs__msg__PoseArray__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PoseArray>, size: usize) -> bool;
    fn geometry_msgs__msg__PoseArray__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PoseArray>);
    fn geometry_msgs__msg__PoseArray__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PoseArray>, out_seq: *mut rosidl_runtime_rs::Sequence<PoseArray>) -> bool;
}

// Corresponds to geometry_msgs__msg__PoseArray
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PoseArray {
    pub header: std_msgs::msg::rmw::Header,
    pub poses: rosidl_runtime_rs::Sequence<crate::msg::rmw::Pose>,
}



impl Default for PoseArray {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !geometry_msgs__msg__PoseArray__init(&mut msg as *mut _) {
        panic!("Call to geometry_msgs__msg__PoseArray__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PoseArray {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__PoseArray__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__PoseArray__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__PoseArray__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PoseArray {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PoseArray where Self: Sized {
  const TYPE_NAME: &'static str = "geometry_msgs/msg/PoseArray";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__geometry_msgs__msg__PoseArray() }
  }
}


#[link(name = "geometry_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__geometry_msgs__msg__PoseStamped() -> *const std::os::raw::c_void;
}

#[link(name = "geometry_msgs__rosidl_generator_c")]
extern "C" {
    fn geometry_msgs__msg__PoseStamped__init(msg: *mut PoseStamped) -> bool;
    fn geometry_msgs__msg__PoseStamped__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PoseStamped>, size: usize) -> bool;
    fn geometry_msgs__msg__PoseStamped__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PoseStamped>);
    fn geometry_msgs__msg__PoseStamped__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PoseStamped>, out_seq: *mut rosidl_runtime_rs::Sequence<PoseStamped>) -> bool;
}

// Corresponds to geometry_msgs__msg__PoseStamped
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PoseStamped {
    pub header: std_msgs::msg::rmw::Header,
    pub pose: crate::msg::rmw::Pose,
}



impl Default for PoseStamped {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !geometry_msgs__msg__PoseStamped__init(&mut msg as *mut _) {
        panic!("Call to geometry_msgs__msg__PoseStamped__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PoseStamped {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__PoseStamped__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__PoseStamped__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__PoseStamped__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PoseStamped {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PoseStamped where Self: Sized {
  const TYPE_NAME: &'static str = "geometry_msgs/msg/PoseStamped";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__geometry_msgs__msg__PoseStamped() }
  }
}


#[link(name = "geometry_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__geometry_msgs__msg__PoseWithCovariance() -> *const std::os::raw::c_void;
}

#[link(name = "geometry_msgs__rosidl_generator_c")]
extern "C" {
    fn geometry_msgs__msg__PoseWithCovariance__init(msg: *mut PoseWithCovariance) -> bool;
    fn geometry_msgs__msg__PoseWithCovariance__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PoseWithCovariance>, size: usize) -> bool;
    fn geometry_msgs__msg__PoseWithCovariance__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PoseWithCovariance>);
    fn geometry_msgs__msg__PoseWithCovariance__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PoseWithCovariance>, out_seq: *mut rosidl_runtime_rs::Sequence<PoseWithCovariance>) -> bool;
}

// Corresponds to geometry_msgs__msg__PoseWithCovariance
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PoseWithCovariance {
    pub pose: crate::msg::rmw::Pose,
    #[cfg_attr(feature = "serde", serde(with = "serde_big_array::BigArray"))]
    pub covariance: [f64; 36],
}



impl Default for PoseWithCovariance {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !geometry_msgs__msg__PoseWithCovariance__init(&mut msg as *mut _) {
        panic!("Call to geometry_msgs__msg__PoseWithCovariance__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PoseWithCovariance {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__PoseWithCovariance__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__PoseWithCovariance__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__PoseWithCovariance__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PoseWithCovariance {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PoseWithCovariance where Self: Sized {
  const TYPE_NAME: &'static str = "geometry_msgs/msg/PoseWithCovariance";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__geometry_msgs__msg__PoseWithCovariance() }
  }
}


#[link(name = "geometry_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__geometry_msgs__msg__PoseWithCovarianceStamped() -> *const std::os::raw::c_void;
}

#[link(name = "geometry_msgs__rosidl_generator_c")]
extern "C" {
    fn geometry_msgs__msg__PoseWithCovarianceStamped__init(msg: *mut PoseWithCovarianceStamped) -> bool;
    fn geometry_msgs__msg__PoseWithCovarianceStamped__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PoseWithCovarianceStamped>, size: usize) -> bool;
    fn geometry_msgs__msg__PoseWithCovarianceStamped__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PoseWithCovarianceStamped>);
    fn geometry_msgs__msg__PoseWithCovarianceStamped__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PoseWithCovarianceStamped>, out_seq: *mut rosidl_runtime_rs::Sequence<PoseWithCovarianceStamped>) -> bool;
}

// Corresponds to geometry_msgs__msg__PoseWithCovarianceStamped
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PoseWithCovarianceStamped {
    pub header: std_msgs::msg::rmw::Header,
    pub pose: crate::msg::rmw::PoseWithCovariance,
}



impl Default for PoseWithCovarianceStamped {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !geometry_msgs__msg__PoseWithCovarianceStamped__init(&mut msg as *mut _) {
        panic!("Call to geometry_msgs__msg__PoseWithCovarianceStamped__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PoseWithCovarianceStamped {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__PoseWithCovarianceStamped__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__PoseWithCovarianceStamped__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__PoseWithCovarianceStamped__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PoseWithCovarianceStamped {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PoseWithCovarianceStamped where Self: Sized {
  const TYPE_NAME: &'static str = "geometry_msgs/msg/PoseWithCovarianceStamped";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__geometry_msgs__msg__PoseWithCovarianceStamped() }
  }
}


#[link(name = "geometry_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__geometry_msgs__msg__Quaternion() -> *const std::os::raw::c_void;
}

#[link(name = "geometry_msgs__rosidl_generator_c")]
extern "C" {
    fn geometry_msgs__msg__Quaternion__init(msg: *mut Quaternion) -> bool;
    fn geometry_msgs__msg__Quaternion__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Quaternion>, size: usize) -> bool;
    fn geometry_msgs__msg__Quaternion__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Quaternion>);
    fn geometry_msgs__msg__Quaternion__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Quaternion>, out_seq: *mut rosidl_runtime_rs::Sequence<Quaternion>) -> bool;
}

// Corresponds to geometry_msgs__msg__Quaternion
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Quaternion {
    pub x: f64,
    pub y: f64,
    pub z: f64,
    pub w: f64,
}



impl Default for Quaternion {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !geometry_msgs__msg__Quaternion__init(&mut msg as *mut _) {
        panic!("Call to geometry_msgs__msg__Quaternion__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Quaternion {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__Quaternion__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__Quaternion__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__Quaternion__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Quaternion {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Quaternion where Self: Sized {
  const TYPE_NAME: &'static str = "geometry_msgs/msg/Quaternion";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__geometry_msgs__msg__Quaternion() }
  }
}


#[link(name = "geometry_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__geometry_msgs__msg__QuaternionStamped() -> *const std::os::raw::c_void;
}

#[link(name = "geometry_msgs__rosidl_generator_c")]
extern "C" {
    fn geometry_msgs__msg__QuaternionStamped__init(msg: *mut QuaternionStamped) -> bool;
    fn geometry_msgs__msg__QuaternionStamped__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<QuaternionStamped>, size: usize) -> bool;
    fn geometry_msgs__msg__QuaternionStamped__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<QuaternionStamped>);
    fn geometry_msgs__msg__QuaternionStamped__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<QuaternionStamped>, out_seq: *mut rosidl_runtime_rs::Sequence<QuaternionStamped>) -> bool;
}

// Corresponds to geometry_msgs__msg__QuaternionStamped
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct QuaternionStamped {
    pub header: std_msgs::msg::rmw::Header,
    pub quaternion: crate::msg::rmw::Quaternion,
}



impl Default for QuaternionStamped {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !geometry_msgs__msg__QuaternionStamped__init(&mut msg as *mut _) {
        panic!("Call to geometry_msgs__msg__QuaternionStamped__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for QuaternionStamped {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__QuaternionStamped__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__QuaternionStamped__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__QuaternionStamped__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for QuaternionStamped {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for QuaternionStamped where Self: Sized {
  const TYPE_NAME: &'static str = "geometry_msgs/msg/QuaternionStamped";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__geometry_msgs__msg__QuaternionStamped() }
  }
}


#[link(name = "geometry_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__geometry_msgs__msg__Transform() -> *const std::os::raw::c_void;
}

#[link(name = "geometry_msgs__rosidl_generator_c")]
extern "C" {
    fn geometry_msgs__msg__Transform__init(msg: *mut Transform) -> bool;
    fn geometry_msgs__msg__Transform__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Transform>, size: usize) -> bool;
    fn geometry_msgs__msg__Transform__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Transform>);
    fn geometry_msgs__msg__Transform__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Transform>, out_seq: *mut rosidl_runtime_rs::Sequence<Transform>) -> bool;
}

// Corresponds to geometry_msgs__msg__Transform
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Transform {
    pub translation: crate::msg::rmw::Vector3,
    pub rotation: crate::msg::rmw::Quaternion,
}



impl Default for Transform {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !geometry_msgs__msg__Transform__init(&mut msg as *mut _) {
        panic!("Call to geometry_msgs__msg__Transform__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Transform {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__Transform__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__Transform__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__Transform__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Transform {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Transform where Self: Sized {
  const TYPE_NAME: &'static str = "geometry_msgs/msg/Transform";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__geometry_msgs__msg__Transform() }
  }
}


#[link(name = "geometry_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__geometry_msgs__msg__TransformStamped() -> *const std::os::raw::c_void;
}

#[link(name = "geometry_msgs__rosidl_generator_c")]
extern "C" {
    fn geometry_msgs__msg__TransformStamped__init(msg: *mut TransformStamped) -> bool;
    fn geometry_msgs__msg__TransformStamped__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TransformStamped>, size: usize) -> bool;
    fn geometry_msgs__msg__TransformStamped__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TransformStamped>);
    fn geometry_msgs__msg__TransformStamped__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TransformStamped>, out_seq: *mut rosidl_runtime_rs::Sequence<TransformStamped>) -> bool;
}

// Corresponds to geometry_msgs__msg__TransformStamped
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TransformStamped {
    pub header: std_msgs::msg::rmw::Header,
    pub child_frame_id: rosidl_runtime_rs::String,
    pub transform: crate::msg::rmw::Transform,
}



impl Default for TransformStamped {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !geometry_msgs__msg__TransformStamped__init(&mut msg as *mut _) {
        panic!("Call to geometry_msgs__msg__TransformStamped__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TransformStamped {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__TransformStamped__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__TransformStamped__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__TransformStamped__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TransformStamped {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TransformStamped where Self: Sized {
  const TYPE_NAME: &'static str = "geometry_msgs/msg/TransformStamped";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__geometry_msgs__msg__TransformStamped() }
  }
}


#[link(name = "geometry_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__geometry_msgs__msg__Twist() -> *const std::os::raw::c_void;
}

#[link(name = "geometry_msgs__rosidl_generator_c")]
extern "C" {
    fn geometry_msgs__msg__Twist__init(msg: *mut Twist) -> bool;
    fn geometry_msgs__msg__Twist__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Twist>, size: usize) -> bool;
    fn geometry_msgs__msg__Twist__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Twist>);
    fn geometry_msgs__msg__Twist__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Twist>, out_seq: *mut rosidl_runtime_rs::Sequence<Twist>) -> bool;
}

// Corresponds to geometry_msgs__msg__Twist
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Twist {
    pub linear: crate::msg::rmw::Vector3,
    pub angular: crate::msg::rmw::Vector3,
}



impl Default for Twist {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !geometry_msgs__msg__Twist__init(&mut msg as *mut _) {
        panic!("Call to geometry_msgs__msg__Twist__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Twist {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__Twist__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__Twist__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__Twist__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Twist {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Twist where Self: Sized {
  const TYPE_NAME: &'static str = "geometry_msgs/msg/Twist";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__geometry_msgs__msg__Twist() }
  }
}


#[link(name = "geometry_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__geometry_msgs__msg__TwistStamped() -> *const std::os::raw::c_void;
}

#[link(name = "geometry_msgs__rosidl_generator_c")]
extern "C" {
    fn geometry_msgs__msg__TwistStamped__init(msg: *mut TwistStamped) -> bool;
    fn geometry_msgs__msg__TwistStamped__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TwistStamped>, size: usize) -> bool;
    fn geometry_msgs__msg__TwistStamped__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TwistStamped>);
    fn geometry_msgs__msg__TwistStamped__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TwistStamped>, out_seq: *mut rosidl_runtime_rs::Sequence<TwistStamped>) -> bool;
}

// Corresponds to geometry_msgs__msg__TwistStamped
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TwistStamped {
    pub header: std_msgs::msg::rmw::Header,
    pub twist: crate::msg::rmw::Twist,
}



impl Default for TwistStamped {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !geometry_msgs__msg__TwistStamped__init(&mut msg as *mut _) {
        panic!("Call to geometry_msgs__msg__TwistStamped__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TwistStamped {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__TwistStamped__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__TwistStamped__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__TwistStamped__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TwistStamped {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TwistStamped where Self: Sized {
  const TYPE_NAME: &'static str = "geometry_msgs/msg/TwistStamped";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__geometry_msgs__msg__TwistStamped() }
  }
}


#[link(name = "geometry_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__geometry_msgs__msg__TwistWithCovariance() -> *const std::os::raw::c_void;
}

#[link(name = "geometry_msgs__rosidl_generator_c")]
extern "C" {
    fn geometry_msgs__msg__TwistWithCovariance__init(msg: *mut TwistWithCovariance) -> bool;
    fn geometry_msgs__msg__TwistWithCovariance__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TwistWithCovariance>, size: usize) -> bool;
    fn geometry_msgs__msg__TwistWithCovariance__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TwistWithCovariance>);
    fn geometry_msgs__msg__TwistWithCovariance__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TwistWithCovariance>, out_seq: *mut rosidl_runtime_rs::Sequence<TwistWithCovariance>) -> bool;
}

// Corresponds to geometry_msgs__msg__TwistWithCovariance
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TwistWithCovariance {
    pub twist: crate::msg::rmw::Twist,
    #[cfg_attr(feature = "serde", serde(with = "serde_big_array::BigArray"))]
    pub covariance: [f64; 36],
}



impl Default for TwistWithCovariance {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !geometry_msgs__msg__TwistWithCovariance__init(&mut msg as *mut _) {
        panic!("Call to geometry_msgs__msg__TwistWithCovariance__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TwistWithCovariance {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__TwistWithCovariance__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__TwistWithCovariance__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__TwistWithCovariance__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TwistWithCovariance {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TwistWithCovariance where Self: Sized {
  const TYPE_NAME: &'static str = "geometry_msgs/msg/TwistWithCovariance";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__geometry_msgs__msg__TwistWithCovariance() }
  }
}


#[link(name = "geometry_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__geometry_msgs__msg__TwistWithCovarianceStamped() -> *const std::os::raw::c_void;
}

#[link(name = "geometry_msgs__rosidl_generator_c")]
extern "C" {
    fn geometry_msgs__msg__TwistWithCovarianceStamped__init(msg: *mut TwistWithCovarianceStamped) -> bool;
    fn geometry_msgs__msg__TwistWithCovarianceStamped__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TwistWithCovarianceStamped>, size: usize) -> bool;
    fn geometry_msgs__msg__TwistWithCovarianceStamped__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TwistWithCovarianceStamped>);
    fn geometry_msgs__msg__TwistWithCovarianceStamped__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TwistWithCovarianceStamped>, out_seq: *mut rosidl_runtime_rs::Sequence<TwistWithCovarianceStamped>) -> bool;
}

// Corresponds to geometry_msgs__msg__TwistWithCovarianceStamped
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TwistWithCovarianceStamped {
    pub header: std_msgs::msg::rmw::Header,
    pub twist: crate::msg::rmw::TwistWithCovariance,
}



impl Default for TwistWithCovarianceStamped {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !geometry_msgs__msg__TwistWithCovarianceStamped__init(&mut msg as *mut _) {
        panic!("Call to geometry_msgs__msg__TwistWithCovarianceStamped__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TwistWithCovarianceStamped {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__TwistWithCovarianceStamped__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__TwistWithCovarianceStamped__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__TwistWithCovarianceStamped__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TwistWithCovarianceStamped {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TwistWithCovarianceStamped where Self: Sized {
  const TYPE_NAME: &'static str = "geometry_msgs/msg/TwistWithCovarianceStamped";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__geometry_msgs__msg__TwistWithCovarianceStamped() }
  }
}


#[link(name = "geometry_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__geometry_msgs__msg__Vector3() -> *const std::os::raw::c_void;
}

#[link(name = "geometry_msgs__rosidl_generator_c")]
extern "C" {
    fn geometry_msgs__msg__Vector3__init(msg: *mut Vector3) -> bool;
    fn geometry_msgs__msg__Vector3__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Vector3>, size: usize) -> bool;
    fn geometry_msgs__msg__Vector3__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Vector3>);
    fn geometry_msgs__msg__Vector3__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Vector3>, out_seq: *mut rosidl_runtime_rs::Sequence<Vector3>) -> bool;
}

// Corresponds to geometry_msgs__msg__Vector3
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Vector3 {
    pub x: f64,
    pub y: f64,
    pub z: f64,
}



impl Default for Vector3 {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !geometry_msgs__msg__Vector3__init(&mut msg as *mut _) {
        panic!("Call to geometry_msgs__msg__Vector3__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Vector3 {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__Vector3__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__Vector3__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__Vector3__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Vector3 {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Vector3 where Self: Sized {
  const TYPE_NAME: &'static str = "geometry_msgs/msg/Vector3";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__geometry_msgs__msg__Vector3() }
  }
}


#[link(name = "geometry_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__geometry_msgs__msg__Vector3Stamped() -> *const std::os::raw::c_void;
}

#[link(name = "geometry_msgs__rosidl_generator_c")]
extern "C" {
    fn geometry_msgs__msg__Vector3Stamped__init(msg: *mut Vector3Stamped) -> bool;
    fn geometry_msgs__msg__Vector3Stamped__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Vector3Stamped>, size: usize) -> bool;
    fn geometry_msgs__msg__Vector3Stamped__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Vector3Stamped>);
    fn geometry_msgs__msg__Vector3Stamped__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Vector3Stamped>, out_seq: *mut rosidl_runtime_rs::Sequence<Vector3Stamped>) -> bool;
}

// Corresponds to geometry_msgs__msg__Vector3Stamped
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Vector3Stamped {
    pub header: std_msgs::msg::rmw::Header,
    pub vector: crate::msg::rmw::Vector3,
}



impl Default for Vector3Stamped {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !geometry_msgs__msg__Vector3Stamped__init(&mut msg as *mut _) {
        panic!("Call to geometry_msgs__msg__Vector3Stamped__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Vector3Stamped {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__Vector3Stamped__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__Vector3Stamped__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__Vector3Stamped__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Vector3Stamped {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Vector3Stamped where Self: Sized {
  const TYPE_NAME: &'static str = "geometry_msgs/msg/Vector3Stamped";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__geometry_msgs__msg__Vector3Stamped() }
  }
}


#[link(name = "geometry_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__geometry_msgs__msg__Wrench() -> *const std::os::raw::c_void;
}

#[link(name = "geometry_msgs__rosidl_generator_c")]
extern "C" {
    fn geometry_msgs__msg__Wrench__init(msg: *mut Wrench) -> bool;
    fn geometry_msgs__msg__Wrench__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Wrench>, size: usize) -> bool;
    fn geometry_msgs__msg__Wrench__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Wrench>);
    fn geometry_msgs__msg__Wrench__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Wrench>, out_seq: *mut rosidl_runtime_rs::Sequence<Wrench>) -> bool;
}

// Corresponds to geometry_msgs__msg__Wrench
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Wrench {
    pub force: crate::msg::rmw::Vector3,
    pub torque: crate::msg::rmw::Vector3,
}



impl Default for Wrench {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !geometry_msgs__msg__Wrench__init(&mut msg as *mut _) {
        panic!("Call to geometry_msgs__msg__Wrench__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Wrench {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__Wrench__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__Wrench__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__Wrench__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Wrench {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Wrench where Self: Sized {
  const TYPE_NAME: &'static str = "geometry_msgs/msg/Wrench";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__geometry_msgs__msg__Wrench() }
  }
}


#[link(name = "geometry_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__geometry_msgs__msg__WrenchStamped() -> *const std::os::raw::c_void;
}

#[link(name = "geometry_msgs__rosidl_generator_c")]
extern "C" {
    fn geometry_msgs__msg__WrenchStamped__init(msg: *mut WrenchStamped) -> bool;
    fn geometry_msgs__msg__WrenchStamped__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<WrenchStamped>, size: usize) -> bool;
    fn geometry_msgs__msg__WrenchStamped__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<WrenchStamped>);
    fn geometry_msgs__msg__WrenchStamped__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<WrenchStamped>, out_seq: *mut rosidl_runtime_rs::Sequence<WrenchStamped>) -> bool;
}

// Corresponds to geometry_msgs__msg__WrenchStamped
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WrenchStamped {
    pub header: std_msgs::msg::rmw::Header,
    pub wrench: crate::msg::rmw::Wrench,
}



impl Default for WrenchStamped {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !geometry_msgs__msg__WrenchStamped__init(&mut msg as *mut _) {
        panic!("Call to geometry_msgs__msg__WrenchStamped__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for WrenchStamped {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__WrenchStamped__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__WrenchStamped__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { geometry_msgs__msg__WrenchStamped__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for WrenchStamped {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for WrenchStamped where Self: Sized {
  const TYPE_NAME: &'static str = "geometry_msgs/msg/WrenchStamped";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__geometry_msgs__msg__WrenchStamped() }
  }
}


}  // mod rmw


#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Accel {
    pub linear: crate::msg::Vector3,
    pub angular: crate::msg::Vector3,
}



impl Default for Accel {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::Accel::default())
  }
}

impl rosidl_runtime_rs::Message for Accel {
  type RmwMsg = crate::msg::rmw::Accel;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        linear: crate::msg::Vector3::into_rmw_message(std::borrow::Cow::Owned(msg.linear)).into_owned(),
        angular: crate::msg::Vector3::into_rmw_message(std::borrow::Cow::Owned(msg.angular)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        linear: crate::msg::Vector3::into_rmw_message(std::borrow::Cow::Borrowed(&msg.linear)).into_owned(),
        angular: crate::msg::Vector3::into_rmw_message(std::borrow::Cow::Borrowed(&msg.angular)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      linear: crate::msg::Vector3::from_rmw_message(msg.linear),
      angular: crate::msg::Vector3::from_rmw_message(msg.angular),
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AccelStamped {
    pub header: std_msgs::msg::Header,
    pub accel: crate::msg::Accel,
}



impl Default for AccelStamped {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::AccelStamped::default())
  }
}

impl rosidl_runtime_rs::Message for AccelStamped {
  type RmwMsg = crate::msg::rmw::AccelStamped;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        accel: crate::msg::Accel::into_rmw_message(std::borrow::Cow::Owned(msg.accel)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        accel: crate::msg::Accel::into_rmw_message(std::borrow::Cow::Borrowed(&msg.accel)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      accel: crate::msg::Accel::from_rmw_message(msg.accel),
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AccelWithCovariance {
    pub accel: crate::msg::Accel,
    #[cfg_attr(feature = "serde", serde(with = "serde_big_array::BigArray"))]
    pub covariance: [f64; 36],
}



impl Default for AccelWithCovariance {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::AccelWithCovariance::default())
  }
}

impl rosidl_runtime_rs::Message for AccelWithCovariance {
  type RmwMsg = crate::msg::rmw::AccelWithCovariance;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accel: crate::msg::Accel::into_rmw_message(std::borrow::Cow::Owned(msg.accel)).into_owned(),
        covariance: msg.covariance,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accel: crate::msg::Accel::into_rmw_message(std::borrow::Cow::Borrowed(&msg.accel)).into_owned(),
        covariance: msg.covariance,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accel: crate::msg::Accel::from_rmw_message(msg.accel),
      covariance: msg.covariance,
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AccelWithCovarianceStamped {
    pub header: std_msgs::msg::Header,
    pub accel: crate::msg::AccelWithCovariance,
}



impl Default for AccelWithCovarianceStamped {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::AccelWithCovarianceStamped::default())
  }
}

impl rosidl_runtime_rs::Message for AccelWithCovarianceStamped {
  type RmwMsg = crate::msg::rmw::AccelWithCovarianceStamped;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        accel: crate::msg::AccelWithCovariance::into_rmw_message(std::borrow::Cow::Owned(msg.accel)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        accel: crate::msg::AccelWithCovariance::into_rmw_message(std::borrow::Cow::Borrowed(&msg.accel)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      accel: crate::msg::AccelWithCovariance::from_rmw_message(msg.accel),
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Inertia {
    pub m: f64,
    pub com: crate::msg::Vector3,
    pub ixx: f64,
    pub ixy: f64,
    pub ixz: f64,
    pub iyy: f64,
    pub iyz: f64,
    pub izz: f64,
}



impl Default for Inertia {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::Inertia::default())
  }
}

impl rosidl_runtime_rs::Message for Inertia {
  type RmwMsg = crate::msg::rmw::Inertia;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        m: msg.m,
        com: crate::msg::Vector3::into_rmw_message(std::borrow::Cow::Owned(msg.com)).into_owned(),
        ixx: msg.ixx,
        ixy: msg.ixy,
        ixz: msg.ixz,
        iyy: msg.iyy,
        iyz: msg.iyz,
        izz: msg.izz,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      m: msg.m,
        com: crate::msg::Vector3::into_rmw_message(std::borrow::Cow::Borrowed(&msg.com)).into_owned(),
      ixx: msg.ixx,
      ixy: msg.ixy,
      ixz: msg.ixz,
      iyy: msg.iyy,
      iyz: msg.iyz,
      izz: msg.izz,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      m: msg.m,
      com: crate::msg::Vector3::from_rmw_message(msg.com),
      ixx: msg.ixx,
      ixy: msg.ixy,
      ixz: msg.ixz,
      iyy: msg.iyy,
      iyz: msg.iyz,
      izz: msg.izz,
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct InertiaStamped {
    pub header: std_msgs::msg::Header,
    pub inertia: crate::msg::Inertia,
}



impl Default for InertiaStamped {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::InertiaStamped::default())
  }
}

impl rosidl_runtime_rs::Message for InertiaStamped {
  type RmwMsg = crate::msg::rmw::InertiaStamped;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        inertia: crate::msg::Inertia::into_rmw_message(std::borrow::Cow::Owned(msg.inertia)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        inertia: crate::msg::Inertia::into_rmw_message(std::borrow::Cow::Borrowed(&msg.inertia)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      inertia: crate::msg::Inertia::from_rmw_message(msg.inertia),
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Point {
    pub x: f64,
    pub y: f64,
    pub z: f64,
}



impl Default for Point {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::Point::default())
  }
}

impl rosidl_runtime_rs::Message for Point {
  type RmwMsg = crate::msg::rmw::Point;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        x: msg.x,
        y: msg.y,
        z: msg.z,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      x: msg.x,
      y: msg.y,
      z: msg.z,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      x: msg.x,
      y: msg.y,
      z: msg.z,
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Point32 {
    pub x: f32,
    pub y: f32,
    pub z: f32,
}



impl Default for Point32 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::Point32::default())
  }
}

impl rosidl_runtime_rs::Message for Point32 {
  type RmwMsg = crate::msg::rmw::Point32;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        x: msg.x,
        y: msg.y,
        z: msg.z,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      x: msg.x,
      y: msg.y,
      z: msg.z,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      x: msg.x,
      y: msg.y,
      z: msg.z,
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PointStamped {
    pub header: std_msgs::msg::Header,
    pub point: crate::msg::Point,
}



impl Default for PointStamped {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::PointStamped::default())
  }
}

impl rosidl_runtime_rs::Message for PointStamped {
  type RmwMsg = crate::msg::rmw::PointStamped;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        point: crate::msg::Point::into_rmw_message(std::borrow::Cow::Owned(msg.point)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        point: crate::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(&msg.point)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      point: crate::msg::Point::from_rmw_message(msg.point),
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Polygon {
    pub points: Vec<crate::msg::Point32>,
}



impl Default for Polygon {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::Polygon::default())
  }
}

impl rosidl_runtime_rs::Message for Polygon {
  type RmwMsg = crate::msg::rmw::Polygon;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        points: msg.points
          .into_iter()
          .map(|elem| crate::msg::Point32::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        points: msg.points
          .iter()
          .map(|elem| crate::msg::Point32::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      points: msg.points
          .into_iter()
          .map(crate::msg::Point32::from_rmw_message)
          .collect(),
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PolygonStamped {
    pub header: std_msgs::msg::Header,
    pub polygon: crate::msg::Polygon,
}



impl Default for PolygonStamped {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::PolygonStamped::default())
  }
}

impl rosidl_runtime_rs::Message for PolygonStamped {
  type RmwMsg = crate::msg::rmw::PolygonStamped;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        polygon: crate::msg::Polygon::into_rmw_message(std::borrow::Cow::Owned(msg.polygon)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        polygon: crate::msg::Polygon::into_rmw_message(std::borrow::Cow::Borrowed(&msg.polygon)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      polygon: crate::msg::Polygon::from_rmw_message(msg.polygon),
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Pose {
    pub position: crate::msg::Point,
    pub orientation: crate::msg::Quaternion,
}



impl Default for Pose {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::Pose::default())
  }
}

impl rosidl_runtime_rs::Message for Pose {
  type RmwMsg = crate::msg::rmw::Pose;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        position: crate::msg::Point::into_rmw_message(std::borrow::Cow::Owned(msg.position)).into_owned(),
        orientation: crate::msg::Quaternion::into_rmw_message(std::borrow::Cow::Owned(msg.orientation)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        position: crate::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(&msg.position)).into_owned(),
        orientation: crate::msg::Quaternion::into_rmw_message(std::borrow::Cow::Borrowed(&msg.orientation)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      position: crate::msg::Point::from_rmw_message(msg.position),
      orientation: crate::msg::Quaternion::from_rmw_message(msg.orientation),
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Pose2D {
    pub x: f64,
    pub y: f64,
    pub theta: f64,
}



impl Default for Pose2D {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::Pose2D::default())
  }
}

impl rosidl_runtime_rs::Message for Pose2D {
  type RmwMsg = crate::msg::rmw::Pose2D;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        x: msg.x,
        y: msg.y,
        theta: msg.theta,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      x: msg.x,
      y: msg.y,
      theta: msg.theta,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      x: msg.x,
      y: msg.y,
      theta: msg.theta,
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PoseArray {
    pub header: std_msgs::msg::Header,
    pub poses: Vec<crate::msg::Pose>,
}



impl Default for PoseArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::PoseArray::default())
  }
}

impl rosidl_runtime_rs::Message for PoseArray {
  type RmwMsg = crate::msg::rmw::PoseArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        poses: msg.poses
          .into_iter()
          .map(|elem| crate::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        poses: msg.poses
          .iter()
          .map(|elem| crate::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      poses: msg.poses
          .into_iter()
          .map(crate::msg::Pose::from_rmw_message)
          .collect(),
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PoseStamped {
    pub header: std_msgs::msg::Header,
    pub pose: crate::msg::Pose,
}



impl Default for PoseStamped {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::PoseStamped::default())
  }
}

impl rosidl_runtime_rs::Message for PoseStamped {
  type RmwMsg = crate::msg::rmw::PoseStamped;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        pose: crate::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(msg.pose)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        pose: crate::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(&msg.pose)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      pose: crate::msg::Pose::from_rmw_message(msg.pose),
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PoseWithCovariance {
    pub pose: crate::msg::Pose,
    #[cfg_attr(feature = "serde", serde(with = "serde_big_array::BigArray"))]
    pub covariance: [f64; 36],
}



impl Default for PoseWithCovariance {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::PoseWithCovariance::default())
  }
}

impl rosidl_runtime_rs::Message for PoseWithCovariance {
  type RmwMsg = crate::msg::rmw::PoseWithCovariance;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        pose: crate::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(msg.pose)).into_owned(),
        covariance: msg.covariance,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        pose: crate::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(&msg.pose)).into_owned(),
        covariance: msg.covariance,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      pose: crate::msg::Pose::from_rmw_message(msg.pose),
      covariance: msg.covariance,
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PoseWithCovarianceStamped {
    pub header: std_msgs::msg::Header,
    pub pose: crate::msg::PoseWithCovariance,
}



impl Default for PoseWithCovarianceStamped {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::PoseWithCovarianceStamped::default())
  }
}

impl rosidl_runtime_rs::Message for PoseWithCovarianceStamped {
  type RmwMsg = crate::msg::rmw::PoseWithCovarianceStamped;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        pose: crate::msg::PoseWithCovariance::into_rmw_message(std::borrow::Cow::Owned(msg.pose)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        pose: crate::msg::PoseWithCovariance::into_rmw_message(std::borrow::Cow::Borrowed(&msg.pose)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      pose: crate::msg::PoseWithCovariance::from_rmw_message(msg.pose),
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Quaternion {
    pub x: f64,
    pub y: f64,
    pub z: f64,
    pub w: f64,
}



impl Default for Quaternion {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::Quaternion::default())
  }
}

impl rosidl_runtime_rs::Message for Quaternion {
  type RmwMsg = crate::msg::rmw::Quaternion;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        x: msg.x,
        y: msg.y,
        z: msg.z,
        w: msg.w,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      x: msg.x,
      y: msg.y,
      z: msg.z,
      w: msg.w,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      x: msg.x,
      y: msg.y,
      z: msg.z,
      w: msg.w,
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct QuaternionStamped {
    pub header: std_msgs::msg::Header,
    pub quaternion: crate::msg::Quaternion,
}



impl Default for QuaternionStamped {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::QuaternionStamped::default())
  }
}

impl rosidl_runtime_rs::Message for QuaternionStamped {
  type RmwMsg = crate::msg::rmw::QuaternionStamped;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        quaternion: crate::msg::Quaternion::into_rmw_message(std::borrow::Cow::Owned(msg.quaternion)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        quaternion: crate::msg::Quaternion::into_rmw_message(std::borrow::Cow::Borrowed(&msg.quaternion)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      quaternion: crate::msg::Quaternion::from_rmw_message(msg.quaternion),
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Transform {
    pub translation: crate::msg::Vector3,
    pub rotation: crate::msg::Quaternion,
}



impl Default for Transform {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::Transform::default())
  }
}

impl rosidl_runtime_rs::Message for Transform {
  type RmwMsg = crate::msg::rmw::Transform;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        translation: crate::msg::Vector3::into_rmw_message(std::borrow::Cow::Owned(msg.translation)).into_owned(),
        rotation: crate::msg::Quaternion::into_rmw_message(std::borrow::Cow::Owned(msg.rotation)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        translation: crate::msg::Vector3::into_rmw_message(std::borrow::Cow::Borrowed(&msg.translation)).into_owned(),
        rotation: crate::msg::Quaternion::into_rmw_message(std::borrow::Cow::Borrowed(&msg.rotation)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      translation: crate::msg::Vector3::from_rmw_message(msg.translation),
      rotation: crate::msg::Quaternion::from_rmw_message(msg.rotation),
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TransformStamped {
    pub header: std_msgs::msg::Header,
    pub child_frame_id: std::string::String,
    pub transform: crate::msg::Transform,
}



impl Default for TransformStamped {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::TransformStamped::default())
  }
}

impl rosidl_runtime_rs::Message for TransformStamped {
  type RmwMsg = crate::msg::rmw::TransformStamped;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        child_frame_id: msg.child_frame_id.as_str().into(),
        transform: crate::msg::Transform::into_rmw_message(std::borrow::Cow::Owned(msg.transform)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        child_frame_id: msg.child_frame_id.as_str().into(),
        transform: crate::msg::Transform::into_rmw_message(std::borrow::Cow::Borrowed(&msg.transform)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      child_frame_id: msg.child_frame_id.to_string(),
      transform: crate::msg::Transform::from_rmw_message(msg.transform),
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Twist {
    pub linear: crate::msg::Vector3,
    pub angular: crate::msg::Vector3,
}



impl Default for Twist {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::Twist::default())
  }
}

impl rosidl_runtime_rs::Message for Twist {
  type RmwMsg = crate::msg::rmw::Twist;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        linear: crate::msg::Vector3::into_rmw_message(std::borrow::Cow::Owned(msg.linear)).into_owned(),
        angular: crate::msg::Vector3::into_rmw_message(std::borrow::Cow::Owned(msg.angular)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        linear: crate::msg::Vector3::into_rmw_message(std::borrow::Cow::Borrowed(&msg.linear)).into_owned(),
        angular: crate::msg::Vector3::into_rmw_message(std::borrow::Cow::Borrowed(&msg.angular)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      linear: crate::msg::Vector3::from_rmw_message(msg.linear),
      angular: crate::msg::Vector3::from_rmw_message(msg.angular),
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TwistStamped {
    pub header: std_msgs::msg::Header,
    pub twist: crate::msg::Twist,
}



impl Default for TwistStamped {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::TwistStamped::default())
  }
}

impl rosidl_runtime_rs::Message for TwistStamped {
  type RmwMsg = crate::msg::rmw::TwistStamped;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        twist: crate::msg::Twist::into_rmw_message(std::borrow::Cow::Owned(msg.twist)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        twist: crate::msg::Twist::into_rmw_message(std::borrow::Cow::Borrowed(&msg.twist)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      twist: crate::msg::Twist::from_rmw_message(msg.twist),
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TwistWithCovariance {
    pub twist: crate::msg::Twist,
    #[cfg_attr(feature = "serde", serde(with = "serde_big_array::BigArray"))]
    pub covariance: [f64; 36],
}



impl Default for TwistWithCovariance {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::TwistWithCovariance::default())
  }
}

impl rosidl_runtime_rs::Message for TwistWithCovariance {
  type RmwMsg = crate::msg::rmw::TwistWithCovariance;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        twist: crate::msg::Twist::into_rmw_message(std::borrow::Cow::Owned(msg.twist)).into_owned(),
        covariance: msg.covariance,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        twist: crate::msg::Twist::into_rmw_message(std::borrow::Cow::Borrowed(&msg.twist)).into_owned(),
        covariance: msg.covariance,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      twist: crate::msg::Twist::from_rmw_message(msg.twist),
      covariance: msg.covariance,
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TwistWithCovarianceStamped {
    pub header: std_msgs::msg::Header,
    pub twist: crate::msg::TwistWithCovariance,
}



impl Default for TwistWithCovarianceStamped {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::TwistWithCovarianceStamped::default())
  }
}

impl rosidl_runtime_rs::Message for TwistWithCovarianceStamped {
  type RmwMsg = crate::msg::rmw::TwistWithCovarianceStamped;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        twist: crate::msg::TwistWithCovariance::into_rmw_message(std::borrow::Cow::Owned(msg.twist)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        twist: crate::msg::TwistWithCovariance::into_rmw_message(std::borrow::Cow::Borrowed(&msg.twist)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      twist: crate::msg::TwistWithCovariance::from_rmw_message(msg.twist),
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Vector3 {
    pub x: f64,
    pub y: f64,
    pub z: f64,
}



impl Default for Vector3 {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::Vector3::default())
  }
}

impl rosidl_runtime_rs::Message for Vector3 {
  type RmwMsg = crate::msg::rmw::Vector3;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        x: msg.x,
        y: msg.y,
        z: msg.z,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      x: msg.x,
      y: msg.y,
      z: msg.z,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      x: msg.x,
      y: msg.y,
      z: msg.z,
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Vector3Stamped {
    pub header: std_msgs::msg::Header,
    pub vector: crate::msg::Vector3,
}



impl Default for Vector3Stamped {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::Vector3Stamped::default())
  }
}

impl rosidl_runtime_rs::Message for Vector3Stamped {
  type RmwMsg = crate::msg::rmw::Vector3Stamped;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        vector: crate::msg::Vector3::into_rmw_message(std::borrow::Cow::Owned(msg.vector)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        vector: crate::msg::Vector3::into_rmw_message(std::borrow::Cow::Borrowed(&msg.vector)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      vector: crate::msg::Vector3::from_rmw_message(msg.vector),
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Wrench {
    pub force: crate::msg::Vector3,
    pub torque: crate::msg::Vector3,
}



impl Default for Wrench {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::Wrench::default())
  }
}

impl rosidl_runtime_rs::Message for Wrench {
  type RmwMsg = crate::msg::rmw::Wrench;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        force: crate::msg::Vector3::into_rmw_message(std::borrow::Cow::Owned(msg.force)).into_owned(),
        torque: crate::msg::Vector3::into_rmw_message(std::borrow::Cow::Owned(msg.torque)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        force: crate::msg::Vector3::into_rmw_message(std::borrow::Cow::Borrowed(&msg.force)).into_owned(),
        torque: crate::msg::Vector3::into_rmw_message(std::borrow::Cow::Borrowed(&msg.torque)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      force: crate::msg::Vector3::from_rmw_message(msg.force),
      torque: crate::msg::Vector3::from_rmw_message(msg.torque),
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WrenchStamped {
    pub header: std_msgs::msg::Header,
    pub wrench: crate::msg::Wrench,
}



impl Default for WrenchStamped {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::WrenchStamped::default())
  }
}

impl rosidl_runtime_rs::Message for WrenchStamped {
  type RmwMsg = crate::msg::rmw::WrenchStamped;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        wrench: crate::msg::Wrench::into_rmw_message(std::borrow::Cow::Owned(msg.wrench)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        wrench: crate::msg::Wrench::into_rmw_message(std::borrow::Cow::Borrowed(&msg.wrench)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      wrench: crate::msg::Wrench::from_rmw_message(msg.wrench),
    }
  }
}


