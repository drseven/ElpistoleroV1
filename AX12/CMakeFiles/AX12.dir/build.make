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
CMAKE_SOURCE_DIR = /home/pi/AX12

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pi/AX12

# Include any dependencies generated for this target.
include CMakeFiles/AX12.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/AX12.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/AX12.dir/flags.make

CMakeFiles/AX12.dir/AX12.cpp.o: CMakeFiles/AX12.dir/flags.make
CMakeFiles/AX12.dir/AX12.cpp.o: AX12.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/pi/AX12/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/AX12.dir/AX12.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/AX12.dir/AX12.cpp.o -c /home/pi/AX12/AX12.cpp

CMakeFiles/AX12.dir/AX12.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AX12.dir/AX12.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/pi/AX12/AX12.cpp > CMakeFiles/AX12.dir/AX12.cpp.i

CMakeFiles/AX12.dir/AX12.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AX12.dir/AX12.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/pi/AX12/AX12.cpp -o CMakeFiles/AX12.dir/AX12.cpp.s

CMakeFiles/AX12.dir/AX12.cpp.o.requires:
.PHONY : CMakeFiles/AX12.dir/AX12.cpp.o.requires

CMakeFiles/AX12.dir/AX12.cpp.o.provides: CMakeFiles/AX12.dir/AX12.cpp.o.requires
	$(MAKE) -f CMakeFiles/AX12.dir/build.make CMakeFiles/AX12.dir/AX12.cpp.o.provides.build
.PHONY : CMakeFiles/AX12.dir/AX12.cpp.o.provides

CMakeFiles/AX12.dir/AX12.cpp.o.provides.build: CMakeFiles/AX12.dir/AX12.cpp.o

# Object files for target AX12
AX12_OBJECTS = \
"CMakeFiles/AX12.dir/AX12.cpp.o"

# External object files for target AX12
AX12_EXTERNAL_OBJECTS =

AX12: CMakeFiles/AX12.dir/AX12.cpp.o
AX12: CMakeFiles/AX12.dir/build.make
AX12: CMakeFiles/AX12.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable AX12"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/AX12.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/AX12.dir/build: AX12
.PHONY : CMakeFiles/AX12.dir/build

CMakeFiles/AX12.dir/requires: CMakeFiles/AX12.dir/AX12.cpp.o.requires
.PHONY : CMakeFiles/AX12.dir/requires

CMakeFiles/AX12.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/AX12.dir/cmake_clean.cmake
.PHONY : CMakeFiles/AX12.dir/clean

CMakeFiles/AX12.dir/depend:
	cd /home/pi/AX12 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pi/AX12 /home/pi/AX12 /home/pi/AX12 /home/pi/AX12 /home/pi/AX12/CMakeFiles/AX12.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/AX12.dir/depend

