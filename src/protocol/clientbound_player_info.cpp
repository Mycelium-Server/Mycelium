#include "clientbound_player_info.h"

#include <cassert>
#include <utility>

ClientboundPlayerInfo::ClientboundPlayerInfo() = default;
ClientboundPlayerInfo::~ClientboundPlayerInfo() {
  for (PlayerAction* action: playerActions) {
    delete action;
  }
}

void ClientboundPlayerInfo::write(ByteBuffer& out) {
  if (playerActions.empty()) {
    out.writeVarInt(0);
    out.writeVarInt(0);
  } else {
    int id = playerActions[0]->getID();
    out.writeVarInt(id);
    out.writeVarInt((int) playerActions.size());
    for (PlayerAction* action: playerActions) {
      assert(action->getID() == id);
      out.writeUUID(action->uuid);
      action->write(out);
    }
  }
}

int ClientboundPlayerInfo::getPacketID() const {
  return 0x37;
}

ClientboundPlayerInfo::PlayerAction::PlayerAction(const uuids::uuid& uuid)
    : uuid(uuid) {}
ClientboundPlayerInfo::PlayerAction::PlayerAction(const PlayerData& data)
    : uuid(data.uuid) {}
ClientboundPlayerInfo::PlayerAction::~PlayerAction() = default;

ClientboundPlayerInfo::AddPlayerAction::AddPlayerAction(const uuids::uuid& uuid)
    : PlayerAction(uuid) {}
ClientboundPlayerInfo::AddPlayerAction::AddPlayerAction(const PlayerData& data)
    : PlayerAction(data) {}
ClientboundPlayerInfo::AddPlayerAction::~AddPlayerAction() = default;
ClientboundPlayerInfo::AddPlayerAction::AddPlayerAction(const PlayerData& data, const std::vector<Property>& properties)
    : PlayerAction(data.uuid) {
  construct(data, properties);
}

int ClientboundPlayerInfo::AddPlayerAction::getID() const {
  return 0;
}

void ClientboundPlayerInfo::AddPlayerAction::write(ByteBuffer& out) {
  out.writeString(name);
  out.writeVarInt((int) properties.size());
  out.writeVarInt((int) gamemode);
  out.writeVarInt(ping);
  out.writeByte(displayName.has_value());
  if (displayName.has_value()) {
    out.writeString(displayName.value());
  }
  out.writeByte(sigData.has_value());
  if (sigData.has_value()) {
    auto& value = sigData.value();
    out.writeLong(value.timestamp);
    out.writeVarInt((int) value.publicKey.readableBytes());
    out.writeBytes(value.publicKey);
    out.writeVarInt((int) value.signature.readableBytes());
    out.writeBytes(value.signature);
  }
}

void ClientboundPlayerInfo::AddPlayerAction::construct(const PlayerData& data, const std::vector<Property>& props) {
  name = data.name;
  properties = props;
  gamemode = data.gamemode;
  ping = -1;
  displayName = data.entity->getDisplayName();
  sigData = data.signatureData;
}

ClientboundPlayerInfo::UpdatePlayerGamemode::UpdatePlayerGamemode(const uuids::uuid& uuid)
    : PlayerAction(uuid) {}
ClientboundPlayerInfo::UpdatePlayerGamemode::UpdatePlayerGamemode(const PlayerData& data)
    : PlayerAction(data) {}
ClientboundPlayerInfo::UpdatePlayerGamemode::UpdatePlayerGamemode(const uuids::uuid& uuid, const Gamemode& gamemode)
    : PlayerAction(uuid),
      gamemode(gamemode) {}
ClientboundPlayerInfo::UpdatePlayerGamemode::~UpdatePlayerGamemode() = default;

int ClientboundPlayerInfo::UpdatePlayerGamemode::getID() const {
  return 1;
}

void ClientboundPlayerInfo::UpdatePlayerGamemode::write(ByteBuffer& out) {
  out.writeVarInt((int) gamemode);
}

ClientboundPlayerInfo::UpdatePlayerLatency::UpdatePlayerLatency(const uuids::uuid& uuid, int ping)
    : PlayerAction(uuid),
      ping(ping) {}
ClientboundPlayerInfo::UpdatePlayerLatency::~UpdatePlayerLatency() = default;

int ClientboundPlayerInfo::UpdatePlayerLatency::getID() const {
  return 2;
}

void ClientboundPlayerInfo::UpdatePlayerLatency::write(ByteBuffer& out) {
  out.writeVarInt(ping);
}

ClientboundPlayerInfo::UpdatePlayerDisplayName::UpdatePlayerDisplayName(const uuids::uuid& uuid)
    : PlayerAction(uuid) {}
ClientboundPlayerInfo::UpdatePlayerDisplayName::UpdatePlayerDisplayName(const uuids::uuid& uuid, std::optional<std::string> displayName)
    : PlayerAction(uuid),
      displayName(std::move(displayName)) {}
ClientboundPlayerInfo::UpdatePlayerDisplayName::UpdatePlayerDisplayName(const PlayerData& data)
    : PlayerAction(data),
      displayName(data.entity->getDisplayName()) {}
ClientboundPlayerInfo::UpdatePlayerDisplayName::~UpdatePlayerDisplayName() = default;

int ClientboundPlayerInfo::UpdatePlayerDisplayName::getID() const {
  return 3;
}

void ClientboundPlayerInfo::UpdatePlayerDisplayName::write(ByteBuffer& out) {
  out.writeByte(displayName.has_value());
  if (displayName.has_value()) {
    out.writeString(displayName.value());
  }
}

ClientboundPlayerInfo::RemovePlayerAction::RemovePlayerAction(const uuids::uuid& uuid)
    : PlayerAction(uuid) {}
ClientboundPlayerInfo::RemovePlayerAction::RemovePlayerAction(const PlayerData& data)
    : PlayerAction(data) {}
ClientboundPlayerInfo::RemovePlayerAction::~RemovePlayerAction() = default;

int ClientboundPlayerInfo::RemovePlayerAction::getID() const {
  return 4;
}

void ClientboundPlayerInfo::RemovePlayerAction::write(ByteBuffer& out) {}