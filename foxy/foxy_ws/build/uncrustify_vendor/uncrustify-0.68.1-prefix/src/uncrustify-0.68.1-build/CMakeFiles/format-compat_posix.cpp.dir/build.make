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
CMAKE_SOURCE_DIR = /workspace/foxy_ws/build/uncrustify_vendor/uncrustify-0.68.1-prefix/src/uncrustify-0.68.1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /workspace/foxy_ws/build/uncrustify_vendor/uncrustify-0.68.1-prefix/src/uncrustify-0.68.1-build

# Utility rule file for format-compat_posix.cpp.

# Include the progress variables for this target.
include CMakeFiles/format-compat_posix.cpp.dir/progress.make

CMakeFiles/format-compat_posix.cpp:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/workspace/foxy_ws/build/uncrustify_vendor/uncrustify-0.68.1-prefix/src/uncrustify-0.68.1-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Formatting src/compat_posix.cpp"
	cd /workspace/foxy_ws/build/uncrustify_vendor/uncrustify-0.68.1-prefix/src/uncrustify-0.68.1 && /workspace/foxy_ws/build/uncrustify_vendor/uncrustify-0.68.1-prefix/src/uncrustify-0.68.1-build/uncrustify -c forUncrustifySources.cfg -lCPP --no-backup src/compat_posix.cpp

format-compat_posix.cpp: CMakeFiles/format-compat_posix.cpp
format-compat_posix.cpp: CMakeFiles/format-compat_posix.cpp.dir/build.make

.PHONY : format-compat_posix.cpp

# Rule to build all files generated by this target.
CMakeFiles/format-compat_posix.cpp.dir/build: format-compat_posix.cpp

.PHONY : CMakeFiles/format-compat_posix.cpp.dir/build

CMakeFiles/format-compat_posix.cpp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/format-compat_posix.cpp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/format-compat_posix.cpp.dir/clean

CMakeFiles/format-compat_posix.cpp.dir/depend:
	cd /workspace/foxy_ws/build/uncrustify_vendor/uncrustify-0.68.1-prefix/src/uncrustify-0.68.1-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /workspace/foxy_ws/build/uncrustify_vendor/uncrustify-0.68.1-prefix/src/uncrustify-0.68.1 /workspace/foxy_ws/build/uncrustify_vendor/uncrustify-0.68.1-prefix/src/uncrustify-0.68.1 /workspace/foxy_ws/build/uncrustify_vendor/uncrustify-0.68.1-prefix/src/uncrustify-0.68.1-build /workspace/foxy_ws/build/uncrustify_vendor/uncrustify-0.68.1-prefix/src/uncrustify-0.68.1-build /workspace/foxy_ws/build/uncrustify_vendor/uncrustify-0.68.1-prefix/src/uncrustify-0.68.1-build/CMakeFiles/format-compat_posix.cpp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/format-compat_posix.cpp.dir/depend

