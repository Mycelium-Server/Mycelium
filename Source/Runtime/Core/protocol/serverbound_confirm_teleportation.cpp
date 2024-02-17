

#include "serverbound_confirm_teleportation.h"

#include "../listeners/play_packet_listener.h"

ServerboundConfirmTeleportation::ServerboundConfirmTeleportation() = default;
ServerboundConfirmTeleportation::~ServerboundConfirmTeleportation() = default;

void ServerboundConfirmTeleportation::read(ByteBuffer& buf) {
  teleportID = buf.readVarInt();
}

ServerboundPacket* ServerboundConfirmTeleportation::createInstance() {
  return new ServerboundConfirmTeleportation();
}

int ServerboundConfirmTeleportation::getPacketID() const {
  return 0x00;
}

void ServerboundConfirmTeleportation::handle(ConnectionContext* ctx) {
  if (ctx->state == ConnectionState::PLAY) {
    ((PlayPacketListener*) ctx->packetListener)->handleConfirmTeleport(ctx, this);
  }
  delete this;
}
