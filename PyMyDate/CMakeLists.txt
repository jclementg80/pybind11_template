# CMakeLists.txt

cmake_minimum_required(VERSION 3.20)  
project(PyMyDate DESCRIPTION "A python binding for MyDateLib" VERSION 0.0.1)

# ———————————————————————————
# find 3rd party dependencies
# ———————————————————————————

find_package(pybind11 CONFIG REQUIRED)

# —————————————————————————
# create target for bind11
# —————————————————————————
pybind11_add_module(pymydate src/pymydate.cpp)
target_link_libraries(pymydate PRIVATE MyDateLib)

# —————————————————————————
# Copy targets to ./tests - Directory where is this file CMakeLists.txt (project top level dir)
# —————————————————————————
install(
  TARGETS 
  pymydate 
DESTINATION ${CMAKE_CURRENT_LIST_DIR}/tests)

# —————————————————————————
# Copy targets to MyDate python module
# —————————————————————————
install(
  TARGETS 
  pymydate 
DESTINATION ${CMAKE_CURRENT_LIST_DIR}/../python/MyDate)

# —————————————————————————
# Create helper target 'run' for running python script (sample client code.)
# —————————————————————————
add_custom_target(run
    COMMAND python test.py 
    DEPENDS install 
    WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR}/tests
)