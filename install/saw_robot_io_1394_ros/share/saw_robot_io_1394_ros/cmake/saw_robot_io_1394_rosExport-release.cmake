#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "saw_robot_io_1394_ros::saw_robot_io_1394_ros" for configuration "Release"
set_property(TARGET saw_robot_io_1394_ros::saw_robot_io_1394_ros APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(saw_robot_io_1394_ros::saw_robot_io_1394_ros PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libsaw_robot_io_1394_ros.so"
  IMPORTED_SONAME_RELEASE "libsaw_robot_io_1394_ros.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS saw_robot_io_1394_ros::saw_robot_io_1394_ros )
list(APPEND _IMPORT_CHECK_FILES_FOR_saw_robot_io_1394_ros::saw_robot_io_1394_ros "${_IMPORT_PREFIX}/lib/libsaw_robot_io_1394_ros.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
