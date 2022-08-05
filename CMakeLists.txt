cmake_minimum_required(VERSION 3.20)
project(Mycelium)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(thirdparty/rapidyaml)
include_directories(thirdparty/rapidyaml/src)

add_subdirectory(thirdparty/libuv)
include_directories(thirdparty/libuv/include)

add_subdirectory(thirdparty/zlib)
include_directories(thirdparty/zlib)

add_subdirectory(thirdparty/openssl)
include_directories(thirdparty/openssl/include)

if (NOT DEFINED MYCELIUM_BUILD_CURL)
    if (WIN32)
        set(MYCELIUM_BUILD_CURL ON)
    else ()
        execute_process(COMMAND uname -m COMMAND tr -d '\n' OUTPUT_VARIABLE ARCHITECTURE)
        message(STATUS "Architecture: ${ARCHITECTURE}")
        if (${ARCHITECTURE} STREQUAL "x86_64" OR ${ARCHITECTURE} STREQUAL "x64" OR ${ARCHITECTURE} STREQUAL "amd64")
            set(MYCELIUM_BUILD_CURL ON)
        endif ()
    endif ()
endif ()

if (${MYCELIUM_BUILD_CURL})
    message(STATUS "Build cURL")
    set(CURL_ENABLE_EXPORT_TARGET OFF)
    set(CMAKE_USE_LIBSSH2 OFF)
    if (UNIX)
        message(STATUS "Enable OpenSSL support")
        set(CURL_USE_OPENSSL ON)
    endif ()
    set(BUILD_SHARED_LIBS OFF)
    add_subdirectory(thirdparty/curl)
    include_directories(thirdparty/curl/include)
    link_libraries(libcurl)
else ()
    find_package(CURL REQUIRED)
    include_directories(${CURL_INCLUDE_DIR})
    link_libraries(${CURL_LIBRARY})
endif ()

file(GLOB SRC src/*.cpp src/pipeline/*.cpp src/protocol/*.cpp src/listeners/*.cpp src/server/*.cpp src/server/entity/*.cpp src/server/world/*.cpp src/mojangapi/*.cpp src/server/entity/metadata/*.cpp src/server/particle/*.cpp src/server/world/generation/*.cpp src/server/blocks/*.cpp)

add_executable(Mycelium ${SRC})
target_link_libraries(Mycelium uv ssl crypto zlibstatic ryml::ryml)

find_package(Python COMPONENTS Interpreter)

add_custom_command(TARGET Mycelium POST_BUILD
        COMMAND ${Python_EXECUTABLE} ${CMAKE_SOURCE_DIR}/copy_resources.py ${CMAKE_BUILD_TYPE}
        WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
        COMMENT "Copying resources..."
)