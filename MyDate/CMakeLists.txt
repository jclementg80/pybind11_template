# CMakeLists.txt

cmake_minimum_required(VERSION 3.20)  
project(MyDate DESCRIPTION "A Example Date class for binding with python" VERSION 0.0.1)

# ———————————————————————————
# find 3rd party dependencies
# ———————————————————————————

# —————————————————————————
# create target for library
# —————————————————————————
add_library(MyDateLib src/MyDate.cpp)
target_compile_features(MyDateLib PUBLIC cxx_std_17)

target_include_directories(MyDateLib
    PUBLIC
        $<INSTALL_INTERFACE:include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/src
)

# —————————————————————————————————————————
# create target for test
# —————————————————————————————————————————
add_executable(run_tests tests/tests.cpp)
target_compile_features(run_tests PUBLIC cxx_std_17)
target_link_libraries(run_tests PRIVATE MyDateLib)
