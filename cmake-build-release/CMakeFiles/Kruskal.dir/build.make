# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.12

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "E:\CLion 2018.2.7\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "E:\CLion 2018.2.7\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\CLionProjects\Kruskal

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\CLionProjects\Kruskal\cmake-build-release

# Include any dependencies generated for this target.
include CMakeFiles/Kruskal.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Kruskal.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Kruskal.dir/flags.make

CMakeFiles/Kruskal.dir/main.c.obj: CMakeFiles/Kruskal.dir/flags.make
CMakeFiles/Kruskal.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\CLionProjects\Kruskal\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Kruskal.dir/main.c.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Kruskal.dir\main.c.obj   -c E:\CLionProjects\Kruskal\main.c

CMakeFiles/Kruskal.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Kruskal.dir/main.c.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\CLionProjects\Kruskal\main.c > CMakeFiles\Kruskal.dir\main.c.i

CMakeFiles/Kruskal.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Kruskal.dir/main.c.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\CLionProjects\Kruskal\main.c -o CMakeFiles\Kruskal.dir\main.c.s

CMakeFiles/Kruskal.dir/disjointsets.c.obj: CMakeFiles/Kruskal.dir/flags.make
CMakeFiles/Kruskal.dir/disjointsets.c.obj: ../disjointsets.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\CLionProjects\Kruskal\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Kruskal.dir/disjointsets.c.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Kruskal.dir\disjointsets.c.obj   -c E:\CLionProjects\Kruskal\disjointsets.c

CMakeFiles/Kruskal.dir/disjointsets.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Kruskal.dir/disjointsets.c.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\CLionProjects\Kruskal\disjointsets.c > CMakeFiles\Kruskal.dir\disjointsets.c.i

CMakeFiles/Kruskal.dir/disjointsets.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Kruskal.dir/disjointsets.c.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\CLionProjects\Kruskal\disjointsets.c -o CMakeFiles\Kruskal.dir\disjointsets.c.s

CMakeFiles/Kruskal.dir/qsort.c.obj: CMakeFiles/Kruskal.dir/flags.make
CMakeFiles/Kruskal.dir/qsort.c.obj: ../qsort.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\CLionProjects\Kruskal\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/Kruskal.dir/qsort.c.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Kruskal.dir\qsort.c.obj   -c E:\CLionProjects\Kruskal\qsort.c

CMakeFiles/Kruskal.dir/qsort.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Kruskal.dir/qsort.c.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\CLionProjects\Kruskal\qsort.c > CMakeFiles\Kruskal.dir\qsort.c.i

CMakeFiles/Kruskal.dir/qsort.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Kruskal.dir/qsort.c.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\CLionProjects\Kruskal\qsort.c -o CMakeFiles\Kruskal.dir\qsort.c.s

CMakeFiles/Kruskal.dir/kruskal.c.obj: CMakeFiles/Kruskal.dir/flags.make
CMakeFiles/Kruskal.dir/kruskal.c.obj: ../kruskal.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\CLionProjects\Kruskal\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/Kruskal.dir/kruskal.c.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Kruskal.dir\kruskal.c.obj   -c E:\CLionProjects\Kruskal\kruskal.c

CMakeFiles/Kruskal.dir/kruskal.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Kruskal.dir/kruskal.c.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\CLionProjects\Kruskal\kruskal.c > CMakeFiles\Kruskal.dir\kruskal.c.i

CMakeFiles/Kruskal.dir/kruskal.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Kruskal.dir/kruskal.c.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\CLionProjects\Kruskal\kruskal.c -o CMakeFiles\Kruskal.dir\kruskal.c.s

# Object files for target Kruskal
Kruskal_OBJECTS = \
"CMakeFiles/Kruskal.dir/main.c.obj" \
"CMakeFiles/Kruskal.dir/disjointsets.c.obj" \
"CMakeFiles/Kruskal.dir/qsort.c.obj" \
"CMakeFiles/Kruskal.dir/kruskal.c.obj"

# External object files for target Kruskal
Kruskal_EXTERNAL_OBJECTS =

Kruskal.exe: CMakeFiles/Kruskal.dir/main.c.obj
Kruskal.exe: CMakeFiles/Kruskal.dir/disjointsets.c.obj
Kruskal.exe: CMakeFiles/Kruskal.dir/qsort.c.obj
Kruskal.exe: CMakeFiles/Kruskal.dir/kruskal.c.obj
Kruskal.exe: CMakeFiles/Kruskal.dir/build.make
Kruskal.exe: CMakeFiles/Kruskal.dir/linklibs.rsp
Kruskal.exe: CMakeFiles/Kruskal.dir/objects1.rsp
Kruskal.exe: CMakeFiles/Kruskal.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\CLionProjects\Kruskal\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking C executable Kruskal.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Kruskal.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Kruskal.dir/build: Kruskal.exe

.PHONY : CMakeFiles/Kruskal.dir/build

CMakeFiles/Kruskal.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Kruskal.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Kruskal.dir/clean

CMakeFiles/Kruskal.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\CLionProjects\Kruskal E:\CLionProjects\Kruskal E:\CLionProjects\Kruskal\cmake-build-release E:\CLionProjects\Kruskal\cmake-build-release E:\CLionProjects\Kruskal\cmake-build-release\CMakeFiles\Kruskal.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Kruskal.dir/depend
