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
CMAKE_SOURCE_DIR = /workspace/foxy_ws/src/rmw/rmw

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /workspace/foxy_ws/build/rmw

# Include any dependencies generated for this target.
include test/CMakeFiles/test_validate_namespace.dir/depend.make

# Include the progress variables for this target.
include test/CMakeFiles/test_validate_namespace.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/test_validate_namespace.dir/flags.make

test/CMakeFiles/test_validate_namespace.dir/test_validate_namespace.cpp.o: test/CMakeFiles/test_validate_namespace.dir/flags.make
test/CMakeFiles/test_validate_namespace.dir/test_validate_namespace.cpp.o: /workspace/foxy_ws/src/rmw/rmw/test/test_validate_namespace.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspace/foxy_ws/build/rmw/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/CMakeFiles/test_validate_namespace.dir/test_validate_namespace.cpp.o"
	cd /workspace/foxy_ws/build/rmw/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_validate_namespace.dir/test_validate_namespace.cpp.o -c /workspace/foxy_ws/src/rmw/rmw/test/test_validate_namespace.cpp

test/CMakeFiles/test_validate_namespace.dir/test_validate_namespace.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_validate_namespace.dir/test_validate_namespace.cpp.i"
	cd /workspace/foxy_ws/build/rmw/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspace/foxy_ws/src/rmw/rmw/test/test_validate_namespace.cpp > CMakeFiles/test_validate_namespace.dir/test_validate_namespace.cpp.i

test/CMakeFiles/test_validate_namespace.dir/test_validate_namespace.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_validate_namespace.dir/test_validate_namespace.cpp.s"
	cd /workspace/foxy_ws/build/rmw/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspace/foxy_ws/src/rmw/rmw/test/test_validate_namespace.cpp -o CMakeFiles/test_validate_namespace.dir/test_validate_namespace.cpp.s

# Object files for target test_validate_namespace
test_validate_namespace_OBJECTS = \
"CMakeFiles/test_validate_namespace.dir/test_validate_namespace.cpp.o"

# External object files for target test_validate_namespace
test_validate_namespace_EXTERNAL_OBJECTS =

test/test_validate_namespace: test/CMakeFiles/test_validate_namespace.dir/test_validate_namespace.cpp.o
test/test_validate_namespace: test/CMakeFiles/test_validate_namespace.dir/build.make
test/test_validate_namespace: gmock/libgmock_main.a
test/test_validate_namespace: gmock/libgmock.a
test/test_validate_namespace: librmw.so
test/test_validate_namespace: /workspace/foxy_ws/install/lib/librosidl_runtime_c.so
test/test_validate_namespace: /workspace/foxy_ws/install/lib/librcutils.so
test/test_validate_namespace: test/CMakeFiles/test_validate_namespace.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/workspace/foxy_ws/build/rmw/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test_validate_namespace"
	cd /workspace/foxy_ws/build/rmw/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_validate_namespace.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/CMakeFiles/test_validate_namespace.dir/build: test/test_validate_namespace

.PHONY : test/CMakeFiles/test_validate_namespace.dir/build

test/CMakeFiles/test_validate_namespace.dir/clean:
	cd /workspace/foxy_ws/build/rmw/test && $(CMAKE_COMMAND) -P CMakeFiles/test_validate_namespace.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/test_validate_namespace.dir/clean

test/CMakeFiles/test_validate_namespace.dir/depend:
	cd /workspace/foxy_ws/build/rmw && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /workspace/foxy_ws/src/rmw/rmw /workspace/foxy_ws/src/rmw/rmw/test /workspace/foxy_ws/build/rmw /workspace/foxy_ws/build/rmw/test /workspace/foxy_ws/build/rmw/test/CMakeFiles/test_validate_namespace.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/test_validate_namespace.dir/depend

