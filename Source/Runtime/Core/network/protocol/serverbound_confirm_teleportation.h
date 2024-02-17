#pragma once

#include "packet.h"

class ServerboundConfirmTeleportation : public ServerboundPacket {
 public:
  ServerboundConfirmTeleportation();
  ~ServerboundConfirmTeleportation();

 public:
  void read(ByteBuffer&) override;
  ServerboundPacket* createInstance() override;
  [[nodiscard]] int getPacketID() const override;
  void handle(ConnectionContext*) override;

 public:
  int teleportID = 0;
};