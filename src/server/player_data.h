#pragma once

#include "../uuid.h"
#include "gamemode.h"
#include "location.h"

struct PlayerData {
    std::string name;
    uuids::uuid uuid;
    Gamemode gamemode;
    std::optional<Location> deathLocation;
};