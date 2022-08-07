#include "serverbound_set_player_position.h"

#include "../listeners/play_packet_listener.h"

ServerboundSetPlayerPosition::ServerboundSetPlayerPosition() = default;
ServerboundSetPlayerPosition::~ServerboundSetPlayerPosition() = default;

void ServerboundSetPlayerPosition::read(ByteBuffer& buf) {
  location.x = buf.readDouble();
  location.y = buf.readDouble();
  location.z = buf.readDouble();
  onGround = buf.readByte();
}

ServerboundPacket* ServerboundSetPlayerPosition::createInstance() {
  return new ServerboundSetPlayerPosition();
}

int ServerboundSetPlayerPosition::getPacketID() const {
  return 0x14;
}

void ServerboundSetPlayerPosition::handle(ConnectionContext* ctx) {
  if (ctx->state == ConnectionState::PLAY) {
    ((PlayPacketListener*) ctx->packetListener)->handleSetPlayerPosition(ctx, this);
  }
  delete this;
}
