cmake_minimum_required(VERSION 3.20)

project(Mycelium LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(LIBDEFLATE_BUILD_SHARED_LIB OFF)
set(BUILD_SHARED_LIBS OFF)

add_subdirectory(Source/ThirdParty/asio)
add_subdirectory(Source/ThirdParty/curl)
add_subdirectory(Source/ThirdParty/GSL)
add_subdirectory(Source/ThirdParty/libdeflate)
add_subdirectory(Source/ThirdParty/nlohmann_json)
add_subdirectory(Source/ThirdParty/rapidyaml)

find_package(OpenSSL REQUIRED)

file(GLOB_RECURSE CORE_SOURCES Source/Runtime/**/*.cpp)

add_executable(Mycelium ${CORE_SOURCES} Source/ThirdParty/uuid.h Source/ThirdParty/PerlinNoise.h)
target_link_libraries(Mycelium
        OpenSSL::SSL
        OpenSSL::Crypto
        asio::asio
        libcurl
        Microsoft.GSL::GSL
        libdeflate_static
        nlohmann_json::nlohmann_json
        ryml::ryml)

if (WIN32)
    target_link_libraries(Mycelium wsock32)
endif ()

find_package(Python COMPONENTS Interpreter)

add_custom_command(TARGET Mycelium POST_BUILD
        COMMAND ${Python_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/copy_resources.py ${CMAKE_BUILD_TYPE} ${CMAKE_CURRENT_SOURCE_DIR}
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
        COMMENT "Copying resources..."
)