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

find_package(PkgConfig REQUIRED)

pkg_search_module(CURL REQUIRED libcurl)
include_directories(${CURL_INCLUDE_DIRS})
link_directories(${CURL_LIBRARY_DIRS})
message(STATUS "Using libcurl ${CURL_VERSION}")

pkg_search_module(OPENSSL REQUIRED openssl)
include_directories(${OPENSSL_INCLUDE_DIRS})
link_directories(${OPENSSL_LIBRARY_DIRS})
message(STATUS "Using OpenSSL ${OPENSSL_VERSION}")

file(GLOB_RECURSE SRC src/*.cpp)

add_executable(Mycelium ${SRC})
target_link_libraries(Mycelium ${OPENSSL_LIBRARIES} ${CURL_LIBRARIES} libdeflate ryml::ryml noise-static)

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