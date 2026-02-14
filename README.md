
# dVRK ROS 2 Setup for Tendon-Driven Endoscopic Robot (GESR-like)

**Target:** Ubuntu 22.04.5 + ROS 2 Humble + Gazebo Ignition Fortress  
**Goal:** Full simulation of custom tendon-driven arms (PSM-derived) for GESR-style endoscopic surgery
[![image.png](https://i.postimg.cc/0NQmZWWP/image.png)](https://postimg.cc/nXyChkfP)

---

## 1. Install ROS 2 Humble (Ubuntu 22.04)

```bash
# 1. Set locale
sudo apt update && sudo apt install locales
sudo locale-gen en_US en_US.UTF-8
sudo update-locale LC_ALL=en_US.UTF-8 LANG=en_US.UTF-8
export LANG=en_US.UTF-8

# 2. Add ROS 2 repository
sudo apt install software-properties-common -y
sudo add-apt-repository universe
sudo apt update && sudo apt install curl -y
sudo curl -sSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.key -o /usr/share/keyrings/ros-archive-keyring.gpg
echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] http://packages.ros.org/ros2/ubuntu $(. /etc/os-release && echo $UBUNTU_CODENAME) main" | sudo tee /etc/apt/sources.list.d/ros2.list > /dev/null

# 3. Install ROS 2 Humble Desktop
sudo apt update
sudo apt install ros-humble-desktop ros-dev-tools -y

# 4. Source ROS 2 (add to ~/.bashrc)
echo "source /opt/ros/humble/setup.bash" >> ~/.bashrc
source ~/.bashrc
```

---

## 2. Install Gazebo Ignition Fortress (Recommended for Humble)

```bash
# Add OSRF Gazebo repository
sudo apt-get update
sudo apt-get install -y lsb-release wget gnupg

wget https://packages.osrfoundation.org/gazebo.key -O - | sudo apt-key add -
echo "deb http://packages.osrfoundation.org/gazebo/ubuntu-stable `lsb_release -cs` main" | sudo tee /etc/apt/sources.list.d/gazebo-stable.list > /dev/null

sudo apt-get update
sudo apt-get install ignition-fortress -y

# ROS 2 bridge + Gazebo plugins
sudo apt install ros-humble-ros-gz ros-humble-ros-ign-bridge ros-humble-gazebo-ros-pkgs -y
```

**Verify:**
```bash
ign gazebo --version   # Should show Fortress
```

---

## 3. Create / Update dVRK ROS 2 Workspace

```bash
# 1. Create workspace (if not exists)
mkdir -p ~/ros2_dvrk/src
cd ~/ros2_dvrk/src

# 2. Clone dVRK repositories (use the official ROS 2 branch)
vcs import --input https://raw.githubusercontent.com/jhu-saw/vcs/main/ros2-dvrk-main.vcs --recursive

# (Optional) For a stable release:
# vcs import --input https://raw.githubusercontent.com/jhu-saw/vcs/main/ros2-dvrk-2.4.0.vcs --recursive
```

---

## 4. Build Workspace (Tendon-Driven Packages)

Run this **exact command** (cleans + builds only the tendon-driven / PSM-derived packages):

```bash
source /opt/ros/humble/setup.bash && rm -rf build/dvrk_arms_from_ros build/dvrk_robot build/saw_intuitive_research_kit_example_psm_derived install/dvrk_arms_from_ros install/dvrk_robot install/saw_intuitive_research_kit_example_psm_derived && colcon build --packages-select dvrk_arms_from_ros dvrk_robot saw_intuitive_research_kit_example_psm_derived --cmake-args -DCMAKE_BUILD_TYPE=Release
```

**Add permanent sourcing** (recommended):

```bash
echo "source ~/ros2_dvrk/install/setup.bash" >> ~/.bashrc
source ~/.bashrc
```

---

## 5. Run Test Model (Patient Cart Simulation)
```bash
source install/setup.bash && ros2 launch dvrk_model patient_cart.launch.py generation:=Classic simulated:=false
```

**Alternative test (real-hardware mode, as in your message):**

```bash
ros2 launch dvrk_model patient_cart.launch.py generation:=Classic simulated:=false
```
[![image.png](https://i.postimg.cc/529FNKMX/image.png)](https://postimg.cc/Mv4G9DHw)

**Test arm movement (new terminal):**

```bash
ros2 run dvrk_python dvrk_arm_test.py -a PSM1
```

---

## dVRK Simulator Architecture

### 3D Models (Meshes & URDF)

All 3D assets live under `src/dvrk/dvrk_model/`:

| Directory | Contents |
|-----------|----------|
| `meshes/Classic/PSM/` | PSM arm meshes (`.dae`, `.stl`), tool jaws, snake tool |
| `meshes/Classic/ECM/` | Endoscope arm — 10 STL files |
| `meshes/Classic/MTM/` | Master arm — 10 STL + 10 DAE files |
| `meshes/Classic/SUJ/` | Patient cart base — 21 STL files |
| `meshes/Si/` | Si-generation meshes (`PSM_ECM/`, `SUJ/`) |
| `meshes/instruments/` | Per-instrument meshes (by tool code, e.g. `420006/`) |
| `urdf/Classic/` | **18 xacro files** — `PSM1.urdf.xacro`, `ECM.urdf.xacro`, `SUJ.urdf.xacro`, `MTML.urdf.xacro`, tool variants (`psm_tool_sca`, `psm_tool_snake`, `psm_tool_caudier`) |
| `urdf/Si/` | **12 xacro files** for Si generation |
| `urdf/common.urdf.xacro` | Shared macros (materials, common definitions) |

### ROS2 Simulation Logic

#### Launch Files (`src/dvrk/dvrk_model/ros2/launch/`)

| File | Purpose |
|------|---------|
| `patient_cart.launch.py` | **Main entry point** — launches `dvrk_system`, state publishers, RViz |
| `surgeon_console.launch.py` | MTMs + teleoperation |
| `arm.launch.py` | Single arm launch |
| `arm_state_publishers.launch.py` | Joint/robot state publishers for visualization |
| `dvrk_bringup.launch.py` | Full dVRK system bringup |

#### Simulation Configuration — JSON (`src/cisst-saw/sawIntuitiveResearchKit/share/`)

| Directory | Contents |
|-----------|----------|
| `system/` | **28 system configs** — e.g. `system-patient-cart-Classic-simulated.json` |
| `arm/` | Arm-level simulated configs — `PSM_KIN_SIMULATED_*.json`, `ECM_KIN_SIMULATED_*.json`, `suj-simulated.json` |
| `kinematic/` | DH parameter definitions (`PSM.json`, `ECM.json`, `MTML.json`, `MTMR.json`) |
| `tool/` | **55 tool definitions** — one per instrument (e.g. `LARGE_NEEDLE_DRIVER_400006.json`) |
| `pid/` | PID controller gains (`sawControllersPID-PSM.json`, `-ECM.json`, `-MTM.json`) |

#### Core C++ Simulation Engine (`src/cisst-saw/sawIntuitiveResearchKit/core/components/code/`)

| File | Role |
|------|------|
| `mtsIntuitiveResearchKitPSM.cpp` | PSM state machine & control |
| `mtsIntuitiveResearchKitECM.cpp` | ECM state machine & control |
| `mtsIntuitiveResearchKitMTM.cpp` | MTM state machine & control |
| `mtsIntuitiveResearchKitArm.cpp` | Base arm class (shared logic) |
| `mtsStateMachine.cpp` | State machine framework (DISABLED → ENABLED → HOMED) |
| `system.cpp` | System orchestration (`power_on`, `home`, `power_off`) |
| `robManipulatorECM.cpp` / `robManipulatorPSMSnake.cpp` | Forward/inverse kinematics |
| `mtsTeleOperationPSM.cpp` | Teleoperation logic |

#### ROS2 Bridge (`src/cisst-saw/sawIntuitiveResearchKit/ros/dvrk_robot/`)

| File | Role |
|------|------|
| `dvrk_system.cpp` | ROS2 node entry point (the executable you launch) |
| `system_ROS.cpp` | Bridges all cisst/SAW components to ROS2 topics |

#### Python API (`src/dvrk/dvrk_python/src/dvrk/`)

High-level scripting: `psm.py`, `ecm.py`, `mtm.py`, `suj.py`, `console.py`, `system.py`

#### Data Flow

```
Launch files (ros2/launch/)
  → dvrk_system node (ros/dvrk_robot/)
    → C++ core engine (core/components/code/)  ← reads JSON configs (share/)
      → publishes joint states → robot_state_publisher  ← reads URDF/xacro (urdf/)
        → RViz renders 3D meshes (meshes/)
```

---

## Troubleshooting

| Issue | Solution |
|-------|----------|
| `ignition-fortress` not found | Re-run the OSRF repo commands |
| Build fails on `dvrk_arms_from_ros` | `colcon build --packages-select dvrk_arms_from_ros --continue-on-error` |
| RViz/Gazebo empty | `export IGN_GUI_PLUGIN_PATH=/opt/ros/humble/lib` |
| Slow simulation | Use `generation:=Classic` (lighter than Si) |
| Python packages missing | `pip install -r ~/ros2_dvrk/src/dvrk_robot/requirements.txt` |
| **Qt xcb plugin crash** (rviz2/dvrk_system dies with exit code -6) | CoppeliaSim pollutes `QT_QPA_PLATFORM_PLUGIN_PATH`. Fix: `unset QT_QPA_PLATFORM_PLUGIN_PATH` and remove CoppeliaSim from `LD_LIBRARY_PATH` before launching. Check `~/.bashrc` for CoppeliaSim env lines. |
| **Arms stay DISABLED** | Arms start in DISABLED state by default. Enable via dVRK Qt console, or programmatically: `ros2 topic pub --once /PSM1/state_command std_msgs/String "data: enable"` then `"data: home"` |
| **Shutdown segfault** (exit code -11) | Known race condition in multi-threaded teardown — does not affect operation. Close the dVRK Qt console window instead of Ctrl+C for cleaner exit. |

---
