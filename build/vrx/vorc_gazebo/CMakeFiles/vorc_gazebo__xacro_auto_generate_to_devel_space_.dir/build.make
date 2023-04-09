# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/haziel/vrx_ws/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/haziel/vrx_ws/build

# Utility rule file for vorc_gazebo__xacro_auto_generate_to_devel_space_.

# Include the progress variables for this target.
include vrx/vorc_gazebo/CMakeFiles/vorc_gazebo__xacro_auto_generate_to_devel_space_.dir/progress.make

vrx/vorc_gazebo/CMakeFiles/vorc_gazebo__xacro_auto_generate_to_devel_space_: /home/haziel/vrx_ws/devel/share/vorc_gazebo/worlds/marina.world


/home/haziel/vrx_ws/devel/share/vorc_gazebo/worlds/marina.world: /home/haziel/vrx_ws/devel/share/vorc_gazebo/worlds
/home/haziel/vrx_ws/devel/share/vorc_gazebo/worlds/marina.world: vrx/vorc_gazebo/worlds/marina.world
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/haziel/vrx_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Copying to devel space: /home/haziel/vrx_ws/devel/share/vorc_gazebo/worlds/marina.world"
	cd /home/haziel/vrx_ws/build/vrx/vorc_gazebo && /usr/bin/cmake -E copy_if_different /home/haziel/vrx_ws/build/vrx/vorc_gazebo/worlds/marina.world /home/haziel/vrx_ws/devel/share/vorc_gazebo/worlds/marina.world

/home/haziel/vrx_ws/devel/share/vorc_gazebo/worlds:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/haziel/vrx_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "creating dir /home/haziel/vrx_ws/devel/share/vorc_gazebo/worlds"
	cd /home/haziel/vrx_ws/build/vrx/vorc_gazebo && /usr/bin/cmake -E make_directory /home/haziel/vrx_ws/devel/share/vorc_gazebo/worlds

vrx/vorc_gazebo/worlds/marina.world: /home/haziel/vrx_ws/src/vrx/vorc_gazebo/worlds/marina.world.xacro
vrx/vorc_gazebo/worlds/marina.world: /home/haziel/vrx_ws/src/vrx/vorc_gazebo/worlds/marina.xacro
vrx/vorc_gazebo/worlds/marina.world: /home/haziel/vrx_ws/src/vrx/vrx_gazebo/worlds/xacros/usv_wind_plugin.xacro
vrx/vorc_gazebo/worlds/marina.world: /home/haziel/vrx_ws/src/vrx/wave_gazebo/world_models/ocean_waves/model.xacro
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/haziel/vrx_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "xacro: generating worlds/marina.world from worlds/marina.world.xacro"
	cd /home/haziel/vrx_ws/src/vrx/vorc_gazebo && /home/haziel/vrx_ws/build/catkin_generated/env_cached.sh xacro -o /home/haziel/vrx_ws/build/vrx/vorc_gazebo/worlds/marina.world worlds/marina.world.xacro

vorc_gazebo__xacro_auto_generate_to_devel_space_: vrx/vorc_gazebo/CMakeFiles/vorc_gazebo__xacro_auto_generate_to_devel_space_
vorc_gazebo__xacro_auto_generate_to_devel_space_: /home/haziel/vrx_ws/devel/share/vorc_gazebo/worlds/marina.world
vorc_gazebo__xacro_auto_generate_to_devel_space_: /home/haziel/vrx_ws/devel/share/vorc_gazebo/worlds
vorc_gazebo__xacro_auto_generate_to_devel_space_: vrx/vorc_gazebo/worlds/marina.world
vorc_gazebo__xacro_auto_generate_to_devel_space_: vrx/vorc_gazebo/CMakeFiles/vorc_gazebo__xacro_auto_generate_to_devel_space_.dir/build.make

.PHONY : vorc_gazebo__xacro_auto_generate_to_devel_space_

# Rule to build all files generated by this target.
vrx/vorc_gazebo/CMakeFiles/vorc_gazebo__xacro_auto_generate_to_devel_space_.dir/build: vorc_gazebo__xacro_auto_generate_to_devel_space_

.PHONY : vrx/vorc_gazebo/CMakeFiles/vorc_gazebo__xacro_auto_generate_to_devel_space_.dir/build

vrx/vorc_gazebo/CMakeFiles/vorc_gazebo__xacro_auto_generate_to_devel_space_.dir/clean:
	cd /home/haziel/vrx_ws/build/vrx/vorc_gazebo && $(CMAKE_COMMAND) -P CMakeFiles/vorc_gazebo__xacro_auto_generate_to_devel_space_.dir/cmake_clean.cmake
.PHONY : vrx/vorc_gazebo/CMakeFiles/vorc_gazebo__xacro_auto_generate_to_devel_space_.dir/clean

vrx/vorc_gazebo/CMakeFiles/vorc_gazebo__xacro_auto_generate_to_devel_space_.dir/depend:
	cd /home/haziel/vrx_ws/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/haziel/vrx_ws/src /home/haziel/vrx_ws/src/vrx/vorc_gazebo /home/haziel/vrx_ws/build /home/haziel/vrx_ws/build/vrx/vorc_gazebo /home/haziel/vrx_ws/build/vrx/vorc_gazebo/CMakeFiles/vorc_gazebo__xacro_auto_generate_to_devel_space_.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : vrx/vorc_gazebo/CMakeFiles/vorc_gazebo__xacro_auto_generate_to_devel_space_.dir/depend

