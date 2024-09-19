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
include plugins/sr/CMakeFiles/sr.dir/depend.make

# Include the progress variables for this target.
include plugins/sr/CMakeFiles/sr.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/sr/CMakeFiles/sr.dir/flags.make

plugins/sr/CMakeFiles/sr.dir/sr.cpp.o: plugins/sr/CMakeFiles/sr.dir/flags.make
plugins/sr/CMakeFiles/sr.dir/sr.cpp.o: ../plugins/sr/sr.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu20/Downloads/VoIP-software-master/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object plugins/sr/CMakeFiles/sr.dir/sr.cpp.o"
	cd /home/ubuntu20/Downloads/VoIP-software-master/build/plugins/sr && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sr.dir/sr.cpp.o -c /home/ubuntu20/Downloads/VoIP-software-master/plugins/sr/sr.cpp

plugins/sr/CMakeFiles/sr.dir/sr.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sr.dir/sr.cpp.i"
	cd /home/ubuntu20/Downloads/VoIP-software-master/build/plugins/sr && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu20/Downloads/VoIP-software-master/plugins/sr/sr.cpp > CMakeFiles/sr.dir/sr.cpp.i

plugins/sr/CMakeFiles/sr.dir/sr.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sr.dir/sr.cpp.s"
	cd /home/ubuntu20/Downloads/VoIP-software-master/build/plugins/sr && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu20/Downloads/VoIP-software-master/plugins/sr/sr.cpp -o CMakeFiles/sr.dir/sr.cpp.s

# Object files for target sr
sr_OBJECTS = \
"CMakeFiles/sr.dir/sr.cpp.o"

# External object files for target sr
sr_EXTERNAL_OBJECTS =

plugins/libsr.so: plugins/sr/CMakeFiles/sr.dir/sr.cpp.o
plugins/libsr.so: plugins/sr/CMakeFiles/sr.dir/build.make
plugins/libsr.so: plugins/sr/CMakeFiles/sr.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ubuntu20/Downloads/VoIP-software-master/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library ../libsr.so"
	cd /home/ubuntu20/Downloads/VoIP-software-master/build/plugins/sr && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sr.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/sr/CMakeFiles/sr.dir/build: plugins/libsr.so

.PHONY : plugins/sr/CMakeFiles/sr.dir/build

plugins/sr/CMakeFiles/sr.dir/clean:
	cd /home/ubuntu20/Downloads/VoIP-software-master/build/plugins/sr && $(CMAKE_COMMAND) -P CMakeFiles/sr.dir/cmake_clean.cmake
.PHONY : plugins/sr/CMakeFiles/sr.dir/clean

plugins/sr/CMakeFiles/sr.dir/depend:
	cd /home/ubuntu20/Downloads/VoIP-software-master/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ubuntu20/Downloads/VoIP-software-master /home/ubuntu20/Downloads/VoIP-software-master/plugins/sr /home/ubuntu20/Downloads/VoIP-software-master/build /home/ubuntu20/Downloads/VoIP-software-master/build/plugins/sr /home/ubuntu20/Downloads/VoIP-software-master/build/plugins/sr/CMakeFiles/sr.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/sr/CMakeFiles/sr.dir/depend

