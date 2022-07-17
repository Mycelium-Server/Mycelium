cmake_minimum_required(VERSION 3.20)
project(Mycelium)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(thirdparty/libuv)
include_directories(thirdparty/libuv/include)

add_subdirectory(thirdparty/zlib)
include_directories(thirdparty/zlib)

add_subdirectory(thirdparty/openssl)
include_directories(thirdparty/openssl/include)

file(GLOB SRC src/*.cpp src/pipeline/*.cpp src/protocol/*.cpp src/listeners/*.cpp src/server/*.cpp)

add_executable(Mycelium ${SRC})
target_link_libraries(Mycelium uv crypto ssl zlibstatic)