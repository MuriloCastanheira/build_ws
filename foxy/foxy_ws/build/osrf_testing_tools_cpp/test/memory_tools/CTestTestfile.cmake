# CMake generated Testfile for 
# Source directory: /workspace/foxy_ws/src/osrf_testing_tools_cpp/test/memory_tools
# Build directory: /workspace/foxy_ws/build/osrf_testing_tools_cpp/test/memory_tools
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_memory_tools "/workspace/foxy_ws/build/osrf_testing_tools_cpp/src/test_runner/test_runner" "--env" "LD_PRELOAD=/workspace/foxy_ws/build/osrf_testing_tools_cpp/src/memory_tools/libmemory_tools_interpose.so" "--" "/workspace/foxy_ws/build/osrf_testing_tools_cpp/test/memory_tools/test_memory_tools")
set_tests_properties(test_memory_tools PROPERTIES  _BACKTRACE_TRIPLES "/workspace/foxy_ws/src/osrf_testing_tools_cpp/test/memory_tools/CMakeLists.txt;11;add_test;/workspace/foxy_ws/src/osrf_testing_tools_cpp/test/memory_tools/CMakeLists.txt;0;")
