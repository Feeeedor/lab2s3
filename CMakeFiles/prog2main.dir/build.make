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
CMAKE_SOURCE_DIR = /home/fedor/hz/lab2s3/lab2s3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/fedor/hz/lab2s3/lab2s3

# Include any dependencies generated for this target.
include CMakeFiles/prog2main.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/prog2main.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/prog2main.dir/flags.make

CMakeFiles/prog2main.dir/prog2main.cpp.o: CMakeFiles/prog2main.dir/flags.make
CMakeFiles/prog2main.dir/prog2main.cpp.o: prog2main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fedor/hz/lab2s3/lab2s3/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/prog2main.dir/prog2main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/prog2main.dir/prog2main.cpp.o -c /home/fedor/hz/lab2s3/lab2s3/prog2main.cpp

CMakeFiles/prog2main.dir/prog2main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/prog2main.dir/prog2main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fedor/hz/lab2s3/lab2s3/prog2main.cpp > CMakeFiles/prog2main.dir/prog2main.cpp.i

CMakeFiles/prog2main.dir/prog2main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/prog2main.dir/prog2main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fedor/hz/lab2s3/lab2s3/prog2main.cpp -o CMakeFiles/prog2main.dir/prog2main.cpp.s

# Object files for target prog2main
prog2main_OBJECTS = \
"CMakeFiles/prog2main.dir/prog2main.cpp.o"

# External object files for target prog2main
prog2main_EXTERNAL_OBJECTS =

prog2main: CMakeFiles/prog2main.dir/prog2main.cpp.o
prog2main: CMakeFiles/prog2main.dir/build.make
prog2main: CMakeFiles/prog2main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/fedor/hz/lab2s3/lab2s3/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable prog2main"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/prog2main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/prog2main.dir/build: prog2main

.PHONY : CMakeFiles/prog2main.dir/build

CMakeFiles/prog2main.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/prog2main.dir/cmake_clean.cmake
.PHONY : CMakeFiles/prog2main.dir/clean

CMakeFiles/prog2main.dir/depend:
	cd /home/fedor/hz/lab2s3/lab2s3 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/fedor/hz/lab2s3/lab2s3 /home/fedor/hz/lab2s3/lab2s3 /home/fedor/hz/lab2s3/lab2s3 /home/fedor/hz/lab2s3/lab2s3 /home/fedor/hz/lab2s3/lab2s3/CMakeFiles/prog2main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/prog2main.dir/depend
