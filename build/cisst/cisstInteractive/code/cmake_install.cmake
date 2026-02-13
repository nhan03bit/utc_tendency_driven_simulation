# Install script for directory: /home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstInteractive/code

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/utc_sim/ros2_dvrk/install/cisst")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
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

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstInteractivex" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstInteractive.so.1.4.0" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstInteractive.so.1.4.0")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstInteractive.so.1.4.0"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/utc_sim/ros2_dvrk/build/cisst/lib/libcisstInteractive.so.1.4.0")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstInteractive.so.1.4.0" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstInteractive.so.1.4.0")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstInteractive.so.1.4.0"
         OLD_RPATH "/home/utc_sim/ros2_dvrk/build/cisst/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstInteractive.so.1.4.0")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstInteractivex" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstInteractive.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstInteractive.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstInteractive.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/utc_sim/ros2_dvrk/build/cisst/lib/libcisstInteractive.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstInteractive.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstInteractive.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstInteractive.so"
         OLD_RPATH "/home/utc_sim/ros2_dvrk/build/cisst/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstInteractive.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstInteractivex" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.4/cmake" TYPE FILE FILES "/home/utc_sim/ros2_dvrk/build/cisst/share/cisst-1.4/cmake/cisstInteractiveInternal.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstInteractivex" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.4/cmake" TYPE FILE FILES "/home/utc_sim/ros2_dvrk/build/cisst/share/cisst-1.4/cmake/cisstInteractiveInternal.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstInteractivex" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.4/cmake" TYPE FILE FILES "/home/utc_sim/ros2_dvrk/build/cisst/share/cisst-1.4/cmake/cisstInteractiveInternal.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstInteractivex" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.4/cmake" TYPE FILE FILES "/home/utc_sim/ros2_dvrk/build/cisst/share/cisst-1.4/cmake/cisstInteractiveExternal.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstInteractive-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cisstInteractive" TYPE FILE FILES
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstInteractive/ireExport.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstInteractive/ireFramework.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstInteractive/ireTask.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstInteractive-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES "/home/utc_sim/ros2_dvrk/build/cisst/include/cisstInteractive.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cisstInteractive" TYPE FILE FILES "/home/utc_sim/ros2_dvrk/build/cisst/include/cisstInteractive/ireTaskConstructorArg.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstInteractivex" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE DIRECTORY FILES "/home/utc_sim/ros2_dvrk/build/cisst/lib/irepy")
endif()

