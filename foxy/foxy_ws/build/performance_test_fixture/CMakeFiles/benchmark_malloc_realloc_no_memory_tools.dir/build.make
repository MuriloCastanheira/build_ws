# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /workspace/foxy_ws/src/performance_test_fixture

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /workspace/foxy_ws/build/performance_test_fixture

# Include any dependencies generated for this target.
include CMakeFiles/benchmark_malloc_realloc_no_memory_tools.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/benchmark_malloc_realloc_no_memory_tools.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/benchmark_malloc_realloc_no_memory_tools.dir/flags.make

CMakeFiles/benchmark_malloc_realloc_no_memory_tools.dir/test/benchmark/benchmark_malloc_realloc_no_memory_tools.cpp.o: CMakeFiles/benchmark_malloc_realloc_no_memory_tools.dir/flags.make
CMakeFiles/benchmark_malloc_realloc_no_memory_tools.dir/test/benchmark/benchmark_malloc_realloc_no_memory_tools.cpp.o: /workspace/foxy_ws/src/performance_test_fixture/test/benchmark/benchmark_malloc_realloc_no_memory_tools.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspace/foxy_ws/build/performance_test_fixture/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/benchmark_malloc_realloc_no_memory_tools.dir/test/benchmark/benchmark_malloc_realloc_no_memory_tools.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/benchmark_malloc_realloc_no_memory_tools.dir/test/benchmark/benchmark_malloc_realloc_no_memory_tools.cpp.o -c /workspace/foxy_ws/src/performance_test_fixture/test/benchmark/benchmark_malloc_realloc_no_memory_tools.cpp

CMakeFiles/benchmark_malloc_realloc_no_memory_tools.dir/test/benchmark/benchmark_malloc_realloc_no_memory_tools.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/benchmark_malloc_realloc_no_memory_tools.dir/test/benchmark/benchmark_malloc_realloc_no_memory_tools.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspace/foxy_ws/src/performance_test_fixture/test/benchmark/benchmark_malloc_realloc_no_memory_tools.cpp > CMakeFiles/benchmark_malloc_realloc_no_memory_tools.dir/test/benchmark/benchmark_malloc_realloc_no_memory_tools.cpp.i

CMakeFiles/benchmark_malloc_realloc_no_memory_tools.dir/test/benchmark/benchmark_malloc_realloc_no_memory_tools.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/benchmark_malloc_realloc_no_memory_tools.dir/test/benchmark/benchmark_malloc_realloc_no_memory_tools.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspace/foxy_ws/src/performance_test_fixture/test/benchmark/benchmark_malloc_realloc_no_memory_tools.cpp -o CMakeFiles/benchmark_malloc_realloc_no_memory_tools.dir/test/benchmark/benchmark_malloc_realloc_no_memory_tools.cpp.s

# Object files for target benchmark_malloc_realloc_no_memory_tools
benchmark_malloc_realloc_no_memory_tools_OBJECTS = \
"CMakeFiles/benchmark_malloc_realloc_no_memory_tools.dir/test/benchmark/benchmark_malloc_realloc_no_memory_tools.cpp.o"

# External object files for target benchmark_malloc_realloc_no_memory_tools
benchmark_malloc_realloc_no_memory_tools_EXTERNAL_OBJECTS =

benchmark_malloc_realloc_no_memory_tools: CMakeFiles/benchmark_malloc_realloc_no_memory_tools.dir/test/benchmark/benchmark_malloc_realloc_no_memory_tools.cpp.o
benchmark_malloc_realloc_no_memory_tools: CMakeFiles/benchmark_malloc_realloc_no_memory_tools.dir/build.make
benchmark_malloc_realloc_no_memory_tools: /workspace/foxy_ws/install/lib/libbenchmark_main.so.1.5.1
benchmark_malloc_realloc_no_memory_tools: /workspace/foxy_ws/install/lib/libbenchmark.so.1.5.1
benchmark_malloc_realloc_no_memory_tools: /usr/lib/x86_64-linux-gnu/librt.so
benchmark_malloc_realloc_no_memory_tools: CMakeFiles/benchmark_malloc_realloc_no_memory_tools.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/workspace/foxy_ws/build/performance_test_fixture/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable benchmark_malloc_realloc_no_memory_tools"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/benchmark_malloc_realloc_no_memory_tools.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/benchmark_malloc_realloc_no_memory_tools.dir/build: benchmark_malloc_realloc_no_memory_tools

.PHONY : CMakeFiles/benchmark_malloc_realloc_no_memory_tools.dir/build

CMakeFiles/benchmark_malloc_realloc_no_memory_tools.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/benchmark_malloc_realloc_no_memory_tools.dir/cmake_clean.cmake
.PHONY : CMakeFiles/benchmark_malloc_realloc_no_memory_tools.dir/clean

CMakeFiles/benchmark_malloc_realloc_no_memory_tools.dir/depend:
	cd /workspace/foxy_ws/build/performance_test_fixture && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /workspace/foxy_ws/src/performance_test_fixture /workspace/foxy_ws/src/performance_test_fixture /workspace/foxy_ws/build/performance_test_fixture /workspace/foxy_ws/build/performance_test_fixture /workspace/foxy_ws/build/performance_test_fixture/CMakeFiles/benchmark_malloc_realloc_no_memory_tools.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/benchmark_malloc_realloc_no_memory_tools.dir/depend

