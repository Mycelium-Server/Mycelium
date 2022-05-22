cmake_minimum_required(VERSION 3.22)
project(Mycelium)

set(CMAKE_CXX_STANDARD 20)

include_directories(third-party/libuv/include)
link_directories(third-party/libuv/lib)

add_executable(Mycelium main.cpp Server.h packet/Packet.h packet/AbstractPacket.h packet/PacketOutStatusResponse.h packet/PacketInPing.h packet/PacketOutPong.h packet/PacketInLoginStart.h packet/PacketOutLoginSuccess.h)
target_link_libraries(Mycelium uv)