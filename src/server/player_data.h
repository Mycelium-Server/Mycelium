#pragma once

#include "../protocol/signature_data.h"
#include "../uuid.h"
#include "gamemode.h"
#include "location.h"

class EntityPlayer;

struct PlayerData {
  std::string name;
  uuids::uuid uuid;
  Gamemode gamemode;
  EntityPlayer* entity;
  std::optional<Location> deathLocation;
  std::optional<SigData> signatureData;
};