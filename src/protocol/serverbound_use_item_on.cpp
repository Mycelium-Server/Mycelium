#include "serverbound_use_item_on.h"

#include "../listeners/play_packet_listener.h"

ServerboundUseItemOn::ServerboundUseItemOn() = default;
ServerboundUseItemOn::~ServerboundUseItemOn() = default;

void ServerboundUseItemOn::read(ByteBuffer& buf) {
  hand = (MainHand) buf.readVarInt();
  position = ProtocolPosition(buf.readLong());
  face = (BlockFace) buf.readVarInt();
  cursorX = buf.readFloat();
  cursorY = buf.readFloat();
  cursorZ = buf.readFloat();
  insideBlock = buf.readByte();
  sequence = buf.readVarInt();
}

ServerboundPacket* ServerboundUseItemOn::createInstance() {
  return new ServerboundUseItemOn();
}

int ServerboundUseItemOn::getPacketID() const {
  return 0x31;
}

void ServerboundUseItemOn::handle(ConnectionContext* ctx) {
  if (ctx->state == ConnectionState::PLAY) {
    ((PlayPacketListener*) ctx->packetListener)->handleUseItemOn(ctx, this);
  }
  delete this;
}
