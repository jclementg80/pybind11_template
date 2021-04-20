# CMakeLists.txt

cmake_minimum_required(VERSION 3.10)
project(PyBindTemplate)

# —————————————————————————————————————————
# Add subdirectories
# —————————————————————————————————————————
add_subdirectory(MyDate)
add_subdirectory(PyMyDate)

# ———————————————————————————
# find 3rd party dependencies
# ———————————————————————————

# —————————————————————————
# create target for library
# —————————————————————————

# —————————————————————————————
# create target for main binary
# —————————————————————————————

# —————————————————————————————————————————
# create target for test, enable testing, and register a test "RunAllTests"
# —————————————————————————————————————————
