# Install script for directory: /home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisst-dependencies

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstOpenGLx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.4/cmake" TYPE FILE FILES "/home/utc_sim/ros2_dvrk/build/cisst/share/cisst-1.4/cmake/cisstOpenGLOpenGL.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstOpenGLx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.4/cmake" TYPE FILE FILES "/home/utc_sim/ros2_dvrk/build/cisst/share/cisst-1.4/cmake/cisstOpenGLExternal.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstOpenGLx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.4/cmake" TYPE FILE FILES "/home/utc_sim/ros2_dvrk/build/cisst/share/cisst-1.4/cmake/cisstOpenGLOpenGL.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstOpenGLx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.4/cmake" TYPE FILE FILES "/home/utc_sim/ros2_dvrk/build/cisst/share/cisst-1.4/cmake/cisstOpenGLExternal.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstQtx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.4/cmake" TYPE FILE FILES "/home/utc_sim/ros2_dvrk/build/cisst/share/cisst-1.4/cmake/cisstQtQt5Core.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstQtx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.4/cmake" TYPE FILE FILES "/home/utc_sim/ros2_dvrk/build/cisst/share/cisst-1.4/cmake/cisstQtExternal.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstQtx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.4/cmake" TYPE FILE FILES "/home/utc_sim/ros2_dvrk/build/cisst/share/cisst-1.4/cmake/cisstQtQt5Xml.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstQtx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.4/cmake" TYPE FILE FILES "/home/utc_sim/ros2_dvrk/build/cisst/share/cisst-1.4/cmake/cisstQtExternal.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstQtx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.4/cmake" TYPE FILE FILES "/home/utc_sim/ros2_dvrk/build/cisst/share/cisst-1.4/cmake/cisstQtQt5XmlPatterns.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstQtx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.4/cmake" TYPE FILE FILES "/home/utc_sim/ros2_dvrk/build/cisst/share/cisst-1.4/cmake/cisstQtExternal.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstQtx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.4/cmake" TYPE FILE FILES "/home/utc_sim/ros2_dvrk/build/cisst/share/cisst-1.4/cmake/cisstQtQt5Widgets.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstQtx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.4/cmake" TYPE FILE FILES "/home/utc_sim/ros2_dvrk/build/cisst/share/cisst-1.4/cmake/cisstQtExternal.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstQtx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.4/cmake" TYPE FILE FILES "/home/utc_sim/ros2_dvrk/build/cisst/share/cisst-1.4/cmake/cisstQtQt5Gui.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstQtx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.4/cmake" TYPE FILE FILES "/home/utc_sim/ros2_dvrk/build/cisst/share/cisst-1.4/cmake/cisstQtExternal.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstQtx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.4/cmake" TYPE FILE FILES "/home/utc_sim/ros2_dvrk/build/cisst/share/cisst-1.4/cmake/cisstQtQt5OpenGL.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstQtx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.4/cmake" TYPE FILE FILES "/home/utc_sim/ros2_dvrk/build/cisst/share/cisst-1.4/cmake/cisstQtExternal.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstCommonx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.4/cmake" TYPE FILE FILES "/home/utc_sim/ros2_dvrk/build/cisst/share/cisst-1.4/cmake/cisstQtBuild.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstSWIGx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.4/cmake" TYPE FILE FILES "/home/utc_sim/ros2_dvrk/build/cisst/share/cisst-1.4/cmake/cisstSWIGSWIG.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstSWIGx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.4/cmake" TYPE FILE FILES "/home/utc_sim/ros2_dvrk/build/cisst/share/cisst-1.4/cmake/cisstSWIGExternal.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstSWIGx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.4/cmake" TYPE FILE FILES "/home/utc_sim/ros2_dvrk/build/cisst/share/cisst-1.4/cmake/cisstSWIGSWIG.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstSWIGx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.4/cmake" TYPE FILE FILES "/home/utc_sim/ros2_dvrk/build/cisst/share/cisst-1.4/cmake/cisstSWIGExternal.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstPythonx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.4/cmake" TYPE FILE FILES "/home/utc_sim/ros2_dvrk/build/cisst/share/cisst-1.4/cmake/cisstPythonPython.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstPythonx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.4/cmake" TYPE FILE FILES "/home/utc_sim/ros2_dvrk/build/cisst/share/cisst-1.4/cmake/cisstPythonExternal.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstPythonx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.4/cmake" TYPE FILE FILES "/home/utc_sim/ros2_dvrk/build/cisst/share/cisst-1.4/cmake/cisstPythonPython.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstPythonx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.4/cmake" TYPE FILE FILES "/home/utc_sim/ros2_dvrk/build/cisst/share/cisst-1.4/cmake/cisstPythonExternal.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstCommonx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.4/cmake" TYPE FILE FILES "/home/utc_sim/ros2_dvrk/build/cisst/share/cisst-1.4/cmake/cisstPythonBuild.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstCommonx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.4/cmake" TYPE FILE FILES "/home/utc_sim/ros2_dvrk/build/cisst/share/cisst-1.4/cmake/cisstCommonJSON.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstCommonx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.4/cmake" TYPE FILE FILES "/home/utc_sim/ros2_dvrk/build/cisst/share/cisst-1.4/cmake/cisstCommonExternal.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstCommonx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.4/cmake" TYPE FILE FILES "/home/utc_sim/ros2_dvrk/build/cisst/share/cisst-1.4/cmake/cisstCommonJSON.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstCommonx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.4/cmake" TYPE FILE FILES "/home/utc_sim/ros2_dvrk/build/cisst/share/cisst-1.4/cmake/cisstCommonExternal.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstCommonx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.4/cmake" TYPE FILE FILES "/home/utc_sim/ros2_dvrk/build/cisst/share/cisst-1.4/cmake/cisstCommonJSON.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstCommonx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.4/cmake" TYPE FILE FILES "/home/utc_sim/ros2_dvrk/build/cisst/share/cisst-1.4/cmake/cisstCommonExternal.cmake")
endif()

