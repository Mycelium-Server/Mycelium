#pragma once

#include "../connection_context.h"
#include "../json.hpp"
#include "http.h"

class EntityPlayer;

namespace MojangAPI {

  struct AuthResponse {
    std::string raw;
    bool success = false;

    nlohmann::json json;

    // TODO: Fields
  };

  AuthResponse requestAuth(ConnectionContext*);

}// namespace MojangAPI