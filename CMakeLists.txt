cmake_minimum_required(VERSION 3.22)
project(Mycelium)

set(CMAKE_CXX_STANDARD 20)

include_directories(third-party/libcurl/include)
link_directories(third-party/libcurl/lib)

include_directories(third-party/libuv/include)
link_directories(third-party/libuv/lib)

include_directories(third-party/openssl/include)
link_directories(third-party/openssl/lib)

include_directories(third-party/zlib/include)
link_directories(third-party/zlib/lib)

add_executable(Mycelium main.cpp NBT.h Server.h packet/Packet.h packet/AbstractPacket.h packet/PacketOutStatusResponse.h packet/PacketInPing.h packet/PacketOutPong.h packet/PacketInLoginStart.h packet/PacketOutLoginSuccess.h packet/PacketOutJoinGame.h Dimension.h Gamemode.h packet/PacketOutPluginMessage.h Keepalive.h packet/PacketOutKeepalive.h packet/PacketInKeepalive.h packet/PacketInClientSettings.h packet/PacketOutDifficulty.h Difficulty.h packet/PacketOutPlayerAbilities.h packet/PacketOutHeldItemChange.h packet/PacketOutPlayerInfo.h random.h server/Server.h packet/PacketOutUpdateViewPosition.h packet/PacketOutChunk.h BlockState.h ChunkSection.h Chunk.h packet/PacketOutInitializeWorldBorder.h packet/PacketOutSpawnPosition.h packet/PacketOutPositionAndLook.h BlockStorage.h BitStorage.h BiomeStorage.h Biome.h packet/PacketOutChatMessage.h packet/PacketInChatMessage.h packet/PacketOutSpawnPlayer.h packet/PacketInPlayerPosition.h packet/PacketOutEntityPostionAndRotation.h packet/PacketInPlayerPositionAndRotation.h packet/PacketOutFace.h packet/PacketOutEntityHeadLook.h packet/PacketOutEntityPosition.h packet/PacketInPlayerRotation.h packet/PacketOutEntityRotation.h packet/PacketInEntityAction.h EntityMetadata.h Particle.h Slot.h packet/PacketOutEntityMetadata.h packet/PacketOutDestroyEntities.h packet/PacketInClickWindow.h Item.h packet/PacketInPlayerBlockPlacement.h packet/PacketOutBlockChange.h Encryption.h packet/PacketOutEncryptionRequest.h DER.h Base64.h packet/PacketInEncryptionResponse.h MojangAPI.h HTTP.h HexDigest.h JSON.h packet/PacketOutLoginDisconnect.h bedrock/Server.h bedrock/packet/Packet.h)

if(UNIX)
    set(THREADS_PREFER_PTHREAD_FLAG ON)
    find_package(Threads REQUIRED)
    target_link_libraries(Mycelium z curl crypto ssl Threads::Threads dl uv)
else()
    target_link_libraries(Mycelium uv libcurl-d_imp libcrypto_static libssl_static ws2_32 gdi32 advapi32 crypt32 user32 zlib)
endif()