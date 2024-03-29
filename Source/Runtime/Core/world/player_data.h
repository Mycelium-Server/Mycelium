
#pragma once
#include "../mojangapi/auth_request.h"
#include "../network/protocol/signature_data.h"
#include "../uuid.h"
#include "../server/gamemode.h"
#include "../location.h"

class EntityPlayer;

struct PlayerData {
  std::string name;
  uuids::uuid uuid;
  Gamemode gamemode;
  EntityPlayer* entity;
  std::optional<Location> deathLocation;
  std::optional<SigData> signatureData;
  std::optional<MojangAPI::GameProfile> gameProfile;
};