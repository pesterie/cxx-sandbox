##==============================================================================
## Author : Pierre Estérie
## Year   : 2017
## This is a free software !
##==============================================================================
cmake_minimum_required(VERSION 3.0.0)

project(cxx-sandbox)
set(PROJECT_VERSION 1.0)

find_package(Boost)
include_directories(${Boost_INCLUDE_DIRS})

include(cmake/make_tests.cmake)

include_directories(${PROJECT_SOURCE_DIR}/include)

add_custom_target(tests)

add_subdirectory(source)
