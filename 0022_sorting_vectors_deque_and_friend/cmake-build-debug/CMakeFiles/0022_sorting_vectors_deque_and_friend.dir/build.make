# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.21

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/sla-ppy/myFolder/repos/CLionProjects/0022_sorting_vectors_deque_and_friend

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sla-ppy/myFolder/repos/CLionProjects/0022_sorting_vectors_deque_and_friend/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/0022_sorting_vectors_deque_and_friend.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/0022_sorting_vectors_deque_and_friend.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/0022_sorting_vectors_deque_and_friend.dir/flags.make

CMakeFiles/0022_sorting_vectors_deque_and_friend.dir/main.cpp.o: CMakeFiles/0022_sorting_vectors_deque_and_friend.dir/flags.make
CMakeFiles/0022_sorting_vectors_deque_and_friend.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sla-ppy/myFolder/repos/CLionProjects/0022_sorting_vectors_deque_and_friend/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/0022_sorting_vectors_deque_and_friend.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/0022_sorting_vectors_deque_and_friend.dir/main.cpp.o -c /home/sla-ppy/myFolder/repos/CLionProjects/0022_sorting_vectors_deque_and_friend/main.cpp

CMakeFiles/0022_sorting_vectors_deque_and_friend.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/0022_sorting_vectors_deque_and_friend.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sla-ppy/myFolder/repos/CLionProjects/0022_sorting_vectors_deque_and_friend/main.cpp > CMakeFiles/0022_sorting_vectors_deque_and_friend.dir/main.cpp.i

CMakeFiles/0022_sorting_vectors_deque_and_friend.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/0022_sorting_vectors_deque_and_friend.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sla-ppy/myFolder/repos/CLionProjects/0022_sorting_vectors_deque_and_friend/main.cpp -o CMakeFiles/0022_sorting_vectors_deque_and_friend.dir/main.cpp.s

# Object files for target 0022_sorting_vectors_deque_and_friend
0022_sorting_vectors_deque_and_friend_OBJECTS = \
"CMakeFiles/0022_sorting_vectors_deque_and_friend.dir/main.cpp.o"

# External object files for target 0022_sorting_vectors_deque_and_friend
0022_sorting_vectors_deque_and_friend_EXTERNAL_OBJECTS =

0022_sorting_vectors_deque_and_friend: CMakeFiles/0022_sorting_vectors_deque_and_friend.dir/main.cpp.o
0022_sorting_vectors_deque_and_friend: CMakeFiles/0022_sorting_vectors_deque_and_friend.dir/build.make
0022_sorting_vectors_deque_and_friend: CMakeFiles/0022_sorting_vectors_deque_and_friend.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sla-ppy/myFolder/repos/CLionProjects/0022_sorting_vectors_deque_and_friend/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 0022_sorting_vectors_deque_and_friend"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/0022_sorting_vectors_deque_and_friend.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/0022_sorting_vectors_deque_and_friend.dir/build: 0022_sorting_vectors_deque_and_friend
.PHONY : CMakeFiles/0022_sorting_vectors_deque_and_friend.dir/build

CMakeFiles/0022_sorting_vectors_deque_and_friend.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/0022_sorting_vectors_deque_and_friend.dir/cmake_clean.cmake
.PHONY : CMakeFiles/0022_sorting_vectors_deque_and_friend.dir/clean

CMakeFiles/0022_sorting_vectors_deque_and_friend.dir/depend:
	cd /home/sla-ppy/myFolder/repos/CLionProjects/0022_sorting_vectors_deque_and_friend/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sla-ppy/myFolder/repos/CLionProjects/0022_sorting_vectors_deque_and_friend /home/sla-ppy/myFolder/repos/CLionProjects/0022_sorting_vectors_deque_and_friend /home/sla-ppy/myFolder/repos/CLionProjects/0022_sorting_vectors_deque_and_friend/cmake-build-debug /home/sla-ppy/myFolder/repos/CLionProjects/0022_sorting_vectors_deque_and_friend/cmake-build-debug /home/sla-ppy/myFolder/repos/CLionProjects/0022_sorting_vectors_deque_and_friend/cmake-build-debug/CMakeFiles/0022_sorting_vectors_deque_and_friend.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/0022_sorting_vectors_deque_and_friend.dir/depend

