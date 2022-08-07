#include "serverbound_set_player_rotation.h"

#include "../listeners/play_packet_listener.h"

ServerboundSetPlayerRotation::ServerboundSetPlayerRotation() = default;
ServerboundSetPlayerRotation::~ServerboundSetPlayerRotation() = default;

void ServerboundSetPlayerRotation::read(ByteBuffer& buf) {
  yaw = buf.readFloat();
  pitch = buf.readFloat();
  onGround = buf.readByte();
}

ServerboundPacket* ServerboundSetPlayerRotation::createInstance() {
  return new ServerboundSetPlayerRotation();
}

int ServerboundSetPlayerRotation::getPacketID() const {
  return 0x16;
}

void ServerboundSetPlayerRotation::handle(ConnectionContext* ctx) {
  if (ctx->state == ConnectionState::PLAY) {
    ((PlayPacketListener*) ctx->packetListener)->handleSetPlayerRotation(ctx, this);
  }
  delete this;
}
