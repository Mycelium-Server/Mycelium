cmake_minimum_required(VERSION 3.22)
project(Mycelium)

set(CMAKE_CXX_STANDARD 20)

include_directories(${PROJECT_SOURCE_DIR}/third-party/libuv/include)
link_directories(${PROJECT_SOURCE_DIR}/third-party/libuv/lib)

add_executable(Mycelium main.cpp NBT.h Server.h packet/Packet.h packet/AbstractPacket.h packet/PacketOutStatusResponse.h packet/PacketInPing.h packet/PacketOutPong.h packet/PacketInLoginStart.h packet/PacketOutLoginSuccess.h packet/PacketOutJoinGame.h Dimension.h Gamemode.h packet/PacketOutPluginMessage.h Keepalive.h packet/PacketOutKeepalive.h packet/PacketInKeepalive.h packet/PacketInClientSettings.h packet/PacketOutDifficulty.h Difficulty.h packet/PacketOutPlayerAbilities.h packet/PacketOutHeldItemChange.h packet/PacketOutPlayerInfo.h random.h server/Server.h packet/PacketOutUpdateViewPosition.h packet/PacketOutChunk.h BlockState.h ChunkSection.h Chunk.h packet/PacketOutInitializeWorldBorder.h packet/PacketOutSpawnPosition.h packet/PacketOutPositionAndLook.h BlockStorage.h BitStorage.h BiomeStorage.h Biome.h packet/PacketOutChatMessage.h packet/PacketInChatMessage.h packet/PacketOutSpawnPlayer.h packet/PacketInPlayerPosition.h packet/PacketOutEntityPostionAndRotation.h packet/PacketInPlayerPositionAndRotation.h packet/PacketOutFace.h packet/PacketOutEntityHeadLook.h packet/PacketOutEntityPosition.h packet/PacketInPlayerRotation.h packet/PacketOutEntityRotation.h packet/PacketInEntityAction.h EntityMetadata.h Particle.h Slot.h packet/PacketOutEntityMetadata.h packet/PacketOutDestroyEntities.h packet/PlayerOutLoginDisconnect.h packet/PacketInClickWindow.h Item.h)
target_link_libraries(Mycelium uv)