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
include plugins/codmw2/CMakeFiles/codmw2.dir/depend.make

# Include the progress variables for this target.
include plugins/codmw2/CMakeFiles/codmw2.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/codmw2/CMakeFiles/codmw2.dir/flags.make

plugins/codmw2/CMakeFiles/codmw2.dir/codmw2.cpp.o: plugins/codmw2/CMakeFiles/codmw2.dir/flags.make
plugins/codmw2/CMakeFiles/codmw2.dir/codmw2.cpp.o: ../plugins/codmw2/codmw2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu20/Downloads/VoIP-software-master/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object plugins/codmw2/CMakeFiles/codmw2.dir/codmw2.cpp.o"
	cd /home/ubuntu20/Downloads/VoIP-software-master/build/plugins/codmw2 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/codmw2.dir/codmw2.cpp.o -c /home/ubuntu20/Downloads/VoIP-software-master/plugins/codmw2/codmw2.cpp

plugins/codmw2/CMakeFiles/codmw2.dir/codmw2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/codmw2.dir/codmw2.cpp.i"
	cd /home/ubuntu20/Downloads/VoIP-software-master/build/plugins/codmw2 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu20/Downloads/VoIP-software-master/plugins/codmw2/codmw2.cpp > CMakeFiles/codmw2.dir/codmw2.cpp.i

plugins/codmw2/CMakeFiles/codmw2.dir/codmw2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/codmw2.dir/codmw2.cpp.s"
	cd /home/ubuntu20/Downloads/VoIP-software-master/build/plugins/codmw2 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu20/Downloads/VoIP-software-master/plugins/codmw2/codmw2.cpp -o CMakeFiles/codmw2.dir/codmw2.cpp.s

# Object files for target codmw2
codmw2_OBJECTS = \
"CMakeFiles/codmw2.dir/codmw2.cpp.o"

# External object files for target codmw2
codmw2_EXTERNAL_OBJECTS =

plugins/libcodmw2.so: plugins/codmw2/CMakeFiles/codmw2.dir/codmw2.cpp.o
plugins/libcodmw2.so: plugins/codmw2/CMakeFiles/codmw2.dir/build.make
plugins/libcodmw2.so: plugins/codmw2/CMakeFiles/codmw2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ubuntu20/Downloads/VoIP-software-master/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library ../libcodmw2.so"
	cd /home/ubuntu20/Downloads/VoIP-software-master/build/plugins/codmw2 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/codmw2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/codmw2/CMakeFiles/codmw2.dir/build: plugins/libcodmw2.so

.PHONY : plugins/codmw2/CMakeFiles/codmw2.dir/build

plugins/codmw2/CMakeFiles/codmw2.dir/clean:
	cd /home/ubuntu20/Downloads/VoIP-software-master/build/plugins/codmw2 && $(CMAKE_COMMAND) -P CMakeFiles/codmw2.dir/cmake_clean.cmake
.PHONY : plugins/codmw2/CMakeFiles/codmw2.dir/clean

plugins/codmw2/CMakeFiles/codmw2.dir/depend:
	cd /home/ubuntu20/Downloads/VoIP-software-master/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ubuntu20/Downloads/VoIP-software-master /home/ubuntu20/Downloads/VoIP-software-master/plugins/codmw2 /home/ubuntu20/Downloads/VoIP-software-master/build /home/ubuntu20/Downloads/VoIP-software-master/build/plugins/codmw2 /home/ubuntu20/Downloads/VoIP-software-master/build/plugins/codmw2/CMakeFiles/codmw2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/codmw2/CMakeFiles/codmw2.dir/depend

