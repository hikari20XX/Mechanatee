# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/lib/python3.10/dist-packages/cmake/data/bin/cmake

# The command to remove a file.
RM = /usr/local/lib/python3.10/dist-packages/cmake/data/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/hikari/ROScribe/ros_ws/src/custom_msgs

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hikari/ROScribe/ros_ws/src/build/custom_msgs

# Utility rule file for custom_msgs.

# Include any custom commands dependencies for this target.
include CMakeFiles/custom_msgs.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/custom_msgs.dir/progress.make

CMakeFiles/custom_msgs: /home/hikari/ROScribe/ros_ws/src/custom_msgs/msg/AnalogInput.msg
CMakeFiles/custom_msgs: /home/hikari/ROScribe/ros_ws/src/custom_msgs/msg/PWMCommand.msg
CMakeFiles/custom_msgs: /home/hikari/ROScribe/ros_ws/src/custom_msgs/msg/MotorStatus.msg
CMakeFiles/custom_msgs: /home/hikari/ROScribe/ros_ws/src/custom_msgs/msg/MotorFeedback.msg
CMakeFiles/custom_msgs: /home/hikari/ROScribe/ros_ws/src/custom_msgs/msg/MotorAlerts.msg
CMakeFiles/custom_msgs: /home/hikari/ROScribe/ros_ws/src/custom_msgs/msg/SystemFeedback.msg
CMakeFiles/custom_msgs: /home/hikari/ROScribe/ros_ws/src/custom_msgs/msg/PIDParams.msg
CMakeFiles/custom_msgs: /home/hikari/ROScribe/ros_ws/src/custom_msgs/msg/UpdatedPIDParams.msg
CMakeFiles/custom_msgs: /home/hikari/ROScribe/ros_ws/src/custom_msgs/msg/TuningStatus.msg
CMakeFiles/custom_msgs: /home/hikari/ROScribe/ros_ws/src/custom_msgs/msg/ServoFeedback.msg
CMakeFiles/custom_msgs: /home/hikari/ROScribe/ros_ws/src/custom_msgs/msg/ServoSetpoint.msg
CMakeFiles/custom_msgs: /home/hikari/ROScribe/ros_ws/src/custom_msgs/msg/ServoStatus.msg
CMakeFiles/custom_msgs: /home/hikari/ROScribe/ros_ws/src/custom_msgs/msg/BatteryStatus.msg
CMakeFiles/custom_msgs: /home/hikari/ROScribe/ros_ws/src/custom_msgs/msg/ServoSpeed.msg
CMakeFiles/custom_msgs: /home/hikari/ROScribe/ros_ws/src/custom_msgs/msg/TargetPosition.msg
CMakeFiles/custom_msgs: /home/hikari/ROScribe/ros_ws/src/custom_msgs/msg/SystemLogs.msg
CMakeFiles/custom_msgs: /home/hikari/ROScribe/ros_ws/src/custom_msgs/msg/VoltageReading.msg

custom_msgs: CMakeFiles/custom_msgs
custom_msgs: CMakeFiles/custom_msgs.dir/build.make
.PHONY : custom_msgs

# Rule to build all files generated by this target.
CMakeFiles/custom_msgs.dir/build: custom_msgs
.PHONY : CMakeFiles/custom_msgs.dir/build

CMakeFiles/custom_msgs.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/custom_msgs.dir/cmake_clean.cmake
.PHONY : CMakeFiles/custom_msgs.dir/clean

CMakeFiles/custom_msgs.dir/depend:
	cd /home/hikari/ROScribe/ros_ws/src/build/custom_msgs && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hikari/ROScribe/ros_ws/src/custom_msgs /home/hikari/ROScribe/ros_ws/src/custom_msgs /home/hikari/ROScribe/ros_ws/src/build/custom_msgs /home/hikari/ROScribe/ros_ws/src/build/custom_msgs /home/hikari/ROScribe/ros_ws/src/build/custom_msgs/CMakeFiles/custom_msgs.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/custom_msgs.dir/depend

