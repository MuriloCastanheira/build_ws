set(_AMENT_PACKAGE_NAME "rclpy")
set(rclpy_VERSION "1.0.13")
set(rclpy_MAINTAINER "William Woodall <william@osrfoundation.org>")
set(rclpy_BUILD_DEPENDS "rcutils" "rmw_implementation_cmake" "rmw_implementation" "rcl" "rcl_action" "rcl_yaml_param_parser" "unique_identifier_msgs")
set(rclpy_BUILDTOOL_DEPENDS "ament_cmake" "python_cmake_module")
set(rclpy_BUILD_EXPORT_DEPENDS "rmw_implementation" "rcl" "rcl_action" "rcl_yaml_param_parser" "unique_identifier_msgs")
set(rclpy_BUILDTOOL_EXPORT_DEPENDS )
set(rclpy_EXEC_DEPENDS "ament_index_python" "builtin_interfaces" "rcl_interfaces" "rosgraph_msgs" "rpyutils" "rmw_implementation" "rcl" "rcl_action" "rcl_yaml_param_parser" "unique_identifier_msgs")
set(rclpy_TEST_DEPENDS "ament_cmake_gtest" "ament_cmake_pytest" "ament_lint_auto" "ament_lint_common" "python3-pytest" "rosidl_generator_py" "test_msgs")
set(rclpy_GROUP_DEPENDS )
set(rclpy_MEMBER_OF_GROUPS )
set(rclpy_DEPRECATED "")
set(rclpy_EXPORT_TAGS)
list(APPEND rclpy_EXPORT_TAGS "<build_type>ament_cmake</build_type>")
