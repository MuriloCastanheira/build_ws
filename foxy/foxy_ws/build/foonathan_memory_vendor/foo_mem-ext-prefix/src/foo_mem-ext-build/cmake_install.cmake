# Install script for directory: /workspace/foxy_ws/build/foonathan_memory_vendor/foo_mem-ext-prefix/src/foo_mem-ext

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/workspace/foxy_ws/build/foonathan_memory_vendor/foo_mem_ext_prj_install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/foonathan_memory" TYPE FILE FILES
    "/workspace/foxy_ws/build/foonathan_memory_vendor/foo_mem-ext-prefix/src/foo_mem-ext/LICENSE"
    "/workspace/foxy_ws/build/foonathan_memory_vendor/foo_mem-ext-prefix/src/foo_mem-ext/README.md"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/foonathan_memory/cmake/foonathan_memory-config.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/foonathan_memory/cmake/foonathan_memory-config.cmake"
         "/workspace/foxy_ws/build/foonathan_memory_vendor/foo_mem-ext-prefix/src/foo_mem-ext-build/CMakeFiles/Export/lib/foonathan_memory/cmake/foonathan_memory-config.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/foonathan_memory/cmake/foonathan_memory-config-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/foonathan_memory/cmake/foonathan_memory-config.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/foonathan_memory/cmake" TYPE FILE FILES "/workspace/foxy_ws/build/foonathan_memory_vendor/foo_mem-ext-prefix/src/foo_mem-ext-build/CMakeFiles/Export/lib/foonathan_memory/cmake/foonathan_memory-config.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/foonathan_memory/cmake" TYPE FILE FILES "/workspace/foxy_ws/build/foonathan_memory_vendor/foo_mem-ext-prefix/src/foo_mem-ext-build/CMakeFiles/Export/lib/foonathan_memory/cmake/foonathan_memory-config-noconfig.cmake")
  endif()
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/workspace/foxy_ws/build/foonathan_memory_vendor/foo_mem-ext-prefix/src/foo_mem-ext-build/src/cmake_install.cmake")
  include("/workspace/foxy_ws/build/foonathan_memory_vendor/foo_mem-ext-prefix/src/foo_mem-ext-build/tool/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/workspace/foxy_ws/build/foonathan_memory_vendor/foo_mem-ext-prefix/src/foo_mem-ext-build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
