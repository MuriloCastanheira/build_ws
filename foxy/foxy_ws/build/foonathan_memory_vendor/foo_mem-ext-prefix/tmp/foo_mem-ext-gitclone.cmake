
if(NOT "/workspace/foxy_ws/build/foonathan_memory_vendor/foo_mem-ext-prefix/src/foo_mem-ext-stamp/foo_mem-ext-gitinfo.txt" IS_NEWER_THAN "/workspace/foxy_ws/build/foonathan_memory_vendor/foo_mem-ext-prefix/src/foo_mem-ext-stamp/foo_mem-ext-gitclone-lastrun.txt")
  message(STATUS "Avoiding repeated git clone, stamp file is up to date: '/workspace/foxy_ws/build/foonathan_memory_vendor/foo_mem-ext-prefix/src/foo_mem-ext-stamp/foo_mem-ext-gitclone-lastrun.txt'")
  return()
endif()

execute_process(
  COMMAND ${CMAKE_COMMAND} -E remove_directory "/workspace/foxy_ws/build/foonathan_memory_vendor/foo_mem-ext-prefix/src/foo_mem-ext"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to remove directory: '/workspace/foxy_ws/build/foonathan_memory_vendor/foo_mem-ext-prefix/src/foo_mem-ext'")
endif()

# try the clone 3 times in case there is an odd git clone issue
set(error_code 1)
set(number_of_tries 0)
while(error_code AND number_of_tries LESS 3)
  execute_process(
    COMMAND "/usr/bin/git"  clone --no-checkout "https://github.com/foonathan/memory.git" "foo_mem-ext"
    WORKING_DIRECTORY "/workspace/foxy_ws/build/foonathan_memory_vendor/foo_mem-ext-prefix/src"
    RESULT_VARIABLE error_code
    )
  math(EXPR number_of_tries "${number_of_tries} + 1")
endwhile()
if(number_of_tries GREATER 1)
  message(STATUS "Had to git clone more than once:
          ${number_of_tries} times.")
endif()
if(error_code)
  message(FATAL_ERROR "Failed to clone repository: 'https://github.com/foonathan/memory.git'")
endif()

execute_process(
  COMMAND "/usr/bin/git"  checkout v0.7-1 --
  WORKING_DIRECTORY "/workspace/foxy_ws/build/foonathan_memory_vendor/foo_mem-ext-prefix/src/foo_mem-ext"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to checkout tag: 'v0.7-1'")
endif()

set(init_submodules TRUE)
if(init_submodules)
  execute_process(
    COMMAND "/usr/bin/git"  submodule update --recursive --init 
    WORKING_DIRECTORY "/workspace/foxy_ws/build/foonathan_memory_vendor/foo_mem-ext-prefix/src/foo_mem-ext"
    RESULT_VARIABLE error_code
    )
endif()
if(error_code)
  message(FATAL_ERROR "Failed to update submodules in: '/workspace/foxy_ws/build/foonathan_memory_vendor/foo_mem-ext-prefix/src/foo_mem-ext'")
endif()

# Complete success, update the script-last-run stamp file:
#
execute_process(
  COMMAND ${CMAKE_COMMAND} -E copy
    "/workspace/foxy_ws/build/foonathan_memory_vendor/foo_mem-ext-prefix/src/foo_mem-ext-stamp/foo_mem-ext-gitinfo.txt"
    "/workspace/foxy_ws/build/foonathan_memory_vendor/foo_mem-ext-prefix/src/foo_mem-ext-stamp/foo_mem-ext-gitclone-lastrun.txt"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to copy script-last-run stamp file: '/workspace/foxy_ws/build/foonathan_memory_vendor/foo_mem-ext-prefix/src/foo_mem-ext-stamp/foo_mem-ext-gitclone-lastrun.txt'")
endif()

