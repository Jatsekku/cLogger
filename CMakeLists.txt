# Set minimum version of CMake required to cnfigure the project
cmake_minimum_required(VERSION 3.21)

# Project name, version and languages used
project(cLogger
    VERSION 0.1.0
    LANGUAGES C
)

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

#------------------------------- Subdirectories -------------------------------
add_subdirectory(src)

