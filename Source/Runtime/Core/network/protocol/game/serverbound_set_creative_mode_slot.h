#pragma once

#include "../packet.h"

class ServerboundSetCreativeModeSlot : public ServerboundPacket {
 public:
  ServerboundSetCreativeModeSlot();
  ~ServerboundSetCreativeModeSlot();

 public:
  void read(ByteBuffer&) override;
  ServerboundPacket* createInstance() override;
  [[nodiscard]] int getPacketID() const override;
  void handle(ConnectionContext*) override;

 public:
  short slot = 0;
  ItemStack clickedItem;

};