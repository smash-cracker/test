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
CMAKE_SOURCE_DIR = /home/ubuntu20/Downloads/VoIP-software-master

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ubuntu20/Downloads/VoIP-software-master/build

# Include any dependencies generated for this target.
include overlay_gl/CMakeFiles/overlay_gl_x86.dir/depend.make

# Include the progress variables for this target.
include overlay_gl/CMakeFiles/overlay_gl_x86.dir/progress.make

# Include the compile flags for this target's objects.
include overlay_gl/CMakeFiles/overlay_gl_x86.dir/flags.make

overlay_gl/CMakeFiles/overlay_gl_x86.dir/overlay.c.o: overlay_gl/CMakeFiles/overlay_gl_x86.dir/flags.make
overlay_gl/CMakeFiles/overlay_gl_x86.dir/overlay.c.o: ../overlay_gl/overlay.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu20/Downloads/VoIP-software-master/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object overlay_gl/CMakeFiles/overlay_gl_x86.dir/overlay.c.o"
	cd /home/ubuntu20/Downloads/VoIP-software-master/build/overlay_gl && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/overlay_gl_x86.dir/overlay.c.o   -c /home/ubuntu20/Downloads/VoIP-software-master/overlay_gl/overlay.c

overlay_gl/CMakeFiles/overlay_gl_x86.dir/overlay.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/overlay_gl_x86.dir/overlay.c.i"
	cd /home/ubuntu20/Downloads/VoIP-software-master/build/overlay_gl && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ubuntu20/Downloads/VoIP-software-master/overlay_gl/overlay.c > CMakeFiles/overlay_gl_x86.dir/overlay.c.i

overlay_gl/CMakeFiles/overlay_gl_x86.dir/overlay.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/overlay_gl_x86.dir/overlay.c.s"
	cd /home/ubuntu20/Downloads/VoIP-software-master/build/overlay_gl && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ubuntu20/Downloads/VoIP-software-master/overlay_gl/overlay.c -o CMakeFiles/overlay_gl_x86.dir/overlay.c.s

# Object files for target overlay_gl_x86
overlay_gl_x86_OBJECTS = \
"CMakeFiles/overlay_gl_x86.dir/overlay.c.o"

# External object files for target overlay_gl_x86
overlay_gl_x86_EXTERNAL_OBJECTS =

libmumbleoverlay.x86.so.1.6.0: overlay_gl/CMakeFiles/overlay_gl_x86.dir/overlay.c.o
libmumbleoverlay.x86.so.1.6.0: overlay_gl/CMakeFiles/overlay_gl_x86.dir/build.make
libmumbleoverlay.x86.so.1.6.0: overlay_gl/CMakeFiles/overlay_gl_x86.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ubuntu20/Downloads/VoIP-software-master/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C shared library ../libmumbleoverlay.x86.so"
	cd /home/ubuntu20/Downloads/VoIP-software-master/build/overlay_gl && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/overlay_gl_x86.dir/link.txt --verbose=$(VERBOSE)
	cd /home/ubuntu20/Downloads/VoIP-software-master/build/overlay_gl && $(CMAKE_COMMAND) -E cmake_symlink_library ../libmumbleoverlay.x86.so.1.6.0 ../libmumbleoverlay.x86.so.1.6.0 ../libmumbleoverlay.x86.so

libmumbleoverlay.x86.so: libmumbleoverlay.x86.so.1.6.0
	@$(CMAKE_COMMAND) -E touch_nocreate libmumbleoverlay.x86.so

# Rule to build all files generated by this target.
overlay_gl/CMakeFiles/overlay_gl_x86.dir/build: libmumbleoverlay.x86.so

.PHONY : overlay_gl/CMakeFiles/overlay_gl_x86.dir/build

overlay_gl/CMakeFiles/overlay_gl_x86.dir/clean:
	cd /home/ubuntu20/Downloads/VoIP-software-master/build/overlay_gl && $(CMAKE_COMMAND) -P CMakeFiles/overlay_gl_x86.dir/cmake_clean.cmake
.PHONY : overlay_gl/CMakeFiles/overlay_gl_x86.dir/clean

overlay_gl/CMakeFiles/overlay_gl_x86.dir/depend:
	cd /home/ubuntu20/Downloads/VoIP-software-master/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ubuntu20/Downloads/VoIP-software-master /home/ubuntu20/Downloads/VoIP-software-master/overlay_gl /home/ubuntu20/Downloads/VoIP-software-master/build /home/ubuntu20/Downloads/VoIP-software-master/build/overlay_gl /home/ubuntu20/Downloads/VoIP-software-master/build/overlay_gl/CMakeFiles/overlay_gl_x86.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : overlay_gl/CMakeFiles/overlay_gl_x86.dir/depend

