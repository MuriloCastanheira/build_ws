# CMake generated Testfile for 
# Source directory: /workspace/foxy_ws/src/ament_lint/ament_cmake_lint_cmake
# Build directory: /workspace/foxy_ws/build/ament_cmake_lint_cmake
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(lint_cmake "/usr/bin/python3" "-u" "/workspace/foxy_ws/install/share/ament_cmake_test/cmake/run_test.py" "/workspace/foxy_ws/build/ament_cmake_lint_cmake/test_results/ament_cmake_lint_cmake/lint_cmake.xunit.xml" "--package-name" "ament_cmake_lint_cmake" "--output-file" "/workspace/foxy_ws/build/ament_cmake_lint_cmake/ament_lint_cmake/lint_cmake.txt" "--command" "/workspace/foxy_ws/install/bin/ament_lint_cmake" "--xunit-file" "/workspace/foxy_ws/build/ament_cmake_lint_cmake/test_results/ament_cmake_lint_cmake/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/workspace/foxy_ws/src/ament_lint/ament_cmake_lint_cmake" _BACKTRACE_TRIPLES "/workspace/foxy_ws/install/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/workspace/foxy_ws/src/ament_lint/ament_cmake_lint_cmake/cmake/ament_lint_cmake.cmake;41;ament_add_test;/workspace/foxy_ws/src/ament_lint/ament_cmake_lint_cmake/CMakeLists.txt;22;ament_lint_cmake;/workspace/foxy_ws/src/ament_lint/ament_cmake_lint_cmake/CMakeLists.txt;0;")
