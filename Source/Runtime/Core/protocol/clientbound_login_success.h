#pragma once

#include <optional>
#include <string>

#include "../uuid.h"
#include "packet.h"

class ClientboundLoginSuccess : public ClientboundPacket {
 public:
  ClientboundLoginSuccess();
  ~ClientboundLoginSuccess();

 public:
  void write(ByteBuffer&) override;
  [[nodiscard]] int getPacketID() const override;

 public:
  uuids::uuid uuid;
  std::string name;
  std::vector<MojangAPI::ProfileProperty> properties;
};