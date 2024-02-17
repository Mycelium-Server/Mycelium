

#include "clientbound_set_container_slot.h"

ClientboundSetContainerSlot::ClientboundSetContainerSlot() = default;
ClientboundSetContainerSlot::~ClientboundSetContainerSlot() = default;

void ClientboundSetContainerSlot::write(ByteBuffer& buf) {
  buf.writeByte(windowID);
  buf.writeVarInt(stateID);
  buf.writeShort(slot);
  buf.writeItemStack(slotData);
}

int ClientboundSetContainerSlot::getPacketID() const {
  return 0x13;
}

void ClientboundSetContainerSlot::construct(AbstractContainer& c, short s) {
  windowID = c.getID();
  slot = s;
  slotData = c.get(slot);
}

void ClientboundSetContainerSlot::construct(PlayerInventory& inv, short s, bool force) {
  if (force) {
    windowID = -2;
  } else if (inv.getMenu()) {
    windowID = inv.getMenu()->getID();
  } else {
    windowID = inv.getInventoryContainer().getID();
  }

  slot = s;
  slotData = inv.get(s, force);
}
