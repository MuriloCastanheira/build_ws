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
CMAKE_SOURCE_DIR = /workspace/foxy_ws/src/rosidl/rosidl_generator_cpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /workspace/foxy_ws/build/rosidl_generator_cpp

# Include any dependencies generated for this target.
include CMakeFiles/test_traits.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/test_traits.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_traits.dir/flags.make

CMakeFiles/test_traits.dir/test/test_traits.cpp.o: CMakeFiles/test_traits.dir/flags.make
CMakeFiles/test_traits.dir/test/test_traits.cpp.o: /workspace/foxy_ws/src/rosidl/rosidl_generator_cpp/test/test_traits.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspace/foxy_ws/build/rosidl_generator_cpp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/test_traits.dir/test/test_traits.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_traits.dir/test/test_traits.cpp.o -c /workspace/foxy_ws/src/rosidl/rosidl_generator_cpp/test/test_traits.cpp

CMakeFiles/test_traits.dir/test/test_traits.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_traits.dir/test/test_traits.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspace/foxy_ws/src/rosidl/rosidl_generator_cpp/test/test_traits.cpp > CMakeFiles/test_traits.dir/test/test_traits.cpp.i

CMakeFiles/test_traits.dir/test/test_traits.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_traits.dir/test/test_traits.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspace/foxy_ws/src/rosidl/rosidl_generator_cpp/test/test_traits.cpp -o CMakeFiles/test_traits.dir/test/test_traits.cpp.s

# Object files for target test_traits
test_traits_OBJECTS = \
"CMakeFiles/test_traits.dir/test/test_traits.cpp.o"

# External object files for target test_traits
test_traits_EXTERNAL_OBJECTS =

test_traits: CMakeFiles/test_traits.dir/test/test_traits.cpp.o
test_traits: CMakeFiles/test_traits.dir/build.make
test_traits: gtest/libgtest_main.a
test_traits: gtest/libgtest.a
test_traits: /workspace/foxy_ws/install/lib/librosidl_runtime_c.so
test_traits: /workspace/foxy_ws/install/lib/librcutils.so
test_traits: CMakeFiles/test_traits.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/workspace/foxy_ws/build/rosidl_generator_cpp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test_traits"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_traits.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test_traits.dir/build: test_traits

.PHONY : CMakeFiles/test_traits.dir/build

CMakeFiles/test_traits.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_traits.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_traits.dir/clean

CMakeFiles/test_traits.dir/depend:
	cd /workspace/foxy_ws/build/rosidl_generator_cpp && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /workspace/foxy_ws/src/rosidl/rosidl_generator_cpp /workspace/foxy_ws/src/rosidl/rosidl_generator_cpp /workspace/foxy_ws/build/rosidl_generator_cpp /workspace/foxy_ws/build/rosidl_generator_cpp /workspace/foxy_ws/build/rosidl_generator_cpp/CMakeFiles/test_traits.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test_traits.dir/depend

