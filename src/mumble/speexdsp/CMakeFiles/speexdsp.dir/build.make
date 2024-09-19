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
include src/mumble/speexdsp/CMakeFiles/speexdsp.dir/depend.make

# Include the progress variables for this target.
include src/mumble/speexdsp/CMakeFiles/speexdsp.dir/progress.make

# Include the compile flags for this target's objects.
include src/mumble/speexdsp/CMakeFiles/speexdsp.dir/flags.make

src/mumble/speexdsp/CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/fftwrap.c.o: src/mumble/speexdsp/CMakeFiles/speexdsp.dir/flags.make
src/mumble/speexdsp/CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/fftwrap.c.o: ../3rdparty/speexdsp/libspeexdsp/fftwrap.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu20/Downloads/VoIP-software-master/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object src/mumble/speexdsp/CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/fftwrap.c.o"
	cd /home/ubuntu20/Downloads/VoIP-software-master/build/src/mumble/speexdsp && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/fftwrap.c.o   -c /home/ubuntu20/Downloads/VoIP-software-master/3rdparty/speexdsp/libspeexdsp/fftwrap.c

src/mumble/speexdsp/CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/fftwrap.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/fftwrap.c.i"
	cd /home/ubuntu20/Downloads/VoIP-software-master/build/src/mumble/speexdsp && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ubuntu20/Downloads/VoIP-software-master/3rdparty/speexdsp/libspeexdsp/fftwrap.c > CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/fftwrap.c.i

src/mumble/speexdsp/CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/fftwrap.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/fftwrap.c.s"
	cd /home/ubuntu20/Downloads/VoIP-software-master/build/src/mumble/speexdsp && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ubuntu20/Downloads/VoIP-software-master/3rdparty/speexdsp/libspeexdsp/fftwrap.c -o CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/fftwrap.c.s

src/mumble/speexdsp/CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/filterbank.c.o: src/mumble/speexdsp/CMakeFiles/speexdsp.dir/flags.make
src/mumble/speexdsp/CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/filterbank.c.o: ../3rdparty/speexdsp/libspeexdsp/filterbank.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu20/Downloads/VoIP-software-master/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object src/mumble/speexdsp/CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/filterbank.c.o"
	cd /home/ubuntu20/Downloads/VoIP-software-master/build/src/mumble/speexdsp && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/filterbank.c.o   -c /home/ubuntu20/Downloads/VoIP-software-master/3rdparty/speexdsp/libspeexdsp/filterbank.c

src/mumble/speexdsp/CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/filterbank.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/filterbank.c.i"
	cd /home/ubuntu20/Downloads/VoIP-software-master/build/src/mumble/speexdsp && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ubuntu20/Downloads/VoIP-software-master/3rdparty/speexdsp/libspeexdsp/filterbank.c > CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/filterbank.c.i

src/mumble/speexdsp/CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/filterbank.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/filterbank.c.s"
	cd /home/ubuntu20/Downloads/VoIP-software-master/build/src/mumble/speexdsp && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ubuntu20/Downloads/VoIP-software-master/3rdparty/speexdsp/libspeexdsp/filterbank.c -o CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/filterbank.c.s

src/mumble/speexdsp/CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/jitter.c.o: src/mumble/speexdsp/CMakeFiles/speexdsp.dir/flags.make
src/mumble/speexdsp/CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/jitter.c.o: ../3rdparty/speexdsp/libspeexdsp/jitter.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu20/Downloads/VoIP-software-master/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object src/mumble/speexdsp/CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/jitter.c.o"
	cd /home/ubuntu20/Downloads/VoIP-software-master/build/src/mumble/speexdsp && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/jitter.c.o   -c /home/ubuntu20/Downloads/VoIP-software-master/3rdparty/speexdsp/libspeexdsp/jitter.c

src/mumble/speexdsp/CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/jitter.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/jitter.c.i"
	cd /home/ubuntu20/Downloads/VoIP-software-master/build/src/mumble/speexdsp && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ubuntu20/Downloads/VoIP-software-master/3rdparty/speexdsp/libspeexdsp/jitter.c > CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/jitter.c.i

src/mumble/speexdsp/CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/jitter.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/jitter.c.s"
	cd /home/ubuntu20/Downloads/VoIP-software-master/build/src/mumble/speexdsp && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ubuntu20/Downloads/VoIP-software-master/3rdparty/speexdsp/libspeexdsp/jitter.c -o CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/jitter.c.s

src/mumble/speexdsp/CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/mdf.c.o: src/mumble/speexdsp/CMakeFiles/speexdsp.dir/flags.make
src/mumble/speexdsp/CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/mdf.c.o: ../3rdparty/speexdsp/libspeexdsp/mdf.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu20/Downloads/VoIP-software-master/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object src/mumble/speexdsp/CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/mdf.c.o"
	cd /home/ubuntu20/Downloads/VoIP-software-master/build/src/mumble/speexdsp && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/mdf.c.o   -c /home/ubuntu20/Downloads/VoIP-software-master/3rdparty/speexdsp/libspeexdsp/mdf.c

src/mumble/speexdsp/CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/mdf.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/mdf.c.i"
	cd /home/ubuntu20/Downloads/VoIP-software-master/build/src/mumble/speexdsp && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ubuntu20/Downloads/VoIP-software-master/3rdparty/speexdsp/libspeexdsp/mdf.c > CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/mdf.c.i

src/mumble/speexdsp/CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/mdf.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/mdf.c.s"
	cd /home/ubuntu20/Downloads/VoIP-software-master/build/src/mumble/speexdsp && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ubuntu20/Downloads/VoIP-software-master/3rdparty/speexdsp/libspeexdsp/mdf.c -o CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/mdf.c.s

src/mumble/speexdsp/CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/preprocess.c.o: src/mumble/speexdsp/CMakeFiles/speexdsp.dir/flags.make
src/mumble/speexdsp/CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/preprocess.c.o: ../3rdparty/speexdsp/libspeexdsp/preprocess.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu20/Downloads/VoIP-software-master/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object src/mumble/speexdsp/CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/preprocess.c.o"
	cd /home/ubuntu20/Downloads/VoIP-software-master/build/src/mumble/speexdsp && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/preprocess.c.o   -c /home/ubuntu20/Downloads/VoIP-software-master/3rdparty/speexdsp/libspeexdsp/preprocess.c

src/mumble/speexdsp/CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/preprocess.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/preprocess.c.i"
	cd /home/ubuntu20/Downloads/VoIP-software-master/build/src/mumble/speexdsp && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ubuntu20/Downloads/VoIP-software-master/3rdparty/speexdsp/libspeexdsp/preprocess.c > CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/preprocess.c.i

src/mumble/speexdsp/CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/preprocess.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/preprocess.c.s"
	cd /home/ubuntu20/Downloads/VoIP-software-master/build/src/mumble/speexdsp && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ubuntu20/Downloads/VoIP-software-master/3rdparty/speexdsp/libspeexdsp/preprocess.c -o CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/preprocess.c.s

src/mumble/speexdsp/CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/resample.c.o: src/mumble/speexdsp/CMakeFiles/speexdsp.dir/flags.make
src/mumble/speexdsp/CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/resample.c.o: ../3rdparty/speexdsp/libspeexdsp/resample.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu20/Downloads/VoIP-software-master/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object src/mumble/speexdsp/CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/resample.c.o"
	cd /home/ubuntu20/Downloads/VoIP-software-master/build/src/mumble/speexdsp && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/resample.c.o   -c /home/ubuntu20/Downloads/VoIP-software-master/3rdparty/speexdsp/libspeexdsp/resample.c

src/mumble/speexdsp/CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/resample.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/resample.c.i"
	cd /home/ubuntu20/Downloads/VoIP-software-master/build/src/mumble/speexdsp && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ubuntu20/Downloads/VoIP-software-master/3rdparty/speexdsp/libspeexdsp/resample.c > CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/resample.c.i

src/mumble/speexdsp/CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/resample.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/resample.c.s"
	cd /home/ubuntu20/Downloads/VoIP-software-master/build/src/mumble/speexdsp && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ubuntu20/Downloads/VoIP-software-master/3rdparty/speexdsp/libspeexdsp/resample.c -o CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/resample.c.s

src/mumble/speexdsp/CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/scal.c.o: src/mumble/speexdsp/CMakeFiles/speexdsp.dir/flags.make
src/mumble/speexdsp/CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/scal.c.o: ../3rdparty/speexdsp/libspeexdsp/scal.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu20/Downloads/VoIP-software-master/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object src/mumble/speexdsp/CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/scal.c.o"
	cd /home/ubuntu20/Downloads/VoIP-software-master/build/src/mumble/speexdsp && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/scal.c.o   -c /home/ubuntu20/Downloads/VoIP-software-master/3rdparty/speexdsp/libspeexdsp/scal.c

src/mumble/speexdsp/CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/scal.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/scal.c.i"
	cd /home/ubuntu20/Downloads/VoIP-software-master/build/src/mumble/speexdsp && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ubuntu20/Downloads/VoIP-software-master/3rdparty/speexdsp/libspeexdsp/scal.c > CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/scal.c.i

src/mumble/speexdsp/CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/scal.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/scal.c.s"
	cd /home/ubuntu20/Downloads/VoIP-software-master/build/src/mumble/speexdsp && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ubuntu20/Downloads/VoIP-software-master/3rdparty/speexdsp/libspeexdsp/scal.c -o CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/scal.c.s

src/mumble/speexdsp/CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/smallft.c.o: src/mumble/speexdsp/CMakeFiles/speexdsp.dir/flags.make
src/mumble/speexdsp/CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/smallft.c.o: ../3rdparty/speexdsp/libspeexdsp/smallft.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu20/Downloads/VoIP-software-master/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object src/mumble/speexdsp/CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/smallft.c.o"
	cd /home/ubuntu20/Downloads/VoIP-software-master/build/src/mumble/speexdsp && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/smallft.c.o   -c /home/ubuntu20/Downloads/VoIP-software-master/3rdparty/speexdsp/libspeexdsp/smallft.c

src/mumble/speexdsp/CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/smallft.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/smallft.c.i"
	cd /home/ubuntu20/Downloads/VoIP-software-master/build/src/mumble/speexdsp && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ubuntu20/Downloads/VoIP-software-master/3rdparty/speexdsp/libspeexdsp/smallft.c > CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/smallft.c.i

src/mumble/speexdsp/CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/smallft.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/smallft.c.s"
	cd /home/ubuntu20/Downloads/VoIP-software-master/build/src/mumble/speexdsp && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ubuntu20/Downloads/VoIP-software-master/3rdparty/speexdsp/libspeexdsp/smallft.c -o CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/smallft.c.s

# Object files for target speexdsp
speexdsp_OBJECTS = \
"CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/fftwrap.c.o" \
"CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/filterbank.c.o" \
"CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/jitter.c.o" \
"CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/mdf.c.o" \
"CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/preprocess.c.o" \
"CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/resample.c.o" \
"CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/scal.c.o" \
"CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/smallft.c.o"

# External object files for target speexdsp
speexdsp_EXTERNAL_OBJECTS =

src/mumble/speexdsp/libspeexdsp.a: src/mumble/speexdsp/CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/fftwrap.c.o
src/mumble/speexdsp/libspeexdsp.a: src/mumble/speexdsp/CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/filterbank.c.o
src/mumble/speexdsp/libspeexdsp.a: src/mumble/speexdsp/CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/jitter.c.o
src/mumble/speexdsp/libspeexdsp.a: src/mumble/speexdsp/CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/mdf.c.o
src/mumble/speexdsp/libspeexdsp.a: src/mumble/speexdsp/CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/preprocess.c.o
src/mumble/speexdsp/libspeexdsp.a: src/mumble/speexdsp/CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/resample.c.o
src/mumble/speexdsp/libspeexdsp.a: src/mumble/speexdsp/CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/scal.c.o
src/mumble/speexdsp/libspeexdsp.a: src/mumble/speexdsp/CMakeFiles/speexdsp.dir/__/speexdsp/libspeexdsp/smallft.c.o
src/mumble/speexdsp/libspeexdsp.a: src/mumble/speexdsp/CMakeFiles/speexdsp.dir/build.make
src/mumble/speexdsp/libspeexdsp.a: src/mumble/speexdsp/CMakeFiles/speexdsp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ubuntu20/Downloads/VoIP-software-master/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking C static library libspeexdsp.a"
	cd /home/ubuntu20/Downloads/VoIP-software-master/build/src/mumble/speexdsp && $(CMAKE_COMMAND) -P CMakeFiles/speexdsp.dir/cmake_clean_target.cmake
	cd /home/ubuntu20/Downloads/VoIP-software-master/build/src/mumble/speexdsp && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/speexdsp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/mumble/speexdsp/CMakeFiles/speexdsp.dir/build: src/mumble/speexdsp/libspeexdsp.a

.PHONY : src/mumble/speexdsp/CMakeFiles/speexdsp.dir/build

src/mumble/speexdsp/CMakeFiles/speexdsp.dir/clean:
	cd /home/ubuntu20/Downloads/VoIP-software-master/build/src/mumble/speexdsp && $(CMAKE_COMMAND) -P CMakeFiles/speexdsp.dir/cmake_clean.cmake
.PHONY : src/mumble/speexdsp/CMakeFiles/speexdsp.dir/clean

src/mumble/speexdsp/CMakeFiles/speexdsp.dir/depend:
	cd /home/ubuntu20/Downloads/VoIP-software-master/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ubuntu20/Downloads/VoIP-software-master /home/ubuntu20/Downloads/VoIP-software-master/3rdparty/speexdsp-build /home/ubuntu20/Downloads/VoIP-software-master/build /home/ubuntu20/Downloads/VoIP-software-master/build/src/mumble/speexdsp /home/ubuntu20/Downloads/VoIP-software-master/build/src/mumble/speexdsp/CMakeFiles/speexdsp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/mumble/speexdsp/CMakeFiles/speexdsp.dir/depend

