# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /home/zoo868e/chatroom

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/zoo868e/chatroom

# Include any dependencies generated for this target.
include src/CMakeFiles/Chatroom.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/Chatroom.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/Chatroom.dir/flags.make

src/CMakeFiles/Chatroom.dir/__/chatroom.cpp.o: src/CMakeFiles/Chatroom.dir/flags.make
src/CMakeFiles/Chatroom.dir/__/chatroom.cpp.o: chatroom.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zoo868e/chatroom/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/Chatroom.dir/__/chatroom.cpp.o"
	cd /home/zoo868e/chatroom/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Chatroom.dir/__/chatroom.cpp.o -c /home/zoo868e/chatroom/chatroom.cpp

src/CMakeFiles/Chatroom.dir/__/chatroom.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Chatroom.dir/__/chatroom.cpp.i"
	cd /home/zoo868e/chatroom/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zoo868e/chatroom/chatroom.cpp > CMakeFiles/Chatroom.dir/__/chatroom.cpp.i

src/CMakeFiles/Chatroom.dir/__/chatroom.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Chatroom.dir/__/chatroom.cpp.s"
	cd /home/zoo868e/chatroom/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zoo868e/chatroom/chatroom.cpp -o CMakeFiles/Chatroom.dir/__/chatroom.cpp.s

src/CMakeFiles/Chatroom.dir/__/chatroom.cpp.o.requires:

.PHONY : src/CMakeFiles/Chatroom.dir/__/chatroom.cpp.o.requires

src/CMakeFiles/Chatroom.dir/__/chatroom.cpp.o.provides: src/CMakeFiles/Chatroom.dir/__/chatroom.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/Chatroom.dir/build.make src/CMakeFiles/Chatroom.dir/__/chatroom.cpp.o.provides.build
.PHONY : src/CMakeFiles/Chatroom.dir/__/chatroom.cpp.o.provides

src/CMakeFiles/Chatroom.dir/__/chatroom.cpp.o.provides.build: src/CMakeFiles/Chatroom.dir/__/chatroom.cpp.o


src/CMakeFiles/Chatroom.dir/connection_common.cpp.o: src/CMakeFiles/Chatroom.dir/flags.make
src/CMakeFiles/Chatroom.dir/connection_common.cpp.o: src/connection_common.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zoo868e/chatroom/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/Chatroom.dir/connection_common.cpp.o"
	cd /home/zoo868e/chatroom/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Chatroom.dir/connection_common.cpp.o -c /home/zoo868e/chatroom/src/connection_common.cpp

src/CMakeFiles/Chatroom.dir/connection_common.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Chatroom.dir/connection_common.cpp.i"
	cd /home/zoo868e/chatroom/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zoo868e/chatroom/src/connection_common.cpp > CMakeFiles/Chatroom.dir/connection_common.cpp.i

src/CMakeFiles/Chatroom.dir/connection_common.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Chatroom.dir/connection_common.cpp.s"
	cd /home/zoo868e/chatroom/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zoo868e/chatroom/src/connection_common.cpp -o CMakeFiles/Chatroom.dir/connection_common.cpp.s

src/CMakeFiles/Chatroom.dir/connection_common.cpp.o.requires:

.PHONY : src/CMakeFiles/Chatroom.dir/connection_common.cpp.o.requires

src/CMakeFiles/Chatroom.dir/connection_common.cpp.o.provides: src/CMakeFiles/Chatroom.dir/connection_common.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/Chatroom.dir/build.make src/CMakeFiles/Chatroom.dir/connection_common.cpp.o.provides.build
.PHONY : src/CMakeFiles/Chatroom.dir/connection_common.cpp.o.provides

src/CMakeFiles/Chatroom.dir/connection_common.cpp.o.provides.build: src/CMakeFiles/Chatroom.dir/connection_common.cpp.o


# Object files for target Chatroom
Chatroom_OBJECTS = \
"CMakeFiles/Chatroom.dir/__/chatroom.cpp.o" \
"CMakeFiles/Chatroom.dir/connection_common.cpp.o"

# External object files for target Chatroom
Chatroom_EXTERNAL_OBJECTS =

src/Chatroom: src/CMakeFiles/Chatroom.dir/__/chatroom.cpp.o
src/Chatroom: src/CMakeFiles/Chatroom.dir/connection_common.cpp.o
src/Chatroom: src/CMakeFiles/Chatroom.dir/build.make
src/Chatroom: src/CMakeFiles/Chatroom.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/zoo868e/chatroom/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Chatroom"
	cd /home/zoo868e/chatroom/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Chatroom.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/Chatroom.dir/build: src/Chatroom

.PHONY : src/CMakeFiles/Chatroom.dir/build

src/CMakeFiles/Chatroom.dir/requires: src/CMakeFiles/Chatroom.dir/__/chatroom.cpp.o.requires
src/CMakeFiles/Chatroom.dir/requires: src/CMakeFiles/Chatroom.dir/connection_common.cpp.o.requires

.PHONY : src/CMakeFiles/Chatroom.dir/requires

src/CMakeFiles/Chatroom.dir/clean:
	cd /home/zoo868e/chatroom/src && $(CMAKE_COMMAND) -P CMakeFiles/Chatroom.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/Chatroom.dir/clean

src/CMakeFiles/Chatroom.dir/depend:
	cd /home/zoo868e/chatroom && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/zoo868e/chatroom /home/zoo868e/chatroom/src /home/zoo868e/chatroom /home/zoo868e/chatroom/src /home/zoo868e/chatroom/src/CMakeFiles/Chatroom.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/Chatroom.dir/depend
