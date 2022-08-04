cmake_minimum_required(VERSION 3.20)
project(Mycelium)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(thirdparty/libuv)
include_directories(thirdparty/libuv/include)

add_subdirectory(thirdparty/zlib)
include_directories(thirdparty/zlib)

add_subdirectory(thirdparty/openssl)
include_directories(thirdparty/openssl/include)

set(BUILD_SHARED_LIBS OFF)
add_subdirectory(thirdparty/curl)
include_directories(thirdparty/curl/include)

file(GLOB SRC src/*.cpp src/pipeline/*.cpp src/protocol/*.cpp src/listeners/*.cpp src/server/*.cpp src/server/entity/*.cpp src/server/world/*.cpp src/mojangapi/*.cpp src/server/entity/metadata/*.cpp src/server/particle/*.cpp src/server/world/generation/*.cpp src/server/blocks/*.cpp)

add_executable(Mycelium ${SRC})
target_link_libraries(Mycelium uv libcurl ssl crypto zlibstatic)