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
CMAKE_SOURCE_DIR = /workspace/foxy_ws/src/foonathan_memory_vendor

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /workspace/foxy_ws/build/foonathan_memory_vendor

# Utility rule file for foo_mem-ext.

# Include the progress variables for this target.
include CMakeFiles/foo_mem-ext.dir/progress.make

CMakeFiles/foo_mem-ext: CMakeFiles/foo_mem-ext-complete


CMakeFiles/foo_mem-ext-complete: foo_mem-ext-prefix/src/foo_mem-ext-stamp/foo_mem-ext-install
CMakeFiles/foo_mem-ext-complete: foo_mem-ext-prefix/src/foo_mem-ext-stamp/foo_mem-ext-mkdir
CMakeFiles/foo_mem-ext-complete: foo_mem-ext-prefix/src/foo_mem-ext-stamp/foo_mem-ext-download
CMakeFiles/foo_mem-ext-complete: foo_mem-ext-prefix/src/foo_mem-ext-stamp/foo_mem-ext-update
CMakeFiles/foo_mem-ext-complete: foo_mem-ext-prefix/src/foo_mem-ext-stamp/foo_mem-ext-patch
CMakeFiles/foo_mem-ext-complete: foo_mem-ext-prefix/src/foo_mem-ext-stamp/foo_mem-ext-configure
CMakeFiles/foo_mem-ext-complete: foo_mem-ext-prefix/src/foo_mem-ext-stamp/foo_mem-ext-build
CMakeFiles/foo_mem-ext-complete: foo_mem-ext-prefix/src/foo_mem-ext-stamp/foo_mem-ext-install
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/workspace/foxy_ws/build/foonathan_memory_vendor/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Completed 'foo_mem-ext'"
	/usr/bin/cmake -E make_directory /workspace/foxy_ws/build/foonathan_memory_vendor/CMakeFiles
	/usr/bin/cmake -E touch /workspace/foxy_ws/build/foonathan_memory_vendor/CMakeFiles/foo_mem-ext-complete
	/usr/bin/cmake -E touch /workspace/foxy_ws/build/foonathan_memory_vendor/foo_mem-ext-prefix/src/foo_mem-ext-stamp/foo_mem-ext-done

foo_mem-ext-prefix/src/foo_mem-ext-stamp/foo_mem-ext-install: foo_mem-ext-prefix/src/foo_mem-ext-stamp/foo_mem-ext-build
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/workspace/foxy_ws/build/foonathan_memory_vendor/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Performing install step for 'foo_mem-ext'"
	cd /workspace/foxy_ws/build/foonathan_memory_vendor/foo_mem-ext-prefix/src/foo_mem-ext-build && $(MAKE) install
	cd /workspace/foxy_ws/build/foonathan_memory_vendor/foo_mem-ext-prefix/src/foo_mem-ext-build && /usr/bin/cmake -E touch /workspace/foxy_ws/build/foonathan_memory_vendor/foo_mem-ext-prefix/src/foo_mem-ext-stamp/foo_mem-ext-install

foo_mem-ext-prefix/src/foo_mem-ext-stamp/foo_mem-ext-mkdir:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/workspace/foxy_ws/build/foonathan_memory_vendor/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Creating directories for 'foo_mem-ext'"
	/usr/bin/cmake -E make_directory /workspace/foxy_ws/build/foonathan_memory_vendor/foo_mem-ext-prefix/src/foo_mem-ext
	/usr/bin/cmake -E make_directory /workspace/foxy_ws/build/foonathan_memory_vendor/foo_mem-ext-prefix/src/foo_mem-ext-build
	/usr/bin/cmake -E make_directory /workspace/foxy_ws/build/foonathan_memory_vendor/foo_mem-ext-prefix
	/usr/bin/cmake -E make_directory /workspace/foxy_ws/build/foonathan_memory_vendor/foo_mem-ext-prefix/tmp
	/usr/bin/cmake -E make_directory /workspace/foxy_ws/build/foonathan_memory_vendor/foo_mem-ext-prefix/src/foo_mem-ext-stamp
	/usr/bin/cmake -E make_directory /workspace/foxy_ws/build/foonathan_memory_vendor/foo_mem-ext-prefix/src
	/usr/bin/cmake -E make_directory /workspace/foxy_ws/build/foonathan_memory_vendor/foo_mem-ext-prefix/src/foo_mem-ext-stamp
	/usr/bin/cmake -E touch /workspace/foxy_ws/build/foonathan_memory_vendor/foo_mem-ext-prefix/src/foo_mem-ext-stamp/foo_mem-ext-mkdir

foo_mem-ext-prefix/src/foo_mem-ext-stamp/foo_mem-ext-download: foo_mem-ext-prefix/src/foo_mem-ext-stamp/foo_mem-ext-gitinfo.txt
foo_mem-ext-prefix/src/foo_mem-ext-stamp/foo_mem-ext-download: foo_mem-ext-prefix/src/foo_mem-ext-stamp/foo_mem-ext-mkdir
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/workspace/foxy_ws/build/foonathan_memory_vendor/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Performing download step (git clone) for 'foo_mem-ext'"
	cd /workspace/foxy_ws/build/foonathan_memory_vendor/foo_mem-ext-prefix/src && /usr/bin/cmake -P /workspace/foxy_ws/build/foonathan_memory_vendor/foo_mem-ext-prefix/tmp/foo_mem-ext-gitclone.cmake
	cd /workspace/foxy_ws/build/foonathan_memory_vendor/foo_mem-ext-prefix/src && /usr/bin/cmake -E touch /workspace/foxy_ws/build/foonathan_memory_vendor/foo_mem-ext-prefix/src/foo_mem-ext-stamp/foo_mem-ext-download

foo_mem-ext-prefix/src/foo_mem-ext-stamp/foo_mem-ext-update: foo_mem-ext-prefix/src/foo_mem-ext-stamp/foo_mem-ext-download
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/workspace/foxy_ws/build/foonathan_memory_vendor/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "No update step for 'foo_mem-ext'"
	cd /workspace/foxy_ws/build/foonathan_memory_vendor/foo_mem-ext-prefix/src/foo_mem-ext && /usr/bin/cmake -E echo_append
	cd /workspace/foxy_ws/build/foonathan_memory_vendor/foo_mem-ext-prefix/src/foo_mem-ext && /usr/bin/cmake -E touch /workspace/foxy_ws/build/foonathan_memory_vendor/foo_mem-ext-prefix/src/foo_mem-ext-stamp/foo_mem-ext-update

foo_mem-ext-prefix/src/foo_mem-ext-stamp/foo_mem-ext-patch: foo_mem-ext-prefix/src/foo_mem-ext-stamp/foo_mem-ext-download
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/workspace/foxy_ws/build/foonathan_memory_vendor/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "No patch step for 'foo_mem-ext'"
	/usr/bin/cmake -E echo_append
	/usr/bin/cmake -E touch /workspace/foxy_ws/build/foonathan_memory_vendor/foo_mem-ext-prefix/src/foo_mem-ext-stamp/foo_mem-ext-patch

foo_mem-ext-prefix/src/foo_mem-ext-stamp/foo_mem-ext-configure: foo_mem-ext-prefix/tmp/foo_mem-ext-cfgcmd.txt
foo_mem-ext-prefix/src/foo_mem-ext-stamp/foo_mem-ext-configure: foo_mem-ext-prefix/src/foo_mem-ext-stamp/foo_mem-ext-update
foo_mem-ext-prefix/src/foo_mem-ext-stamp/foo_mem-ext-configure: foo_mem-ext-prefix/src/foo_mem-ext-stamp/foo_mem-ext-patch
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/workspace/foxy_ws/build/foonathan_memory_vendor/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Performing configure step for 'foo_mem-ext'"
	cd /workspace/foxy_ws/build/foonathan_memory_vendor/foo_mem-ext-prefix/src/foo_mem-ext-build && /usr/bin/cmake -DFOONATHAN_MEMORY_BUILD_EXAMPLES=OFF -DFOONATHAN_MEMORY_BUILD_TESTS=OFF -DFOONATHAN_MEMORY_BUILD_TOOLS=ON -DCMAKE_INSTALL_PREFIX=/workspace/foxy_ws/build/foonathan_memory_vendor/foo_mem_ext_prj_install -DCMAKE_POSITION_INDEPENDENT_CODE=ON -DCMAKE_BUILD_TYPE= -Wno-dev "-GUnix Makefiles" /workspace/foxy_ws/build/foonathan_memory_vendor/foo_mem-ext-prefix/src/foo_mem-ext
	cd /workspace/foxy_ws/build/foonathan_memory_vendor/foo_mem-ext-prefix/src/foo_mem-ext-build && /usr/bin/cmake -E touch /workspace/foxy_ws/build/foonathan_memory_vendor/foo_mem-ext-prefix/src/foo_mem-ext-stamp/foo_mem-ext-configure

foo_mem-ext-prefix/src/foo_mem-ext-stamp/foo_mem-ext-build: foo_mem-ext-prefix/src/foo_mem-ext-stamp/foo_mem-ext-configure
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/workspace/foxy_ws/build/foonathan_memory_vendor/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Performing build step for 'foo_mem-ext'"
	cd /workspace/foxy_ws/build/foonathan_memory_vendor/foo_mem-ext-prefix/src/foo_mem-ext-build && $(MAKE)
	cd /workspace/foxy_ws/build/foonathan_memory_vendor/foo_mem-ext-prefix/src/foo_mem-ext-build && /usr/bin/cmake -E touch /workspace/foxy_ws/build/foonathan_memory_vendor/foo_mem-ext-prefix/src/foo_mem-ext-stamp/foo_mem-ext-build

foo_mem-ext: CMakeFiles/foo_mem-ext
foo_mem-ext: CMakeFiles/foo_mem-ext-complete
foo_mem-ext: foo_mem-ext-prefix/src/foo_mem-ext-stamp/foo_mem-ext-install
foo_mem-ext: foo_mem-ext-prefix/src/foo_mem-ext-stamp/foo_mem-ext-mkdir
foo_mem-ext: foo_mem-ext-prefix/src/foo_mem-ext-stamp/foo_mem-ext-download
foo_mem-ext: foo_mem-ext-prefix/src/foo_mem-ext-stamp/foo_mem-ext-update
foo_mem-ext: foo_mem-ext-prefix/src/foo_mem-ext-stamp/foo_mem-ext-patch
foo_mem-ext: foo_mem-ext-prefix/src/foo_mem-ext-stamp/foo_mem-ext-configure
foo_mem-ext: foo_mem-ext-prefix/src/foo_mem-ext-stamp/foo_mem-ext-build
foo_mem-ext: CMakeFiles/foo_mem-ext.dir/build.make

.PHONY : foo_mem-ext

# Rule to build all files generated by this target.
CMakeFiles/foo_mem-ext.dir/build: foo_mem-ext

.PHONY : CMakeFiles/foo_mem-ext.dir/build

CMakeFiles/foo_mem-ext.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/foo_mem-ext.dir/cmake_clean.cmake
.PHONY : CMakeFiles/foo_mem-ext.dir/clean

CMakeFiles/foo_mem-ext.dir/depend:
	cd /workspace/foxy_ws/build/foonathan_memory_vendor && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /workspace/foxy_ws/src/foonathan_memory_vendor /workspace/foxy_ws/src/foonathan_memory_vendor /workspace/foxy_ws/build/foonathan_memory_vendor /workspace/foxy_ws/build/foonathan_memory_vendor /workspace/foxy_ws/build/foonathan_memory_vendor/CMakeFiles/foo_mem-ext.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/foo_mem-ext.dir/depend

