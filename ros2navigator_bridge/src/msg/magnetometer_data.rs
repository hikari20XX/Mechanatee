use std::ffi::c_void;
use rosidl_runtime_rs::{Message, RmwMessage};
use serde::{Serialize, Deserialize};
use std::borrow::Cow;

#[derive(Debug, Clone, Default, Serialize, Deserialize)]
pub struct MagnetometerData {
    pub x: f32,
    pub y: f32,
    pub z: f32,
}

extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__MagnetometerData() -> *const c_void;
}

impl RmwMessage for MagnetometerData {
    const TYPE_NAME: &'static str = "ros2navigator_bridge/msg/MagnetometerData";

    fn get_type_support() -> *const c_void {
        unsafe { rosidl_typesupport_c__get_message_type_support_handle__MagnetometerData() }
    }
}

impl Message for MagnetometerData {
    type RmwMsg = Self;

    fn into_rmw_message(msg_cow: Cow<'_, Self>) -> Cow<'_, Self::RmwMsg> {
        msg_cow
    }

    fn from_rmw_message(msg: Self::RmwMsg) -> Self {
        msg
    }
}
