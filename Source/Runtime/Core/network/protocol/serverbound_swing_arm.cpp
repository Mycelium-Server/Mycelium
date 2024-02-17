

#include "serverbound_swing_arm.h"

#include "../../listeners/play_packet_listener.h"

ServerboundSwingArm::ServerboundSwingArm() = default;
ServerboundSwingArm::~ServerboundSwingArm() = default;

void ServerboundSwingArm::read(ByteBuffer& buf) {
  hand = (decltype(hand)) buf.readVarInt();
}

ServerboundPacket* ServerboundSwingArm::createInstance() {
  return new ServerboundSwingArm;
}

int ServerboundSwingArm::getPacketID() const {
  return 0x2F;
}

void ServerboundSwingArm::handle(ConnectionContext* ctx) {
  if (ctx->state == ConnectionState::PLAY) {
    ((PlayPacketListener*) ctx->packetListener)->handleSwingArm(ctx, this);
  }
  delete this;
}
