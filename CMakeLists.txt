cmake_minimum_required(VERSION 3.20)
project(Mycelium)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(thirdparty/libuv)
include_directories(thirdparty/libuv/include)

file(GLOB SRC src/*.cpp)

add_executable(Mycelium ${SRC})

add_executable(tcOS ${SRC})
target_link_libraries(tcOS uv)