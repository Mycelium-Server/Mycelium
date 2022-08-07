#include "auth_request.h"

#include "../listeners/login_packet_listener.h"
#include "http.h"

MojangAPI::AuthResponse MojangAPI::requestAuth(ConnectionContext* ctx) {
  std::string url = toURL("https://sessionserver.mojang.com/session/minecraft/hasJoined?username=" + ctx->playerData.name + "&serverId=" + ((LoginPacketListener*) ctx->packetListener)->createHash());
  auto raw = http_get(url);
  MojangAPI::AuthResponse dst;
  dst.raw = raw.response;
  if (raw.response_code == 200) {
    dst.success = true;
    dst.json = nlohmann::json::parse(raw.response);
    // TODO: MojangAPI::AuthResponse fields
  } else {
    dst.success = false;
  }
  return {};
}