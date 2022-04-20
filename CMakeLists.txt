cmake_minimum_required(VERSION 3.5)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_compile_options(-fdiagnostics-color=always)

# To include esp-adf
# include($ENV{ADF_PATH}/CMakeLists.txt)

include($ENV{IDF_PATH}/tools/cmake/project.cmake)

project(my_project)
