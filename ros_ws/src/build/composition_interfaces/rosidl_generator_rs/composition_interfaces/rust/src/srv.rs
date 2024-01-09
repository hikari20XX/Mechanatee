

#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LoadNode_Request {
    pub package_name: std::string::String,
    pub plugin_name: std::string::String,
    pub node_name: std::string::String,
    pub node_namespace: std::string::String,
    pub log_level: u8,
    pub remap_rules: Vec<std::string::String>,
    pub parameters: Vec<rcl_interfaces::msg::Parameter>,
    pub extra_arguments: Vec<rcl_interfaces::msg::Parameter>,
}



impl Default for LoadNode_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::srv::rmw::LoadNode_Request::default())
  }
}

impl rosidl_runtime_rs::Message for LoadNode_Request {
  type RmwMsg = crate::srv::rmw::LoadNode_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        package_name: msg.package_name.as_str().into(),
        plugin_name: msg.plugin_name.as_str().into(),
        node_name: msg.node_name.as_str().into(),
        node_namespace: msg.node_namespace.as_str().into(),
        log_level: msg.log_level,
        remap_rules: msg.remap_rules
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        parameters: msg.parameters
          .into_iter()
          .map(|elem| rcl_interfaces::msg::Parameter::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        extra_arguments: msg.extra_arguments
          .into_iter()
          .map(|elem| rcl_interfaces::msg::Parameter::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        package_name: msg.package_name.as_str().into(),
        plugin_name: msg.plugin_name.as_str().into(),
        node_name: msg.node_name.as_str().into(),
        node_namespace: msg.node_namespace.as_str().into(),
      log_level: msg.log_level,
        remap_rules: msg.remap_rules
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        parameters: msg.parameters
          .iter()
          .map(|elem| rcl_interfaces::msg::Parameter::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        extra_arguments: msg.extra_arguments
          .iter()
          .map(|elem| rcl_interfaces::msg::Parameter::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      package_name: msg.package_name.to_string(),
      plugin_name: msg.plugin_name.to_string(),
      node_name: msg.node_name.to_string(),
      node_namespace: msg.node_namespace.to_string(),
      log_level: msg.log_level,
      remap_rules: msg.remap_rules
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      parameters: msg.parameters
          .into_iter()
          .map(rcl_interfaces::msg::Parameter::from_rmw_message)
          .collect(),
      extra_arguments: msg.extra_arguments
          .into_iter()
          .map(rcl_interfaces::msg::Parameter::from_rmw_message)
          .collect(),
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LoadNode_Response {
    pub success: bool,
    pub error_message: std::string::String,
    pub full_node_name: std::string::String,
    pub unique_id: u64,
}



impl Default for LoadNode_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::srv::rmw::LoadNode_Response::default())
  }
}

impl rosidl_runtime_rs::Message for LoadNode_Response {
  type RmwMsg = crate::srv::rmw::LoadNode_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        error_message: msg.error_message.as_str().into(),
        full_node_name: msg.full_node_name.as_str().into(),
        unique_id: msg.unique_id,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        error_message: msg.error_message.as_str().into(),
        full_node_name: msg.full_node_name.as_str().into(),
      unique_id: msg.unique_id,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      error_message: msg.error_message.to_string(),
      full_node_name: msg.full_node_name.to_string(),
      unique_id: msg.unique_id,
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ListNodes_Request {
    pub structure_needs_at_least_one_member: u8,
}



impl Default for ListNodes_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::srv::rmw::ListNodes_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ListNodes_Request {
  type RmwMsg = crate::srv::rmw::ListNodes_Request;

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
pub struct ListNodes_Response {
    pub full_node_names: Vec<std::string::String>,
    pub unique_ids: Vec<u64>,
}



impl Default for ListNodes_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::srv::rmw::ListNodes_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ListNodes_Response {
  type RmwMsg = crate::srv::rmw::ListNodes_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        full_node_names: msg.full_node_names
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        unique_ids: msg.unique_ids.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        full_node_names: msg.full_node_names
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        unique_ids: msg.unique_ids.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      full_node_names: msg.full_node_names
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      unique_ids: msg.unique_ids
          .into_iter()
          .collect(),
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UnloadNode_Request {
    pub unique_id: u64,
}



impl Default for UnloadNode_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::srv::rmw::UnloadNode_Request::default())
  }
}

impl rosidl_runtime_rs::Message for UnloadNode_Request {
  type RmwMsg = crate::srv::rmw::UnloadNode_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        unique_id: msg.unique_id,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      unique_id: msg.unique_id,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      unique_id: msg.unique_id,
    }
  }
}


#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UnloadNode_Response {
    pub success: bool,
    pub error_message: std::string::String,
}



impl Default for UnloadNode_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(crate::srv::rmw::UnloadNode_Response::default())
  }
}

impl rosidl_runtime_rs::Message for UnloadNode_Response {
  type RmwMsg = crate::srv::rmw::UnloadNode_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        error_message: msg.error_message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        error_message: msg.error_message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      error_message: msg.error_message.to_string(),
    }
  }
}






#[link(name = "composition_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__composition_interfaces__srv__LoadNode() -> *const std::os::raw::c_void;
}

// Corresponds to composition_interfaces__srv__LoadNode
pub struct LoadNode;

impl rosidl_runtime_rs::Service for LoadNode {
  type Request = crate::srv::LoadNode_Request;
  type Response = crate::srv::LoadNode_Response;

  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_service_type_support_handle__composition_interfaces__srv__LoadNode() }
  }
}




#[link(name = "composition_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__composition_interfaces__srv__ListNodes() -> *const std::os::raw::c_void;
}

// Corresponds to composition_interfaces__srv__ListNodes
pub struct ListNodes;

impl rosidl_runtime_rs::Service for ListNodes {
  type Request = crate::srv::ListNodes_Request;
  type Response = crate::srv::ListNodes_Response;

  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_service_type_support_handle__composition_interfaces__srv__ListNodes() }
  }
}




#[link(name = "composition_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__composition_interfaces__srv__UnloadNode() -> *const std::os::raw::c_void;
}

// Corresponds to composition_interfaces__srv__UnloadNode
pub struct UnloadNode;

impl rosidl_runtime_rs::Service for UnloadNode {
  type Request = crate::srv::UnloadNode_Request;
  type Response = crate::srv::UnloadNode_Response;

  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_service_type_support_handle__composition_interfaces__srv__UnloadNode() }
  }
}



pub mod rmw {
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};

#[link(name = "composition_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__composition_interfaces__srv__LoadNode_Request() -> *const std::os::raw::c_void;
}

#[link(name = "composition_interfaces__rosidl_generator_c")]
extern "C" {
    fn composition_interfaces__srv__LoadNode_Request__init(msg: *mut LoadNode_Request) -> bool;
    fn composition_interfaces__srv__LoadNode_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LoadNode_Request>, size: usize) -> bool;
    fn composition_interfaces__srv__LoadNode_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LoadNode_Request>);
    fn composition_interfaces__srv__LoadNode_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LoadNode_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<LoadNode_Request>) -> bool;
}

// Corresponds to composition_interfaces__srv__LoadNode_Request
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LoadNode_Request {
    pub package_name: rosidl_runtime_rs::String,
    pub plugin_name: rosidl_runtime_rs::String,
    pub node_name: rosidl_runtime_rs::String,
    pub node_namespace: rosidl_runtime_rs::String,
    pub log_level: u8,
    pub remap_rules: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,
    pub parameters: rosidl_runtime_rs::Sequence<rcl_interfaces::msg::rmw::Parameter>,
    pub extra_arguments: rosidl_runtime_rs::Sequence<rcl_interfaces::msg::rmw::Parameter>,
}



impl Default for LoadNode_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !composition_interfaces__srv__LoadNode_Request__init(&mut msg as *mut _) {
        panic!("Call to composition_interfaces__srv__LoadNode_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LoadNode_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { composition_interfaces__srv__LoadNode_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { composition_interfaces__srv__LoadNode_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { composition_interfaces__srv__LoadNode_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LoadNode_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LoadNode_Request where Self: Sized {
  const TYPE_NAME: &'static str = "composition_interfaces/srv/LoadNode_Request";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__composition_interfaces__srv__LoadNode_Request() }
  }
}


#[link(name = "composition_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__composition_interfaces__srv__LoadNode_Response() -> *const std::os::raw::c_void;
}

#[link(name = "composition_interfaces__rosidl_generator_c")]
extern "C" {
    fn composition_interfaces__srv__LoadNode_Response__init(msg: *mut LoadNode_Response) -> bool;
    fn composition_interfaces__srv__LoadNode_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LoadNode_Response>, size: usize) -> bool;
    fn composition_interfaces__srv__LoadNode_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LoadNode_Response>);
    fn composition_interfaces__srv__LoadNode_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LoadNode_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<LoadNode_Response>) -> bool;
}

// Corresponds to composition_interfaces__srv__LoadNode_Response
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LoadNode_Response {
    pub success: bool,
    pub error_message: rosidl_runtime_rs::String,
    pub full_node_name: rosidl_runtime_rs::String,
    pub unique_id: u64,
}



impl Default for LoadNode_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !composition_interfaces__srv__LoadNode_Response__init(&mut msg as *mut _) {
        panic!("Call to composition_interfaces__srv__LoadNode_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LoadNode_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { composition_interfaces__srv__LoadNode_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { composition_interfaces__srv__LoadNode_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { composition_interfaces__srv__LoadNode_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LoadNode_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LoadNode_Response where Self: Sized {
  const TYPE_NAME: &'static str = "composition_interfaces/srv/LoadNode_Response";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__composition_interfaces__srv__LoadNode_Response() }
  }
}


#[link(name = "composition_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__composition_interfaces__srv__ListNodes_Request() -> *const std::os::raw::c_void;
}

#[link(name = "composition_interfaces__rosidl_generator_c")]
extern "C" {
    fn composition_interfaces__srv__ListNodes_Request__init(msg: *mut ListNodes_Request) -> bool;
    fn composition_interfaces__srv__ListNodes_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ListNodes_Request>, size: usize) -> bool;
    fn composition_interfaces__srv__ListNodes_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ListNodes_Request>);
    fn composition_interfaces__srv__ListNodes_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ListNodes_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ListNodes_Request>) -> bool;
}

// Corresponds to composition_interfaces__srv__ListNodes_Request
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ListNodes_Request {
    pub structure_needs_at_least_one_member: u8,
}



impl Default for ListNodes_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !composition_interfaces__srv__ListNodes_Request__init(&mut msg as *mut _) {
        panic!("Call to composition_interfaces__srv__ListNodes_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ListNodes_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { composition_interfaces__srv__ListNodes_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { composition_interfaces__srv__ListNodes_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { composition_interfaces__srv__ListNodes_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ListNodes_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ListNodes_Request where Self: Sized {
  const TYPE_NAME: &'static str = "composition_interfaces/srv/ListNodes_Request";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__composition_interfaces__srv__ListNodes_Request() }
  }
}


#[link(name = "composition_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__composition_interfaces__srv__ListNodes_Response() -> *const std::os::raw::c_void;
}

#[link(name = "composition_interfaces__rosidl_generator_c")]
extern "C" {
    fn composition_interfaces__srv__ListNodes_Response__init(msg: *mut ListNodes_Response) -> bool;
    fn composition_interfaces__srv__ListNodes_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ListNodes_Response>, size: usize) -> bool;
    fn composition_interfaces__srv__ListNodes_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ListNodes_Response>);
    fn composition_interfaces__srv__ListNodes_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ListNodes_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ListNodes_Response>) -> bool;
}

// Corresponds to composition_interfaces__srv__ListNodes_Response
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ListNodes_Response {
    pub full_node_names: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,
    pub unique_ids: rosidl_runtime_rs::Sequence<u64>,
}



impl Default for ListNodes_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !composition_interfaces__srv__ListNodes_Response__init(&mut msg as *mut _) {
        panic!("Call to composition_interfaces__srv__ListNodes_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ListNodes_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { composition_interfaces__srv__ListNodes_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { composition_interfaces__srv__ListNodes_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { composition_interfaces__srv__ListNodes_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ListNodes_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ListNodes_Response where Self: Sized {
  const TYPE_NAME: &'static str = "composition_interfaces/srv/ListNodes_Response";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__composition_interfaces__srv__ListNodes_Response() }
  }
}


#[link(name = "composition_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__composition_interfaces__srv__UnloadNode_Request() -> *const std::os::raw::c_void;
}

#[link(name = "composition_interfaces__rosidl_generator_c")]
extern "C" {
    fn composition_interfaces__srv__UnloadNode_Request__init(msg: *mut UnloadNode_Request) -> bool;
    fn composition_interfaces__srv__UnloadNode_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<UnloadNode_Request>, size: usize) -> bool;
    fn composition_interfaces__srv__UnloadNode_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<UnloadNode_Request>);
    fn composition_interfaces__srv__UnloadNode_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<UnloadNode_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<UnloadNode_Request>) -> bool;
}

// Corresponds to composition_interfaces__srv__UnloadNode_Request
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UnloadNode_Request {
    pub unique_id: u64,
}



impl Default for UnloadNode_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !composition_interfaces__srv__UnloadNode_Request__init(&mut msg as *mut _) {
        panic!("Call to composition_interfaces__srv__UnloadNode_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for UnloadNode_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { composition_interfaces__srv__UnloadNode_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { composition_interfaces__srv__UnloadNode_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { composition_interfaces__srv__UnloadNode_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for UnloadNode_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for UnloadNode_Request where Self: Sized {
  const TYPE_NAME: &'static str = "composition_interfaces/srv/UnloadNode_Request";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__composition_interfaces__srv__UnloadNode_Request() }
  }
}


#[link(name = "composition_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__composition_interfaces__srv__UnloadNode_Response() -> *const std::os::raw::c_void;
}

#[link(name = "composition_interfaces__rosidl_generator_c")]
extern "C" {
    fn composition_interfaces__srv__UnloadNode_Response__init(msg: *mut UnloadNode_Response) -> bool;
    fn composition_interfaces__srv__UnloadNode_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<UnloadNode_Response>, size: usize) -> bool;
    fn composition_interfaces__srv__UnloadNode_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<UnloadNode_Response>);
    fn composition_interfaces__srv__UnloadNode_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<UnloadNode_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<UnloadNode_Response>) -> bool;
}

// Corresponds to composition_interfaces__srv__UnloadNode_Response
#[repr(C)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UnloadNode_Response {
    pub success: bool,
    pub error_message: rosidl_runtime_rs::String,
}



impl Default for UnloadNode_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !composition_interfaces__srv__UnloadNode_Response__init(&mut msg as *mut _) {
        panic!("Call to composition_interfaces__srv__UnloadNode_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for UnloadNode_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { composition_interfaces__srv__UnloadNode_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { composition_interfaces__srv__UnloadNode_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { composition_interfaces__srv__UnloadNode_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for UnloadNode_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for UnloadNode_Response where Self: Sized {
  const TYPE_NAME: &'static str = "composition_interfaces/srv/UnloadNode_Response";
  fn get_type_support() -> *const std::os::raw::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__composition_interfaces__srv__UnloadNode_Response() }
  }
}






  #[link(name = "composition_interfaces__rosidl_typesupport_c")]
  extern "C" {
      fn rosidl_typesupport_c__get_service_type_support_handle__composition_interfaces__srv__LoadNode() -> *const std::os::raw::c_void;
  }

  // Corresponds to composition_interfaces__srv__LoadNode
  pub struct LoadNode;

  impl rosidl_runtime_rs::Service for LoadNode {
    type Request = crate::srv::rmw::LoadNode_Request;
    type Response = crate::srv::rmw::LoadNode_Response;

    fn get_type_support() -> *const std::os::raw::c_void {
      // SAFETY: No preconditions for this function.
      unsafe { rosidl_typesupport_c__get_service_type_support_handle__composition_interfaces__srv__LoadNode() }
    }
  }




  #[link(name = "composition_interfaces__rosidl_typesupport_c")]
  extern "C" {
      fn rosidl_typesupport_c__get_service_type_support_handle__composition_interfaces__srv__ListNodes() -> *const std::os::raw::c_void;
  }

  // Corresponds to composition_interfaces__srv__ListNodes
  pub struct ListNodes;

  impl rosidl_runtime_rs::Service for ListNodes {
    type Request = crate::srv::rmw::ListNodes_Request;
    type Response = crate::srv::rmw::ListNodes_Response;

    fn get_type_support() -> *const std::os::raw::c_void {
      // SAFETY: No preconditions for this function.
      unsafe { rosidl_typesupport_c__get_service_type_support_handle__composition_interfaces__srv__ListNodes() }
    }
  }




  #[link(name = "composition_interfaces__rosidl_typesupport_c")]
  extern "C" {
      fn rosidl_typesupport_c__get_service_type_support_handle__composition_interfaces__srv__UnloadNode() -> *const std::os::raw::c_void;
  }

  // Corresponds to composition_interfaces__srv__UnloadNode
  pub struct UnloadNode;

  impl rosidl_runtime_rs::Service for UnloadNode {
    type Request = crate::srv::rmw::UnloadNode_Request;
    type Response = crate::srv::rmw::UnloadNode_Response;

    fn get_type_support() -> *const std::os::raw::c_void {
      // SAFETY: No preconditions for this function.
      unsafe { rosidl_typesupport_c__get_service_type_support_handle__composition_interfaces__srv__UnloadNode() }
    }
  }



}  // mod rmw
