use std::ffi::c_void;
use rosidl_runtime_rs::{Message, RmwMessage};
use serde::{Serialize, Deserialize};
use std::borrow::Cow;

#[derive(Debug, Clone, Default, Serialize, Deserialize)]
pub struct ImuData {
    pub accel_x: f32,
    pub accel_y: f32,
    pub accel_z: f32,
    pub gyro_x: f32,
    pub gyro_y: f32,
    pub gyro_z: f32,
}

extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__ImuData() -> *const c_void;
}

impl RmwMessage for ImuData {
    const TYPE_NAME: &'static str = "ros2navigator_bridge/msg/ImuData";

    fn get_type_support() -> *const c_void {
        unsafe { rosidl_typesupport_c__get_message_type_support_handle__ImuData() }
    }
}

impl Message for ImuData {
    type RmwMsg = Self;

    fn into_rmw_message(msg_cow: Cow<'_, Self>) -> Cow<'_, Self::RmwMsg> {
        msg_cow
    }

    fn from_rmw_message(msg: Self::RmwMsg) -> Self {
        msg
    }
}
