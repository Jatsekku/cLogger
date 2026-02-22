# Set minimum version of CMake required to cnfigure the project
cmake_minimum_required(VERSION 3.21)

# Project name, version and languages used
project(cLogger
    VERSION 0.1.0
    LANGUAGES C
)

# Make LSP happy
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Include GNUInstallDirs to use standard directory variables
include(GNUInstallDirs)

# Provide additional CMAKE_INSTALL_CMAKEDIR path
if(NOT CMAKE_INSTALL_CMAKEDIR)
    set(CMAKE_INSTALL_CMAKEDIR ${CMAKE_INSTALL_LIBDIR}/cmake/${PROJECT_NAME})
endif()

# Include CMakePackageConfigHelpers to use config files generator 
include(CMakePackageConfigHelpers)
# Enable testing with CTest
include(CTest)

#---------------------------------- Options -----------------------------------
# Shared/Static liibrary switch
option(BUILD_SHARED_LIBS "Build shared libraries" OFF)
# Build examples
option(BUILD_EXAMPLES "Build examples" ON)

#------------------------------- Subdirectories -------------------------------
add_subdirectory(src)

if(BUILD_EXAMPLES AND EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/examples/CMakeLists.txt")
    add_subdirectory(examples)
endif()

