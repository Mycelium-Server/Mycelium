#include "clientbound_login.h"

ClientboundLogin::ClientboundLogin() {

}

ClientboundLogin::~ClientboundLogin() {

}

void ClientboundLogin::write(ByteBuffer& out) {
    out.writeInt(entity->getEID());
    out.writeByte(server->isHardcore());
    out.writeByte(player.gamemode);
    out.writeByte(-1);
    out.writeVarInt(dimensions.size());
    for(Dimension& dimension : dimensions) {
        out.writeString(dimension.name);
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
        out.writeLong(player.deathLocation.value().position.value);
    }
}

int ClientboundLogin::getPacketID() const {
    return 0x23;
}