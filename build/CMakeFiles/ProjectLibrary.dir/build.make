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
CMAKE_SOURCE_DIR = "/mnt/d/Uczenie/AGH/III semestr/PPO/Miha/Lab_44"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/mnt/d/Uczenie/AGH/III semestr/PPO/Miha/Lab_44/build"

# Include any dependencies generated for this target.
include CMakeFiles/ProjectLibrary.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ProjectLibrary.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ProjectLibrary.dir/flags.make

CMakeFiles/ProjectLibrary.dir/src/node.cpp.o: CMakeFiles/ProjectLibrary.dir/flags.make
CMakeFiles/ProjectLibrary.dir/src/node.cpp.o: ../src/node.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/d/Uczenie/AGH/III semestr/PPO/Miha/Lab_44/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ProjectLibrary.dir/src/node.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ProjectLibrary.dir/src/node.cpp.o -c "/mnt/d/Uczenie/AGH/III semestr/PPO/Miha/Lab_44/src/node.cpp"

CMakeFiles/ProjectLibrary.dir/src/node.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ProjectLibrary.dir/src/node.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/mnt/d/Uczenie/AGH/III semestr/PPO/Miha/Lab_44/src/node.cpp" > CMakeFiles/ProjectLibrary.dir/src/node.cpp.i

CMakeFiles/ProjectLibrary.dir/src/node.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ProjectLibrary.dir/src/node.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/mnt/d/Uczenie/AGH/III semestr/PPO/Miha/Lab_44/src/node.cpp" -o CMakeFiles/ProjectLibrary.dir/src/node.cpp.s

CMakeFiles/ProjectLibrary.dir/src/twoWaysList.cpp.o: CMakeFiles/ProjectLibrary.dir/flags.make
CMakeFiles/ProjectLibrary.dir/src/twoWaysList.cpp.o: ../src/twoWaysList.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/d/Uczenie/AGH/III semestr/PPO/Miha/Lab_44/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ProjectLibrary.dir/src/twoWaysList.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ProjectLibrary.dir/src/twoWaysList.cpp.o -c "/mnt/d/Uczenie/AGH/III semestr/PPO/Miha/Lab_44/src/twoWaysList.cpp"

CMakeFiles/ProjectLibrary.dir/src/twoWaysList.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ProjectLibrary.dir/src/twoWaysList.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/mnt/d/Uczenie/AGH/III semestr/PPO/Miha/Lab_44/src/twoWaysList.cpp" > CMakeFiles/ProjectLibrary.dir/src/twoWaysList.cpp.i

CMakeFiles/ProjectLibrary.dir/src/twoWaysList.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ProjectLibrary.dir/src/twoWaysList.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/mnt/d/Uczenie/AGH/III semestr/PPO/Miha/Lab_44/src/twoWaysList.cpp" -o CMakeFiles/ProjectLibrary.dir/src/twoWaysList.cpp.s

# Object files for target ProjectLibrary
ProjectLibrary_OBJECTS = \
"CMakeFiles/ProjectLibrary.dir/src/node.cpp.o" \
"CMakeFiles/ProjectLibrary.dir/src/twoWaysList.cpp.o"

# External object files for target ProjectLibrary
ProjectLibrary_EXTERNAL_OBJECTS =

libProjectLibrary.so: CMakeFiles/ProjectLibrary.dir/src/node.cpp.o
libProjectLibrary.so: CMakeFiles/ProjectLibrary.dir/src/twoWaysList.cpp.o
libProjectLibrary.so: CMakeFiles/ProjectLibrary.dir/build.make
libProjectLibrary.so: CMakeFiles/ProjectLibrary.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/mnt/d/Uczenie/AGH/III semestr/PPO/Miha/Lab_44/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX shared library libProjectLibrary.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ProjectLibrary.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ProjectLibrary.dir/build: libProjectLibrary.so

.PHONY : CMakeFiles/ProjectLibrary.dir/build

CMakeFiles/ProjectLibrary.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ProjectLibrary.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ProjectLibrary.dir/clean

CMakeFiles/ProjectLibrary.dir/depend:
	cd "/mnt/d/Uczenie/AGH/III semestr/PPO/Miha/Lab_44/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/mnt/d/Uczenie/AGH/III semestr/PPO/Miha/Lab_44" "/mnt/d/Uczenie/AGH/III semestr/PPO/Miha/Lab_44" "/mnt/d/Uczenie/AGH/III semestr/PPO/Miha/Lab_44/build" "/mnt/d/Uczenie/AGH/III semestr/PPO/Miha/Lab_44/build" "/mnt/d/Uczenie/AGH/III semestr/PPO/Miha/Lab_44/build/CMakeFiles/ProjectLibrary.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/ProjectLibrary.dir/depend
