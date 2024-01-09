pub mod rmw {
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};

#[link(name = "statistics_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__statistics_msgs__msg__MetricsMessage() -> *const std::os::raw::c_void;
}

#[link(name = "statistics_msgs__rosidl_generator_c")]
extern "C" {
    fn statistics_msgs__msg__MetricsMessage__init(msg: *mut MetricsMessage) -> bool;
    fn statistics_msgs__msg__MetricsMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MetricsMessage>, size: usize) -> bool;
    fn statistics_msgs__msg__MetricsMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MetricsMessage>);
    fn statistics_msgs__msg__MetricsMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MetricsMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<MetricsMessage>) -> bool;
}

// Corresponds to statistics_msgs__msg__MetricsMessage
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MetricsMessage {
    pub measurement_source_name: rosidl_runtime_rs::String,
    pub metrics_source: rosidl_runtime_rs::String,
    pub unit: rosidl_runtime_rs::String,
    pub window_start: builtin_interfaces::msg::rmw::Time,
    pub window_stop: builtin_interfaces::msg::rmw::Time,
    pub statistics: rosidl_runtime_rs::Sequence<crate::msg::rmw::StatisticDataPoint>,
}



impl Default for MetricsMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !statistics_msgs__msg__MetricsMessage__init(&mut msg as *mut _) {
        panic!("Call to statistics_msgs__msg__MetricsMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MetricsMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { statistics_msgs__msg__MetricsMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { statistics_msgs__msg__MetricsMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { statistics_msgs__msg__MetricsMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MetricsMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MetricsMessage where Self: Sized {
  const TYPE_NAME: &'static str = "statistics_msgs/msg/MetricsMessage";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__statistics_msgs__msg__MetricsMessage() }
  }
}


#[link(name = "statistics_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__statistics_msgs__msg__StatisticDataPoint() -> *const std::os::raw::c_void;
}

#[link(name = "statistics_msgs__rosidl_generator_c")]
extern "C" {
    fn statistics_msgs__msg__StatisticDataPoint__init(msg: *mut StatisticDataPoint) -> bool;
    fn statistics_msgs__msg__StatisticDataPoint__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<StatisticDataPoint>, size: usize) -> bool;
    fn statistics_msgs__msg__StatisticDataPoint__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<StatisticDataPoint>);
    fn statistics_msgs__msg__StatisticDataPoint__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<StatisticDataPoint>, out_seq: *mut rosidl_runtime_rs::Sequence<StatisticDataPoint>) -> bool;
}

// Corresponds to statistics_msgs__msg__StatisticDataPoint
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StatisticDataPoint {
    pub data_type: u8,
    pub data: f64,
}



impl Default for StatisticDataPoint {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !statistics_msgs__msg__StatisticDataPoint__init(&mut msg as *mut _) {
        panic!("Call to statistics_msgs__msg__StatisticDataPoint__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for StatisticDataPoint {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { statistics_msgs__msg__StatisticDataPoint__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { statistics_msgs__msg__StatisticDataPoint__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { statistics_msgs__msg__StatisticDataPoint__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for StatisticDataPoint {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for StatisticDataPoint where Self: Sized {
  const TYPE_NAME: &'static str = "statistics_msgs/msg/StatisticDataPoint";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__statistics_msgs__msg__StatisticDataPoint() }
  }
}


#[link(name = "statistics_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__statistics_msgs__msg__StatisticDataType() -> *const std::os::raw::c_void;
}

#[link(name = "statistics_msgs__rosidl_generator_c")]
extern "C" {
    fn statistics_msgs__msg__StatisticDataType__init(msg: *mut StatisticDataType) -> bool;
    fn statistics_msgs__msg__StatisticDataType__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<StatisticDataType>, size: usize) -> bool;
    fn statistics_msgs__msg__StatisticDataType__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<StatisticDataType>);
    fn statistics_msgs__msg__StatisticDataType__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<StatisticDataType>, out_seq: *mut rosidl_runtime_rs::Sequence<StatisticDataType>) -> bool;
}

// Corresponds to statistics_msgs__msg__StatisticDataType
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StatisticDataType {
    pub structure_needs_at_least_one_member: u8,
}

impl StatisticDataType {
    /// Constant for uninitialized
    pub const STATISTICS_DATA_TYPE_UNINITIALIZED: u8 = 0;
    /// Allowed values
    pub const STATISTICS_DATA_TYPE_AVERAGE: u8 = 1;
    pub const STATISTICS_DATA_TYPE_MINIMUM: u8 = 2;
    pub const STATISTICS_DATA_TYPE_MAXIMUM: u8 = 3;
    pub const STATISTICS_DATA_TYPE_STDDEV: u8 = 4;
    pub const STATISTICS_DATA_TYPE_SAMPLE_COUNT: u8 = 5;
}


impl Default for StatisticDataType {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !statistics_msgs__msg__StatisticDataType__init(&mut msg as *mut _) {
        panic!("Call to statistics_msgs__msg__StatisticDataType__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for StatisticDataType {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { statistics_msgs__msg__StatisticDataType__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { statistics_msgs__msg__StatisticDataType__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { statistics_msgs__msg__StatisticDataType__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for StatisticDataType {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for StatisticDataType where Self: Sized {
  const TYPE_NAME: &'static str = "statistics_msgs/msg/StatisticDataType";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__statistics_msgs__msg__StatisticDataType() }
  }
}


}  // mod rmw


#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MetricsMessage {
    pub measurement_source_name: std::string::String,
    pub metrics_source: std::string::String,
    pub unit: std::string::String,
    pub window_start: builtin_interfaces::msg::Time,
    pub window_stop: builtin_interfaces::msg::Time,
    pub statistics: Vec<crate::msg::StatisticDataPoint>,
}



impl Default for MetricsMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::MetricsMessage::default())
  }
}

impl rosidl_runtime_rs::Message for MetricsMessage {
  type RmwMsg = crate::msg::rmw::MetricsMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        measurement_source_name: msg.measurement_source_name.as_str().into(),
        metrics_source: msg.metrics_source.as_str().into(),
        unit: msg.unit.as_str().into(),
        window_start: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.window_start)).into_owned(),
        window_stop: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.window_stop)).into_owned(),
        statistics: msg.statistics
          .into_iter()
          .map(|elem| crate::msg::StatisticDataPoint::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        measurement_source_name: msg.measurement_source_name.as_str().into(),
        metrics_source: msg.metrics_source.as_str().into(),
        unit: msg.unit.as_str().into(),
        window_start: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.window_start)).into_owned(),
        window_stop: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.window_stop)).into_owned(),
        statistics: msg.statistics
          .iter()
          .map(|elem| crate::msg::StatisticDataPoint::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      measurement_source_name: msg.measurement_source_name.to_string(),
      metrics_source: msg.metrics_source.to_string(),
      unit: msg.unit.to_string(),
      window_start: builtin_interfaces::msg::Time::from_rmw_message(msg.window_start),
      window_stop: builtin_interfaces::msg::Time::from_rmw_message(msg.window_stop),
      statistics: msg.statistics
          .into_iter()
          .map(crate::msg::StatisticDataPoint::from_rmw_message)
          .collect(),
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StatisticDataPoint {
    pub data_type: u8,
    pub data: f64,
}



impl Default for StatisticDataPoint {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::StatisticDataPoint::default())
  }
}

impl rosidl_runtime_rs::Message for StatisticDataPoint {
  type RmwMsg = crate::msg::rmw::StatisticDataPoint;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data_type: msg.data_type,
        data: msg.data,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      data_type: msg.data_type,
      data: msg.data,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      data_type: msg.data_type,
      data: msg.data,
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StatisticDataType {
    pub structure_needs_at_least_one_member: u8,
}

impl StatisticDataType {
    /// Constant for uninitialized
    pub const STATISTICS_DATA_TYPE_UNINITIALIZED: u8 = 0;
    /// Allowed values
    pub const STATISTICS_DATA_TYPE_AVERAGE: u8 = 1;
    pub const STATISTICS_DATA_TYPE_MINIMUM: u8 = 2;
    pub const STATISTICS_DATA_TYPE_MAXIMUM: u8 = 3;
    pub const STATISTICS_DATA_TYPE_STDDEV: u8 = 4;
    pub const STATISTICS_DATA_TYPE_SAMPLE_COUNT: u8 = 5;
}


impl Default for StatisticDataType {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::msg::rmw::StatisticDataType::default())
  }
}

impl rosidl_runtime_rs::Message for StatisticDataType {
  type RmwMsg = crate::msg::rmw::StatisticDataType;

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


