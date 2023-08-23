/*
 * Mycelium
 * Copyright (C) 2022 - 2023  JNNGL
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

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
    : AddPlayerAction(data, data.gameProfile.value_or(MojangAPI::GameProfile{}).properties) {}
ClientboundPlayerInfo::AddPlayerAction::~AddPlayerAction() = default;
ClientboundPlayerInfo::AddPlayerAction::AddPlayerAction(const PlayerData& data, const std::vector<MojangAPI::ProfileProperty>& properties)
    : PlayerAction(data.uuid) {
  construct(data, properties);
}

int ClientboundPlayerInfo::AddPlayerAction::getID() const {
  return 0;
}

void ClientboundPlayerInfo::AddPlayerAction::write(ByteBuffer& out) {
  out.writeString(name);
  out.writeVarInt((int) properties.size());
  for (auto& property: properties) {
    out.writeString(property.name);
    out.writeString(property.value);
    out.writeByte(property.signature.has_value());
    if (property.signature.has_value()) {
      out.writeString(property.signature.value());
    }
  }
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

void ClientboundPlayerInfo::AddPlayerAction::construct(const PlayerData& data, const std::vector<MojangAPI::ProfileProperty>& props) {
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

ClientboundPlayerInfo::UpdatePlayerLatency::UpdatePlayerLatency(const uuids::uuid& uuid)
    : PlayerAction(uuid) {}
ClientboundPlayerInfo::UpdatePlayerLatency::UpdatePlayerLatency(const PlayerData& data)
    : PlayerAction(data) {}
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