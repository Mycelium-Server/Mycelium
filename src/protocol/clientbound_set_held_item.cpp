#include "clientbound_set_held_item.h"

ClientboundSetHeldItem::ClientboundSetHeldItem() = default;
ClientboundSetHeldItem::~ClientboundSetHeldItem() = default;

void ClientboundSetHeldItem::write(ByteBuffer& out) {
    out.writeByte(slot % 9);
}

int ClientboundSetHeldItem::getPacketID() const {
    return 0x47;
}