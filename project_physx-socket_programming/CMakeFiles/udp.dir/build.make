# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_SOURCE_DIR = /home/pi/udp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pi/udp

# Include any dependencies generated for this target.
include CMakeFiles/udp.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/udp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/udp.dir/flags.make

CMakeFiles/udp.dir/wifi.cpp.o: CMakeFiles/udp.dir/flags.make
CMakeFiles/udp.dir/wifi.cpp.o: wifi.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/pi/udp/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/udp.dir/wifi.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/udp.dir/wifi.cpp.o -c /home/pi/udp/wifi.cpp

CMakeFiles/udp.dir/wifi.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/udp.dir/wifi.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/pi/udp/wifi.cpp > CMakeFiles/udp.dir/wifi.cpp.i

CMakeFiles/udp.dir/wifi.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/udp.dir/wifi.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/pi/udp/wifi.cpp -o CMakeFiles/udp.dir/wifi.cpp.s

CMakeFiles/udp.dir/wifi.cpp.o.requires:
.PHONY : CMakeFiles/udp.dir/wifi.cpp.o.requires

CMakeFiles/udp.dir/wifi.cpp.o.provides: CMakeFiles/udp.dir/wifi.cpp.o.requires
	$(MAKE) -f CMakeFiles/udp.dir/build.make CMakeFiles/udp.dir/wifi.cpp.o.provides.build
.PHONY : CMakeFiles/udp.dir/wifi.cpp.o.provides

CMakeFiles/udp.dir/wifi.cpp.o.provides.build: CMakeFiles/udp.dir/wifi.cpp.o

# Object files for target udp
udp_OBJECTS = \
"CMakeFiles/udp.dir/wifi.cpp.o"

# External object files for target udp
udp_EXTERNAL_OBJECTS =

udp: CMakeFiles/udp.dir/wifi.cpp.o
udp: CMakeFiles/udp.dir/build.make
udp: CMakeFiles/udp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable udp"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/udp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/udp.dir/build: udp
.PHONY : CMakeFiles/udp.dir/build

CMakeFiles/udp.dir/requires: CMakeFiles/udp.dir/wifi.cpp.o.requires
.PHONY : CMakeFiles/udp.dir/requires

CMakeFiles/udp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/udp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/udp.dir/clean

CMakeFiles/udp.dir/depend:
	cd /home/pi/udp && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pi/udp /home/pi/udp /home/pi/udp /home/pi/udp /home/pi/udp/CMakeFiles/udp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/udp.dir/depend
