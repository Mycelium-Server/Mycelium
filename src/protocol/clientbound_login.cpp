#include "clientbound_login.h"

ClientboundLogin::ClientboundLogin() = default;
ClientboundLogin::~ClientboundLogin() = default;

void ClientboundLogin::write(ByteBuffer& out) {
    out.writeInt(entity->getEID());
    out.writeByte(server->isHardcore());
    out.writeByte(player.gamemode);
    out.writeByte(-1);
    out.writeVarInt((int) dimensions.size());
    for(Dimension& dim : dimensions) {
        out.writeString(dim.name);
    }
    out.writeBytes(registryCodec);
    out.writeString(dimension.type);
    out.writeString(dimension.name);
    out.writeLong(dimension.seed);
    out.writeVarInt(0);
    out.writeVarInt(server->getViewDistance());
    out.writeVarInt(server->getSimulationDistance());
    out.writeByte(server->showReducedDebugInfo());
    out.writeByte(server->showRespawnScreen());
    out.writeByte(dimension.isDebug);
    out.writeByte(dimension.isFlat);
    out.writeByte(player.deathLocation.has_value());
    if (player.deathLocation.has_value()) {
        out.writeString(player.deathLocation.value().dimension.name);
        out.writeLong((long long) player.deathLocation.value().position.toProtocolPosition().value);
    }
}

int ClientboundLogin::getPacketID() const {
    return 0x23;
}