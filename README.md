# dVRK ROS 2 Setup

## Tendon-Driven Endoscopic Robot (GESR-like)

**Target System**

* Ubuntu 22.04.5
* ROS 2 Humble
* Gazebo Ignition Fortress

**Goal**
Full simulation of custom tendon-driven arms (PSM-derived) for GESR-style endoscopic surgery.

[![image.png](https://i.postimg.cc/0NQmZWWP/image.png)](https://postimg.cc/nXyChkfP)

---

# 1️⃣ Install ROS 2 Humble (Ubuntu 22.04)

### Step 1 — Set Locale

```bash
sudo apt update && sudo apt install locales
sudo locale-gen en_US en_US.UTF-8
sudo update-locale LC_ALL=en_US.UTF-8 LANG=en_US.UTF-8
export LANG=en_US.UTF-8
```

### Step 2 — Add ROS 2 Repository

```bash
sudo apt install software-properties-common -y
sudo add-apt-repository universe
sudo apt update && sudo apt install curl -y

sudo curl -sSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.key \
-o /usr/share/keyrings/ros-archive-keyring.gpg

echo "deb [arch=$(dpkg --print-architecture) \
signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] \
http://packages.ros.org/ros2/ubuntu \
$(. /etc/os-release && echo $UBUNTU_CODENAME) main" \
| sudo tee /etc/apt/sources.list.d/ros2.list > /dev/null
```

### Step 3 — Install ROS 2 Desktop

```bash
sudo apt update
sudo apt install ros-humble-desktop ros-dev-tools -y
```

### Step 4 — Auto-Source ROS 2

```bash
echo "source /opt/ros/humble/setup.bash" >> ~/.bashrc
source ~/.bashrc
```

---

# 2️⃣ Install Gazebo (Ignition Fortress)

Fortress is the recommended simulator for ROS 2 Humble.

### Add OSRF Repository

```bash
sudo apt-get update
sudo apt-get install -y lsb-release wget gnupg

wget https://packages.osrfoundation.org/gazebo.key -O - | sudo apt-key add -
echo "deb http://packages.osrfoundation.org/gazebo/ubuntu-stable \
`lsb_release -cs` main" \
| sudo tee /etc/apt/sources.list.d/gazebo-stable.list > /dev/null
```

### Install Fortress

```bash
sudo apt-get update
sudo apt-get install ignition-fortress -y
```

### Install ROS 2 ↔ Gazebo Bridge

```bash
sudo apt install \
ros-humble-ros-gz \
ros-humble-ros-ign-bridge \
ros-humble-gazebo-ros-pkgs -y
```

### Verify Installation

```bash
ign gazebo --version
```

Expected: **Fortress**

---

# 3️⃣ Create / Update dVRK ROS 2 Workspace

### Create Workspace

```bash
mkdir -p ~/ros2_dvrk/src
cd ~/ros2_dvrk/src
```

### Import Official ROS 2 dVRK Repositories

```bash
vcs import \
--input https://raw.githubusercontent.com/jhu-saw/vcs/main/ros2-dvrk-main.vcs \
--recursive
```

Optional stable version:

```bash
vcs import \
--input https://raw.githubusercontent.com/jhu-saw/vcs/main/ros2-dvrk-2.4.0.vcs \
--recursive
```

---

# 4️⃣ Build Tendon-Driven Packages

Clean and build only the relevant PSM-derived components:

```bash
source /opt/ros/humble/setup.bash && \
rm -rf build/dvrk_arms_from_ros \
       build/dvrk_robot \
       build/saw_intuitive_research_kit_example_psm_derived \
       install/dvrk_arms_from_ros \
       install/dvrk_robot \
       install/saw_intuitive_research_kit_example_psm_derived && \
colcon build \
--packages-select \
dvrk_arms_from_ros \
dvrk_robot \
saw_intuitive_research_kit_example_psm_derived \
--cmake-args -DCMAKE_BUILD_TYPE=Release
```

### Auto-Source Workspace

```bash
echo "source ~/ros2_dvrk/install/setup.bash" >> ~/.bashrc
source ~/.bashrc
```

---

# 5️⃣ Run Simulation

## Launch Patient Cart (Main Entry Point)

```bash
ros2 launch dvrk_model patient_cart.launch.py \
generation:=Classic simulated:=false
```

[![image.png](https://i.postimg.cc/529FNKMX/image.png)](https://postimg.cc/Mv4G9DHw)

---

## Test Arm Movement

Open a new terminal:

```bash
ros2 run dvrk_python dvrk_arm_test.py -a PSM1
```

---

# 🧠 dVRK Simulator Architecture

This section explains how everything connects.

---

## 📁 3D Models (Meshes & URDF)

Located in:

```
src/dvrk/dvrk_model/
```

| Folder                   | Description                            |
| ------------------------ | -------------------------------------- |
| `meshes/Classic/PSM/`    | PSM meshes (.dae, .stl), tools         |
| `meshes/Classic/ECM/`    | Endoscope arm                          |
| `meshes/Classic/MTM/`    | Master tool manipulator                |
| `meshes/Classic/SUJ/`    | Patient cart base                      |
| `meshes/Si/`             | Si generation models                   |
| `meshes/instruments/`    | Instrument-specific meshes             |
| `urdf/Classic/`          | 18 xacro files (PSM1, ECM, MTML, etc.) |
| `urdf/Si/`               | 12 xacro files                         |
| `urdf/common.urdf.xacro` | Shared macros                          |

---

## 🚀 Launch Files

Location:

```
src/dvrk/dvrk_model/ros2/launch/
```

| File                             | Purpose               |
| -------------------------------- | --------------------- |
| `patient_cart.launch.py`         | Main simulation entry |
| `surgeon_console.launch.py`      | MTMs + teleop         |
| `arm.launch.py`                  | Single arm            |
| `arm_state_publishers.launch.py` | Joint state publisher |
| `dvrk_bringup.launch.py`         | Full system bringup   |

---

## ⚙️ JSON Configuration

Location:

```
src/cisst-saw/sawIntuitiveResearchKit/share/
```

| Folder       | Description                  |
| ------------ | ---------------------------- |
| `system/`    | 28 full system configs       |
| `arm/`       | Arm-level simulation configs |
| `kinematic/` | DH parameters                |
| `tool/`      | 55 instrument definitions    |
| `pid/`       | PID gains                    |

---

## 🧩 Core C++ Engine

Location:

```
src/cisst-saw/sawIntuitiveResearchKit/core/components/code/
```

Key files:

* `mtsIntuitiveResearchKitPSM.cpp`
* `mtsIntuitiveResearchKitECM.cpp`
* `mtsIntuitiveResearchKitMTM.cpp`
* `mtsStateMachine.cpp`
* `system.cpp`

Handles:

* State machine (DISABLED → ENABLED → HOMED)
* Kinematics
* Control logic
* Teleoperation

---

## 🔌 ROS 2 Bridge

Location:

```
src/cisst-saw/sawIntuitiveResearchKit/ros/dvrk_robot/
```

* `dvrk_system.cpp` → Main ROS 2 node
* `system_ROS.cpp` → Bridges C++ core to ROS topics

---

## 🐍 Python API

Location:

```
src/dvrk/dvrk_python/src/dvrk/
```

High-level control:

* `psm.py`
* `ecm.py`
* `mtm.py`
* `system.py`
* `console.py`

---

## 🔄 Data Flow Overview

```
Launch file
    ↓
dvrk_system (ROS2 node)
    ↓
C++ Core Engine
    ↓
Joint states
    ↓
robot_state_publisher
    ↓
RViz (renders URDF + meshes)
```

---

# 🛠 Troubleshooting

| Problem             | Solution                                                     |
| ------------------- | ------------------------------------------------------------ |
| Fortress not found  | Re-add OSRF repo                                             |
| Build fails         | Use `--continue-on-error`                                    |
| RViz empty          | `export IGN_GUI_PLUGIN_PATH=/opt/ros/humble/lib`             |
| Slow simulation     | Use `generation:=Classic`                                    |
| Missing Python deps | `pip install -r ~/ros2_dvrk/src/dvrk_robot/requirements.txt` |
| Qt xcb crash        | `unset QT_QPA_PLATFORM_PLUGIN_PATH`                          |
| Arms stuck DISABLED | Publish `enable` → `home`                                    |
| Shutdown segfault   | Close Qt console instead of Ctrl+C                           |

---
