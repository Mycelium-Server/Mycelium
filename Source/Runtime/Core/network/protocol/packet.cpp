#include "packet.h"

#include <map>

#include "game/serverbound_confirm_teleportation.h"
#include "login/serverbound_encryption_response.h"
#include "login/serverbound_login_start.h"
#include "status/serverbound_ping_request.h"
#include "status/serverbound_status_request.h"

static std::map<int, ServerboundPacket*> registered;

ServerboundPacket::ServerboundPacket() = default;

void ServerboundPacket::registerPacket() {
  registered[getPacketID()] = createInstance();
}

ServerboundPacket* ServerboundPacket::createInstanceFromID(int id, ConnectionState state) {
  if (id == 0) {
    if (state == ConnectionState::STATUS) {
      return new ServerboundStatusRequest();
    } else if (state == ConnectionState::LOGIN) {
      return new ServerboundLoginStart();
    } else if (state == ConnectionState::PLAY) {
      return new ServerboundConfirmTeleportation();
    }
  } else if (id == 1) {
    if (state == ConnectionState::STATUS) {
      return new ServerboundPingRequest();
    } else if (state == ConnectionState::LOGIN) {
      return new ServerboundEncryptionResponse();
    }
  }
  ServerboundPacket* packet = registered[id];
  if (!packet)
    return nullptr;
  return packet->createInstance();
}

ClientboundPacket::ClientboundPacket() = default;