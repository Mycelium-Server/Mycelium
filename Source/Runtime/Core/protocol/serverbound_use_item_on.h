#pragma once

#include "../server/face.h"
#include "packet.h"

class ServerboundUseItemOn : public ServerboundPacket {
 public:
  ServerboundUseItemOn();
  ~ServerboundUseItemOn();

 public:
  void read(ByteBuffer&) override;
  ServerboundPacket* createInstance() override;
  [[nodiscard]] int getPacketID() const override;
  void handle(ConnectionContext*) override;

 public:
  MainHand hand = (MainHand) 0;
  BlockPosition position {};
  BlockFace face = (BlockFace) 0;
  Vector3f cursor;
  bool insideBlock = false;
  int sequence = 0;
};