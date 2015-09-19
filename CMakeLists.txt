project(empty-win32-app CXX)
cmake_minimum_required(VERSION 2.8)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -mwindows")
set(CMAKE_EXE_LINKER_FLAGS "-static-libgcc -static-libstdc++ -static -s")
set(SRC_LIST
main.cc
empty-win32-app.rc
)
ENABLE_LANGUAGE(RC)
set(SRC_LIST ${SRC_LIST})
add_executable(${PROJECT_NAME} ${SRC_LIST})
