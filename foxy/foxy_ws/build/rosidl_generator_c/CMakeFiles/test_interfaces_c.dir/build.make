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
CMAKE_SOURCE_DIR = /workspace/foxy_ws/src/rosidl/rosidl_generator_c

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /workspace/foxy_ws/build/rosidl_generator_c

# Include any dependencies generated for this target.
include CMakeFiles/test_interfaces_c.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/test_interfaces_c.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_interfaces_c.dir/flags.make

CMakeFiles/test_interfaces_c.dir/test/test_interfaces.c.o: CMakeFiles/test_interfaces_c.dir/flags.make
CMakeFiles/test_interfaces_c.dir/test/test_interfaces.c.o: /workspace/foxy_ws/src/rosidl/rosidl_generator_c/test/test_interfaces.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspace/foxy_ws/build/rosidl_generator_c/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/test_interfaces_c.dir/test/test_interfaces.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/test_interfaces_c.dir/test/test_interfaces.c.o   -c /workspace/foxy_ws/src/rosidl/rosidl_generator_c/test/test_interfaces.c

CMakeFiles/test_interfaces_c.dir/test/test_interfaces.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/test_interfaces_c.dir/test/test_interfaces.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /workspace/foxy_ws/src/rosidl/rosidl_generator_c/test/test_interfaces.c > CMakeFiles/test_interfaces_c.dir/test/test_interfaces.c.i

CMakeFiles/test_interfaces_c.dir/test/test_interfaces.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/test_interfaces_c.dir/test/test_interfaces.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /workspace/foxy_ws/src/rosidl/rosidl_generator_c/test/test_interfaces.c -o CMakeFiles/test_interfaces_c.dir/test/test_interfaces.c.s

# Object files for target test_interfaces_c
test_interfaces_c_OBJECTS = \
"CMakeFiles/test_interfaces_c.dir/test/test_interfaces.c.o"

# External object files for target test_interfaces_c
test_interfaces_c_EXTERNAL_OBJECTS =

test_interfaces_c: CMakeFiles/test_interfaces_c.dir/test/test_interfaces.c.o
test_interfaces_c: CMakeFiles/test_interfaces_c.dir/build.make
test_interfaces_c: librosidl_generator_c_interfaces__rosidl_generator_c.so
test_interfaces_c: /workspace/foxy_ws/install/lib/librcutils.so
test_interfaces_c: /workspace/foxy_ws/install/lib/librcutils.so
test_interfaces_c: /workspace/foxy_ws/install/lib/librosidl_runtime_c.so
test_interfaces_c: /workspace/foxy_ws/install/lib/librosidl_runtime_c.so
test_interfaces_c: /workspace/foxy_ws/install/lib/librcutils.so
test_interfaces_c: CMakeFiles/test_interfaces_c.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/workspace/foxy_ws/build/rosidl_generator_c/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable test_interfaces_c"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_interfaces_c.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test_interfaces_c.dir/build: test_interfaces_c

.PHONY : CMakeFiles/test_interfaces_c.dir/build

CMakeFiles/test_interfaces_c.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_interfaces_c.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_interfaces_c.dir/clean

CMakeFiles/test_interfaces_c.dir/depend:
	cd /workspace/foxy_ws/build/rosidl_generator_c && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /workspace/foxy_ws/src/rosidl/rosidl_generator_c /workspace/foxy_ws/src/rosidl/rosidl_generator_c /workspace/foxy_ws/build/rosidl_generator_c /workspace/foxy_ws/build/rosidl_generator_c /workspace/foxy_ws/build/rosidl_generator_c/CMakeFiles/test_interfaces_c.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test_interfaces_c.dir/depend

