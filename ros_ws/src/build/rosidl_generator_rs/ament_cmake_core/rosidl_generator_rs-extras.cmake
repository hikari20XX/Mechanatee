# generated from rosidl_generator_rs/rosidl_generator_rs-extras.cmake
find_package(rosidl_typesupport_c REQUIRED)
include("${CMAKE_CURRENT_LIST_DIR}/register_rs.cmake")
rosidl_generator_rs_extras(
  "${rosidl_generator_rs_DIR}/../../../lib/rosidl_generator_rs/rosidl_generator_rs"
  "${rosidl_generator_rs_DIR}/../../../local/lib/python3.10/dist-packages/rosidl_generator_rs/__init__.py"
  "${rosidl_generator_rs_DIR}/../resource"
)
