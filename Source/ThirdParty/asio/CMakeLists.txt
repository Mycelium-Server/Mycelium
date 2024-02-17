#

set(asio_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/asio/asio)

add_library(asio STATIC ${asio_SOURCE_DIR}/src/asio.cpp)
add_library(asio::asio ALIAS asio)
target_include_directories(
        asio PUBLIC $<BUILD_INTERFACE:${asio_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
)

find_package(Threads)
target_link_libraries(asio PRIVATE Threads::Threads)

target_compile_features(asio PUBLIC cxx_std_11)
target_compile_definitions(asio PUBLIC
        -DASIO_STANDALONE
        -DASIO_SEPARATE_COMPILATION
        -DASIO_NO_DEPRECATED
)

# Fix warning : "Please define _WIN32_WINNT or _WIN32_WINDOWS appropriately."
# https://stackoverflow.com/questions/9742003/platform-detection-in-cmake
if(WIN32 AND CMAKE_SYSTEM_VERSION)
    set(ver ${CMAKE_SYSTEM_VERSION})
    string(REPLACE "." "" ver ${ver})
    string(REGEX REPLACE "([0-9])" "0\\1" ver ${ver})
    set(version "0x${ver}")
    target_compile_definitions(asio PUBLIC -D_WIN32_WINNT=${version})
endif()
