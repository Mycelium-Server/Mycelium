#pragma once

#include "../../world/face.h"
#include "packet.h"

class ServerboundPlayerAction : public ServerboundPacket {
 public:
  ServerboundPlayerAction();
  ~ServerboundPlayerAction();

 public:
  void read(ByteBuffer&) override;
  ServerboundPacket* createInstance() override;
  [[nodiscard]] int getPacketID() const override;
  void handle(ConnectionContext*) override;

 public:
  enum {
    STARTED_DIGGING = 0,
    CANCELLED_DIGGING = 1,
    FINISHED_DIGGING = 2,
    DROP_ITEM_STACK = 3,
    DROP_ITEM = 4,
    USE_ITEM = 5,
    SWAP_ITEM_IN_HAND = 6,
    UNDEFINED = -1,
  } status = UNDEFINED;
  BlockPosition location;
  BlockFace face = (BlockFace) 0;
  int sequence = 0;

};