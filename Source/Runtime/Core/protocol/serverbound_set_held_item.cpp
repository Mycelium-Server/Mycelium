

#include "serverbound_set_held_item.h"

#include "../listeners/play_packet_listener.h"

ServerboundSetHeldItem::ServerboundSetHeldItem() = default;
ServerboundSetHeldItem::~ServerboundSetHeldItem() = default;

void ServerboundSetHeldItem::read(ByteBuffer& buf) {
  slot = buf.readShort();
}

int ServerboundSetHeldItem::getPacketID() const {
  return 0x28;
}

ServerboundPacket* ServerboundSetHeldItem::createInstance() {
  return new ServerboundSetHeldItem;
}

void ServerboundSetHeldItem::handle(ConnectionContext* ctx) {
  if (ctx->state == ConnectionState::PLAY) {
    ((PlayPacketListener*) ctx->packetListener)->handleSetHeldItem(ctx, this);
  }
  delete this;
}