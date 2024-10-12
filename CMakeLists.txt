cmake_minimum_required(VERSION 3.10)
project(ProjectName VERSION 1.0)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the executable
add_library(${PROJECT_NAME} src/example.cpp)


add_executable(${PROJECT_NAME}_MAIN src/main.cpp)
target_link_libraries(${PROJECT_NAME}_MAIN ${PROJECT_NAME})


# Include header files
include_directories(include)

# Link directories if any libraries are used
# link_directories(/path/to/libs)

# Find and add any libraries you need, e.g., Boost, etc.
# find_package(Boost REQUIRED COMPONENTS system)
# target_link_libraries(${PROJECT_NAME} Boost::system)

# Testing
enable_testing()
find_package(GTest REQUIRED)

add_executable(test_main tests/test_main.cpp)

# Link the main project target to this test
target_link_libraries(test_main ${PROJECT_NAME})
target_link_libraries(test_main GTest::GTest)
target_include_directories(test_main PRIVATE ${GTest_INCLUDE_DIRS})
include(GoogleTest)

gtest_discover_tests(test_main)