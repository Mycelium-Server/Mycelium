#pragma once

#include "../../server/dimension.h"
#include "../../server/game_server.h"
#include "packet.h"

class ClientboundLogin : public ClientboundPacket {
 public:
  ClientboundLogin();
  ~ClientboundLogin();

 public:
  void write(ByteBuffer&) override;
  [[nodiscard]] int getPacketID() const override;

 public:
  EntityPlayer* entity = nullptr;
  GameServer* server = nullptr;
  PlayerData player;
  std::vector<Dimension> dimensions;
  ByteBuffer registryCodec;
  Dimension dimension;
};