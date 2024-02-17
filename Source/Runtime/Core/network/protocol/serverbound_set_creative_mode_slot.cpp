

#include "serverbound_set_creative_mode_slot.h"

#include "../../listeners/play_packet_listener.h"

ServerboundSetCreativeModeSlot::ServerboundSetCreativeModeSlot() = default;
ServerboundSetCreativeModeSlot::~ServerboundSetCreativeModeSlot() = default;

void ServerboundSetCreativeModeSlot::read(ByteBuffer& buf) {
  slot = buf.readShort();
  clickedItem = buf.readItemStack();
}

ServerboundPacket* ServerboundSetCreativeModeSlot::createInstance() {
  return new ServerboundSetCreativeModeSlot;
}

int ServerboundSetCreativeModeSlot::getPacketID() const {
  return 0x2B;
}

void ServerboundSetCreativeModeSlot::handle(ConnectionContext* ctx) {
  if (ctx->state == ConnectionState::PLAY) {
    ((PlayPacketListener*) ctx->packetListener)->handleSetCreativeModeSlot(ctx, this);
  }
  delete this;
}