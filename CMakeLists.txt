cmake_minimum_required(VERSION 3.22)
project(Mycelium)

set(CMAKE_CXX_STANDARD 20)

include_directories(third-party)

add_executable(Mycelium main.cpp Server.h packet/Packet.h packet/AbstractPacket.h packet/PacketOutStatusResponse.h)
if(WIN32)
    target_link_libraries(Mycelium wsock32 ws2_32)
else()
    set(THREADS_PREFER_PTHREAD_FLAG ON)
    find_package(Threads REQUIRED)
    target_link_libraries(Mycelium PRIVATE Threads::Threads)
endif()