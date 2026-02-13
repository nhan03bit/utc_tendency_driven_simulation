# Install script for directory: /home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/code

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstVectorx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.4/cmake" TYPE FILE FILES "/home/utc_sim/ros2_dvrk/build/cisst/share/cisst-1.4/cmake/cisstVectorExternal.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstVectorx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstVector.so.1.4.0" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstVector.so.1.4.0")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstVector.so.1.4.0"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/utc_sim/ros2_dvrk/build/cisst/lib/libcisstVector.so.1.4.0")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstVector.so.1.4.0" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstVector.so.1.4.0")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstVector.so.1.4.0"
         OLD_RPATH "/home/utc_sim/ros2_dvrk/build/cisst/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstVector.so.1.4.0")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstVectorx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstVector.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstVector.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstVector.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/utc_sim/ros2_dvrk/build/cisst/lib/libcisstVector.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstVector.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstVector.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstVector.so"
         OLD_RPATH "/home/utc_sim/ros2_dvrk/build/cisst/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstVector.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstVectorx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.4/cmake" TYPE FILE FILES "/home/utc_sim/ros2_dvrk/build/cisst/share/cisst-1.4/cmake/cisstVectorInternal.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstVector-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cisstVector" TYPE FILE FILES
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctAngleRotation2.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctAxisAngleRotation3.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctBarycentricVector.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctBinaryOperations.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctBoundingBox3.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctContainerTraits.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctDataFunctionsDynamicMatrix.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctDataFunctionsDynamicMatrixJSON.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctDataFunctionsDynamicVector.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctDataFunctionsDynamicVectorJSON.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctDataFunctionsFixedSizeMatrix.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctDataFunctionsFixedSizeMatrixJSON.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctDataFunctionsFixedSizeVector.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctDataFunctionsFixedSizeVectorJSON.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctDataFunctionsTransformations.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctDataFunctionsTransformationsJSON.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctDeterminant.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctDynamicCompactLoopEngines.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctDynamicConstMatrixBase.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctDynamicConstMatrixRef.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctDynamicConstNArrayBase.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctDynamicConstNArrayRef.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctDynamicConstVectorBase.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctDynamicConstVectorRef.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctDynamicMatrix.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctDynamicMatrixBase.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctDynamicMatrixLoopEngines.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctDynamicMatrixOwner.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctDynamicMatrixRef.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctDynamicMatrixRefOwner.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctDynamicMatrixTypes.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctDynamicNArray.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctDynamicNArrayBase.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctDynamicNArrayLoopEngines.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctDynamicNArrayOwner.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctDynamicNArrayRef.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctDynamicNArrayRefOwner.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctDynamicVector.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctDynamicVectorBase.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctDynamicVectorLoopEngines.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctDynamicVectorOwner.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctDynamicVectorRef.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctDynamicVectorRefOwner.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctDynamicVectorTypes.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctEulerRotation3.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctExport.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctFastCopy.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctFixedSizeConstMatrixBase.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctFixedSizeConstMatrixRef.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctFixedSizeConstVectorBase.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctFixedSizeConstVectorRef.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctFixedSizeMatrix.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctFixedSizeMatrixBase.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctFixedSizeMatrixLoopEngines.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctFixedSizeMatrixRef.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctFixedSizeMatrixTraits.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctFixedSizeMatrixTypes.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctFixedSizeVector.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctFixedSizeVectorBase.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctFixedSizeVectorRecursiveEngines.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctFixedSizeVectorRef.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctFixedSizeVectorTraits.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctFixedSizeVectorTypes.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctFixedStrideMatrixIterator.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctFixedStrideVectorIterator.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctForwardDeclarations.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctFrame4x4.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctFrame4x4Base.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctFrame4x4ConstBase.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctFrameBase.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctMatrixRotation2.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctMatrixRotation2Base.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctMatrixRotation3.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctMatrixRotation3Base.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctMatrixRotation3ConstBase.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctMatrixRotation3ConstRef.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctMatrixRotation3Ref.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctPlot2DBase.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctPlot2DOpenGL.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctPrintf.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctQuaternion.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctQuaternionBase.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctQuaternionRotation3.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctQuaternionRotation3Base.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctRandom.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctRandomDynamicMatrix.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctRandomDynamicNArray.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctRandomDynamicVector.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctRandomFixedSizeMatrix.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctRandomFixedSizeVector.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctRandomTransformations.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctRodriguezRotation3.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctRodriguezRotation3Base.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctStoreBackBinaryOperations.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctStoreBackUnaryOperations.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctTransformationTypes.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctTypes.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctUnaryOperations.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctVarStrideMatrixIterator.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctVarStrideNArrayIterator.h"
    "/home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstVector/vctVarStrideVectorIterator.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstVector-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES "/home/utc_sim/ros2_dvrk/build/cisst/include/cisstVector.h")
endif()

