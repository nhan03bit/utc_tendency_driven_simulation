# Install script for directory: /home/utc_sim/ros2_dvrk/src/cisst-saw/sawIntuitiveResearchKit/core/applications

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/utc_sim/ros2_dvrk/install/sawIntuitiveResearchKitCore")
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

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/utc_sim/ros2_dvrk/build/sawIntuitiveResearchKitCore/applications/gripper-calibration/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/utc_sim/ros2_dvrk/build/sawIntuitiveResearchKitCore/applications/si-potentiometers-calibration/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/utc_sim/ros2_dvrk/build/sawIntuitiveResearchKitCore/applications/io-config-generator/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/utc_sim/ros2_dvrk/build/sawIntuitiveResearchKitCore/applications/sd-card-updater/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/utc_sim/ros2_dvrk/build/sawIntuitiveResearchKitCore/applications/remove-logs/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/utc_sim/ros2_dvrk/build/sawIntuitiveResearchKitCore/applications/suj-bluetooth-reset/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/utc_sim/ros2_dvrk/build/sawIntuitiveResearchKitCore/applications/system-config-wizard/cmake_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xsawIntuitiveResearchKit-Applicationsx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/sawIntuitiveResearchKitPID" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/sawIntuitiveResearchKitPID")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/sawIntuitiveResearchKitPID"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/utc_sim/ros2_dvrk/build/sawIntuitiveResearchKitCore/applications/sawIntuitiveResearchKitPID")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/sawIntuitiveResearchKitPID" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/sawIntuitiveResearchKitPID")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/sawIntuitiveResearchKitPID"
         OLD_RPATH "/home/utc_sim/ros2_dvrk/install/cisst/lib:/home/utc_sim/ros2_dvrk/build/cisst/cisstReflexxesTypeII/lib:/home/utc_sim/ros2_dvrk/install/sawRobotIO1394Core/include/../lib:/home/utc_sim/ros2_dvrk/install/sawIntuitiveResearchKitCore/lib:/home/utc_sim/ros2_dvrk/install/sawControllersCore/include/../lib:/home/utc_sim/ros2_dvrk/install/sawTextToSpeechAll/include/../lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/sawIntuitiveResearchKitPID")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xsawIntuitiveResearchKit-Applicationsx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/sawIntuitiveResearchKitSystem" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/sawIntuitiveResearchKitSystem")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/sawIntuitiveResearchKitSystem"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/utc_sim/ros2_dvrk/build/sawIntuitiveResearchKitCore/applications/sawIntuitiveResearchKitSystem")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/sawIntuitiveResearchKitSystem" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/sawIntuitiveResearchKitSystem")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/sawIntuitiveResearchKitSystem"
         OLD_RPATH "/home/utc_sim/ros2_dvrk/install/cisst/lib:/home/utc_sim/ros2_dvrk/build/cisst/cisstReflexxesTypeII/lib:/home/utc_sim/ros2_dvrk/install/sawRobotIO1394Core/include/../lib:/home/utc_sim/ros2_dvrk/install/sawIntuitiveResearchKitCore/lib:/home/utc_sim/ros2_dvrk/install/sawControllersCore/include/../lib:/home/utc_sim/ros2_dvrk/install/sawTextToSpeechAll/include/../lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/sawIntuitiveResearchKitSystem")
    endif()
  endif()
endif()

