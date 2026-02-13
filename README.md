
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
cd ~/ros2_dvrk

source /opt/ros/humble/setup.bash

# Clean previous builds of tendon-driven packages
rm -rf build/dvrk_arms_from_ros build/dvrk_robot build/saw_intuitive_research_kit_example_psm_derived
rm -rf install/dvrk_arms_from_ros install/dvrk_robot install/saw_intuitive_research_kit_example_psm_derived

# Build
colcon build --packages-select dvrk_arms_from_ros dvrk_robot saw_intuitive_research_kit_example_psm_derived \
  --cmake-args -DCMAKE_BUILD_TYPE=Release --symlink-install
```

**Add permanent sourcing** (recommended):

```bash
echo "source ~/ros2_dvrk/install/setup.bash" >> ~/.bashrc
source ~/.bashrc
```

---

## 5. Run Test Model (Patient Cart Simulation)
```bash
# Source workspace
source ~/ros2_dvrk/install/setup.bash

# Launch Classic da Vinci patient cart (with Gazebo simulation)
ros2 launch dvrk_model patient_cart.launch.py generation:=Classic simulated:=true
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

## Troubleshooting

| Issue | Solution |
|-------|----------|
| `ignition-fortress` not found | Re-run the OSRF repo commands |
| Build fails on `dvrk_arms_from_ros` | `colcon build --packages-select dvrk_arms_from_ros --continue-on-error` |
| RViz/Gazebo empty | `export IGN_GUI_PLUGIN_PATH=/opt/ros/humble/lib` |
| Slow simulation | Use `generation:=Classic` (lighter than Si) |
| Python packages missing | `pip install -r ~/ros2_dvrk/src/dvrk_robot/requirements.txt` |

---

**You now have:**
- Clean ROS 2 Humble + Ignition Fortress
- Full dVRK ROS 2 stack
- Tendon-driven PSM-derived arms ready for GESR-style customization

Next step (when you're ready):  
I’ll give you the **custom URDF + xacro** files to turn the PSM arms into your GESR flexible manipulator + snake bone.

Just reply **“send GESR URDF”** and I’ll drop the complete files.

Happy simulating! 🚀
