use std::ffi::c_void;
use rosidl_runtime_rs::{Message, RmwMessage};
use serde::{Serialize, Deserialize};
use std::borrow::Cow;

#[derive(Debug, Clone, Default, Serialize, Deserialize)]
pub struct PressureData {
    pub kpa: f32,
}

extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__PressureData() -> *const c_void;
}

impl RmwMessage for PressureData {
    const TYPE_NAME: &'static str = "ros2navigator_bridge/msg/PressureData";

    fn get_type_support() -> *const c_void {
        unsafe { rosidl_typesupport_c__get_message_type_support_handle__PressureData() }
    }
}

impl Message for PressureData {
    type RmwMsg = Self;

    fn into_rmw_message(msg_cow: Cow<'_, Self>) -> Cow<'_, Self::RmwMsg> {
        msg_cow
    }

    fn from_rmw_message(msg: Self::RmwMsg) -> Self {
        msg
    }
}
