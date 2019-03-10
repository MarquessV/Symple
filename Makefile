# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.13.3/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.13.3/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/marquess/Repos/marquessv/Symple/Builds/CLion

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/marquess/Repos/marquessv/Symple

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/local/Cellar/cmake/3.13.3/bin/cmake -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	/usr/local/Cellar/cmake/3.13.3/bin/ccmake -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /Users/marquess/Repos/marquessv/Symple/CMakeFiles /Users/marquess/Repos/marquessv/Symple/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /Users/marquess/Repos/marquessv/Symple/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named AU

# Build rule for target.
AU: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 AU
.PHONY : AU

# fast build rule for target.
AU/fast:
	$(MAKE) -f CMakeFiles/AU.dir/build.make CMakeFiles/AU.dir/build
.PHONY : AU/fast

#=============================================================================
# Target rules for targets named STANDALONE_PLUGIN

# Build rule for target.
STANDALONE_PLUGIN: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 STANDALONE_PLUGIN
.PHONY : STANDALONE_PLUGIN

# fast build rule for target.
STANDALONE_PLUGIN/fast:
	$(MAKE) -f CMakeFiles/STANDALONE_PLUGIN.dir/build.make CMakeFiles/STANDALONE_PLUGIN.dir/build
.PHONY : STANDALONE_PLUGIN/fast

#=============================================================================
# Target rules for targets named SHARED_CODE

# Build rule for target.
SHARED_CODE: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 SHARED_CODE
.PHONY : SHARED_CODE

# fast build rule for target.
SHARED_CODE/fast:
	$(MAKE) -f CMakeFiles/SHARED_CODE.dir/build.make CMakeFiles/SHARED_CODE.dir/build
.PHONY : SHARED_CODE/fast

#=============================================================================
# Target rules for targets named VST3

# Build rule for target.
VST3: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 VST3
.PHONY : VST3

# fast build rule for target.
VST3/fast:
	$(MAKE) -f CMakeFiles/VST3.dir/build.make CMakeFiles/VST3.dir/build
.PHONY : VST3/fast

JuceLibraryCode/include_juce_audio_basics.o: JuceLibraryCode/include_juce_audio_basics.mm.o

.PHONY : JuceLibraryCode/include_juce_audio_basics.o

# target to build an object file
JuceLibraryCode/include_juce_audio_basics.mm.o:
	$(MAKE) -f CMakeFiles/SHARED_CODE.dir/build.make CMakeFiles/SHARED_CODE.dir/JuceLibraryCode/include_juce_audio_basics.mm.o
.PHONY : JuceLibraryCode/include_juce_audio_basics.mm.o

JuceLibraryCode/include_juce_audio_basics.i: JuceLibraryCode/include_juce_audio_basics.mm.i

.PHONY : JuceLibraryCode/include_juce_audio_basics.i

# target to preprocess a source file
JuceLibraryCode/include_juce_audio_basics.mm.i:
	$(MAKE) -f CMakeFiles/SHARED_CODE.dir/build.make CMakeFiles/SHARED_CODE.dir/JuceLibraryCode/include_juce_audio_basics.mm.i
.PHONY : JuceLibraryCode/include_juce_audio_basics.mm.i

JuceLibraryCode/include_juce_audio_basics.s: JuceLibraryCode/include_juce_audio_basics.mm.s

.PHONY : JuceLibraryCode/include_juce_audio_basics.s

# target to generate assembly for a file
JuceLibraryCode/include_juce_audio_basics.mm.s:
	$(MAKE) -f CMakeFiles/SHARED_CODE.dir/build.make CMakeFiles/SHARED_CODE.dir/JuceLibraryCode/include_juce_audio_basics.mm.s
.PHONY : JuceLibraryCode/include_juce_audio_basics.mm.s

JuceLibraryCode/include_juce_audio_devices.o: JuceLibraryCode/include_juce_audio_devices.mm.o

.PHONY : JuceLibraryCode/include_juce_audio_devices.o

# target to build an object file
JuceLibraryCode/include_juce_audio_devices.mm.o:
	$(MAKE) -f CMakeFiles/SHARED_CODE.dir/build.make CMakeFiles/SHARED_CODE.dir/JuceLibraryCode/include_juce_audio_devices.mm.o
.PHONY : JuceLibraryCode/include_juce_audio_devices.mm.o

JuceLibraryCode/include_juce_audio_devices.i: JuceLibraryCode/include_juce_audio_devices.mm.i

.PHONY : JuceLibraryCode/include_juce_audio_devices.i

# target to preprocess a source file
JuceLibraryCode/include_juce_audio_devices.mm.i:
	$(MAKE) -f CMakeFiles/SHARED_CODE.dir/build.make CMakeFiles/SHARED_CODE.dir/JuceLibraryCode/include_juce_audio_devices.mm.i
.PHONY : JuceLibraryCode/include_juce_audio_devices.mm.i

JuceLibraryCode/include_juce_audio_devices.s: JuceLibraryCode/include_juce_audio_devices.mm.s

.PHONY : JuceLibraryCode/include_juce_audio_devices.s

# target to generate assembly for a file
JuceLibraryCode/include_juce_audio_devices.mm.s:
	$(MAKE) -f CMakeFiles/SHARED_CODE.dir/build.make CMakeFiles/SHARED_CODE.dir/JuceLibraryCode/include_juce_audio_devices.mm.s
.PHONY : JuceLibraryCode/include_juce_audio_devices.mm.s

JuceLibraryCode/include_juce_audio_formats.o: JuceLibraryCode/include_juce_audio_formats.mm.o

.PHONY : JuceLibraryCode/include_juce_audio_formats.o

# target to build an object file
JuceLibraryCode/include_juce_audio_formats.mm.o:
	$(MAKE) -f CMakeFiles/SHARED_CODE.dir/build.make CMakeFiles/SHARED_CODE.dir/JuceLibraryCode/include_juce_audio_formats.mm.o
.PHONY : JuceLibraryCode/include_juce_audio_formats.mm.o

JuceLibraryCode/include_juce_audio_formats.i: JuceLibraryCode/include_juce_audio_formats.mm.i

.PHONY : JuceLibraryCode/include_juce_audio_formats.i

# target to preprocess a source file
JuceLibraryCode/include_juce_audio_formats.mm.i:
	$(MAKE) -f CMakeFiles/SHARED_CODE.dir/build.make CMakeFiles/SHARED_CODE.dir/JuceLibraryCode/include_juce_audio_formats.mm.i
.PHONY : JuceLibraryCode/include_juce_audio_formats.mm.i

JuceLibraryCode/include_juce_audio_formats.s: JuceLibraryCode/include_juce_audio_formats.mm.s

.PHONY : JuceLibraryCode/include_juce_audio_formats.s

# target to generate assembly for a file
JuceLibraryCode/include_juce_audio_formats.mm.s:
	$(MAKE) -f CMakeFiles/SHARED_CODE.dir/build.make CMakeFiles/SHARED_CODE.dir/JuceLibraryCode/include_juce_audio_formats.mm.s
.PHONY : JuceLibraryCode/include_juce_audio_formats.mm.s

JuceLibraryCode/include_juce_audio_plugin_client_AU_1.o: JuceLibraryCode/include_juce_audio_plugin_client_AU_1.mm.o

.PHONY : JuceLibraryCode/include_juce_audio_plugin_client_AU_1.o

# target to build an object file
JuceLibraryCode/include_juce_audio_plugin_client_AU_1.mm.o:
	$(MAKE) -f CMakeFiles/AU.dir/build.make CMakeFiles/AU.dir/JuceLibraryCode/include_juce_audio_plugin_client_AU_1.mm.o
.PHONY : JuceLibraryCode/include_juce_audio_plugin_client_AU_1.mm.o

JuceLibraryCode/include_juce_audio_plugin_client_AU_1.i: JuceLibraryCode/include_juce_audio_plugin_client_AU_1.mm.i

.PHONY : JuceLibraryCode/include_juce_audio_plugin_client_AU_1.i

# target to preprocess a source file
JuceLibraryCode/include_juce_audio_plugin_client_AU_1.mm.i:
	$(MAKE) -f CMakeFiles/AU.dir/build.make CMakeFiles/AU.dir/JuceLibraryCode/include_juce_audio_plugin_client_AU_1.mm.i
.PHONY : JuceLibraryCode/include_juce_audio_plugin_client_AU_1.mm.i

JuceLibraryCode/include_juce_audio_plugin_client_AU_1.s: JuceLibraryCode/include_juce_audio_plugin_client_AU_1.mm.s

.PHONY : JuceLibraryCode/include_juce_audio_plugin_client_AU_1.s

# target to generate assembly for a file
JuceLibraryCode/include_juce_audio_plugin_client_AU_1.mm.s:
	$(MAKE) -f CMakeFiles/AU.dir/build.make CMakeFiles/AU.dir/JuceLibraryCode/include_juce_audio_plugin_client_AU_1.mm.s
.PHONY : JuceLibraryCode/include_juce_audio_plugin_client_AU_1.mm.s

JuceLibraryCode/include_juce_audio_plugin_client_AU_2.o: JuceLibraryCode/include_juce_audio_plugin_client_AU_2.mm.o

.PHONY : JuceLibraryCode/include_juce_audio_plugin_client_AU_2.o

# target to build an object file
JuceLibraryCode/include_juce_audio_plugin_client_AU_2.mm.o:
	$(MAKE) -f CMakeFiles/AU.dir/build.make CMakeFiles/AU.dir/JuceLibraryCode/include_juce_audio_plugin_client_AU_2.mm.o
.PHONY : JuceLibraryCode/include_juce_audio_plugin_client_AU_2.mm.o

JuceLibraryCode/include_juce_audio_plugin_client_AU_2.i: JuceLibraryCode/include_juce_audio_plugin_client_AU_2.mm.i

.PHONY : JuceLibraryCode/include_juce_audio_plugin_client_AU_2.i

# target to preprocess a source file
JuceLibraryCode/include_juce_audio_plugin_client_AU_2.mm.i:
	$(MAKE) -f CMakeFiles/AU.dir/build.make CMakeFiles/AU.dir/JuceLibraryCode/include_juce_audio_plugin_client_AU_2.mm.i
.PHONY : JuceLibraryCode/include_juce_audio_plugin_client_AU_2.mm.i

JuceLibraryCode/include_juce_audio_plugin_client_AU_2.s: JuceLibraryCode/include_juce_audio_plugin_client_AU_2.mm.s

.PHONY : JuceLibraryCode/include_juce_audio_plugin_client_AU_2.s

# target to generate assembly for a file
JuceLibraryCode/include_juce_audio_plugin_client_AU_2.mm.s:
	$(MAKE) -f CMakeFiles/AU.dir/build.make CMakeFiles/AU.dir/JuceLibraryCode/include_juce_audio_plugin_client_AU_2.mm.s
.PHONY : JuceLibraryCode/include_juce_audio_plugin_client_AU_2.mm.s

JuceLibraryCode/include_juce_audio_plugin_client_Standalone.o: JuceLibraryCode/include_juce_audio_plugin_client_Standalone.cpp.o

.PHONY : JuceLibraryCode/include_juce_audio_plugin_client_Standalone.o

# target to build an object file
JuceLibraryCode/include_juce_audio_plugin_client_Standalone.cpp.o:
	$(MAKE) -f CMakeFiles/STANDALONE_PLUGIN.dir/build.make CMakeFiles/STANDALONE_PLUGIN.dir/JuceLibraryCode/include_juce_audio_plugin_client_Standalone.cpp.o
.PHONY : JuceLibraryCode/include_juce_audio_plugin_client_Standalone.cpp.o

JuceLibraryCode/include_juce_audio_plugin_client_Standalone.i: JuceLibraryCode/include_juce_audio_plugin_client_Standalone.cpp.i

.PHONY : JuceLibraryCode/include_juce_audio_plugin_client_Standalone.i

# target to preprocess a source file
JuceLibraryCode/include_juce_audio_plugin_client_Standalone.cpp.i:
	$(MAKE) -f CMakeFiles/STANDALONE_PLUGIN.dir/build.make CMakeFiles/STANDALONE_PLUGIN.dir/JuceLibraryCode/include_juce_audio_plugin_client_Standalone.cpp.i
.PHONY : JuceLibraryCode/include_juce_audio_plugin_client_Standalone.cpp.i

JuceLibraryCode/include_juce_audio_plugin_client_Standalone.s: JuceLibraryCode/include_juce_audio_plugin_client_Standalone.cpp.s

.PHONY : JuceLibraryCode/include_juce_audio_plugin_client_Standalone.s

# target to generate assembly for a file
JuceLibraryCode/include_juce_audio_plugin_client_Standalone.cpp.s:
	$(MAKE) -f CMakeFiles/STANDALONE_PLUGIN.dir/build.make CMakeFiles/STANDALONE_PLUGIN.dir/JuceLibraryCode/include_juce_audio_plugin_client_Standalone.cpp.s
.PHONY : JuceLibraryCode/include_juce_audio_plugin_client_Standalone.cpp.s

JuceLibraryCode/include_juce_audio_plugin_client_VST3.o: JuceLibraryCode/include_juce_audio_plugin_client_VST3.cpp.o

.PHONY : JuceLibraryCode/include_juce_audio_plugin_client_VST3.o

# target to build an object file
JuceLibraryCode/include_juce_audio_plugin_client_VST3.cpp.o:
	$(MAKE) -f CMakeFiles/VST3.dir/build.make CMakeFiles/VST3.dir/JuceLibraryCode/include_juce_audio_plugin_client_VST3.cpp.o
.PHONY : JuceLibraryCode/include_juce_audio_plugin_client_VST3.cpp.o

JuceLibraryCode/include_juce_audio_plugin_client_VST3.i: JuceLibraryCode/include_juce_audio_plugin_client_VST3.cpp.i

.PHONY : JuceLibraryCode/include_juce_audio_plugin_client_VST3.i

# target to preprocess a source file
JuceLibraryCode/include_juce_audio_plugin_client_VST3.cpp.i:
	$(MAKE) -f CMakeFiles/VST3.dir/build.make CMakeFiles/VST3.dir/JuceLibraryCode/include_juce_audio_plugin_client_VST3.cpp.i
.PHONY : JuceLibraryCode/include_juce_audio_plugin_client_VST3.cpp.i

JuceLibraryCode/include_juce_audio_plugin_client_VST3.s: JuceLibraryCode/include_juce_audio_plugin_client_VST3.cpp.s

.PHONY : JuceLibraryCode/include_juce_audio_plugin_client_VST3.s

# target to generate assembly for a file
JuceLibraryCode/include_juce_audio_plugin_client_VST3.cpp.s:
	$(MAKE) -f CMakeFiles/VST3.dir/build.make CMakeFiles/VST3.dir/JuceLibraryCode/include_juce_audio_plugin_client_VST3.cpp.s
.PHONY : JuceLibraryCode/include_juce_audio_plugin_client_VST3.cpp.s

JuceLibraryCode/include_juce_audio_plugin_client_VST_utils.o: JuceLibraryCode/include_juce_audio_plugin_client_VST_utils.mm.o

.PHONY : JuceLibraryCode/include_juce_audio_plugin_client_VST_utils.o

# target to build an object file
JuceLibraryCode/include_juce_audio_plugin_client_VST_utils.mm.o:
	$(MAKE) -f CMakeFiles/SHARED_CODE.dir/build.make CMakeFiles/SHARED_CODE.dir/JuceLibraryCode/include_juce_audio_plugin_client_VST_utils.mm.o
.PHONY : JuceLibraryCode/include_juce_audio_plugin_client_VST_utils.mm.o

JuceLibraryCode/include_juce_audio_plugin_client_VST_utils.i: JuceLibraryCode/include_juce_audio_plugin_client_VST_utils.mm.i

.PHONY : JuceLibraryCode/include_juce_audio_plugin_client_VST_utils.i

# target to preprocess a source file
JuceLibraryCode/include_juce_audio_plugin_client_VST_utils.mm.i:
	$(MAKE) -f CMakeFiles/SHARED_CODE.dir/build.make CMakeFiles/SHARED_CODE.dir/JuceLibraryCode/include_juce_audio_plugin_client_VST_utils.mm.i
.PHONY : JuceLibraryCode/include_juce_audio_plugin_client_VST_utils.mm.i

JuceLibraryCode/include_juce_audio_plugin_client_VST_utils.s: JuceLibraryCode/include_juce_audio_plugin_client_VST_utils.mm.s

.PHONY : JuceLibraryCode/include_juce_audio_plugin_client_VST_utils.s

# target to generate assembly for a file
JuceLibraryCode/include_juce_audio_plugin_client_VST_utils.mm.s:
	$(MAKE) -f CMakeFiles/SHARED_CODE.dir/build.make CMakeFiles/SHARED_CODE.dir/JuceLibraryCode/include_juce_audio_plugin_client_VST_utils.mm.s
.PHONY : JuceLibraryCode/include_juce_audio_plugin_client_VST_utils.mm.s

JuceLibraryCode/include_juce_audio_plugin_client_utils.o: JuceLibraryCode/include_juce_audio_plugin_client_utils.cpp.o

.PHONY : JuceLibraryCode/include_juce_audio_plugin_client_utils.o

# target to build an object file
JuceLibraryCode/include_juce_audio_plugin_client_utils.cpp.o:
	$(MAKE) -f CMakeFiles/SHARED_CODE.dir/build.make CMakeFiles/SHARED_CODE.dir/JuceLibraryCode/include_juce_audio_plugin_client_utils.cpp.o
.PHONY : JuceLibraryCode/include_juce_audio_plugin_client_utils.cpp.o

JuceLibraryCode/include_juce_audio_plugin_client_utils.i: JuceLibraryCode/include_juce_audio_plugin_client_utils.cpp.i

.PHONY : JuceLibraryCode/include_juce_audio_plugin_client_utils.i

# target to preprocess a source file
JuceLibraryCode/include_juce_audio_plugin_client_utils.cpp.i:
	$(MAKE) -f CMakeFiles/SHARED_CODE.dir/build.make CMakeFiles/SHARED_CODE.dir/JuceLibraryCode/include_juce_audio_plugin_client_utils.cpp.i
.PHONY : JuceLibraryCode/include_juce_audio_plugin_client_utils.cpp.i

JuceLibraryCode/include_juce_audio_plugin_client_utils.s: JuceLibraryCode/include_juce_audio_plugin_client_utils.cpp.s

.PHONY : JuceLibraryCode/include_juce_audio_plugin_client_utils.s

# target to generate assembly for a file
JuceLibraryCode/include_juce_audio_plugin_client_utils.cpp.s:
	$(MAKE) -f CMakeFiles/SHARED_CODE.dir/build.make CMakeFiles/SHARED_CODE.dir/JuceLibraryCode/include_juce_audio_plugin_client_utils.cpp.s
.PHONY : JuceLibraryCode/include_juce_audio_plugin_client_utils.cpp.s

JuceLibraryCode/include_juce_audio_processors.o: JuceLibraryCode/include_juce_audio_processors.mm.o

.PHONY : JuceLibraryCode/include_juce_audio_processors.o

# target to build an object file
JuceLibraryCode/include_juce_audio_processors.mm.o:
	$(MAKE) -f CMakeFiles/SHARED_CODE.dir/build.make CMakeFiles/SHARED_CODE.dir/JuceLibraryCode/include_juce_audio_processors.mm.o
.PHONY : JuceLibraryCode/include_juce_audio_processors.mm.o

JuceLibraryCode/include_juce_audio_processors.i: JuceLibraryCode/include_juce_audio_processors.mm.i

.PHONY : JuceLibraryCode/include_juce_audio_processors.i

# target to preprocess a source file
JuceLibraryCode/include_juce_audio_processors.mm.i:
	$(MAKE) -f CMakeFiles/SHARED_CODE.dir/build.make CMakeFiles/SHARED_CODE.dir/JuceLibraryCode/include_juce_audio_processors.mm.i
.PHONY : JuceLibraryCode/include_juce_audio_processors.mm.i

JuceLibraryCode/include_juce_audio_processors.s: JuceLibraryCode/include_juce_audio_processors.mm.s

.PHONY : JuceLibraryCode/include_juce_audio_processors.s

# target to generate assembly for a file
JuceLibraryCode/include_juce_audio_processors.mm.s:
	$(MAKE) -f CMakeFiles/SHARED_CODE.dir/build.make CMakeFiles/SHARED_CODE.dir/JuceLibraryCode/include_juce_audio_processors.mm.s
.PHONY : JuceLibraryCode/include_juce_audio_processors.mm.s

JuceLibraryCode/include_juce_audio_utils.o: JuceLibraryCode/include_juce_audio_utils.mm.o

.PHONY : JuceLibraryCode/include_juce_audio_utils.o

# target to build an object file
JuceLibraryCode/include_juce_audio_utils.mm.o:
	$(MAKE) -f CMakeFiles/SHARED_CODE.dir/build.make CMakeFiles/SHARED_CODE.dir/JuceLibraryCode/include_juce_audio_utils.mm.o
.PHONY : JuceLibraryCode/include_juce_audio_utils.mm.o

JuceLibraryCode/include_juce_audio_utils.i: JuceLibraryCode/include_juce_audio_utils.mm.i

.PHONY : JuceLibraryCode/include_juce_audio_utils.i

# target to preprocess a source file
JuceLibraryCode/include_juce_audio_utils.mm.i:
	$(MAKE) -f CMakeFiles/SHARED_CODE.dir/build.make CMakeFiles/SHARED_CODE.dir/JuceLibraryCode/include_juce_audio_utils.mm.i
.PHONY : JuceLibraryCode/include_juce_audio_utils.mm.i

JuceLibraryCode/include_juce_audio_utils.s: JuceLibraryCode/include_juce_audio_utils.mm.s

.PHONY : JuceLibraryCode/include_juce_audio_utils.s

# target to generate assembly for a file
JuceLibraryCode/include_juce_audio_utils.mm.s:
	$(MAKE) -f CMakeFiles/SHARED_CODE.dir/build.make CMakeFiles/SHARED_CODE.dir/JuceLibraryCode/include_juce_audio_utils.mm.s
.PHONY : JuceLibraryCode/include_juce_audio_utils.mm.s

JuceLibraryCode/include_juce_core.o: JuceLibraryCode/include_juce_core.mm.o

.PHONY : JuceLibraryCode/include_juce_core.o

# target to build an object file
JuceLibraryCode/include_juce_core.mm.o:
	$(MAKE) -f CMakeFiles/SHARED_CODE.dir/build.make CMakeFiles/SHARED_CODE.dir/JuceLibraryCode/include_juce_core.mm.o
.PHONY : JuceLibraryCode/include_juce_core.mm.o

JuceLibraryCode/include_juce_core.i: JuceLibraryCode/include_juce_core.mm.i

.PHONY : JuceLibraryCode/include_juce_core.i

# target to preprocess a source file
JuceLibraryCode/include_juce_core.mm.i:
	$(MAKE) -f CMakeFiles/SHARED_CODE.dir/build.make CMakeFiles/SHARED_CODE.dir/JuceLibraryCode/include_juce_core.mm.i
.PHONY : JuceLibraryCode/include_juce_core.mm.i

JuceLibraryCode/include_juce_core.s: JuceLibraryCode/include_juce_core.mm.s

.PHONY : JuceLibraryCode/include_juce_core.s

# target to generate assembly for a file
JuceLibraryCode/include_juce_core.mm.s:
	$(MAKE) -f CMakeFiles/SHARED_CODE.dir/build.make CMakeFiles/SHARED_CODE.dir/JuceLibraryCode/include_juce_core.mm.s
.PHONY : JuceLibraryCode/include_juce_core.mm.s

JuceLibraryCode/include_juce_cryptography.o: JuceLibraryCode/include_juce_cryptography.mm.o

.PHONY : JuceLibraryCode/include_juce_cryptography.o

# target to build an object file
JuceLibraryCode/include_juce_cryptography.mm.o:
	$(MAKE) -f CMakeFiles/SHARED_CODE.dir/build.make CMakeFiles/SHARED_CODE.dir/JuceLibraryCode/include_juce_cryptography.mm.o
.PHONY : JuceLibraryCode/include_juce_cryptography.mm.o

JuceLibraryCode/include_juce_cryptography.i: JuceLibraryCode/include_juce_cryptography.mm.i

.PHONY : JuceLibraryCode/include_juce_cryptography.i

# target to preprocess a source file
JuceLibraryCode/include_juce_cryptography.mm.i:
	$(MAKE) -f CMakeFiles/SHARED_CODE.dir/build.make CMakeFiles/SHARED_CODE.dir/JuceLibraryCode/include_juce_cryptography.mm.i
.PHONY : JuceLibraryCode/include_juce_cryptography.mm.i

JuceLibraryCode/include_juce_cryptography.s: JuceLibraryCode/include_juce_cryptography.mm.s

.PHONY : JuceLibraryCode/include_juce_cryptography.s

# target to generate assembly for a file
JuceLibraryCode/include_juce_cryptography.mm.s:
	$(MAKE) -f CMakeFiles/SHARED_CODE.dir/build.make CMakeFiles/SHARED_CODE.dir/JuceLibraryCode/include_juce_cryptography.mm.s
.PHONY : JuceLibraryCode/include_juce_cryptography.mm.s

JuceLibraryCode/include_juce_data_structures.o: JuceLibraryCode/include_juce_data_structures.mm.o

.PHONY : JuceLibraryCode/include_juce_data_structures.o

# target to build an object file
JuceLibraryCode/include_juce_data_structures.mm.o:
	$(MAKE) -f CMakeFiles/SHARED_CODE.dir/build.make CMakeFiles/SHARED_CODE.dir/JuceLibraryCode/include_juce_data_structures.mm.o
.PHONY : JuceLibraryCode/include_juce_data_structures.mm.o

JuceLibraryCode/include_juce_data_structures.i: JuceLibraryCode/include_juce_data_structures.mm.i

.PHONY : JuceLibraryCode/include_juce_data_structures.i

# target to preprocess a source file
JuceLibraryCode/include_juce_data_structures.mm.i:
	$(MAKE) -f CMakeFiles/SHARED_CODE.dir/build.make CMakeFiles/SHARED_CODE.dir/JuceLibraryCode/include_juce_data_structures.mm.i
.PHONY : JuceLibraryCode/include_juce_data_structures.mm.i

JuceLibraryCode/include_juce_data_structures.s: JuceLibraryCode/include_juce_data_structures.mm.s

.PHONY : JuceLibraryCode/include_juce_data_structures.s

# target to generate assembly for a file
JuceLibraryCode/include_juce_data_structures.mm.s:
	$(MAKE) -f CMakeFiles/SHARED_CODE.dir/build.make CMakeFiles/SHARED_CODE.dir/JuceLibraryCode/include_juce_data_structures.mm.s
.PHONY : JuceLibraryCode/include_juce_data_structures.mm.s

JuceLibraryCode/include_juce_events.o: JuceLibraryCode/include_juce_events.mm.o

.PHONY : JuceLibraryCode/include_juce_events.o

# target to build an object file
JuceLibraryCode/include_juce_events.mm.o:
	$(MAKE) -f CMakeFiles/SHARED_CODE.dir/build.make CMakeFiles/SHARED_CODE.dir/JuceLibraryCode/include_juce_events.mm.o
.PHONY : JuceLibraryCode/include_juce_events.mm.o

JuceLibraryCode/include_juce_events.i: JuceLibraryCode/include_juce_events.mm.i

.PHONY : JuceLibraryCode/include_juce_events.i

# target to preprocess a source file
JuceLibraryCode/include_juce_events.mm.i:
	$(MAKE) -f CMakeFiles/SHARED_CODE.dir/build.make CMakeFiles/SHARED_CODE.dir/JuceLibraryCode/include_juce_events.mm.i
.PHONY : JuceLibraryCode/include_juce_events.mm.i

JuceLibraryCode/include_juce_events.s: JuceLibraryCode/include_juce_events.mm.s

.PHONY : JuceLibraryCode/include_juce_events.s

# target to generate assembly for a file
JuceLibraryCode/include_juce_events.mm.s:
	$(MAKE) -f CMakeFiles/SHARED_CODE.dir/build.make CMakeFiles/SHARED_CODE.dir/JuceLibraryCode/include_juce_events.mm.s
.PHONY : JuceLibraryCode/include_juce_events.mm.s

JuceLibraryCode/include_juce_graphics.o: JuceLibraryCode/include_juce_graphics.mm.o

.PHONY : JuceLibraryCode/include_juce_graphics.o

# target to build an object file
JuceLibraryCode/include_juce_graphics.mm.o:
	$(MAKE) -f CMakeFiles/SHARED_CODE.dir/build.make CMakeFiles/SHARED_CODE.dir/JuceLibraryCode/include_juce_graphics.mm.o
.PHONY : JuceLibraryCode/include_juce_graphics.mm.o

JuceLibraryCode/include_juce_graphics.i: JuceLibraryCode/include_juce_graphics.mm.i

.PHONY : JuceLibraryCode/include_juce_graphics.i

# target to preprocess a source file
JuceLibraryCode/include_juce_graphics.mm.i:
	$(MAKE) -f CMakeFiles/SHARED_CODE.dir/build.make CMakeFiles/SHARED_CODE.dir/JuceLibraryCode/include_juce_graphics.mm.i
.PHONY : JuceLibraryCode/include_juce_graphics.mm.i

JuceLibraryCode/include_juce_graphics.s: JuceLibraryCode/include_juce_graphics.mm.s

.PHONY : JuceLibraryCode/include_juce_graphics.s

# target to generate assembly for a file
JuceLibraryCode/include_juce_graphics.mm.s:
	$(MAKE) -f CMakeFiles/SHARED_CODE.dir/build.make CMakeFiles/SHARED_CODE.dir/JuceLibraryCode/include_juce_graphics.mm.s
.PHONY : JuceLibraryCode/include_juce_graphics.mm.s

JuceLibraryCode/include_juce_gui_basics.o: JuceLibraryCode/include_juce_gui_basics.mm.o

.PHONY : JuceLibraryCode/include_juce_gui_basics.o

# target to build an object file
JuceLibraryCode/include_juce_gui_basics.mm.o:
	$(MAKE) -f CMakeFiles/SHARED_CODE.dir/build.make CMakeFiles/SHARED_CODE.dir/JuceLibraryCode/include_juce_gui_basics.mm.o
.PHONY : JuceLibraryCode/include_juce_gui_basics.mm.o

JuceLibraryCode/include_juce_gui_basics.i: JuceLibraryCode/include_juce_gui_basics.mm.i

.PHONY : JuceLibraryCode/include_juce_gui_basics.i

# target to preprocess a source file
JuceLibraryCode/include_juce_gui_basics.mm.i:
	$(MAKE) -f CMakeFiles/SHARED_CODE.dir/build.make CMakeFiles/SHARED_CODE.dir/JuceLibraryCode/include_juce_gui_basics.mm.i
.PHONY : JuceLibraryCode/include_juce_gui_basics.mm.i

JuceLibraryCode/include_juce_gui_basics.s: JuceLibraryCode/include_juce_gui_basics.mm.s

.PHONY : JuceLibraryCode/include_juce_gui_basics.s

# target to generate assembly for a file
JuceLibraryCode/include_juce_gui_basics.mm.s:
	$(MAKE) -f CMakeFiles/SHARED_CODE.dir/build.make CMakeFiles/SHARED_CODE.dir/JuceLibraryCode/include_juce_gui_basics.mm.s
.PHONY : JuceLibraryCode/include_juce_gui_basics.mm.s

JuceLibraryCode/include_juce_gui_extra.o: JuceLibraryCode/include_juce_gui_extra.mm.o

.PHONY : JuceLibraryCode/include_juce_gui_extra.o

# target to build an object file
JuceLibraryCode/include_juce_gui_extra.mm.o:
	$(MAKE) -f CMakeFiles/SHARED_CODE.dir/build.make CMakeFiles/SHARED_CODE.dir/JuceLibraryCode/include_juce_gui_extra.mm.o
.PHONY : JuceLibraryCode/include_juce_gui_extra.mm.o

JuceLibraryCode/include_juce_gui_extra.i: JuceLibraryCode/include_juce_gui_extra.mm.i

.PHONY : JuceLibraryCode/include_juce_gui_extra.i

# target to preprocess a source file
JuceLibraryCode/include_juce_gui_extra.mm.i:
	$(MAKE) -f CMakeFiles/SHARED_CODE.dir/build.make CMakeFiles/SHARED_CODE.dir/JuceLibraryCode/include_juce_gui_extra.mm.i
.PHONY : JuceLibraryCode/include_juce_gui_extra.mm.i

JuceLibraryCode/include_juce_gui_extra.s: JuceLibraryCode/include_juce_gui_extra.mm.s

.PHONY : JuceLibraryCode/include_juce_gui_extra.s

# target to generate assembly for a file
JuceLibraryCode/include_juce_gui_extra.mm.s:
	$(MAKE) -f CMakeFiles/SHARED_CODE.dir/build.make CMakeFiles/SHARED_CODE.dir/JuceLibraryCode/include_juce_gui_extra.mm.s
.PHONY : JuceLibraryCode/include_juce_gui_extra.mm.s

JuceLibraryCode/include_juce_opengl.o: JuceLibraryCode/include_juce_opengl.mm.o

.PHONY : JuceLibraryCode/include_juce_opengl.o

# target to build an object file
JuceLibraryCode/include_juce_opengl.mm.o:
	$(MAKE) -f CMakeFiles/SHARED_CODE.dir/build.make CMakeFiles/SHARED_CODE.dir/JuceLibraryCode/include_juce_opengl.mm.o
.PHONY : JuceLibraryCode/include_juce_opengl.mm.o

JuceLibraryCode/include_juce_opengl.i: JuceLibraryCode/include_juce_opengl.mm.i

.PHONY : JuceLibraryCode/include_juce_opengl.i

# target to preprocess a source file
JuceLibraryCode/include_juce_opengl.mm.i:
	$(MAKE) -f CMakeFiles/SHARED_CODE.dir/build.make CMakeFiles/SHARED_CODE.dir/JuceLibraryCode/include_juce_opengl.mm.i
.PHONY : JuceLibraryCode/include_juce_opengl.mm.i

JuceLibraryCode/include_juce_opengl.s: JuceLibraryCode/include_juce_opengl.mm.s

.PHONY : JuceLibraryCode/include_juce_opengl.s

# target to generate assembly for a file
JuceLibraryCode/include_juce_opengl.mm.s:
	$(MAKE) -f CMakeFiles/SHARED_CODE.dir/build.make CMakeFiles/SHARED_CODE.dir/JuceLibraryCode/include_juce_opengl.mm.s
.PHONY : JuceLibraryCode/include_juce_opengl.mm.s

Source/Oscillator.o: Source/Oscillator.cpp.o

.PHONY : Source/Oscillator.o

# target to build an object file
Source/Oscillator.cpp.o:
	$(MAKE) -f CMakeFiles/SHARED_CODE.dir/build.make CMakeFiles/SHARED_CODE.dir/Source/Oscillator.cpp.o
.PHONY : Source/Oscillator.cpp.o

Source/Oscillator.i: Source/Oscillator.cpp.i

.PHONY : Source/Oscillator.i

# target to preprocess a source file
Source/Oscillator.cpp.i:
	$(MAKE) -f CMakeFiles/SHARED_CODE.dir/build.make CMakeFiles/SHARED_CODE.dir/Source/Oscillator.cpp.i
.PHONY : Source/Oscillator.cpp.i

Source/Oscillator.s: Source/Oscillator.cpp.s

.PHONY : Source/Oscillator.s

# target to generate assembly for a file
Source/Oscillator.cpp.s:
	$(MAKE) -f CMakeFiles/SHARED_CODE.dir/build.make CMakeFiles/SHARED_CODE.dir/Source/Oscillator.cpp.s
.PHONY : Source/Oscillator.cpp.s

Source/PluginEditor.o: Source/PluginEditor.cpp.o

.PHONY : Source/PluginEditor.o

# target to build an object file
Source/PluginEditor.cpp.o:
	$(MAKE) -f CMakeFiles/SHARED_CODE.dir/build.make CMakeFiles/SHARED_CODE.dir/Source/PluginEditor.cpp.o
.PHONY : Source/PluginEditor.cpp.o

Source/PluginEditor.i: Source/PluginEditor.cpp.i

.PHONY : Source/PluginEditor.i

# target to preprocess a source file
Source/PluginEditor.cpp.i:
	$(MAKE) -f CMakeFiles/SHARED_CODE.dir/build.make CMakeFiles/SHARED_CODE.dir/Source/PluginEditor.cpp.i
.PHONY : Source/PluginEditor.cpp.i

Source/PluginEditor.s: Source/PluginEditor.cpp.s

.PHONY : Source/PluginEditor.s

# target to generate assembly for a file
Source/PluginEditor.cpp.s:
	$(MAKE) -f CMakeFiles/SHARED_CODE.dir/build.make CMakeFiles/SHARED_CODE.dir/Source/PluginEditor.cpp.s
.PHONY : Source/PluginEditor.cpp.s

Source/PluginProcessor.o: Source/PluginProcessor.cpp.o

.PHONY : Source/PluginProcessor.o

# target to build an object file
Source/PluginProcessor.cpp.o:
	$(MAKE) -f CMakeFiles/SHARED_CODE.dir/build.make CMakeFiles/SHARED_CODE.dir/Source/PluginProcessor.cpp.o
.PHONY : Source/PluginProcessor.cpp.o

Source/PluginProcessor.i: Source/PluginProcessor.cpp.i

.PHONY : Source/PluginProcessor.i

# target to preprocess a source file
Source/PluginProcessor.cpp.i:
	$(MAKE) -f CMakeFiles/SHARED_CODE.dir/build.make CMakeFiles/SHARED_CODE.dir/Source/PluginProcessor.cpp.i
.PHONY : Source/PluginProcessor.cpp.i

Source/PluginProcessor.s: Source/PluginProcessor.cpp.s

.PHONY : Source/PluginProcessor.s

# target to generate assembly for a file
Source/PluginProcessor.cpp.s:
	$(MAKE) -f CMakeFiles/SHARED_CODE.dir/build.make CMakeFiles/SHARED_CODE.dir/Source/PluginProcessor.cpp.s
.PHONY : Source/PluginProcessor.cpp.s

Source/SympleSynth.o: Source/SympleSynth.cpp.o

.PHONY : Source/SympleSynth.o

# target to build an object file
Source/SympleSynth.cpp.o:
	$(MAKE) -f CMakeFiles/SHARED_CODE.dir/build.make CMakeFiles/SHARED_CODE.dir/Source/SympleSynth.cpp.o
.PHONY : Source/SympleSynth.cpp.o

Source/SympleSynth.i: Source/SympleSynth.cpp.i

.PHONY : Source/SympleSynth.i

# target to preprocess a source file
Source/SympleSynth.cpp.i:
	$(MAKE) -f CMakeFiles/SHARED_CODE.dir/build.make CMakeFiles/SHARED_CODE.dir/Source/SympleSynth.cpp.i
.PHONY : Source/SympleSynth.cpp.i

Source/SympleSynth.s: Source/SympleSynth.cpp.s

.PHONY : Source/SympleSynth.s

# target to generate assembly for a file
Source/SympleSynth.cpp.s:
	$(MAKE) -f CMakeFiles/SHARED_CODE.dir/build.make CMakeFiles/SHARED_CODE.dir/Source/SympleSynth.cpp.s
.PHONY : Source/SympleSynth.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... rebuild_cache"
	@echo "... AU"
	@echo "... edit_cache"
	@echo "... STANDALONE_PLUGIN"
	@echo "... SHARED_CODE"
	@echo "... VST3"
	@echo "... JuceLibraryCode/include_juce_audio_basics.o"
	@echo "... JuceLibraryCode/include_juce_audio_basics.i"
	@echo "... JuceLibraryCode/include_juce_audio_basics.s"
	@echo "... JuceLibraryCode/include_juce_audio_devices.o"
	@echo "... JuceLibraryCode/include_juce_audio_devices.i"
	@echo "... JuceLibraryCode/include_juce_audio_devices.s"
	@echo "... JuceLibraryCode/include_juce_audio_formats.o"
	@echo "... JuceLibraryCode/include_juce_audio_formats.i"
	@echo "... JuceLibraryCode/include_juce_audio_formats.s"
	@echo "... JuceLibraryCode/include_juce_audio_plugin_client_AU_1.o"
	@echo "... JuceLibraryCode/include_juce_audio_plugin_client_AU_1.i"
	@echo "... JuceLibraryCode/include_juce_audio_plugin_client_AU_1.s"
	@echo "... JuceLibraryCode/include_juce_audio_plugin_client_AU_2.o"
	@echo "... JuceLibraryCode/include_juce_audio_plugin_client_AU_2.i"
	@echo "... JuceLibraryCode/include_juce_audio_plugin_client_AU_2.s"
	@echo "... JuceLibraryCode/include_juce_audio_plugin_client_Standalone.o"
	@echo "... JuceLibraryCode/include_juce_audio_plugin_client_Standalone.i"
	@echo "... JuceLibraryCode/include_juce_audio_plugin_client_Standalone.s"
	@echo "... JuceLibraryCode/include_juce_audio_plugin_client_VST3.o"
	@echo "... JuceLibraryCode/include_juce_audio_plugin_client_VST3.i"
	@echo "... JuceLibraryCode/include_juce_audio_plugin_client_VST3.s"
	@echo "... JuceLibraryCode/include_juce_audio_plugin_client_VST_utils.o"
	@echo "... JuceLibraryCode/include_juce_audio_plugin_client_VST_utils.i"
	@echo "... JuceLibraryCode/include_juce_audio_plugin_client_VST_utils.s"
	@echo "... JuceLibraryCode/include_juce_audio_plugin_client_utils.o"
	@echo "... JuceLibraryCode/include_juce_audio_plugin_client_utils.i"
	@echo "... JuceLibraryCode/include_juce_audio_plugin_client_utils.s"
	@echo "... JuceLibraryCode/include_juce_audio_processors.o"
	@echo "... JuceLibraryCode/include_juce_audio_processors.i"
	@echo "... JuceLibraryCode/include_juce_audio_processors.s"
	@echo "... JuceLibraryCode/include_juce_audio_utils.o"
	@echo "... JuceLibraryCode/include_juce_audio_utils.i"
	@echo "... JuceLibraryCode/include_juce_audio_utils.s"
	@echo "... JuceLibraryCode/include_juce_core.o"
	@echo "... JuceLibraryCode/include_juce_core.i"
	@echo "... JuceLibraryCode/include_juce_core.s"
	@echo "... JuceLibraryCode/include_juce_cryptography.o"
	@echo "... JuceLibraryCode/include_juce_cryptography.i"
	@echo "... JuceLibraryCode/include_juce_cryptography.s"
	@echo "... JuceLibraryCode/include_juce_data_structures.o"
	@echo "... JuceLibraryCode/include_juce_data_structures.i"
	@echo "... JuceLibraryCode/include_juce_data_structures.s"
	@echo "... JuceLibraryCode/include_juce_events.o"
	@echo "... JuceLibraryCode/include_juce_events.i"
	@echo "... JuceLibraryCode/include_juce_events.s"
	@echo "... JuceLibraryCode/include_juce_graphics.o"
	@echo "... JuceLibraryCode/include_juce_graphics.i"
	@echo "... JuceLibraryCode/include_juce_graphics.s"
	@echo "... JuceLibraryCode/include_juce_gui_basics.o"
	@echo "... JuceLibraryCode/include_juce_gui_basics.i"
	@echo "... JuceLibraryCode/include_juce_gui_basics.s"
	@echo "... JuceLibraryCode/include_juce_gui_extra.o"
	@echo "... JuceLibraryCode/include_juce_gui_extra.i"
	@echo "... JuceLibraryCode/include_juce_gui_extra.s"
	@echo "... JuceLibraryCode/include_juce_opengl.o"
	@echo "... JuceLibraryCode/include_juce_opengl.i"
	@echo "... JuceLibraryCode/include_juce_opengl.s"
	@echo "... Source/Oscillator.o"
	@echo "... Source/Oscillator.i"
	@echo "... Source/Oscillator.s"
	@echo "... Source/PluginEditor.o"
	@echo "... Source/PluginEditor.i"
	@echo "... Source/PluginEditor.s"
	@echo "... Source/PluginProcessor.o"
	@echo "... Source/PluginProcessor.i"
	@echo "... Source/PluginProcessor.s"
	@echo "... Source/SympleSynth.o"
	@echo "... Source/SympleSynth.i"
	@echo "... Source/SympleSynth.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

