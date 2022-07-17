#pragma once

#include "../uuid.h"
#include "gamemode.h"

struct PlayerData {
    std::string name;
    uuids::uuid uuid;
    Gamemode gamemode;
    std::optional<Location> deathLocation;
};