use std::env;
use std::path::PathBuf;

fn main() {
    // Link to the ROS 2 C library for message type support
    println!("cargo:rustc-link-lib=dylib=rosidl_typesupport_c");

    // Tell Cargo where to find the ROS 2 libraries
    let ros_lib_path = "/opt/ros/humble/lib";
    println!("cargo:rustc-link-search=native={}", ros_lib_path);

    // Add any additional dependencies if needed
    println!("cargo:rustc-link-lib=dylib=rcl");
    println!("cargo:rustc-link-lib=dylib=rcl_interfaces");
}
