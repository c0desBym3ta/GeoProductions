# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

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
CMAKE_COMMAND = /s3th/Documents/CLion-2017.1.2/clion-2017.1.2/bin/cmake/bin/cmake

# The command to remove a file.
RM = /s3th/Documents/CLion-2017.1.2/clion-2017.1.2/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/s3th/GeoPro

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/s3th/GeoPro/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/GeoPro.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/GeoPro.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/GeoPro.dir/flags.make

CMakeFiles/GeoPro.dir/main.cpp.o: CMakeFiles/GeoPro.dir/flags.make
CMakeFiles/GeoPro.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/s3th/GeoPro/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/GeoPro.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GeoPro.dir/main.cpp.o -c /home/s3th/GeoPro/main.cpp

CMakeFiles/GeoPro.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GeoPro.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/s3th/GeoPro/main.cpp > CMakeFiles/GeoPro.dir/main.cpp.i

CMakeFiles/GeoPro.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GeoPro.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/s3th/GeoPro/main.cpp -o CMakeFiles/GeoPro.dir/main.cpp.s

CMakeFiles/GeoPro.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/GeoPro.dir/main.cpp.o.requires

CMakeFiles/GeoPro.dir/main.cpp.o.provides: CMakeFiles/GeoPro.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/GeoPro.dir/build.make CMakeFiles/GeoPro.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/GeoPro.dir/main.cpp.o.provides

CMakeFiles/GeoPro.dir/main.cpp.o.provides.build: CMakeFiles/GeoPro.dir/main.cpp.o


CMakeFiles/GeoPro.dir/Book.cpp.o: CMakeFiles/GeoPro.dir/flags.make
CMakeFiles/GeoPro.dir/Book.cpp.o: ../Book.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/s3th/GeoPro/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/GeoPro.dir/Book.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GeoPro.dir/Book.cpp.o -c /home/s3th/GeoPro/Book.cpp

CMakeFiles/GeoPro.dir/Book.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GeoPro.dir/Book.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/s3th/GeoPro/Book.cpp > CMakeFiles/GeoPro.dir/Book.cpp.i

CMakeFiles/GeoPro.dir/Book.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GeoPro.dir/Book.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/s3th/GeoPro/Book.cpp -o CMakeFiles/GeoPro.dir/Book.cpp.s

CMakeFiles/GeoPro.dir/Book.cpp.o.requires:

.PHONY : CMakeFiles/GeoPro.dir/Book.cpp.o.requires

CMakeFiles/GeoPro.dir/Book.cpp.o.provides: CMakeFiles/GeoPro.dir/Book.cpp.o.requires
	$(MAKE) -f CMakeFiles/GeoPro.dir/build.make CMakeFiles/GeoPro.dir/Book.cpp.o.provides.build
.PHONY : CMakeFiles/GeoPro.dir/Book.cpp.o.provides

CMakeFiles/GeoPro.dir/Book.cpp.o.provides.build: CMakeFiles/GeoPro.dir/Book.cpp.o


CMakeFiles/GeoPro.dir/testMain.cpp.o: CMakeFiles/GeoPro.dir/flags.make
CMakeFiles/GeoPro.dir/testMain.cpp.o: ../testMain.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/s3th/GeoPro/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/GeoPro.dir/testMain.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GeoPro.dir/testMain.cpp.o -c /home/s3th/GeoPro/testMain.cpp

CMakeFiles/GeoPro.dir/testMain.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GeoPro.dir/testMain.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/s3th/GeoPro/testMain.cpp > CMakeFiles/GeoPro.dir/testMain.cpp.i

CMakeFiles/GeoPro.dir/testMain.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GeoPro.dir/testMain.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/s3th/GeoPro/testMain.cpp -o CMakeFiles/GeoPro.dir/testMain.cpp.s

CMakeFiles/GeoPro.dir/testMain.cpp.o.requires:

.PHONY : CMakeFiles/GeoPro.dir/testMain.cpp.o.requires

CMakeFiles/GeoPro.dir/testMain.cpp.o.provides: CMakeFiles/GeoPro.dir/testMain.cpp.o.requires
	$(MAKE) -f CMakeFiles/GeoPro.dir/build.make CMakeFiles/GeoPro.dir/testMain.cpp.o.provides.build
.PHONY : CMakeFiles/GeoPro.dir/testMain.cpp.o.provides

CMakeFiles/GeoPro.dir/testMain.cpp.o.provides.build: CMakeFiles/GeoPro.dir/testMain.cpp.o


# Object files for target GeoPro
GeoPro_OBJECTS = \
"CMakeFiles/GeoPro.dir/main.cpp.o" \
"CMakeFiles/GeoPro.dir/Book.cpp.o" \
"CMakeFiles/GeoPro.dir/testMain.cpp.o"

# External object files for target GeoPro
GeoPro_EXTERNAL_OBJECTS =

GeoPro: CMakeFiles/GeoPro.dir/main.cpp.o
GeoPro: CMakeFiles/GeoPro.dir/Book.cpp.o
GeoPro: CMakeFiles/GeoPro.dir/testMain.cpp.o
GeoPro: CMakeFiles/GeoPro.dir/build.make
GeoPro: CMakeFiles/GeoPro.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/s3th/GeoPro/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable GeoPro"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/GeoPro.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/GeoPro.dir/build: GeoPro

.PHONY : CMakeFiles/GeoPro.dir/build

CMakeFiles/GeoPro.dir/requires: CMakeFiles/GeoPro.dir/main.cpp.o.requires
CMakeFiles/GeoPro.dir/requires: CMakeFiles/GeoPro.dir/Book.cpp.o.requires
CMakeFiles/GeoPro.dir/requires: CMakeFiles/GeoPro.dir/testMain.cpp.o.requires

.PHONY : CMakeFiles/GeoPro.dir/requires

CMakeFiles/GeoPro.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/GeoPro.dir/cmake_clean.cmake
.PHONY : CMakeFiles/GeoPro.dir/clean

CMakeFiles/GeoPro.dir/depend:
	cd /home/s3th/GeoPro/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/s3th/GeoPro /home/s3th/GeoPro /home/s3th/GeoPro/cmake-build-debug /home/s3th/GeoPro/cmake-build-debug /home/s3th/GeoPro/cmake-build-debug/CMakeFiles/GeoPro.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/GeoPro.dir/depend

