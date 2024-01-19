cmake_minimum_required(VERSION 3.5)

project(temp_task LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(temp_task main.cpp
    temp_tasken.h temp_tasken.cpp)

include(GNUInstallDirs)
install(TARGETS temp_task
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
