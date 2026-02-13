# - Config file for the Amp1394 package
# It defines the following variables
#  Amp1394_INCLUDE_DIR  - include directories for Amp1394
#  Amp1394_LIBRARY_DIR  - link library directories for Amp1394
#  Amp1394_LIBRARIES    - libraries to link against
#  Amp1394Console_LIBRARIES - libraries for Amp1394Console

# Version
set (Amp1394_VERSION_MAJOR "2")
set (Amp1394_VERSION_MINOR "3")
set (Amp1394_VERSION_PATCH "0")
set (Amp1394_VERSION "2.3.0")
 
# Compute paths
set (Amp1394_INCLUDE_DIR "/home/utc_sim/ros2_dvrk/src/cisst-saw/sawRobotIO1394/core/components/code/Amp1394/lib;/home/utc_sim/ros2_dvrk/build/sawRobotIO1394Core/components/code/Amp1394")
set (Amp1394_LIBRARY_DIR "/home/utc_sim/ros2_dvrk/install/cisst//lib")
 
# Libraries to link against
set (Amp1394_LIBRARIES "Amp1394;raw1394")
set (Amp1394Console_LIBRARIES "Amp1394Console")

# FireWire/Ethernet/Zynq-EMIO support
set (Amp1394_HAS_RAW1394 "ON")
set (Amp1394_HAS_PCAP    "OFF")
set (Amp1394_HAS_EMIO    "")

# Whether using curses for console
set (Amp1394Console_HAS_CURSES "ON")
