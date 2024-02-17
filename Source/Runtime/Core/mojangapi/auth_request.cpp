

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