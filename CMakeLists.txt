cmake_minimum_required(VERSION 3.20)

project(PetRaising LANGUAGES CXX)

# =========================
# C++ Standard
# =========================
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# =========================
# Qt Auto Tools
# =========================
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

# =========================
# Qt
# =========================
find_package(Qt6 REQUIRED COMPONENTS Widgets)

# =========================
# Project Source Files
# =========================
file(GLOB_RECURSE PROJECT_SOURCES
    CONFIGURE_DEPENDS
    "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/*.h"
)

# =========================
# Application
# =========================
add_executable(PetRaising
    ${PROJECT_SOURCES}
)

# =========================
# Include Directories
# =========================
target_include_directories(PetRaising PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/src
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# =========================
# Qt Libraries
# =========================
target_link_libraries(PetRaising PRIVATE
    Qt6::Widgets
)