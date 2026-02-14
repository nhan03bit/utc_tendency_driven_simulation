#
# (C) Copyright 2011-2025 Johns Hopkins University (JHU), All Rights Reserved.
#

set (sawControllers_VERSION_MAJOR "2")
set (sawControllers_VERSION_MINOR "3")
set (sawControllers_VERSION_PATCH "0")
set (sawControllers_VERSION "2.3.0")


# figure out if this file is where it was configured (build tree) or
# not (installed tree)
set (sawControllers_CMAKE_CONFIG_FILE "/home/utc_sim/ros2_dvrk/build/sawControllersCore/components/sawControllersConfig.cmake")
get_filename_component (THIS_FILE_PATH
                        ${CMAKE_CURRENT_LIST_FILE}
                        REALPATH)

if ("${sawControllers_CMAKE_CONFIG_FILE}" STREQUAL "${THIS_FILE_PATH}")
  # we're using the build directories
  set (sawControllers_INCLUDE_DIR "/home/utc_sim/ros2_dvrk/src/cisst-saw/sawControllers/core/components/include;/home/utc_sim/ros2_dvrk/build/sawControllersCore/components/include")
  set (sawControllers_LIBRARY_DIR "/home/utc_sim/ros2_dvrk/install/cisst//lib")
else ()
  # try to find the install dir, we know the install is using
  # share/sawControllers so we can go ../.. or ../../..
  # find include path first
  find_path (sawControllers_INCLUDE_DIR
    NAMES sawControllers/sawControllersExport.h
    HINTS ${THIS_FILE_PATH}/../.. ${THIS_FILE_PATH}/../../..)
  # set library path relative to include
  set (sawControllers_LIBRARY_DIR "${sawControllers_INCLUDE_DIR}/../lib" "/home/utc_sim/ros2_dvrk/install/cisst//lib")
endif ()

set (sawControllers_LIBRARIES "sawControllers;sawControllersQt")
