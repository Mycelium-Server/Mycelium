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

#pragma once

#include "../json.hpp"
#include "../uuid.h"
#include "http.h"

class ConnectionContext;
class EntityPlayer;

namespace MojangAPI {
  struct ProfileProperty {
    std::string name;
    std::string value;
    std::optional<std::string> signature;
  };

  struct GameProfile {
    std::string raw;
    bool success = false;

    nlohmann::json json;

    uuids::uuid id;
    std::string name;
    std::vector<ProfileProperty> properties;
  };

  GameProfile requestAuth(ConnectionContext*);

}// namespace MojangAPI