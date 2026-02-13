# Install script for directory: /home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstNumerical

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstNumericalx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.4/cmake" TYPE FILE FILES "/home/utc_sim/ros2_dvrk/build/cisst/share/cisst-1.4/cmake/cisstNumericalcisstNetlib.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstNumericalx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.4/cmake" TYPE FILE FILES "/home/utc_sim/ros2_dvrk/build/cisst/share/cisst-1.4/cmake/cisstNumericalExternal.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstNumericalx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.4/cmake" TYPE FILE FILES "/home/utc_sim/ros2_dvrk/build/cisst/share/cisst-1.4/cmake/cisstNumericalcisstNetlib.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstNumericalx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.4/cmake" TYPE FILE FILES "/home/utc_sim/ros2_dvrk/build/cisst/share/cisst-1.4/cmake/cisstNumericalExternal.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/utc_sim/ros2_dvrk/build/cisst/cisstNumerical/code/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/utc_sim/ros2_dvrk/build/cisst/cisstNumerical/codePython/cmake_install.cmake")
endif()

