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
CMAKE_SOURCE_DIR = /workspace/foxy_ws/build/mimick_vendor/mimick-f171450b5ebaa3d2538c762a059dfc6ab7a01039-prefix/src/mimick-f171450b5ebaa3d2538c762a059dfc6ab7a01039

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /workspace/foxy_ws/build/mimick_vendor/mimick-f171450b5ebaa3d2538c762a059dfc6ab7a01039-prefix/src/mimick-f171450b5ebaa3d2538c762a059dfc6ab7a01039-build

# Include any dependencies generated for this target.
include test/CMakeFiles/mmk_test_c.dir/depend.make

# Include the progress variables for this target.
include test/CMakeFiles/mmk_test_c.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/mmk_test_c.dir/flags.make

test/CMakeFiles/mmk_test_c.dir/test.c.o: test/CMakeFiles/mmk_test_c.dir/flags.make
test/CMakeFiles/mmk_test_c.dir/test.c.o: /workspace/foxy_ws/build/mimick_vendor/mimick-f171450b5ebaa3d2538c762a059dfc6ab7a01039-prefix/src/mimick-f171450b5ebaa3d2538c762a059dfc6ab7a01039/test/test.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspace/foxy_ws/build/mimick_vendor/mimick-f171450b5ebaa3d2538c762a059dfc6ab7a01039-prefix/src/mimick-f171450b5ebaa3d2538c762a059dfc6ab7a01039-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object test/CMakeFiles/mmk_test_c.dir/test.c.o"
	cd /workspace/foxy_ws/build/mimick_vendor/mimick-f171450b5ebaa3d2538c762a059dfc6ab7a01039-prefix/src/mimick-f171450b5ebaa3d2538c762a059dfc6ab7a01039-build/test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -O0 -o CMakeFiles/mmk_test_c.dir/test.c.o   -c /workspace/foxy_ws/build/mimick_vendor/mimick-f171450b5ebaa3d2538c762a059dfc6ab7a01039-prefix/src/mimick-f171450b5ebaa3d2538c762a059dfc6ab7a01039/test/test.c

test/CMakeFiles/mmk_test_c.dir/test.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/mmk_test_c.dir/test.c.i"
	cd /workspace/foxy_ws/build/mimick_vendor/mimick-f171450b5ebaa3d2538c762a059dfc6ab7a01039-prefix/src/mimick-f171450b5ebaa3d2538c762a059dfc6ab7a01039-build/test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -O0 -E /workspace/foxy_ws/build/mimick_vendor/mimick-f171450b5ebaa3d2538c762a059dfc6ab7a01039-prefix/src/mimick-f171450b5ebaa3d2538c762a059dfc6ab7a01039/test/test.c > CMakeFiles/mmk_test_c.dir/test.c.i

test/CMakeFiles/mmk_test_c.dir/test.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/mmk_test_c.dir/test.c.s"
	cd /workspace/foxy_ws/build/mimick_vendor/mimick-f171450b5ebaa3d2538c762a059dfc6ab7a01039-prefix/src/mimick-f171450b5ebaa3d2538c762a059dfc6ab7a01039-build/test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -O0 -S /workspace/foxy_ws/build/mimick_vendor/mimick-f171450b5ebaa3d2538c762a059dfc6ab7a01039-prefix/src/mimick-f171450b5ebaa3d2538c762a059dfc6ab7a01039/test/test.c -o CMakeFiles/mmk_test_c.dir/test.c.s

# Object files for target mmk_test_c
mmk_test_c_OBJECTS = \
"CMakeFiles/mmk_test_c.dir/test.c.o"

# External object files for target mmk_test_c
mmk_test_c_EXTERNAL_OBJECTS =

test/mmk_test_c: test/CMakeFiles/mmk_test_c.dir/test.c.o
test/mmk_test_c: test/CMakeFiles/mmk_test_c.dir/build.make
test/mmk_test_c: libmimick.a
test/mmk_test_c: test/libfoo.so
test/mmk_test_c: test/CMakeFiles/mmk_test_c.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/workspace/foxy_ws/build/mimick_vendor/mimick-f171450b5ebaa3d2538c762a059dfc6ab7a01039-prefix/src/mimick-f171450b5ebaa3d2538c762a059dfc6ab7a01039-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable mmk_test_c"
	cd /workspace/foxy_ws/build/mimick_vendor/mimick-f171450b5ebaa3d2538c762a059dfc6ab7a01039-prefix/src/mimick-f171450b5ebaa3d2538c762a059dfc6ab7a01039-build/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mmk_test_c.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/CMakeFiles/mmk_test_c.dir/build: test/mmk_test_c

.PHONY : test/CMakeFiles/mmk_test_c.dir/build

test/CMakeFiles/mmk_test_c.dir/clean:
	cd /workspace/foxy_ws/build/mimick_vendor/mimick-f171450b5ebaa3d2538c762a059dfc6ab7a01039-prefix/src/mimick-f171450b5ebaa3d2538c762a059dfc6ab7a01039-build/test && $(CMAKE_COMMAND) -P CMakeFiles/mmk_test_c.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/mmk_test_c.dir/clean

test/CMakeFiles/mmk_test_c.dir/depend:
	cd /workspace/foxy_ws/build/mimick_vendor/mimick-f171450b5ebaa3d2538c762a059dfc6ab7a01039-prefix/src/mimick-f171450b5ebaa3d2538c762a059dfc6ab7a01039-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /workspace/foxy_ws/build/mimick_vendor/mimick-f171450b5ebaa3d2538c762a059dfc6ab7a01039-prefix/src/mimick-f171450b5ebaa3d2538c762a059dfc6ab7a01039 /workspace/foxy_ws/build/mimick_vendor/mimick-f171450b5ebaa3d2538c762a059dfc6ab7a01039-prefix/src/mimick-f171450b5ebaa3d2538c762a059dfc6ab7a01039/test /workspace/foxy_ws/build/mimick_vendor/mimick-f171450b5ebaa3d2538c762a059dfc6ab7a01039-prefix/src/mimick-f171450b5ebaa3d2538c762a059dfc6ab7a01039-build /workspace/foxy_ws/build/mimick_vendor/mimick-f171450b5ebaa3d2538c762a059dfc6ab7a01039-prefix/src/mimick-f171450b5ebaa3d2538c762a059dfc6ab7a01039-build/test /workspace/foxy_ws/build/mimick_vendor/mimick-f171450b5ebaa3d2538c762a059dfc6ab7a01039-prefix/src/mimick-f171450b5ebaa3d2538c762a059dfc6ab7a01039-build/test/CMakeFiles/mmk_test_c.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/mmk_test_c.dir/depend

