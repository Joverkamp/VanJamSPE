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
CMAKE_SOURCE_DIR = /home/overjam/ta/VanJamSPE

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/overjam/ta/VanJamSPE/build

# Include any dependencies generated for this target.
include CMakeFiles/VanJamSPE.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/VanJamSPE.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/VanJamSPE.dir/flags.make

CMakeFiles/VanJamSPE.dir/src/Operator.cpp.o: CMakeFiles/VanJamSPE.dir/flags.make
CMakeFiles/VanJamSPE.dir/src/Operator.cpp.o: ../src/Operator.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/overjam/ta/VanJamSPE/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/VanJamSPE.dir/src/Operator.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/VanJamSPE.dir/src/Operator.cpp.o -c /home/overjam/ta/VanJamSPE/src/Operator.cpp

CMakeFiles/VanJamSPE.dir/src/Operator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/VanJamSPE.dir/src/Operator.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/overjam/ta/VanJamSPE/src/Operator.cpp > CMakeFiles/VanJamSPE.dir/src/Operator.cpp.i

CMakeFiles/VanJamSPE.dir/src/Operator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/VanJamSPE.dir/src/Operator.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/overjam/ta/VanJamSPE/src/Operator.cpp -o CMakeFiles/VanJamSPE.dir/src/Operator.cpp.s

CMakeFiles/VanJamSPE.dir/src/Engine.cpp.o: CMakeFiles/VanJamSPE.dir/flags.make
CMakeFiles/VanJamSPE.dir/src/Engine.cpp.o: ../src/Engine.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/overjam/ta/VanJamSPE/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/VanJamSPE.dir/src/Engine.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/VanJamSPE.dir/src/Engine.cpp.o -c /home/overjam/ta/VanJamSPE/src/Engine.cpp

CMakeFiles/VanJamSPE.dir/src/Engine.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/VanJamSPE.dir/src/Engine.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/overjam/ta/VanJamSPE/src/Engine.cpp > CMakeFiles/VanJamSPE.dir/src/Engine.cpp.i

CMakeFiles/VanJamSPE.dir/src/Engine.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/VanJamSPE.dir/src/Engine.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/overjam/ta/VanJamSPE/src/Engine.cpp -o CMakeFiles/VanJamSPE.dir/src/Engine.cpp.s

# Object files for target VanJamSPE
VanJamSPE_OBJECTS = \
"CMakeFiles/VanJamSPE.dir/src/Operator.cpp.o" \
"CMakeFiles/VanJamSPE.dir/src/Engine.cpp.o"

# External object files for target VanJamSPE
VanJamSPE_EXTERNAL_OBJECTS =

libVanJamSPE.a: CMakeFiles/VanJamSPE.dir/src/Operator.cpp.o
libVanJamSPE.a: CMakeFiles/VanJamSPE.dir/src/Engine.cpp.o
libVanJamSPE.a: CMakeFiles/VanJamSPE.dir/build.make
libVanJamSPE.a: CMakeFiles/VanJamSPE.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/overjam/ta/VanJamSPE/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library libVanJamSPE.a"
	$(CMAKE_COMMAND) -P CMakeFiles/VanJamSPE.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/VanJamSPE.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/VanJamSPE.dir/build: libVanJamSPE.a

.PHONY : CMakeFiles/VanJamSPE.dir/build

CMakeFiles/VanJamSPE.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/VanJamSPE.dir/cmake_clean.cmake
.PHONY : CMakeFiles/VanJamSPE.dir/clean

CMakeFiles/VanJamSPE.dir/depend:
	cd /home/overjam/ta/VanJamSPE/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/overjam/ta/VanJamSPE /home/overjam/ta/VanJamSPE /home/overjam/ta/VanJamSPE/build /home/overjam/ta/VanJamSPE/build /home/overjam/ta/VanJamSPE/build/CMakeFiles/VanJamSPE.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/VanJamSPE.dir/depend

