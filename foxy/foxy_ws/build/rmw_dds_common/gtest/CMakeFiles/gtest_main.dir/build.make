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
CMAKE_SOURCE_DIR = /workspace/foxy_ws/src/rmw_dds_common

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /workspace/foxy_ws/build/rmw_dds_common

# Include any dependencies generated for this target.
include gtest/CMakeFiles/gtest_main.dir/depend.make

# Include the progress variables for this target.
include gtest/CMakeFiles/gtest_main.dir/progress.make

# Include the compile flags for this target's objects.
include gtest/CMakeFiles/gtest_main.dir/flags.make

gtest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o: gtest/CMakeFiles/gtest_main.dir/flags.make
gtest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o: /workspace/foxy_ws/install/src/gtest_vendor/src/gtest_main.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspace/foxy_ws/build/rmw_dds_common/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object gtest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o"
	cd /workspace/foxy_ws/build/rmw_dds_common/gtest && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gtest_main.dir/src/gtest_main.cc.o -c /workspace/foxy_ws/install/src/gtest_vendor/src/gtest_main.cc

gtest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gtest_main.dir/src/gtest_main.cc.i"
	cd /workspace/foxy_ws/build/rmw_dds_common/gtest && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspace/foxy_ws/install/src/gtest_vendor/src/gtest_main.cc > CMakeFiles/gtest_main.dir/src/gtest_main.cc.i

gtest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gtest_main.dir/src/gtest_main.cc.s"
	cd /workspace/foxy_ws/build/rmw_dds_common/gtest && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspace/foxy_ws/install/src/gtest_vendor/src/gtest_main.cc -o CMakeFiles/gtest_main.dir/src/gtest_main.cc.s

# Object files for target gtest_main
gtest_main_OBJECTS = \
"CMakeFiles/gtest_main.dir/src/gtest_main.cc.o"

# External object files for target gtest_main
gtest_main_EXTERNAL_OBJECTS =

gtest/libgtest_main.a: gtest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o
gtest/libgtest_main.a: gtest/CMakeFiles/gtest_main.dir/build.make
gtest/libgtest_main.a: gtest/CMakeFiles/gtest_main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/workspace/foxy_ws/build/rmw_dds_common/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libgtest_main.a"
	cd /workspace/foxy_ws/build/rmw_dds_common/gtest && $(CMAKE_COMMAND) -P CMakeFiles/gtest_main.dir/cmake_clean_target.cmake
	cd /workspace/foxy_ws/build/rmw_dds_common/gtest && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gtest_main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
gtest/CMakeFiles/gtest_main.dir/build: gtest/libgtest_main.a

.PHONY : gtest/CMakeFiles/gtest_main.dir/build

gtest/CMakeFiles/gtest_main.dir/clean:
	cd /workspace/foxy_ws/build/rmw_dds_common/gtest && $(CMAKE_COMMAND) -P CMakeFiles/gtest_main.dir/cmake_clean.cmake
.PHONY : gtest/CMakeFiles/gtest_main.dir/clean

gtest/CMakeFiles/gtest_main.dir/depend:
	cd /workspace/foxy_ws/build/rmw_dds_common && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /workspace/foxy_ws/src/rmw_dds_common /workspace/foxy_ws/install/src/gtest_vendor /workspace/foxy_ws/build/rmw_dds_common /workspace/foxy_ws/build/rmw_dds_common/gtest /workspace/foxy_ws/build/rmw_dds_common/gtest/CMakeFiles/gtest_main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : gtest/CMakeFiles/gtest_main.dir/depend

