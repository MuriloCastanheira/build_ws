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
CMAKE_SOURCE_DIR = /workspace/foxy_ws/build/google_benchmark_vendor/benchmark-1.5.1-prefix/src/benchmark-1.5.1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /workspace/foxy_ws/build/google_benchmark_vendor/benchmark-1.5.1-prefix/src/benchmark-1.5.1-build

# Include any dependencies generated for this target.
include src/CMakeFiles/benchmark_main.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/benchmark_main.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/benchmark_main.dir/flags.make

src/CMakeFiles/benchmark_main.dir/benchmark_main.cc.o: src/CMakeFiles/benchmark_main.dir/flags.make
src/CMakeFiles/benchmark_main.dir/benchmark_main.cc.o: /workspace/foxy_ws/build/google_benchmark_vendor/benchmark-1.5.1-prefix/src/benchmark-1.5.1/src/benchmark_main.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspace/foxy_ws/build/google_benchmark_vendor/benchmark-1.5.1-prefix/src/benchmark-1.5.1-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/benchmark_main.dir/benchmark_main.cc.o"
	cd /workspace/foxy_ws/build/google_benchmark_vendor/benchmark-1.5.1-prefix/src/benchmark-1.5.1-build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/benchmark_main.dir/benchmark_main.cc.o -c /workspace/foxy_ws/build/google_benchmark_vendor/benchmark-1.5.1-prefix/src/benchmark-1.5.1/src/benchmark_main.cc

src/CMakeFiles/benchmark_main.dir/benchmark_main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/benchmark_main.dir/benchmark_main.cc.i"
	cd /workspace/foxy_ws/build/google_benchmark_vendor/benchmark-1.5.1-prefix/src/benchmark-1.5.1-build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspace/foxy_ws/build/google_benchmark_vendor/benchmark-1.5.1-prefix/src/benchmark-1.5.1/src/benchmark_main.cc > CMakeFiles/benchmark_main.dir/benchmark_main.cc.i

src/CMakeFiles/benchmark_main.dir/benchmark_main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/benchmark_main.dir/benchmark_main.cc.s"
	cd /workspace/foxy_ws/build/google_benchmark_vendor/benchmark-1.5.1-prefix/src/benchmark-1.5.1-build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspace/foxy_ws/build/google_benchmark_vendor/benchmark-1.5.1-prefix/src/benchmark-1.5.1/src/benchmark_main.cc -o CMakeFiles/benchmark_main.dir/benchmark_main.cc.s

# Object files for target benchmark_main
benchmark_main_OBJECTS = \
"CMakeFiles/benchmark_main.dir/benchmark_main.cc.o"

# External object files for target benchmark_main
benchmark_main_EXTERNAL_OBJECTS =

src/libbenchmark_main.so.1.5.1: src/CMakeFiles/benchmark_main.dir/benchmark_main.cc.o
src/libbenchmark_main.so.1.5.1: src/CMakeFiles/benchmark_main.dir/build.make
src/libbenchmark_main.so.1.5.1: src/libbenchmark.so.1.5.1
src/libbenchmark_main.so.1.5.1: /usr/lib/x86_64-linux-gnu/librt.so
src/libbenchmark_main.so.1.5.1: src/CMakeFiles/benchmark_main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/workspace/foxy_ws/build/google_benchmark_vendor/benchmark-1.5.1-prefix/src/benchmark-1.5.1-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library libbenchmark_main.so"
	cd /workspace/foxy_ws/build/google_benchmark_vendor/benchmark-1.5.1-prefix/src/benchmark-1.5.1-build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/benchmark_main.dir/link.txt --verbose=$(VERBOSE)
	cd /workspace/foxy_ws/build/google_benchmark_vendor/benchmark-1.5.1-prefix/src/benchmark-1.5.1-build/src && $(CMAKE_COMMAND) -E cmake_symlink_library libbenchmark_main.so.1.5.1 libbenchmark_main.so.1 libbenchmark_main.so

src/libbenchmark_main.so.1: src/libbenchmark_main.so.1.5.1
	@$(CMAKE_COMMAND) -E touch_nocreate src/libbenchmark_main.so.1

src/libbenchmark_main.so: src/libbenchmark_main.so.1.5.1
	@$(CMAKE_COMMAND) -E touch_nocreate src/libbenchmark_main.so

# Rule to build all files generated by this target.
src/CMakeFiles/benchmark_main.dir/build: src/libbenchmark_main.so

.PHONY : src/CMakeFiles/benchmark_main.dir/build

src/CMakeFiles/benchmark_main.dir/clean:
	cd /workspace/foxy_ws/build/google_benchmark_vendor/benchmark-1.5.1-prefix/src/benchmark-1.5.1-build/src && $(CMAKE_COMMAND) -P CMakeFiles/benchmark_main.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/benchmark_main.dir/clean

src/CMakeFiles/benchmark_main.dir/depend:
	cd /workspace/foxy_ws/build/google_benchmark_vendor/benchmark-1.5.1-prefix/src/benchmark-1.5.1-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /workspace/foxy_ws/build/google_benchmark_vendor/benchmark-1.5.1-prefix/src/benchmark-1.5.1 /workspace/foxy_ws/build/google_benchmark_vendor/benchmark-1.5.1-prefix/src/benchmark-1.5.1/src /workspace/foxy_ws/build/google_benchmark_vendor/benchmark-1.5.1-prefix/src/benchmark-1.5.1-build /workspace/foxy_ws/build/google_benchmark_vendor/benchmark-1.5.1-prefix/src/benchmark-1.5.1-build/src /workspace/foxy_ws/build/google_benchmark_vendor/benchmark-1.5.1-prefix/src/benchmark-1.5.1-build/src/CMakeFiles/benchmark_main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/benchmark_main.dir/depend

