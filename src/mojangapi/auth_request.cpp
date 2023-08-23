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

#include "auth_request.h"

#include "../listeners/login_packet_listener.h"
#include "http.h"

MojangAPI::GameProfile MojangAPI::requestAuth(ConnectionContext* ctx) {
  std::string url = toURL("https://sessionserver.mojang.com/session/minecraft/hasJoined?username=" + ctx->playerData.name + "&serverId=" + ((LoginPacketListener*) ctx->packetListener)->createHash());
  auto raw = http_get(url);

  MojangAPI::GameProfile dst;
  dst.raw = raw.response;

  if (raw.response_code == 200) {
    dst.success = true;
    dst.json = nlohmann::json::parse(raw.response);

    dst.id = uuids::uuid::from_string((std::string) dst.json["id"]).value();
    dst.name = dst.json["name"];

    for (auto property: dst.json["properties"]) {
      ProfileProperty profileProperty;
      profileProperty.name = property["name"];
      profileProperty.value = (std::string) property["value"];
      if (property.contains("signature")) {
        profileProperty.signature = property["signature"];
      }
      dst.properties.push_back(profileProperty);
    }
  } else {
    dst.success = false;
  }
  return dst;
}