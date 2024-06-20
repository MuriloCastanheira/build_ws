# CMake generated Testfile for 
# Source directory: /workspace/foxy_ws/src/rmw_dds_common
# Build directory: /workspace/foxy_ws/build/rmw_dds_common
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_graph_cache "/usr/bin/python3" "-u" "/workspace/foxy_ws/install/share/ament_cmake_test/cmake/run_test.py" "/workspace/foxy_ws/build/rmw_dds_common/test_results/rmw_dds_common/test_graph_cache.gtest.xml" "--package-name" "rmw_dds_common" "--output-file" "/workspace/foxy_ws/build/rmw_dds_common/ament_cmake_gmock/test_graph_cache.txt" "--command" "/workspace/foxy_ws/build/rmw_dds_common/test_graph_cache" "--gtest_output=xml:/workspace/foxy_ws/build/rmw_dds_common/test_results/rmw_dds_common/test_graph_cache.gtest.xml")
set_tests_properties(test_graph_cache PROPERTIES  LABELS "gmock" REQUIRED_FILES "/workspace/foxy_ws/build/rmw_dds_common/test_graph_cache" TIMEOUT "60" WORKING_DIRECTORY "/workspace/foxy_ws/build/rmw_dds_common" _BACKTRACE_TRIPLES "/workspace/foxy_ws/install/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/workspace/foxy_ws/install/share/ament_cmake_gmock/cmake/ament_add_gmock.cmake;106;ament_add_test;/workspace/foxy_ws/install/share/ament_cmake_gmock/cmake/ament_add_gmock.cmake;52;_ament_add_gmock;/workspace/foxy_ws/src/rmw_dds_common/CMakeLists.txt;82;ament_add_gmock;/workspace/foxy_ws/src/rmw_dds_common/CMakeLists.txt;0;")
add_test(test_gid_utils "/usr/bin/python3" "-u" "/workspace/foxy_ws/install/share/ament_cmake_test/cmake/run_test.py" "/workspace/foxy_ws/build/rmw_dds_common/test_results/rmw_dds_common/test_gid_utils.gtest.xml" "--package-name" "rmw_dds_common" "--output-file" "/workspace/foxy_ws/build/rmw_dds_common/ament_cmake_gmock/test_gid_utils.txt" "--command" "/workspace/foxy_ws/build/rmw_dds_common/test_gid_utils" "--gtest_output=xml:/workspace/foxy_ws/build/rmw_dds_common/test_results/rmw_dds_common/test_gid_utils.gtest.xml")
set_tests_properties(test_gid_utils PROPERTIES  LABELS "gmock" REQUIRED_FILES "/workspace/foxy_ws/build/rmw_dds_common/test_gid_utils" TIMEOUT "60" WORKING_DIRECTORY "/workspace/foxy_ws/build/rmw_dds_common" _BACKTRACE_TRIPLES "/workspace/foxy_ws/install/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/workspace/foxy_ws/install/share/ament_cmake_gmock/cmake/ament_add_gmock.cmake;106;ament_add_test;/workspace/foxy_ws/install/share/ament_cmake_gmock/cmake/ament_add_gmock.cmake;52;_ament_add_gmock;/workspace/foxy_ws/src/rmw_dds_common/CMakeLists.txt;88;ament_add_gmock;/workspace/foxy_ws/src/rmw_dds_common/CMakeLists.txt;0;")
add_test(benchmark_graph_cache "/usr/bin/python3" "-u" "/workspace/foxy_ws/install/share/ament_cmake_test/cmake/run_test.py" "/workspace/foxy_ws/build/rmw_dds_common/test_results/rmw_dds_common/benchmark_graph_cache.xml" "--package-name" "rmw_dds_common" "--skip-test" "--generate-result-on-success" "--output-file" "/workspace/foxy_ws/build/rmw_dds_common/ament_cmake_google_benchmark/benchmark_graph_cache.txt" "--env" "LD_PRELOAD=/workspace/foxy_ws/install/lib/libmemory_tools_interpose.so" "--command" "/usr/bin/python3" "-u" "/workspace/foxy_ws/install/share/ament_cmake_google_benchmark/cmake/run_and_convert.py" "/workspace/foxy_ws/build/rmw_dds_common/test_results/rmw_dds_common/benchmark_graph_cache.google_benchmark.json" "/workspace/foxy_ws/build/rmw_dds_common/test_results/rmw_dds_common/benchmark_graph_cache.benchmark.json" "--package-name" "rmw_dds_common" "--command" "/workspace/foxy_ws/build/rmw_dds_common/benchmark_graph_cache" "--benchmark_out_format=json" "--benchmark_out=/workspace/foxy_ws/build/rmw_dds_common/test_results/rmw_dds_common/benchmark_graph_cache.google_benchmark.json")
set_tests_properties(benchmark_graph_cache PROPERTIES  LABELS "google_benchmark;performance" REQUIRED_FILES "/workspace/foxy_ws/build/rmw_dds_common/benchmark_graph_cache" SKIP_RETURN_CODE "0" TIMEOUT "60" WORKING_DIRECTORY "/workspace/foxy_ws/build/rmw_dds_common" _BACKTRACE_TRIPLES "/workspace/foxy_ws/install/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/workspace/foxy_ws/install/share/ament_cmake_google_benchmark/cmake/ament_add_google_benchmark_test.cmake;97;ament_add_test;/workspace/foxy_ws/install/share/performance_test_fixture/cmake/add_performance_test.cmake;115;ament_add_google_benchmark_test;/workspace/foxy_ws/src/rmw_dds_common/CMakeLists.txt;93;add_performance_test;/workspace/foxy_ws/src/rmw_dds_common/CMakeLists.txt;0;")
add_test(copyright "/usr/bin/python3" "-u" "/workspace/foxy_ws/install/share/ament_cmake_test/cmake/run_test.py" "/workspace/foxy_ws/build/rmw_dds_common/test_results/rmw_dds_common/copyright.xunit.xml" "--package-name" "rmw_dds_common" "--output-file" "/workspace/foxy_ws/build/rmw_dds_common/ament_copyright/copyright.txt" "--command" "/workspace/foxy_ws/install/bin/ament_copyright" "--xunit-file" "/workspace/foxy_ws/build/rmw_dds_common/test_results/rmw_dds_common/copyright.xunit.xml")
set_tests_properties(copyright PROPERTIES  LABELS "copyright;linter" TIMEOUT "60" WORKING_DIRECTORY "/workspace/foxy_ws/src/rmw_dds_common" _BACKTRACE_TRIPLES "/workspace/foxy_ws/install/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/workspace/foxy_ws/install/share/ament_cmake_copyright/cmake/ament_copyright.cmake;41;ament_add_test;/workspace/foxy_ws/install/share/ament_cmake_copyright/cmake/ament_cmake_copyright_lint_hook.cmake;18;ament_copyright;/workspace/foxy_ws/install/share/ament_cmake_copyright/cmake/ament_cmake_copyright_lint_hook.cmake;0;;/workspace/foxy_ws/install/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/workspace/foxy_ws/install/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/workspace/foxy_ws/install/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/workspace/foxy_ws/install/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/workspace/foxy_ws/install/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/workspace/foxy_ws/src/rmw_dds_common/CMakeLists.txt;99;ament_package;/workspace/foxy_ws/src/rmw_dds_common/CMakeLists.txt;0;")
add_test(cppcheck "/usr/bin/python3" "-u" "/workspace/foxy_ws/install/share/ament_cmake_test/cmake/run_test.py" "/workspace/foxy_ws/build/rmw_dds_common/test_results/rmw_dds_common/cppcheck.xunit.xml" "--package-name" "rmw_dds_common" "--output-file" "/workspace/foxy_ws/build/rmw_dds_common/ament_cppcheck/cppcheck.txt" "--command" "/workspace/foxy_ws/install/bin/ament_cppcheck" "--xunit-file" "/workspace/foxy_ws/build/rmw_dds_common/test_results/rmw_dds_common/cppcheck.xunit.xml" "--include_dirs" "/workspace/foxy_ws/install/include" "/workspace/foxy_ws/src/rmw_dds_common/include")
set_tests_properties(cppcheck PROPERTIES  LABELS "cppcheck;linter" TIMEOUT "300" WORKING_DIRECTORY "/workspace/foxy_ws/src/rmw_dds_common" _BACKTRACE_TRIPLES "/workspace/foxy_ws/install/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/workspace/foxy_ws/install/share/ament_cmake_cppcheck/cmake/ament_cppcheck.cmake;61;ament_add_test;/workspace/foxy_ws/install/share/ament_cmake_cppcheck/cmake/ament_cmake_cppcheck_lint_hook.cmake;83;ament_cppcheck;/workspace/foxy_ws/install/share/ament_cmake_cppcheck/cmake/ament_cmake_cppcheck_lint_hook.cmake;0;;/workspace/foxy_ws/install/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/workspace/foxy_ws/install/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/workspace/foxy_ws/install/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/workspace/foxy_ws/install/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/workspace/foxy_ws/install/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/workspace/foxy_ws/src/rmw_dds_common/CMakeLists.txt;99;ament_package;/workspace/foxy_ws/src/rmw_dds_common/CMakeLists.txt;0;")
add_test(cpplint "/usr/bin/python3" "-u" "/workspace/foxy_ws/install/share/ament_cmake_test/cmake/run_test.py" "/workspace/foxy_ws/build/rmw_dds_common/test_results/rmw_dds_common/cpplint.xunit.xml" "--package-name" "rmw_dds_common" "--output-file" "/workspace/foxy_ws/build/rmw_dds_common/ament_cpplint/cpplint.txt" "--command" "/workspace/foxy_ws/install/bin/ament_cpplint" "--xunit-file" "/workspace/foxy_ws/build/rmw_dds_common/test_results/rmw_dds_common/cpplint.xunit.xml")
set_tests_properties(cpplint PROPERTIES  LABELS "cpplint;linter" TIMEOUT "120" WORKING_DIRECTORY "/workspace/foxy_ws/src/rmw_dds_common" _BACKTRACE_TRIPLES "/workspace/foxy_ws/install/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/workspace/foxy_ws/install/share/ament_cmake_cpplint/cmake/ament_cpplint.cmake;68;ament_add_test;/workspace/foxy_ws/install/share/ament_cmake_cpplint/cmake/ament_cmake_cpplint_lint_hook.cmake;35;ament_cpplint;/workspace/foxy_ws/install/share/ament_cmake_cpplint/cmake/ament_cmake_cpplint_lint_hook.cmake;0;;/workspace/foxy_ws/install/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/workspace/foxy_ws/install/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/workspace/foxy_ws/install/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/workspace/foxy_ws/install/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/workspace/foxy_ws/install/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/workspace/foxy_ws/src/rmw_dds_common/CMakeLists.txt;99;ament_package;/workspace/foxy_ws/src/rmw_dds_common/CMakeLists.txt;0;")
add_test(lint_cmake "/usr/bin/python3" "-u" "/workspace/foxy_ws/install/share/ament_cmake_test/cmake/run_test.py" "/workspace/foxy_ws/build/rmw_dds_common/test_results/rmw_dds_common/lint_cmake.xunit.xml" "--package-name" "rmw_dds_common" "--output-file" "/workspace/foxy_ws/build/rmw_dds_common/ament_lint_cmake/lint_cmake.txt" "--command" "/workspace/foxy_ws/install/bin/ament_lint_cmake" "--xunit-file" "/workspace/foxy_ws/build/rmw_dds_common/test_results/rmw_dds_common/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/workspace/foxy_ws/src/rmw_dds_common" _BACKTRACE_TRIPLES "/workspace/foxy_ws/install/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/workspace/foxy_ws/install/share/ament_cmake_lint_cmake/cmake/ament_lint_cmake.cmake;41;ament_add_test;/workspace/foxy_ws/install/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;21;ament_lint_cmake;/workspace/foxy_ws/install/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;0;;/workspace/foxy_ws/install/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/workspace/foxy_ws/install/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/workspace/foxy_ws/install/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/workspace/foxy_ws/install/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/workspace/foxy_ws/install/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/workspace/foxy_ws/src/rmw_dds_common/CMakeLists.txt;99;ament_package;/workspace/foxy_ws/src/rmw_dds_common/CMakeLists.txt;0;")
add_test(uncrustify "/usr/bin/python3" "-u" "/workspace/foxy_ws/install/share/ament_cmake_test/cmake/run_test.py" "/workspace/foxy_ws/build/rmw_dds_common/test_results/rmw_dds_common/uncrustify.xunit.xml" "--package-name" "rmw_dds_common" "--output-file" "/workspace/foxy_ws/build/rmw_dds_common/ament_uncrustify/uncrustify.txt" "--command" "/workspace/foxy_ws/install/bin/ament_uncrustify" "--xunit-file" "/workspace/foxy_ws/build/rmw_dds_common/test_results/rmw_dds_common/uncrustify.xunit.xml")
set_tests_properties(uncrustify PROPERTIES  LABELS "uncrustify;linter" TIMEOUT "60" WORKING_DIRECTORY "/workspace/foxy_ws/src/rmw_dds_common" _BACKTRACE_TRIPLES "/workspace/foxy_ws/install/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/workspace/foxy_ws/install/share/ament_cmake_uncrustify/cmake/ament_uncrustify.cmake;65;ament_add_test;/workspace/foxy_ws/install/share/ament_cmake_uncrustify/cmake/ament_cmake_uncrustify_lint_hook.cmake;34;ament_uncrustify;/workspace/foxy_ws/install/share/ament_cmake_uncrustify/cmake/ament_cmake_uncrustify_lint_hook.cmake;0;;/workspace/foxy_ws/install/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/workspace/foxy_ws/install/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/workspace/foxy_ws/install/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/workspace/foxy_ws/install/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/workspace/foxy_ws/install/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/workspace/foxy_ws/src/rmw_dds_common/CMakeLists.txt;99;ament_package;/workspace/foxy_ws/src/rmw_dds_common/CMakeLists.txt;0;")
add_test(xmllint "/usr/bin/python3" "-u" "/workspace/foxy_ws/install/share/ament_cmake_test/cmake/run_test.py" "/workspace/foxy_ws/build/rmw_dds_common/test_results/rmw_dds_common/xmllint.xunit.xml" "--package-name" "rmw_dds_common" "--output-file" "/workspace/foxy_ws/build/rmw_dds_common/ament_xmllint/xmllint.txt" "--command" "/workspace/foxy_ws/install/bin/ament_xmllint" "--xunit-file" "/workspace/foxy_ws/build/rmw_dds_common/test_results/rmw_dds_common/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  DISABLED "TRUE" LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/workspace/foxy_ws/src/rmw_dds_common" _BACKTRACE_TRIPLES "/workspace/foxy_ws/install/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/workspace/foxy_ws/install/share/ament_cmake_xmllint/cmake/ament_xmllint.cmake;50;ament_add_test;/workspace/foxy_ws/install/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;18;ament_xmllint;/workspace/foxy_ws/install/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;0;;/workspace/foxy_ws/install/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/workspace/foxy_ws/install/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/workspace/foxy_ws/install/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/workspace/foxy_ws/install/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/workspace/foxy_ws/install/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/workspace/foxy_ws/src/rmw_dds_common/CMakeLists.txt;99;ament_package;/workspace/foxy_ws/src/rmw_dds_common/CMakeLists.txt;0;")
subdirs("rmw_dds_common__py")
subdirs("gmock")
subdirs("gtest")
