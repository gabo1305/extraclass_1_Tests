cmake_minimum_required(VERSION 3.17)
project(extraclass_1_Tests)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_PREFIX_PATH "/otp/cmake")

find_package(Qt5 COMPONENTS Core Widgets Gui REQUIRED)

set(CMAKE_AUTOMOC ON)

add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)

add_executable(extraclass_1_Tests Structures/LinkedList.cpp Structures/LinkedList.h Structures/Node.cpp Structures/Node.h Structures/Graph.cpp Structures/Graph.h main.cpp Interface/MainWidget.cpp Interface/MainWidget.h Structures/ClassName.h lib/Tests/test.cpp)
target_link_libraries(extraclass_1_Tests Qt5::Widgets Qt5::Core Qt5::Gui gtest gtest_main)
