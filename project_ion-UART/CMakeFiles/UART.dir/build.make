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
CMAKE_SOURCE_DIR = /home/pi/UART

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pi/UART

# Include any dependencies generated for this target.
include CMakeFiles/UART.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/UART.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/UART.dir/flags.make

CMakeFiles/UART.dir/UART.cpp.o: CMakeFiles/UART.dir/flags.make
CMakeFiles/UART.dir/UART.cpp.o: UART.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/pi/UART/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/UART.dir/UART.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/UART.dir/UART.cpp.o -c /home/pi/UART/UART.cpp

CMakeFiles/UART.dir/UART.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/UART.dir/UART.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/pi/UART/UART.cpp > CMakeFiles/UART.dir/UART.cpp.i

CMakeFiles/UART.dir/UART.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/UART.dir/UART.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/pi/UART/UART.cpp -o CMakeFiles/UART.dir/UART.cpp.s

CMakeFiles/UART.dir/UART.cpp.o.requires:
.PHONY : CMakeFiles/UART.dir/UART.cpp.o.requires

CMakeFiles/UART.dir/UART.cpp.o.provides: CMakeFiles/UART.dir/UART.cpp.o.requires
	$(MAKE) -f CMakeFiles/UART.dir/build.make CMakeFiles/UART.dir/UART.cpp.o.provides.build
.PHONY : CMakeFiles/UART.dir/UART.cpp.o.provides

CMakeFiles/UART.dir/UART.cpp.o.provides.build: CMakeFiles/UART.dir/UART.cpp.o

# Object files for target UART
UART_OBJECTS = \
"CMakeFiles/UART.dir/UART.cpp.o"

# External object files for target UART
UART_EXTERNAL_OBJECTS =

UART: CMakeFiles/UART.dir/UART.cpp.o
UART: CMakeFiles/UART.dir/build.make
UART: CMakeFiles/UART.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable UART"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/UART.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/UART.dir/build: UART
.PHONY : CMakeFiles/UART.dir/build

CMakeFiles/UART.dir/requires: CMakeFiles/UART.dir/UART.cpp.o.requires
.PHONY : CMakeFiles/UART.dir/requires

CMakeFiles/UART.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/UART.dir/cmake_clean.cmake
.PHONY : CMakeFiles/UART.dir/clean

CMakeFiles/UART.dir/depend:
	cd /home/pi/UART && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pi/UART /home/pi/UART /home/pi/UART /home/pi/UART /home/pi/UART/CMakeFiles/UART.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/UART.dir/depend

