

#include "serverbound_set_player_position_rotation.h"

#include "../../listeners/play_packet_listener.h"

ServerboundSetPlayerPositionRotation::ServerboundSetPlayerPositionRotation() = default;
ServerboundSetPlayerPositionRotation::~ServerboundSetPlayerPositionRotation() = default;

void ServerboundSetPlayerPositionRotation::read(ByteBuffer& buf) {
  location.x = buf.readDouble();
  location.y = buf.readDouble();
  location.z = buf.readDouble();
  location.yaw = buf.readFloat();
  location.pitch = buf.readFloat();
  onGround = buf.readByte();
}

ServerboundPacket* ServerboundSetPlayerPositionRotation::createInstance() {
  return new ServerboundSetPlayerPositionRotation();
}

int ServerboundSetPlayerPositionRotation::getPacketID() const {
  return 0x15;
}

void ServerboundSetPlayerPositionRotation::handle(ConnectionContext* ctx) {
  if (ctx->state == ConnectionState::PLAY) {
    ((PlayPacketListener*) ctx->packetListener)->handleSetPlayerPositionRotation(ctx, this);
  }
  delete this;
}
