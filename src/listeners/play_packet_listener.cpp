#include "play_packet_listener.h"
#include "../protocol/plugin_channels.h"
#include <iostream>

#include "../protocol/clientbound_set_center_chunk.h"

PlayPacketListener::PlayPacketListener() = default;
PlayPacketListener::~PlayPacketListener() = default;

void PlayPacketListener::setTeleportID(int id) {
    teleportID = id;
}

void PlayPacketListener::handleClientInformation(ConnectionContext* ctx, ServerboundClientInformation* packet) {
    ctx->clientSettings = packet->settings;
}

void PlayPacketListener::handlePluginMessage(ConnectionContext* ctx, ServerboundPluginMessage* packet) {
    if (packet->channel == BRAND_CHANNEL) {
        ctx->clientBrand = packet->data.readString();
    }
}

void PlayPacketListener::handleConfirmTeleport(ConnectionContext*, ServerboundConfirmTeleportation* packet) {
    if (packet->teleportID != teleportID) {
        std::cerr << "Invalid teleport id" << std::endl;
        // TODO: Disconnect
    }
    teleportID = 0;
}

void PlayPacketListener::handleSetPlayerPosition(ConnectionContext* ctx, ServerboundSetPlayerPosition* packet) {
    handlePlayerPosition(ctx, packet->location);
}

void PlayPacketListener::handleSetPlayerPositionRotation(ConnectionContext* ctx, ServerboundSetPlayerPositionRotation* packet) {
    handlePlayerPosition(ctx, packet->location.position);
    // TODO: Handle rotation
}

void PlayPacketListener::handlePlayerPosition(ConnectionContext* ctx, const Position3d& position) {
    ChunkLocation current = World::getChunkLocation(position);
    if (current.x != chunkLocation.x
        || current.z != chunkLocation.z
        || std::floor(position.y) != std::floor(ctx->playerEntity->getLocation().position.position.y)) {
        auto* setCenter = new ClientboundSetCenterChunk();
        setCenter->location = current;
        ctx->write(setCenter);
        delete setCenter;
        chunkLocation = current;
        ctx->playerEntity->location.position.position = position;
    }
}
