cmake_minimum_required(VERSION 3.20)
project(Mycelium)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(thirdparty/rapidyaml)
include_directories(thirdparty/rapidyaml/src)

include_directories(thirdparty/asio/include)

set(BUILD_SHARED_LIBS OFF)

add_subdirectory(thirdparty/libnoise)
include_directories(thirdparty/libnoise/src)

add_subdirectory(thirdparty/libdeflate)
include_directories(thirdparty/libdeflate)

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
    add_subdirectory(thirdparty/curl)
    include_directories(thirdparty/curl/include)
    link_libraries(libcurl)
else ()
    find_package(CURL REQUIRED)
    include_directories(${CURL_INCLUDE_DIR})
    link_libraries(${CURL_LIBRARY})
endif ()

file(GLOB_RECURSE SRC src/*.cpp)

add_executable(Mycelium ${SRC})
target_link_libraries(Mycelium ssl crypto libdeflate ryml::ryml noise-static)

if (WIN32)
    target_link_libraries(Mycelium wsock32)
endif ()

find_package(Python COMPONENTS Interpreter)

add_custom_target(
        check_license
        COMMAND ${Python_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/check_license.py
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
        COMMENT "Checking license..."
)
add_dependencies(Mycelium check_license)

add_custom_command(TARGET Mycelium POST_BUILD
        COMMAND ${Python_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/copy_resources.py ${CMAKE_BUILD_TYPE} ${CMAKE_CURRENT_SOURCE_DIR}
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
        COMMENT "Copying resources..."
)