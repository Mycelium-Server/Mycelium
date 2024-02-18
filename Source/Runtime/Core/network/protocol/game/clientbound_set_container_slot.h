#pragma once

#include "../packet.h"

class ClientboundSetContainerSlot : public ClientboundPacket {
 public:
  ClientboundSetContainerSlot();
  ~ClientboundSetContainerSlot();

 public:
  void write(ByteBuffer&) override;
  [[nodiscard]] int getPacketID() const override;
  void construct(AbstractContainer&, short);
  void construct(PlayerInventory&, short, bool = false);

 public:
  uint8_t windowID = 0;
  int stateID = 0;
  short slot = 0;
  ItemStack slotData;
};