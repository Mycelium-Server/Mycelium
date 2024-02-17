#pragma once

#include "../uuid.h"
#include "http.h"

#include <nlohmann/json.hpp>

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